#include QMK_KEYBOARD_H

/**
 * ----------------------------------- [ KEYBOARD LAYOUT ] -----------------------------------
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

#define LAYER_TEMPLATE LAYOUT( \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,\
                             _______, _______, _______, _______, _______, _______, _______, _______ \
)
