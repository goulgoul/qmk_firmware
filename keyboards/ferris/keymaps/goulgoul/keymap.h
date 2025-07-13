/**/
#include QMK_KEYBOARD_H

// HOME ROW MODS
#define HM_A    LGUI_T(KC_A)
#define HM_R    LALT_T(KC_R)
#define HM_S    LSFT_T(KC_S)
#define HM_T    LCTL_T(KC_T)

#define HM_N    RCTL_T(KC_N)
#define HM_E    RSFT_T(KC_E)
#define HM_I    RALT_T(KC_I)
#define HM_O    RGUI_T(KC_O)

#define __TAB__ LT(1, KC_TAB)
#define __SPC__ LT(3, KC_SPC)
#define __ENT__ LT(4, KC_ENT)
#define __BSP__ LT(2, KC_BSPC)


const uint16_t PROGMEM comboWF[]    = { KC_W, KC_F,     COMBO_END };
const uint16_t PROGMEM comboRS[]    = { HM_R, HM_S,     COMBO_END };
const uint16_t PROGMEM comboUY[]    = { KC_U, KC_Y,     COMBO_END };
const uint16_t PROGMEM comboEI[]    = { HM_E, KC_I,     COMBO_END };
// const uint16_t PROGMEM comboEI[]    = { HM_E, HM_I,     COMBO_END };

const uint16_t PROGMEM comboNU[]    = { HM_N, KC_U,     COMBO_END };
const uint16_t PROGMEM comboNCOMM[] = { HM_N, KC_COMM,  COMBO_END };
const uint16_t PROGMEM comboLU[]    = { KC_L, KC_U,     COMBO_END };
const uint16_t PROGMEM comboNE[]    = { HM_N, HM_E,     COMBO_END };

const uint16_t PROGMEM comboEH[]    = { HM_E, KC_H,     COMBO_END };

enum combos {
    _ESC,
    _TAB,
    _BDW,
    _BSPC,
    _AIGU,
    _GRAVE,
    _CIRC,
    _TREMA,
    _SEDILLE
};

enum custom_keycodes {
    BSWD = SAFE_RANGE,
    ACC_AIGU,
    ACC_GRAVE,
    ACC_TREMA,
    ACC_CIRC,
    ACC_SEDILLE,
    WS_LEFT,
    WS_RGHT,
    W_LEFT,
    W_DOWN,
    W_UP,
    W_RGHT
};

#define W_STR(dir_key) SS_DOWN(X_LEFT_GUI) \
                       SS_DOWN(dir_key)    \
                       SS_UP(dir_key)      \
                       SS_UP(X_LEFT_GUI)

combo_t key_combos[] = {
//    [_ESC]      = COMBO(comboWF,    KC_ESC),
//    [_TAB]      = COMBO(comboRS,    KC_TAB),
//    [_BDW]      = COMBO(comboUY,    BSWD),
//    [_BSPC]     = COMBO(comboEI,    KC_BSPC),
    [_AIGU]     = COMBO(comboNU,    ACC_AIGU),
    [_GRAVE]    = COMBO(comboNCOMM, ACC_GRAVE),
    [_CIRC]     = COMBO(comboLU,    ACC_TREMA),
    [_TREMA]    = COMBO(comboNE,    ACC_CIRC),
    [_SEDILLE]  = COMBO(comboEH,    ACC_SEDILLE)
};

enum layers {
    _0,
    _1,
    _2,
    _3,
    _4,
};

