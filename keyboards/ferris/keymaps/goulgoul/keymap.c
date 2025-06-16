/**/
#include "keymap.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [COLEMAK_DH] = LAYOUT_split_3x5_2(
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,             KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        HM_A,    HM_R,    HM_S,    HM_T,    KC_G,             KC_M,    HM_N,    HM_E,    HM_I,    HM_O,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,             KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,
//                                |--------+--------|        |--------+--------|
                                   OSL(2),   KC_SPC,           KC_ENT,  OSL(1)
    ),
    [SYMBOLS] = LAYOUT_split_3x5_2(
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_TILD, KC_GRV,  KC_AMPR, KC_EXLM, KC_LCBR,          KC_RCBR, KC_BSLS, KC_PIPE, KC_PERC, KC_PLUS,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_ASTR, KC_CIRC, KC_COLN, KC_SCLN, KC_LPRN,          KC_RPRN, KC_PMNS, KC_UNDS, KC_DLR,  KC_EQL,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_QUES, KC_LT,   KC_GT,   KC_AT,   KC_LBRC,          KC_RBRC, KC_HASH, _______, _______, _______,
//                                |--------+--------|        |--------+--------|
                                   XXXXXXX,  KC_SPC,           KC_ENT, XXXXXXX
    ),
    [NUMPAD_AND_VIM] = LAYOUT_split_3x5_2(
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        XXXXXXX, KC_7,    KC_8,    KC_9,    XXXXXXX,          KC_HOME, WS_LEFT, WS_RGHT, KC_END,  KC_PGUP,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        XXXXXXX, KC_4,    KC_5,    KC_6,    XXXXXXX,          KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PGDN,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_0,    KC_1,    KC_2,    KC_3,    XXXXXXX,          KC_CIRC, W_LEFT,  W_RGHT,  KC_DLR,  KC_SLSH,
//                                |--------+--------|        |--------+--------|
                                   TO(0),   KC_SPC,           XXXXXXX, TO(3)
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case BKWD_DEL_WD:
            if (record->event.pressed)
                SEND_STRING(SS_LCTL("\b"));
            return false;

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
                SEND_STRING(W_LEFT_STR);
            return false;

        case W_RGHT:
            if (record->event.pressed)
                SEND_STRING(W_RIGHT_STR);
            return false;

        case WS_LEFT:
            if (record->event.pressed)
                SEND_STRING(SS_LCTL(W_LEFT_STR));
            return false;

        case WS_RGHT:
            if (record->event.pressed)
                SEND_STRING(SS_LCTL(W_RIGHT_STR));
            return false;
    }

    return true;
};


#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

