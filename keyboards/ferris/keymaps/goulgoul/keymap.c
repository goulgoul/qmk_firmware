#include QMK_KEYBOARD_H

#if __has_include("keymap.h")
#    include "keymap.h"
#endif

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

enum layers
{
    BASE,
    UTILS_AND_NUMPAD,
    SYMBOLS,
    VIM,
    FUNCTIONS,
    GAMES
};

enum combos
{
    WE_ESC,
    SD_TAB,
    IO_BDW,
    KL_BSPC,
    JI_AIGU,
    JCOMM_GRAVE,
    UI_CIRC,
    JK_TREMA,
    KM_SEDILLE
};


enum custom_keycodes
{
    BKWD_DEL_WD = SAFE_RANGE,
    ACC_AIGU,
    ACC_GRAVE,
    ACC_TREMA,
    ACC_CIRC,
    ACC_SEDILLE
};

const uint16_t PROGMEM comboWE[] = { KC_W, KC_E, COMBO_END };
const uint16_t PROGMEM comboSD[] = { LALT_T(KC_S), LSFT_T(KC_D), COMBO_END };
const uint16_t PROGMEM comboIO[] = { KC_I, KC_O, COMBO_END };
const uint16_t PROGMEM comboKL[] = { RSFT_T(KC_K), RALT_T(KC_L), COMBO_END };

const uint16_t PROGMEM comboJI[] = { RCTL_T(KC_J), KC_I, COMBO_END };
const uint16_t PROGMEM comboJCOMM[] = { RCTL_T(KC_J), KC_COMM, COMBO_END };
const uint16_t PROGMEM comboUI[] = { KC_U, KC_I, COMBO_END };
const uint16_t PROGMEM comboJK[] = { RCTL_T(KC_J), RSFT_T(KC_K), COMBO_END };

const uint16_t PROGMEM comboKM[] = { RSFT_T(KC_K), KC_M, COMBO_END };

combo_t key_combos[] = {
    [WE_ESC] = COMBO(comboWE, KC_ESC),
    [SD_TAB] = COMBO(comboSD, KC_TAB),
    [IO_BDW] = COMBO(comboIO, BKWD_DEL_WD),
    [KL_BSPC] = COMBO(comboKL, KC_BSPC),
    [JI_AIGU] = COMBO(comboJI, ACC_AIGU),
    [JCOMM_GRAVE] = COMBO(comboJCOMM, ACC_GRAVE),
    [UI_CIRC] = COMBO(comboUI, ACC_TREMA),
    [JK_TREMA] = COMBO(comboJK, ACC_CIRC),
    [KM_SEDILLE] = COMBO(comboKM, ACC_SEDILLE)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_split_3x5_2(
//     |------------+-------------+-------------+-------------+-------|     |------+------------+-------------+-------------+----------------|
        KC_Q,        KC_W,         KC_E,         KC_R,         KC_T,         KC_Y,  KC_U,        KC_I,         KC_O,         KC_P,
//     |------------+-------------+-------------+-------------+-------|     |------+------------+-------------+-------------+----------------|
        LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G,        KC_H,  RCTL_T(KC_J), RSFT_T(KC_K), RALT_T(KC_L), RGUI_T(KC_QUOT),
//     |------------+-------------+-------------+-------------+-------|     |------+------------+-------------+-------------+----------------|
        KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,        KC_N,  KC_M,        KC_COMM,      KC_DOT,       KC_SLSH,
//     `¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨|-----+--------|     |------+--------|¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨´
                                                        TT(1), KC_SPC,       KC_ENT, OSL(2)
//                                                     `¨¨¨¨¨¨¨¨¨¨¨¨¨¨´     `¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨´
    ),

    [UTILS_AND_NUMPAD] = LAYOUT_split_3x5_2(
//     |------------+-------------+-------------+-------------+-------|     |-------+------------+-------------+-------------+---------------|
        XXXXXXX,     XXXXXXX,      XXXXXXX,      XXXXXXX,      TO(5),        KC_PAST, KC_P7,      KC_P8,        KC_P9,        KC_PPLS,
//     |------------+-------------+-------------+-------------+-------|     |-------+------------+-------------+-------------+---------------|
        XXXXXXX,     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_PSLS, KC_P4,      KC_P5,        KC_P6,        KC_PMNS,
//     |------------+-------------+-------------+-------------+-------|     |-------+------------+-------------+-------------+---------------|
        XXXXXXX,     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_P0,   KC_P1,      KC_P2,        KC_P3,        KC_PDOT,
//     `¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨|-------+-------|     |-------+-------|¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨´
                                                       _______, KC_SPC,      XXXXXXX, TO(4)
//                                                    `¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨´     `¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨´
    ),
    [SYMBOLS] = LAYOUT_split_3x5_2(
//     |------------+-------------+-------------+-------------+-------|     |-------+------------+-------------+-------------+---------------|
        KC_TILD,     KC_GRV,       KC_AMPR,      KC_EXLM,      KC_LBRC,      KC_RBRC, KC_BSLS,    KC_PIPE,      KC_PERC,      KC_PLUS,
//     |------------+-------------+-------------+-------------+-------|     |-------+------------+-------------+-------------+---------------|
        KC_ASTR,     KC_CIRC,      KC_SCLN,      KC_COLN,      KC_LPRN,      KC_RPRN, KC_PMNS,    KC_UNDS,      KC_DLR,       KC_EQL,
//     |------------+-------------+-------------+-------------+-------|     |-------+------------+-------------+-------------+---------------|
        XXXXXXX,     XXXXXXX,      XXXXXXX,      KC_AT,        KC_LCBR,      KC_RCBR, KC_HASH,    XXXXXXX,      XXXXXXX,      XXXXXXX,
//     `¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨|-------+-------|     |-------+-------|¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨´
                                                       TO(0),  KC_SPC,       KC_ENT, TO(3)
//                                                    `¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨´     `¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨´
    ),
    [VIM] = LAYOUT_split_3x5_2(
//     |------------+-------------+-------------+-------------+-------|     |-------+------------+-------------+-------------+---------------|
        KC_Q,        KC_W,         KC_E,         KC_R,         KC_T,         KC_PERC, KC_RCBR,    KC_LCBR,      KC_O,         KC_P,
//     |------------+-------------+-------------+-------------+-------|     |-------+------------+-------------+-------------+---------------|
        LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F), KC_G,        KC_LEFT, KC_DOWN,    KC_UP,        KC_RGHT,      KC_COLN,
//     |------------+-------------+-------------+-------------+-------|     |-------+------------+-------------+-------------+---------------|
        KC_Z,        KC_X,         KC_C,         KC_V,         KC_B,         KC_CIRC, KC_RBRC,    KC_LBRC,      KC_DLR,       KC_SLSH,
//     `¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨|-------+-------|     |-------+-------|¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨´
                                                        TO(0), KC_SPC,       KC_ENT, TO(0)
//                                                    `¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨´     `¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨´
    ),
    [FUNCTIONS] = LAYOUT_split_3x5_2(
//     |------------+-------------+-------------+-------------+-------|     |-------+------------+-------------+-------------+---------------|
        KC_F1,       KC_F2,        KC_F3,        KC_F4,        KC_F5,        KC_F8,  KC_F9,       KC_F10,       KC_F11,       KC_F12,
//     |------------+-------------+-------------+-------------+-------|     |-------+------------+-------------+-------------+---------------|
        KC_MUTE,     KC_VOLD,      KC_VOLU,      KC_SLEP,      KC_F6,        KC_F7,  KC_BTN1,     KC_MS_U,      KC_BTN2,      KC_PGUP,
//     |------------+-------------+-------------+-------------+-------|     |-------+------------+-------------+-------------+---------------|
        KC_MSTP,     KC_MPRV,      KC_MNXT,      KC_MPLY,      XXXXXXX,      KC_BTN3, KC_MS_L,    KC_MS_D,      KC_MS_R,      KC_PGDN,
//     `¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨|-------+-------|     |-------+-------|¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨´
                                                        TO(0), XXXXXXX,      XXXXXXX,XXXXXXX
//                                                    `¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨´     `¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨´
    ),
    [GAMES] = LAYOUT_split_3x5_2(
//     |------------+-------------+-------------+-------------+-------|     |-------+------------+-------------+-------------+---------------|
        KC_ESC,      KC_Q,         KC_W,         KC_E,         KC_R,         KC_VOLU, KC_P7,      KC_P8,        KC_P9,        KC_PPLS,
//     |------------+-------------+-------------+-------------+-------|     |-------+------------+-------------+-------------+---------------|
        KC_LSFT,     KC_A,         KC_S,         KC_D,         KC_F,         KC_VOLD, KC_P4,      KC_P5,        KC_P6,        KC_M,
//     |------------+-------------+-------------+-------------+-------|     |-------+------------+-------------+-------------+---------------|
        KC_LCTL,     KC_Z,         KC_X,         KC_C,         KC_V,         KC_P0,  KC_P1,       KC_P2,        KC_P3,        KC_PMNS,
//     `¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨|-------+-------|     |-------+-------|¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨´
                                                        TO(0), KC_SPC,       KC_ENT, KC_PSCR
//                                                    `¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨´     `¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨´
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode)
    {
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

