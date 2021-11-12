/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// :: left half is set as the master controller
#define MASTER_LEFT

#define USE_SERIAL_PD2

#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 200

#define TAPPING_TOGGLE 3

// #define OLED_FONT_H "keyboards/lily58/lib/glcdfont.c"
// #define OLED_DISABLE_TIMEOUT

// :: Encoders PIN configuration
#define ENCODERS_PAD_A { F4 }
#define ENCODERS_PAD_B { F5 }
#define ENCODER_RESOLUTION 4

// :: Mouse keys
#define MK_3_SPEED
#define MOUSEKEY_WHEEL_INTERVAL 10
#define MK_W_OFFSET_1 40
#define MK_W_OFFSET_UNMOD 40

// :: RGB lighting configuration
#undef RGBLED_NUM
#define RGBLED_NUM 10
#define RGBLIGHT_SPLIT
#define RGBLED_SPLIT { 5, 5 }
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17

#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
