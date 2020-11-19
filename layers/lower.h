#include QMK_KEYBOARD_H

/**
 * ----------------------------------- [      LOWER      ] -----------------------------------
 * ┏━━━━━┯━━━━━┯━━━━━┯━━━━━┯━━━━━┯━━━━━┓    ╔═╗    ╔═╗   ┏━━━━━┯━━━━━┯━━━━━┯━━━━━┯━━━━━┯━━━━━┓
 * ┃     │     │     │     │     │     ┃    ║ ║    ║ ║   ┃     │     │     │     │     │     ┃
 * ┠─────┼─────┼─────┼─────┼─────┼─────┨    ║ ║    ║ ║   ┠─────┼─────┼─────┼─────┼─────┼─────┨
 * ┃     │     │     │     │     │     ┃    ╚═╝    ╚═╝   ┃     │     │     │     │     │     ┃
 * ┠─────┼─────┼─────┼─────┼─────┼─────┨                 ┠─────┼─────┼─────┼─────┼─────┼─────┨
 * ┃     │     │     │     │     │     ┃╭─────╮    ┏━━━━━┩     │     │     │     │     │     ┃
 * ┠─────┼─────┼─────┼─────┼─────┼─────┨│     │    ┃     ├─────┼─────┼─────┼─────┼─────┼─────┨
 * ┃     │     │     │     │     │     ┃╰─────╯    ┗━━━━━┪     │     │     │     │     │     ┃
 * ┗━━━━━┷━━━━━┷━━┱──┴──┬──┴──┬──┴──┲━━┛┏━━━━━┓   ┏━━━━━┓┗━━┱──┴──┬──┴──┬──┴──┲━━┷━━━━━┷━━━━━┛
 *                ┃     │     │     ┃   ┃     ┃   ┃     ┃   ┃     │     │     ┃
 *                ┗━━━━━┷━━━━━┷━━━━━┛   ┃     ┃   ┃     ┃   ┗━━━━━┷━━━━━┷━━━━━┛
 *                                      ┃     ┃   ┃     ┃
 *                                      ┗━━━━━┛   ┗━━━━━┛
 * -------------------------------------------------------------------------------------------
 */

#define LAYER_LOWER LAYOUT( \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,\
                             _______, _______, _______, _______, _______, _______, _______, _______ \
)
