#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(//Home
        OSL(9),  LT(7, KC_S), LT(5, KC_T), LT(6, KC_N), KC_ESC,    _______, LT(6, KC_A), LT(5, KC_E), LT(7, KC_I), TG(4), 
        KC_R,    KC_D,        KC_L,        KC_C,        TG(8),     TG(0),   KC_U,        KC_O,        KC_Y,        KC_H, 
        KC_LALT, KC_LCTL,     KC_LSFT,     OSL(2),      OSL(1),    OSL(4),  KC_SPC,      KC_DEL,      KC_LCTL,     KC_LALT
    ),

    [1] = LAYOUT(//Shift
        _______,    LSFT(KC_S), LSFT(KC_T), LSFT(KC_N), _______,    _______, LSFT(KC_A), LSFT(KC_E), LSFT(KC_I), _______, 
        LSFT(KC_R), LSFT(KC_D), LSFT(KC_L), LSFT(KC_C), _______,    TG(1),   LSFT(KC_U), LSFT(KC_O), LSFT(KC_Y), LSFT(KC_H), 
        _______,    _______,    _______,    OSL(3),     KC_CAPS,    _______, KC_TAB,     _______,    _______,    _______
    ),

    [2] = LAYOUT(//Alpha 2
        _______, KC_G,    KC_M,    KC_B,    _______,    _______, KC_X,   KC_DLR,  KC_J,    _______, 
        KC_BSLS, KC_F,    KC_W,    KC_P,    _______,    TG(2),   KC_Z,   KC_Q,    KC_V,    KC_K, 
        _______, _______, _______, _______, OSL(3),     KC_BSPC, KC_ENT, _______, _______, _______
    ),

    [3] = LAYOUT(//Shift 2
        _______, LSFT(KC_G), LSFT(KC_M), LSFT(KC_B), _______,    _______, LSFT(KC_X), KC_HASH,    LSFT(KC_J), _______, 
        KC_SLSH, LSFT(KC_F), LSFT(KC_W), LSFT(KC_P), _______,    TG(3),   LSFT(KC_Z), LSFT(KC_Q), LSFT(KC_V), LSFT(KC_K), 
        _______, _______,    _______,    _______,    _______,    _______, _______,    _______,    _______,    _______
    ),

    [4] = LAYOUT(//Number
        _______, KC_3,    KC_2,    KC_1,    _______,    _______, KC_7,    KC_8,    KC_9,    _______, 
        KC_ASTR, KC_PLUS, KC_MINS, KC_0,    _______,    TG(4),   KC_4,    KC_5,    KC_6,    KC_EQL, 
        _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______
    ),

    [5] = LAYOUT(//Symbol
        _______, _______, KC_DOT,  KC_COMM, _______,    _______, KC_AMPR, KC_CIRC, _______, _______, 
        KC_DQUO, _______, KC_COLN, KC_SCLN, _______,    TG(5),   KC_PERC, KC_UNDS, _______, KC_QUOT, 
        _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______
    ),

    [6] = LAYOUT(//Symbol 2
        _______, KC_LBRC, KC_LPRN, KC_LCBR, _______,    _______, KC_RCBR, KC_RPRN, KC_RBRC, _______, 
        KC_LT,   KC_AT,   KC_QUES, KC_EXLM, _______,    TG(6),   KC_PIPE, KC_TILD, KC_GRV,  KC_GT, 
        _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______
    ),

    [7] = LAYOUT(//Control
        _______,    LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), _______,    _______,       LCTL(KC_A),   LCTL(KC_T), LCTL(KC_W), _______, 
        LCTL(KC_Z), LCTL(KC_F), LCTL(KC_S), LCTL(KC_N), _______,    TG(7),         LCTL(KC_B),   LCTL(KC_I), LCTL(KC_U), _______, 
        _______,    _______,    _______,    _______,    _______,    LCTL(KC_BSPC), LCTL(KC_ENT), _______,    _______,    _______
    ),

    [8] = LAYOUT(//Navigation
        _______, KC_LEFT, KC_UP,   KC_RGHT, _______,    _______, KC_VOLU, KC_PGUP, KC_BRIU, _______, 
        _______, _______, KC_DOWN, _______, _______,    TG(8),   KC_VOLD, KC_PGDN, KC_BRID, KC_LGUI, 
        _______, _______, _______, _______, _______,    KC_MUTE, _______, _______, _______, _______
    ),

    [9] = LAYOUT(//Function
        _______, KC_F3,   KC_F2,   KC_F1,   _______,    _______, KC_F7,   KC_F8,   KC_F9,   _______, 
        _______, KC_F12,  KC_F11,  KC_F10,  _______,    TG(9),   KC_F4,   KC_F5,   KC_F6,   _______, 
        _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______
    )

};

enum combos {
    NC_BTN1,
    TL_BTN2,
    AU_BTN1,
    EO_BTN2,
    S2_L3,
    COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM nc_combo[] = {LT(6, KC_N), KC_C, COMBO_END};
const uint16_t PROGMEM tl_combo[] = {LT(5, KC_T), KC_L, COMBO_END};
const uint16_t PROGMEM au_combo[] = {LT(6, KC_A), KC_U, COMBO_END};
const uint16_t PROGMEM eo_combo[] = {LT(5, KC_E), KC_O, COMBO_END};
const uint16_t PROGMEM s2_combo[] = {OSL(2), OSL(1), COMBO_END};

combo_t key_combos[] = {
    [NC_BTN1] = COMBO(nc_combo, KC_MS_BTN1),
    [TL_BTN2] = COMBO(tl_combo, KC_MS_BTN2),
    [AU_BTN1] = COMBO(au_combo, KC_MS_BTN1),
    [EO_BTN2] = COMBO(eo_combo, KC_MS_BTN2),
    [S2_L3] = COMBO(s2_combo, OSL(3))
};
