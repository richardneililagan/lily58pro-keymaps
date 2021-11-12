#include QMK_KEYBOARD_H

#ifdef PROTOCOL_LUFA
  #include "lufa.h"
  #include "split_util.h"
#endif
#ifdef SSD1306OLED
  #include "ssd1306.h"
#endif

#include "rgblight.h"

// :: layer definitions
#include "layers/definitions.h"
#include "layers/keymaps/qwerty.h"
#include "layers/keymaps/colemak-dhm.h"
#include "layers/keymaps/gamer.h"
#include "layers/keymaps/lower_2.h"
#include "layers/keymaps/raise_2.h"
#include "layers/keymaps/adjust.h"
#include "layers/keymaps/mod.h"
#include "layers/keymaps/numpad.h"

// :: ----------------------------------------------------------------------------------

extern uint8_t is_master;

// :: These define the layer keymaps in the keyboard.
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK] = LAYER_COLEMAK_DHM,
  [_GAMER] = LAYER_GAMER,
  [_LOWER] = LAYER_LOWER,
  [_RAISE] = LAYER_RAISE,
  [_ADJUST] = LAYER_ADJUST,
  [_MOD] = LAYER_MOD,
  [_NUMPAD] = LAYER_NUMPAD
};

// Setting ADJUST layer RGB back to default
void update_tri_layer_RGB(uint8_t layer1, uint8_t layer2, uint8_t layer3) {
  if (IS_LAYER_ON(layer1) && IS_LAYER_ON(layer2)) {
    layer_on(layer3);
  } else {
    layer_off(layer3);
  }
}

// :: ==================================================================================
#ifdef OLED_DRIVER_ENABLE // :: --------------------------------------------------------

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

void oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
}
#endif // OLED_DRIVER_ENABLE :: --------------------------------------------------------
// :: ==================================================================================



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef OLED_DRIVER_ENABLE // :: ------------------
  if (record->event.pressed) {
    set_keylog(keycode, record);
    // set_timelog();
  }
#endif // :: -------------------------------------
  return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  // :: activate ADJUST layer if both LOWER and RAISE are active
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

#ifdef RGBLIGHT_ENABLE
// :: set up configurations and hooks related to RGB underglow lighting ----------------
const rgblight_segment_t PROGMEM rgb_base_light_layer[] = RGBLIGHT_LAYER_SEGMENTS(
  { 0, 10, HSV_CYAN }
);

const rgblight_segment_t* const PROGMEM rgb_light_layers[] = RGBLIGHT_LAYERS_LIST(
  rgb_base_light_layer
);
#endif

void keyboard_post_init_user (void) {
#ifdef RGBLIGHT_ENABLE
  // :: TODO
  rgblight_layers = rgb_light_layers;
  rgblight_set_layer_state(0, true);
#endif
}

void encoder_update_user(uint8_t index, bool clockwise) {
  if (IS_LAYER_ON(_MOD)) {
    // :: Volume controls on mod layer
    if (clockwise) {
      tap_code(KC_VOLU);
    } else {
      tap_code(KC_VOLD);
    }
  } else {
    // :: Scroll otherwise
    if (clockwise) {
      tap_code(KC_WH_D);
    } else {
      tap_code(KC_WH_U);
    }
  }
  // if (index == 0) {
  //   if (clockwise) {
  //     tap_code(KC_VOLU);
  //   } else {
  //     tap_code(KC_VOLD);
  //   }
  // }
}
