/**/
#include "keymap.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_0] = LAYOUT_split_3x5_2(
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,             KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        HM_A,    HM_R,    HM_S,    HM_T,    KC_G,             KC_M,    HM_N,    HM_E,    KC_I,    HM_O,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,             KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,
//                                |--------+--------|        |--------+--------|
                                   ___1___, ___3___,          ___4___, ___2___
    ),
    [_1] = LAYOUT_split_3x5_2(
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          KC_HOME, WS_LEFT, WS_RGHT, KC_END,  KC_PGUP,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PGDN,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          W_LEFT,  W_DOWN,  W_UP,    W_RGHT,  XXXXXXX,
//                                |--------+--------|        |--------+--------|
                                   XXXXXXX, XXXXXXX,          KC_ENT,  KC_DEL
    ),
    [_2] = LAYOUT_split_3x5_2(
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_PLUS, KC_PERC, KC_UNDS, KC_PMNS, KC_AMPR,          KC_LCBR, KC_RCBR, KC_BSLS, KC_GRV,  KC_TILD,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_EXLM, KC_ASTR, KC_COLN, KC_SCLN, KC_PIPE,          KC_LPRN, KC_RPRN, KC_AT,   KC_HASH, KC_EQL,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_ESC,  KC_LCBR, KC_LBRC, KC_LPRN, XXXXXXX,          KC_LBRC, KC_RBRC, KC_LT,   KC_GT,   KC_QUES,
//                                |--------+--------|        |--------+--------|
                                   KC_CIRC, KC_DLR,           XXXXXXX, XXXXXXX
    ),
    [_3] = LAYOUT_split_3x5_2(
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, MS_WHLD, MS_WHLU, XXXXXXX, XXXXXXX,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          MS_LEFT, MS_DOWN, MS_UP,   MS_RGHT, XXXXXXX,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, MS_BTN3, XXXXXXX, XXXXXXX, XXXXXXX,
//                                |--------+--------|        |--------+--------|
                                   XXXXXXX, XXXXXXX,          MS_BTN1, MS_BTN2
    ),
    [_4] = LAYOUT_split_3x5_2(
//     |--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------|
        XXXXXXX, KC_7,    KC_8,    KC_9,    XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//     |--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------|
        KC_DOT,  KC_4,    KC_5,    KC_6,    XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//     |--------+--------+--------+--------+--------|       |--------+--------+--------+--------+--------|
        KC_0,    KC_1,    KC_2,    KC_3,    XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//                                |--------+--------|       |--------+--------|
                                   XXXXXXX, XXXXXXX,         XXXXXXX, XXXXXXX
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ACC_AIGU:
            if (record->event.pressed)
                SEND_STRING(SS_RALT("'"));
            return false;

        case ACC_GRAVE:
            if (record->event.pressed)
                SEND_STRING(SS_RALT("`"));
            return false;

        case ACC_CIRC:
            if (record->event.pressed)
                SEND_STRING(SS_RALT("^"));
            return false;

        case ACC_TREMA:
            if (record->event.pressed)
                SEND_STRING(SS_RALT("\""));
            return false;

        case ACC_SEDILLE:
            if (record->event.pressed)
                SEND_STRING(SS_RALT(","));
            return false;

        case W_LEFT:
            if (record->event.pressed)
                SEND_STRING(W_STR(X_LEFT));
            return false;

        case W_DOWN:
            if (record->event.pressed)
                SEND_STRING(W_STR(X_DOWN));
            return false;

        case W_UP:
            if (record->event.pressed)
                SEND_STRING(W_STR(X_UP));
            return false;

        case W_RGHT:
            if (record->event.pressed)
                SEND_STRING(W_STR(X_RIGHT));
            return false;

        case WS_LEFT:
            if (record->event.pressed)
                SEND_STRING(SS_LCTL(W_STR(X_LEFT)));
            return false;

        case WS_RGHT:
            if (record->event.pressed)
                SEND_STRING(SS_LCTL(W_STR(X_RIGHT)));
            return false;
    }

    return true;
};


#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

