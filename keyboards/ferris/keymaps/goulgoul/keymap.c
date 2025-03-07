#include "keymap.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_split_3x5_2(
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        HM_A,    HM_S,    HM_D,    HM_F,    KC_G,             KC_H,    HM_J,    HM_K,    HM_L,    HM_QT,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
//                                |--------+--------|        |--------+--------|
                                   OSL(1),  KC_SPC,           KC_ENT,  OSL(2)
    ),

    [UTILS_AND_NUMPAD] = LAYOUT_split_3x5_2(
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          KC_PAST, KC_7,    KC_8,    KC_9,    KC_PPLS,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          KC_PSLS, KC_4,    KC_5,    KC_6,    KC_PMNS,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          KC_0,    KC_1,    KC_2,    KC_3,    KC_PDOT,
//                                |--------+--------|        |--------+--------|
                                   TO(0),   KC_SPC,           XXXXXXX, TO(4)
    ),
    [SYMBOLS] = LAYOUT_split_3x5_2(
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_TILD, KC_GRV,  KC_AMPR, KC_EXLM, KC_LCBR,          KC_RCBR, KC_BSLS, KC_PIPE, KC_PERC, KC_PLUS,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_ASTR, KC_CIRC, KC_COLN, KC_SCLN, KC_LPRN,          KC_RPRN, KC_PMNS, KC_UNDS, KC_DLR,  KC_EQL,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_QUES, KC_LT,   KC_GT,   KC_AT,   KC_LBRC,          KC_RBRC, KC_HASH, _______, _______, _______,
//                                |--------+--------|        |--------+--------|
                                    TO(0),  KC_SPC,           KC_ENT, TO(3)
    ),
    [VIM] = LAYOUT_split_3x5_2(
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_PERC, KC_RCBR, KC_LCBR, KC_O,    KC_P,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        HM_A,    HM_S,    HM_D,    HM_F,    KC_G,             KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_COLN,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             KC_CIRC, KC_RBRC, KC_LBRC, KC_DLR,  KC_SLSH,
//                                |--------+--------|        |--------+--------|
                                   TO(0),   KC_SPC,           KC_ENT,  TO(0)
    ),
    [FUNCTIONS] = LAYOUT_split_3x5_2(
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,            KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, KC_F6,            KC_F7,   KC_BTN1, KC_MS_U, KC_BTN2, KC_PGUP,
//     |--------+--------+--------+--------+--------|        |--------+--------+--------+--------+--------|
        KC_MSTP, KC_MPRV, KC_MNXT, KC_MPLY, XXXXXXX,          KC_BTN3, KC_MS_L, KC_MS_D, KC_MS_R, KC_PGDN,
//                                |--------+--------|        |--------+--------|
                                   TO(0),   XXXXXXX,          XXXXXXX, XXXXXXX
    )
};
// end keymaps

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
    }

    return true;
};


#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C

