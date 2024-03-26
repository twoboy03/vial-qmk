// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_TAB,   KC_Q,       KC_W,   KC_E,   KC_R,   KC_T,                 KC_Y,   KC_U,   KC_I,      KC_O,     KC_P,      KC_MINS,
        KC_LCTL,  KC_A,       KC_S,   KC_D,   KC_F,   KC_G,                 KC_H,   KC_J,   KC_K,      KC_L,     KC_SCLN,   KC_QUOT,
        KC_LSFT,  KC_Z,       KC_X,   KC_C,   KC_V,   KC_B,   KC_KB_MUTE,   KC_N,   KC_M,   KC_COMM,   KC_DOT,   KC_SLSH,   KC_UNDS,
                              KC_LALT,KC_LNG1,KC_SPC, KC_LNG2,              KC_BSPC,KC_ENT,
                              KC_LGUI
    ), 
    [1] = LAYOUT(
        KC_TAB,   KC_Q,       KC_W,   KC_E,   KC_R,   KC_T,                 KC_Y,   KC_U,   KC_I,      KC_O,     KC_P,      KC_MINS,
        KC_LCTL,  KC_A,       KC_S,   KC_D,   KC_F,   KC_G,                 KC_H,   KC_J,   KC_K,      KC_L,     KC_SCLN,   KC_QUOT,
        KC_LSFT,  KC_Z,       KC_X,   KC_C,   KC_V,   KC_B,   KC_KB_MUTE,   KC_N,   KC_M,   KC_COMM,   KC_DOT,   KC_SLSH,   KC_UNDS,
                              KC_LALT,KC_LNG1,KC_SPC, KC_LNG2,              KC_BSPC,KC_ENT,
                              KC_LGUI
    ),
    [2] = LAYOUT(
        KC_TAB,   KC_Q,       KC_W,   KC_E,   KC_R,   KC_T,                 KC_Y,   KC_U,   KC_I,      KC_O,     KC_P,      KC_MINS,
        KC_LCTL,  KC_A,       KC_S,   KC_D,   KC_F,   KC_G,                 KC_H,   KC_J,   KC_K,      KC_L,     KC_SCLN,   KC_QUOT,
        KC_LSFT,  KC_Z,       KC_X,   KC_C,   KC_V,   KC_B,   KC_KB_MUTE,   KC_N,   KC_M,   KC_COMM,   KC_DOT,   KC_SLSH,   KC_UNDS,
                              KC_LALT,KC_LNG1,KC_SPC, KC_LNG2,              KC_BSPC,KC_ENT,
                              KC_LGUI
    ),
    [3] = LAYOUT(
        KC_TAB,   KC_Q,       KC_W,   KC_E,   KC_R,   KC_T,                 KC_Y,   KC_U,   KC_I,      KC_O,     KC_P,      KC_MINS,
        KC_LCTL,  KC_A,       KC_S,   KC_D,   KC_F,   KC_G,                 KC_H,   KC_J,   KC_K,      KC_L,     KC_SCLN,   KC_QUOT,
        KC_LSFT,  KC_Z,       KC_X,   KC_C,   KC_V,   KC_B,   KC_KB_MUTE,   KC_N,   KC_M,   KC_COMM,   KC_DOT,   KC_SLSH,   KC_UNDS,
                              KC_LALT,KC_LNG1,KC_SPC, KC_LNG2,              KC_BSPC,KC_ENT,
                              KC_LGUI
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI)  },
    [2] = { ENCODER_CCW_CW(RGB_SPD, RGB_SPI)  },
    [3] = { ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
};
#endif