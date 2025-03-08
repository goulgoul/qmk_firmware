#include QMK_KEYBOARD_H

#define HM_A    LGUI_T(KC_A)
#define HM_S    LALT_T(KC_S)
#define HM_D    LSFT_T(KC_D)
#define HM_F    LCTL_T(KC_F)

#define HM_J    RCTL_T(KC_J)
#define HM_K    RSFT_T(KC_K)
#define HM_L    RALT_T(KC_L)
#define HM_QT   RGUI_T(KC_QUOT)

const uint16_t PROGMEM comboWE[]    = { KC_W, KC_E, COMBO_END };
const uint16_t PROGMEM comboSD[]    = { HM_S, HM_D, COMBO_END };
const uint16_t PROGMEM comboIO[]    = { KC_I, KC_O, COMBO_END };
const uint16_t PROGMEM comboKL[]    = { HM_K, HM_L, COMBO_END };

const uint16_t PROGMEM comboJI[]    = { HM_J, KC_I, COMBO_END };
const uint16_t PROGMEM comboJCOMM[] = { HM_J, KC_COMM, COMBO_END };
const uint16_t PROGMEM comboUI[]    = { KC_U, KC_I, COMBO_END };
const uint16_t PROGMEM comboJK[]    = { HM_J, HM_K, COMBO_END };

const uint16_t PROGMEM comboKM[]    = { HM_K, KC_M, COMBO_END };

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
    BKWD_DEL_WD = SAFE_RANGE,
    ACC_AIGU,
    ACC_GRAVE,
    ACC_TREMA,
    ACC_CIRC,
    ACC_SEDILLE
};
combo_t key_combos[] = {
    [_ESC] = COMBO(comboWE, KC_ESC),
    [_TAB] = COMBO(comboSD, KC_TAB),
    [_BDW] = COMBO(comboIO, BKWD_DEL_WD),
    [_BSPC] = COMBO(comboKL, KC_BSPC),
    [_AIGU] = COMBO(comboJI, ACC_AIGU),
    [_GRAVE] = COMBO(comboJCOMM, ACC_GRAVE),
    [_CIRC] = COMBO(comboUI, ACC_TREMA),
    [_TREMA] = COMBO(comboJK, ACC_CIRC),
    [_SEDILLE] = COMBO(comboKM, ACC_SEDILLE)
};

enum layers {
    BASE,
    UTILS_AND_NUMPAD,
    SYMBOLS,
    VIM,
    FUNCTIONS,
};

