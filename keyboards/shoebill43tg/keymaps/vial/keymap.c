// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    //0-2 is the layers for US
    [0] = LAYOUT(
        KC_TAB,   KC_Q,       KC_W,   KC_E,   KC_R,   KC_T,                 KC_Y,   KC_U,   KC_I,      KC_O,     KC_P,      KC_MINS,
        KC_LCTL,  KC_A,       KC_S,   KC_D,   KC_F,   KC_G,                 KC_H,   KC_J,   KC_K,      KC_L,     KC_SCLN,   KC_QUOT,
        KC_LSFT,  KC_Z,       KC_X,   KC_C,   KC_V,   KC_B,   KC_KB_MUTE,   KC_N,   KC_M,   KC_COMM,   KC_DOT,   KC_SLSH,   KC_UNDS,
                              KC_LALT,KC_LNG1,LT(1,KC_SPC), KC_LNG2,        KC_BSPC,LT(2,KC_ENT),
                              KC_LGUI
    ), 
    [1] = LAYOUT(
        _______,  _______,    _______,KC_LBRC,S(KC_LBRC),S(KC_9),           S(KC_0),S(KC_RBRC),KC_RBRC,_______,  _______,   _______,
        _______,  KC_1,       KC_2,   KC_3,   KC_4,   KC_5,                 KC_GRV ,KC_EQL ,KC_UP,     KC_BSLS,  _______,   _______,
        _______,  KC_6,       KC_7,   KC_8,   KC_9,   KC_0,   DF(3),        _______,KC_LEFT,KC_DOWN,   KC_RGHT,  _______,   _______,
                              _______,_______,_______,_______,              KC_DEL, LT(6,KC_ENT),
                              _______
    ),
    [2] = LAYOUT(
        KC_TAB,   KC_F11,     KC_F12, KC_E,   KC_R,   KC_T,                 KC_Y,   KC_U,   KC_I,      KC_O,     KC_P,      KC_MINS,
        KC_LCTL,  KC_F1,      KC_F2,  KC_F3,  KC_F4,  KC_F5,                KC_H,   KC_J,   KC_PGUP,   KC_L,     KC_SCLN,   KC_QUOT,
        KC_LSFT,  KC_F6,      KC_F7,  KC_F8,  KC_F9,  KC_F10,   RGB_TOG,    KC_N,   KC_HOME,KC_PGDN,   KC_END,   KC_SLSH,   KC_UNDS,
                              KC_LALT,KC_LNG1,LT(6,KC_SPC), KC_LNG2,        KC_BSPC,KC_ENT,
                              KC_LGUI
    ),
    //3-5 is the layers for JIS. I will align to US...?
    [3] = LAYOUT(
        KC_TAB,   KC_Q,       KC_W,   KC_E,   KC_R,   KC_T,                 KC_Y,   KC_U,   KC_I,      KC_O,     KC_P,      KC_MINS,
        KC_LCTL,  KC_A,       KC_S,   KC_D,   KC_F,   KC_G,                 KC_H,   KC_J,   KC_K,      KC_L,     KC_SCLN,   KC_QUOT,
        KC_LSFT,  KC_Z,       KC_X,   KC_C,   KC_V,   KC_B,   KC_KB_MUTE,   KC_N,   KC_M,   KC_COMM,   KC_DOT,   KC_SLSH,   KC_UNDS,
                              KC_LALT,KC_LNG1,LT(4,KC_SPC), KC_LNG2,        KC_BSPC,LT(5,KC_ENT),
                              KC_LGUI
    ), 
    [4] = LAYOUT(
        _______,  _______,    _______,KC_RBRC,S(KC_RBRC),S(KC_8),           S(KC_9),S(KC_BSLS),KC_BSLS,_______,  _______,   _______,
        _______,  KC_1,       KC_2,   KC_3,   KC_4,   KC_5,                 KC_LBRC,KC_EQL, KC_UP,     KC_INT1,  _______,   _______,
        _______,  KC_6,       KC_7,   KC_8,   KC_9,   KC_0,   DF(0),        KC_INT3,KC_LEFT,KC_DOWN,   KC_RGHT,  _______,   _______,
                              _______,_______,_______,_______,              KC_DEL, LT(6,KC_ENT),
                              _______
    ),
    [5] = LAYOUT(
        KC_TAB,   KC_F11,     KC_F12, KC_E,   KC_R,   KC_T,                 KC_Y,   KC_U,   KC_I,      KC_O,     KC_P,      KC_MINS,
        KC_LCTL,  KC_F1,      KC_F2,  KC_F3,  KC_F4,  KC_F5,                KC_H,   KC_J,   KC_PGUP,   KC_L,     KC_SCLN,   KC_QUOT,
        KC_LSFT,  KC_F6,      KC_F7,  KC_F8,  KC_F9,  KC_F10,   RGB_TOG,    KC_N,   KC_HOME,KC_PGDN,   KC_END,   KC_SLSH,   KC_UNDS,
                              KC_LALT,KC_LNG1,LT(6,KC_SPC), KC_LNG2,        KC_BSPC,KC_ENT,
                              KC_LGUI
    ),
    //6 is setting layer iranai?
    [6] = LAYOUT(
        KC_TAB,   KC_Q,       KC_W,   KC_E,   KC_R,   KC_T,                 KC_Y,   KC_U,   KC_I,      KC_O,     KC_P,      KC_MINS,
        KC_LCTL,  RGB_MOD,    RGB_RMOD,   KC_D,   KC_F,   KC_G,             KC_H,   KC_J,   KC_K,      KC_L,     KC_SCLN,   KC_QUOT,
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
    [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [4] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [5] = { ENCODER_CCW_CW(RGB_SPD, RGB_SPI) },
    [6] = { ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
};
#endif