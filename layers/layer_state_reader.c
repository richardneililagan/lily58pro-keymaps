/**
 *  Defines layer names for the custom layers used by the keyboard.
 */

#include QMK_KEYBOARD_H
#include <stdio.h>
#include "lily58.h"

// :: make sure these correspond with the layers defined
//    in `definitions.h`
#define L_BASE 0
#define L_GAMER (1 << 1)
#define L_LOWER (1 << 2)
#define L_RAISE (1 << 3)
#define L_ADJUST (1 << 4)
#define L_ADJUST_TRI (L_RAISE | L_LOWER)  // :: when RAISE and LOWER are held together
#define L_MOD (1 << 5)
#define L_NUMPAD (1 << 6)

// :: ---

char layer_state_str[24];

const char *read_layer_state(void) {
  switch (layer_state) {
    case L_BASE: 
      snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Colemak-DHm");
      break;

    case L_GAMER:
      snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Gamer");
      break;

    case L_LOWER:
      snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Lower");
      break;

    case L_RAISE:
      snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Raise");
      break;

    case L_ADJUST:
    case L_ADJUST_TRI:
      snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Adjust");
      break;

    case L_MOD:
      snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Mod");
      break;

    case L_NUMPAD:
      snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Numpad");
      break;

    // :: ---
    default:
      snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%ld", layer_state);
  }

  return layer_state_str;
}
