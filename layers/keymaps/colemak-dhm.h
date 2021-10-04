#include QMK_KEYBOARD_H

/**
 * ----------------------------------- [   COLEMAK DHM   ] -----------------------------------
 * ┏━━━━━┯━━━━━┯━━━━━┯━━━━━┯━━━━━┯━━━━━┓    ╔═╗    ╔═╗   ┏━━━━━┯━━━━━┯━━━━━┯━━━━━┯━━━━━┯━━━━━┓
 * ┃ ESC │  7  │  5  │  3  │  1  │  9  ┃    ║ ║    ║ ║   ┃  8  │  0  │  2  │  4  │  6  │BKSPC┃
 * ┠─────┼─────┼─────┼─────┼─────┼─────┨    ║ ║    ║ ║   ┠─────┼─────┼─────┼─────┼─────┼─────┨
 * ┃ TAB │  Q  │  W  │  F  │  P  │  B  ┃    ╚═╝    ╚═╝   ┃  J  │  L  │  U  │  Y  │  ;  │  '  ┃
 * ┠─────┼─────┼─────┼─────┼─────┼─────┨                 ┠─────┼─────┼─────┼─────┼─────┼─────┨
 * ┃LCTRL│  A  │  R  │  S  │  T  │  G  ┃╭─────╮    ┏━━━━━┩  M  │  N  │  E  │  I  │  O  │ENTER┃
 * ┠─────┼─────┼─────┼─────┼─────┼─────┨│ MUTE│    ┃ MOD ├─────┼─────┼─────┼─────┼─────┼─────┨
 * ┃SHIFT│  Z  │  X  │  C  │  D  │  V  ┃╰─────╯    ┗━━━━━┪  K  │  H  │  ,  │  .  │  /  │SHIFT┃
 * ┗━━━━━┷━━━━━┷━━┱──┴──┬──┴──┬──┴──┲━━┛┏━━━━━┓   ┏━━━━━┓┗━━┱──┴──┬──┴──┬──┴──┲━━┷━━━━━┷━━━━━┛
 *                ┃     │SUPER│LOWER┃   ┃     ┃   ┃     ┃   ┃RAISE│ ALT │     ┃
 *                ┗━━━━━┷━━━━━┷━━━━━┛   ┃BKSPC┃   ┃SPACE┃   ┗━━━━━┷━━━━━┷━━━━━┛
 *                                      ┃     ┃   ┃     ┃
 *                                      ┗━━━━━┛   ┗━━━━━┛
 * -------------------------------------------------------------------------------------------
 */

#define KC_LOWER MO(_LOWER)
#define KC_RAISE MO(_RAISE)
#define KC_MOD   MO(_MOD)
#define KC_NUMPAD TG(_NUMPAD)

#define LAYER_COLEMAK_DHM LAYOUT( \
  KC_GESC,              KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC, \
  KC_TAB,               KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                       KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_QUOT, \
  MT(MOD_LCTL, KC_ESC), KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                       KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_ENT,  \
  KC_LSFT,              KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,     KC_MUTE, KC_MOD,  KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, \
                                        KC_NUMPAD, KC_LGUI, KC_LOWER, KC_BSPC, KC_SPC,  KC_RAISE, KC_RALT, _______ \
)
