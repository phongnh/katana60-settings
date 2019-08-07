#include QMK_KEYBOARD_H


enum katana60_layers {
    _QWERTY,
    _COLEMAK,
    _DVORAK,
    _NUMPAD,
    _SYMBOL,
    _MOUSE,
};

enum katana60_keycodes {
    QWERTY = SAFE_RANGE,
    COLEMAK,
    DVORAK,
};

#define NUMPAD  TG(_NUMPAD)
#define MOU_SCL LT(_MOUSE, KC_SCLN)     // Turn on _MOUSE layer when held, ; when tapped
#define MOU_O   LT(_MOUSE, KC_O)        // Turn on _MOUSE layer when held, o when tapped
#define MOU_S   LT(_MOUSE, KC_S)        // Turn on _MOUSE layer when held, s when tapped
#define SYM_BSL LT(_SYMBOL, KC_BSLS)    // Turn on _SYMBOL layer when held, \ when tapped
#define SYM_GRV LT(_SYMBOL, KC_GRV)     // Turn on _SYMBOL layer when held, ` when tapped
#define SYM_ENT LT(_SYMBOL, KC_ENT)     // Turn on _SYMBOL layer when held, Enter when tapped
#define SYM_BSP LT(_SYMBOL, KC_BSPC)    // Turn on _SYMBOL layer when held, Backspace when tapped
#define SYM_SPC LT(_SYMBOL, KC_SPC)     // Turn on _SYMBOL layer when held, Space when tapped
#define CTL_ESC LCTL_T(KC_ESC)          // Left Control when held, Esc when tapped
#define CTL_Z   LCTL_T(KC_Z)            // Left Control when held, z when tapped
#define CTL_SCL LCTL_T(KC_SCLN)         // Left Control when held, ; when tapped
#define CTL_SLS RCTL_T(KC_SLSH)         // Right Control when held, / when tapped
#define GUI_QUO RGUI_T(KC_QUOT)         // Right Gui when held, " when tapped
#define GUI_MIN RGUI_T(KC_MINS)         // Right Gui when held, - when tapped
#define GUI_ENT RGUI_T(KC_ENT)          // Right Gui when held, Enter when tapped
#define SFT_ENT RSFT_T(KC_ENT)          // Right Shift when held, Enter when tapped


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT(
    KC_ESC,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    NUMPAD,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC,          KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_BSPC,
    CTL_ESC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_HOME,          KC_PGUP, KC_H,    KC_J,    KC_K,    KC_L,    MOU_SCL,  GUI_QUO,
    KC_LSFT, CTL_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_END,  KC_DEL,  KC_PGDN, KC_N,    KC_M,    KC_COMM, KC_DOT,  CTL_SLS,  SFT_ENT,
    SYM_GRV, KC_LCTL, KC_LALT, KC_LGUI,                   KC_SPC,  KC_BSPC, SYM_SPC,          KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, SYM_BSL
),

[_COLEMAK] = LAYOUT(
    KC_ESC,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    NUMPAD,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,
    KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_LBRC,          KC_RBRC, KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,  KC_BSPC,
    CTL_ESC, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_HOME,          KC_PGUP, KC_H,    KC_N,    KC_E,    KC_I,    MOU_O,    GUI_QUO,
    KC_LSFT, CTL_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_END,  KC_DEL,  KC_PGDN, KC_K,    KC_M,    KC_COMM, KC_DOT,  CTL_SLS,  SFT_ENT,
    SYM_GRV, KC_LCTL, KC_LALT, KC_LGUI,                   KC_SPC,  KC_BSPC, SYM_BSP,          KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, SYM_BSL
),

[_DVORAK] = LAYOUT(
    KC_ESC,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    NUMPAD,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_LBRC,  KC_RBRC,
    KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_SLSH,          KC_EQL,  KC_F,    KC_G,    KC_C,    KC_R,    KC_L,     KC_BSPC,
    CTL_ESC, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_HOME,          KC_PGUP, KC_D,    KC_H,    KC_T,    KC_N,    MOU_S,    GUI_MIN,
    KC_LSFT, CTL_SCL, KC_Q,    KC_J,    KC_K,    KC_X,    KC_END,  KC_DEL,  KC_PGDN, KC_B,    KC_M,    KC_W,    KC_V,    CTL_Z,    SFT_ENT,
    SYM_GRV, KC_LCTL, KC_LALT, KC_LGUI,                   KC_SPC,  KC_BSPC, SYM_BSP,          KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, SYM_BSL
),

[_NUMPAD] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, KC_PSLS, KC_PAST, KC_PMNS, _______, _______, _______,  _______,
    _______, _______, _______, KC_MS_U, _______, _______, _______,          KC_7,    KC_8,    KC_9,    KC_PPLS, _______, _______,  _______,
    _______, KC_BTN2, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______,          KC_4,    KC_5,    KC_6,    KC_PPLS, _______, _______,  _______,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_1,    KC_2,    KC_3,    KC_PENT, _______, _______,  _______,
    _______, _______, _______, _______,                   KC_BTN1, _______, KC_P0,            KC_PDOT, KC_PENT, _______, _______,  _______
),

[_SYMBOL] = LAYOUT(
    RESET,   _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______,          _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_DEL,
    _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, _______,          _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  _______,
    _______, KC_PLUS, KC_MINS, KC_EQL,  KC_LCBR, KC_RCBR, _______, _______, _______, KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS,  _______,
    _______, _______, _______, _______,                   KC_DEL,  _______, _______,          _______, _______, _______, _______,  _______
),

[_MOUSE] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,
    _______, _______, KC_BTN3, KC_MS_U, KC_BTN2, _______, _______,          _______, _______, KC_BTN2, KC_WH_U, KC_BTN3, _______,  _______,
    KC_CAPS, KC_BTN1, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN1, AG_NORM,          AG_TOGG, KC_BTN1, KC_WH_L, KC_WH_D, KC_WH_R, _______,  _______,
    _______, _______, _______, _______, _______, _______, QWERTY,  COLEMAK, DVORAK,  _______, _______, _______, _______, _______,  _______,
    _______, _______, _______, _______,                   _______, _______, _______,          _______, _______, _______, _______,  _______
)

};


bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    switch (keycode) {
    case QWERTY:
        if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTY);
        }
        return false;
        break;
    case COLEMAK:
        if (record->event.pressed) {
            set_single_persistent_default_layer(_COLEMAK);
        }
        return false;
        break;
    case DVORAK:
        if (record->event.pressed) {
            set_single_persistent_default_layer(_DVORAK);
        }
        return false;
        break;
    }
    return true;
};
