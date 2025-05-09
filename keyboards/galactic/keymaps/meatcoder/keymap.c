// Copyright 2024 Sim Domingo
// based on the Preonic keymap by Jack Humbert
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
  _QWERTY = 0,
  _LOWER,
  _RAISE,
  _ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_QWERTY] = LAYOUT_ortho_5x12(
      KC_GRV,       KC_1,         KC_2,    KC_3,         KC_4,           KC_5,    KC_6,    KC_7,         KC_8,         KC_9,    KC_0,            KC_BSPC,
      KC_TAB,       KC_Q,         KC_W,    KC_E,         KC_R,           KC_T,    KC_Y,    KC_U,         KC_I,         KC_O,    KC_P,            KC_DEL,
      KC_ESC,       LSFT_T(KC_A), KC_S,    LCMD_T(KC_D), LCTL_T(KC_F),   KC_G,    KC_H,    RCTL_T(KC_J), RCMD_T(KC_K), KC_L,    RSFT_T(KC_SCLN), KC_QUOT,
      KC_LSFT,      KC_Z,         KC_X,    KC_C,         LALT_T(KC_V),   KC_B,    KC_N,    RALT_T(KC_M), KC_COMM,      KC_DOT,  KC_SLSH,         KC_ENT,
      TG(_ADJUST),  KC_LCTL,      KC_LALT, KC_LGUI,      TL_LOWR,        KC_SPC,  KC_SPC,  TL_UPPR ,     KC_LEFT,      KC_DOWN, KC_UP,           KC_RGHT
    ),

    [_LOWER] = LAYOUT_ortho_5x12(
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR,   KC_ASTR,    KC_LPRN, KC_RPRN, KC_BSPC,
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR,   KC_ASTR,    KC_LPRN, KC_RPRN, KC_DEL,
        KC_CAPS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_LBRC,   KC_RBRC,    KC_LCBR, KC_RCBR, KC_PIPE,
        _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  S(KC_NUHS),S(KC_NUBS), _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______,   KC_MNXT,    KC_VOLD, KC_VOLU, KC_MPLY
     ),

    [_RAISE] = LAYOUT_ortho_5x12(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TILD, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        CW_TOGG, KC_PLUS, KC_MINS, KC_EQL,  KC_UNDS, KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
        _______, KC_F7,   KC_F8,   KC_PIPE, KC_BSLS, KC_F11,  KC_F12,  KC_NUHS, KC_NUBS, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
    ),

    [_ADJUST] = LAYOUT_ortho_5x12(
        KC_F1,          KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______, _______, _______, _______, _______, _______,
        KC_F6,          KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, _______, KC_7   , KC_8   , KC_9,    KC_PLUS, KC_DEL,
        _______,        UG_TOGG, UG_PREV, UG_NEXT, _______, _______, _______, KC_4   , KC_5   , KC_6,    KC_MINS, _______,
        QK_BOOT,        UG_HUEU, UG_SATU, UG_VALU, UG_SPDU, _______, _______, KC_1   , KC_2   , KC_3,    KC_ASTR, _______,
        TG(_ADJUST),    UG_HUED, UG_SATD, UG_VALD, UG_SPDD, _______, _______, _______, KC_0   , KC_DOT,  KC_SLSH, _______
    )
};

