#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
  DANCE_18,
  DANCE_19,
  DANCE_20,
  DANCE_21,
  DANCE_22,
  DANCE_23,
  DANCE_24,
  DANCE_25,
  DANCE_26,
  DANCE_27,
  DANCE_28,
  DANCE_29,
  DANCE_30,
  DANCE_31,
  DANCE_32,
  DANCE_33,
  DANCE_34,
  DANCE_35,
  DANCE_36,
  DANCE_37,
  DANCE_38,
  DANCE_39,
  DANCE_40,
  DANCE_41,
};

#define DUAL_FUNC_0 LT(1, KC_9)
#define DUAL_FUNC_1 LT(11, KC_F16)
#define DUAL_FUNC_2 LT(14, KC_F4)
#define DUAL_FUNC_3 LT(13, KC_F8)
#define DUAL_FUNC_4 LT(8, KC_F5)
#define DUAL_FUNC_5 LT(7, KC_F18)
#define DUAL_FUNC_6 LT(9, KC_N)
#define DUAL_FUNC_7 LT(13, KC_F12)
#define DUAL_FUNC_8 LT(2, KC_7)
#define DUAL_FUNC_9 LT(14, KC_F6)
#define DUAL_FUNC_10 LT(4, KC_6)
#define DUAL_FUNC_11 LT(13, KC_4)
#define DUAL_FUNC_12 LT(8, KC_F7)
#define DUAL_FUNC_13 LT(8, KC_F6)
#define DUAL_FUNC_14 LT(5, KC_F22)
#define DUAL_FUNC_15 LT(4, KC_F21)
#define DUAL_FUNC_16 LT(5, KC_N)
#define DUAL_FUNC_17 LT(13, KC_2)
#define DUAL_FUNC_18 LT(3, KC_F8)
#define DUAL_FUNC_19 LT(13, KC_8)
#define DUAL_FUNC_20 LT(4, KC_F4)
#define DUAL_FUNC_21 LT(8, KC_0)
#define DUAL_FUNC_22 LT(12, KC_I)
#define DUAL_FUNC_23 LT(6, KC_D)
#define DUAL_FUNC_24 LT(9, KC_M)
#define DUAL_FUNC_25 LT(4, KC_0)
#define DUAL_FUNC_26 LT(11, KC_D)
#define DUAL_FUNC_27 LT(3, KC_L)
#define DUAL_FUNC_28 LT(13, KC_5)
#define DUAL_FUNC_29 LT(8, KC_H)
#define DUAL_FUNC_30 LT(7, KC_F17)
#define DUAL_FUNC_31 LT(6, KC_V)
#define DUAL_FUNC_32 LT(3, KC_B)
#define DUAL_FUNC_33 LT(12, KC_Y)
#define DUAL_FUNC_34 LT(1, KC_P)
#define DUAL_FUNC_35 LT(5, KC_F15)
#define DUAL_FUNC_36 LT(3, KC_D)
#define DUAL_FUNC_37 LT(5, KC_F8)
#define DUAL_FUNC_38 LT(10, KC_0)
#define DUAL_FUNC_39 LT(12, KC_F23)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TG(1),                                          TD(DANCE_1),    KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           AS_TOGG,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           LGUI(KC_LBRC),                                  RGUI(KC_RBRC),  KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           OSL(3),
    KC_GRAVE,       KC_A,           KC_S,           KC_D,           KC_F,           TD(DANCE_0),                                                                    KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,
    KC_LBRC,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           OSL(7),                                         OSL(7),         KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RBRC,
    MO(14),         LGUI(LSFT(KC_5)),KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_0,                                                                                                    KC_MINUS,       KC_UNDS,        KC_TRANSPARENT, KC_ESCAPE,      CW_TOGG,
                                                                                                    OSL(3),         KC_PAGE_UP,     KC_PAGE_UP,     OSM(MOD_HYPR),
                                                                                                                    KC_PGDN,        KC_PGDN,
                                                                                    MT(MOD_LGUI, KC_BSPC),MT(MOD_LCTL, KC_DELETE),KC_LEFT_SHIFT,  KC_RIGHT_SHIFT, MT(MOD_RALT, KC_ENTER),MT(MOD_RGUI, KC_SPACE)
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_D),MT(MOD_LSFT, KC_F),KC_TRANSPARENT,                                                                 KC_TRANSPARENT, MT(MOD_LSFT, KC_J),MT(MOD_LGUI, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RCTL, KC_SCLN),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_LEFT),                                  RALT(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_GRAVE,       KC_TRANSPARENT, KC_TRANSPARENT, KC_D,           KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_K,           KC_TRANSPARENT, KC_TRANSPARENT, KC_QUOTE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_V,           KC_TRANSPARENT, OSL(8),                                         OSL(8),         KC_TRANSPARENT, KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT,
    LM(18,MOD_LSFT),KC_PSCR,        KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_1,                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_PAGE_UP,     KC_PAGE_UP,     KC_TRANSPARENT,
                                                                                                                    KC_PGDN,        KC_PGDN,
                                                                                    MT(MOD_LCTL, KC_BSPC),MT(MOD_RALT, KC_DELETE),KC_LEFT_SHIFT,  KC_RIGHT_SHIFT, MT(MOD_LSFT | MOD_RCTL, KC_ENTER),MT(MOD_RGUI, KC_SPACE)
  ),
  [3] = LAYOUT_ergodox_pretty(
    TO(0),          LALT(KC_1),     LALT(KC_2),     LALT(KC_3),     LALT(KC_4),     LALT(KC_5),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(KC_6),     LALT(KC_7),     LALT(KC_8),     LALT(KC_9),     LALT(KC_0),     OSL(4),
    LALT(KC_TAB),   LALT(KC_Q),     LALT(KC_W),     LALT(KC_E),     LALT(KC_R),     LALT(KC_T),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(KC_Y),     LALT(KC_U),     LALT(KC_I),     LALT(KC_O),     LALT(KC_P),     LALT(KC_TAB),
    LALT(KC_GRAVE), LALT(KC_A),     LALT(KC_S),     LALT(KC_D),     LALT(KC_F),     LALT(KC_G),                                                                     LALT(KC_H),     LALT(KC_J),     LALT(KC_K),     LALT(KC_L),     LALT(KC_SCLN),  LALT(KC_QUOTE),
    LALT(KC_LBRC),  LALT(KC_Z),     LALT(KC_X),     LALT(KC_C),     LALT(KC_V),     LALT(KC_B),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(KC_N),     LALT(KC_J),     LALT(KC_COMMA), LALT(KC_DOT),   LALT(KC_SLASH), LALT(KC_RBRC),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, OSL(5),                                                                                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    OSL(4),         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    TO(0),          LALT(LCTL(KC_1)),LALT(LCTL(KC_2)),LALT(LCTL(KC_3)),LALT(LCTL(KC_4)),LALT(LCTL(KC_5)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LCTL(KC_6)),LALT(LCTL(KC_7)),LALT(LCTL(KC_8)),LALT(LCTL(KC_9)),LALT(LCTL(KC_0)),OSL(5),
    LALT(LCTL(KC_TAB)),LALT(LCTL(KC_Q)),LALT(LCTL(KC_W)),LALT(LCTL(KC_E)),LALT(LCTL(KC_R)),LALT(LCTL(KC_T)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LCTL(KC_Y)),LALT(LCTL(KC_U)),LALT(LCTL(KC_I)),LALT(LCTL(KC_O)),LALT(LCTL(KC_P)),LALT(LCTL(KC_TAB)),
    LALT(LCTL(KC_GRAVE)),LALT(LCTL(KC_A)),LALT(LCTL(KC_S)),LALT(LCTL(KC_D)),LALT(LCTL(KC_F)),LALT(LCTL(KC_G)),                                                                LALT(LCTL(KC_H)),LALT(LCTL(KC_J)),LALT(LCTL(KC_K)),LALT(LCTL(KC_L)),LALT(LCTL(KC_SCLN)),LALT(LCTL(KC_QUOTE)),
    LALT(LCTL(KC_LBRC)),LALT(LCTL(KC_Z)),LALT(LCTL(KC_X)),LALT(LCTL(KC_C)),LALT(LCTL(KC_V)),LALT(LCTL(KC_B)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LCTL(KC_N)),LALT(LCTL(KC_M)),LALT(LCTL(KC_COMMA)),LALT(LCTL(KC_DOT)),LALT(LCTL(KC_SLASH)),LALT(LCTL(KC_RBRC)),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_ergodox_pretty(
    TO(0),          DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,    DUAL_FUNC_5,    DUAL_FUNC_6,    KC_TRANSPARENT,                                 KC_TRANSPARENT, DUAL_FUNC_22,   DUAL_FUNC_23,   DUAL_FUNC_24,   DUAL_FUNC_25,   DUAL_FUNC_26,   OSL(6),
    LALT(LSFT(KC_TAB)),DUAL_FUNC_7,    DUAL_FUNC_8,    DUAL_FUNC_9,    DUAL_FUNC_10,   DUAL_FUNC_11,   KC_TRANSPARENT,                                 KC_TRANSPARENT, DUAL_FUNC_27,   DUAL_FUNC_28,   DUAL_FUNC_29,   DUAL_FUNC_30,   DUAL_FUNC_31,   LALT(LSFT(KC_TAB)),
    LALT(LSFT(KC_GRAVE)),DUAL_FUNC_12,   DUAL_FUNC_13,   DUAL_FUNC_14,   DUAL_FUNC_15,   DUAL_FUNC_16,                                                                   DUAL_FUNC_32,   DUAL_FUNC_33,   DUAL_FUNC_34,   DUAL_FUNC_35,   LALT(LSFT(KC_SCLN)),LALT(LSFT(KC_QUOTE)),
    LALT(LSFT(KC_LBRC)),DUAL_FUNC_17,   DUAL_FUNC_18,   DUAL_FUNC_19,   DUAL_FUNC_20,   DUAL_FUNC_21,   KC_TRANSPARENT,                                 KC_TRANSPARENT, DUAL_FUNC_36,   DUAL_FUNC_37,   LALT(LSFT(KC_COMMA)),LALT(LSFT(KC_DOT)),LALT(LSFT(KC_SLASH)),LALT(LSFT(KC_RBRC)),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_ergodox_pretty(
    TO(0),          LCTL(LSFT(KC_1)),LCTL(LSFT(KC_2)),LCTL(LSFT(KC_3)),LCTL(LSFT(KC_4)),LCTL(LSFT(KC_5)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(LSFT(KC_6)),LCTL(LSFT(KC_7)),LCTL(LSFT(KC_8)),LCTL(LSFT(KC_9)),LCTL(LSFT(KC_0)),TO(3),
    LCTL(LSFT(KC_TAB)),LCTL(LSFT(KC_Q)),LCTL(LSFT(KC_W)),LCTL(LSFT(KC_E)),LCTL(LSFT(KC_R)),LCTL(LSFT(KC_T)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(LSFT(KC_Y)),LCTL(LSFT(KC_U)),LCTL(LSFT(KC_I)),LCTL(LSFT(KC_O)),LCTL(LSFT(KC_P)),LCTL(LSFT(KC_TAB)),
    LCTL(LSFT(KC_GRAVE)),LCTL(LSFT(KC_A)),LCTL(LSFT(KC_S)),LCTL(LSFT(KC_D)),LCTL(LSFT(KC_F)),LCTL(LSFT(KC_G)),                                                                LCTL(LSFT(KC_H)),LCTL(LSFT(KC_J)),LCTL(LSFT(KC_K)),LCTL(LSFT(KC_L)),LCTL(LSFT(KC_SCLN)),LCTL(LSFT(KC_QUOTE)),
    LCTL(LSFT(KC_LBRC)),LCTL(LSFT(KC_Z)),LCTL(LSFT(KC_X)),LCTL(LSFT(KC_C)),LCTL(LSFT(KC_V)),LCTL(LSFT(KC_B)),KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(LSFT(KC_N)),LCTL(LSFT(KC_M)),LCTL(LSFT(KC_COMMA)),LCTL(LSFT(KC_DOT)),LCTL(LSFT(KC_SLASH)),LCTL(LSFT(KC_RBRC)),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_ergodox_pretty(
    TO(0),          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_TILD,        LGUI(LSFT(KC_LBRC)),                                LGUI(LSFT(KC_RBRC)),KC_KP_PLUS,     KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_F12,
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_UNDS,                                                                        KC_KP_ASTERISK, KC_4,           KC_5,           KC_6,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_TILD,        TO(0),                                          OSL(9),         KC_CIRC,        KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_AMPR,        KC_ASTR,        KC_LABK,        KC_RABK,                                                                                                        KC_0,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_AUDIO_VOL_UP,KC_TRANSPARENT,
                                                                                                                    KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_DOWN,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_ergodox_pretty(
    TO(2),          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_TILD,        RCTL(KC_PAGE_UP),                                LCTL(KC_PGDN),  KC_KP_PLUS,     KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_F12,
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_UNDS,                                                                        KC_KP_ASTERISK, KC_4,           KC_5,           KC_6,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_TILD,        TO(2),                                          OSL(9),         KC_CIRC,        KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_AMPR,        KC_ASTR,        KC_LABK,        KC_RABK,                                                                                                        KC_0,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    OSM(MOD_LGUI),  KC_AUDIO_VOL_UP,KC_AUDIO_VOL_UP,KC_TRANSPARENT,
                                                                                                                    KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_DOWN,
                                                                                    MT(MOD_LCTL, KC_BSPC),MT(MOD_RALT, KC_DELETE),KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_RCTL, KC_ENTER),MT(MOD_RGUI, KC_SPACE)
  ),
  [9] = LAYOUT_ergodox_pretty(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_F4,          KC_F5,          KC_F6,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                          TO(10),         KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_F10,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_ergodox_pretty(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_F17,         KC_F18,         KC_F19,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_F14,         KC_F15,         KC_F16,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                          TO(11),         KC_TRANSPARENT, KC_F11,         KC_F12,         KC_F13,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_F20,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [11] = LAYOUT_ergodox_pretty(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_F24,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                          TO(8),          KC_TRANSPARENT, KC_F21,         KC_F22,         KC_F23,         KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [12] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_F20,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       LCTL(LSFT(KC_SCLN)),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),    TD(DANCE_5),    LCTL(LSFT(KC_SLASH)),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LM(13,MOD_LGUI),LM(13,MOD_LCTL),LM(14,MOD_LSFT),MO(14),         LM(13,MOD_LALT),DUAL_FUNC_38
  ),
  [13] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_F20,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       LCTL(LSFT(KC_SCLN)),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_6),    TD(DANCE_7),    TD(DANCE_8),    TD(DANCE_9),    LCTL(LSFT(KC_SLASH)),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_38
  ),
  [14] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_F16),   LSFT(KC_F17),   LSFT(KC_F18),   LSFT(KC_F19),   LSFT(KC_F20),   KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 LSFT(KC_LEFT),  LSFT(KC_DOWN),  LSFT(KC_UP),    LSFT(KC_RIGHT), LCTL(LSFT(KC_SCLN)),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_10),   TD(DANCE_11),   TD(DANCE_12),   TD(DANCE_13),   LCTL(LSFT(KC_SLASH)),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_UNDS,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LM(15,MOD_LGUI),LM(15,MOD_LCTL),KC_TRANSPARENT, KC_TRANSPARENT, LM(15,MOD_LALT),DUAL_FUNC_38
  ),
  [15] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_LEFT_GUI,    LSFT(KC_F17),   LSFT(KC_F18),   LSFT(KC_F19),   LSFT(KC_F20),   KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 LSFT(KC_LEFT),  LSFT(KC_DOWN),  LSFT(KC_UP),    LSFT(KC_RIGHT), LCTL(LSFT(KC_SCLN)),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_14),   TD(DANCE_15),   TD(DANCE_16),   TD(DANCE_17),   LCTL(LSFT(KC_SLASH)),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_UNDS,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_38
  ),
  [16] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_F20,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 TD(DANCE_18),   KC_DOWN,        KC_UP,          TD(DANCE_19),   LCTL(LSFT(KC_SCLN)),KC_GRAVE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_20),   TD(DANCE_21),   TD(DANCE_22),   TD(DANCE_23),   LCTL(LSFT(KC_SLASH)),KC_TRANSPARENT,
    LM(18,MOD_LSFT),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    OSM(MOD_LGUI),  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LM(17,MOD_LCTL),LM(17,MOD_LALT),MO(18),         MO(18),         LM(17,MOD_LCTL),DUAL_FUNC_38
  ),
  [17] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F16,         KC_F17,         KC_F18,         KC_F19,         KC_F20,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 TD(DANCE_24),   KC_DOWN,        KC_UP,          TD(DANCE_25),   LCTL(LSFT(KC_SCLN)),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_26),   TD(DANCE_27),   TD(DANCE_28),   TD(DANCE_29),   LCTL(LSFT(KC_SLASH)),KC_TRANSPARENT,
    LM(18,MOD_LSFT),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    OSM(MOD_LGUI),  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, MO(18),         MO(18),         KC_TRANSPARENT, DUAL_FUNC_38
  ),
  [18] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_F16),   LSFT(KC_F17),   LSFT(KC_F18),   LSFT(KC_F19),   LSFT(KC_F20),   KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 TD(DANCE_30),   LSFT(KC_DOWN),  LSFT(KC_UP),    TD(DANCE_31),   LCTL(LSFT(KC_SCLN)),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_32),   TD(DANCE_33),   TD(DANCE_34),   TD(DANCE_35),   LCTL(LSFT(KC_SLASH)),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_UNDS,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    OSM(MOD_LGUI),  LSFT(KC_MS_BTN2),KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    LSFT(KC_MS_BTN1),KC_TRANSPARENT,
                                                                                    LM(19,MOD_LCTL),LM(19,MOD_LALT),KC_TRANSPARENT, KC_TRANSPARENT, LM(19,MOD_LCTL),LM(19,MOD_LGUI)
  ),
  [19] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LSFT(KC_F16),   LSFT(KC_F17),   KC_F18,         LSFT(KC_F19),   LSFT(KC_F20),   KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 TD(DANCE_36),   LSFT(KC_DOWN),  LSFT(KC_UP),    TD(DANCE_37),   LCTL(LSFT(KC_SCLN)),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_38),   TD(DANCE_39),   TD(DANCE_40),   TD(DANCE_41),   LCTL(LSFT(KC_SLASH)),KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_UNDS,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    OSM(MOD_LGUI),  LSFT(KC_MS_BTN2),KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    LSFT(KC_MS_BTN1),KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [20] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, ST_MACRO_2,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LGUI(KC_6)),KC_TRANSPARENT, KC_TRANSPARENT, RGUI(KC_F8),    KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RALT(KC_F10),   LSFT(KC_F6),    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_39,   LALT(KC_F7),    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LALT(LCTL(LSFT(KC_T))),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LSFT(KC_ENTER)),KC_TRANSPARENT
  ),
};


const uint16_t PROGMEM combo0[] = { KC_A, KC_D, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_E, KC_Q, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM combo4[] = { KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo5[] = { KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_F, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo8[] = { KC_F, KC_QUOTE, COMBO_END};
const uint16_t PROGMEM combo9[] = { KC_I, KC_J, COMBO_END};
const uint16_t PROGMEM combo10[] = { KC_D, KC_V, COMBO_END};
const uint16_t PROGMEM combo11[] = { KC_K, KC_M, COMBO_END};
const uint16_t PROGMEM combo12[] = { KC_D, KC_K, COMBO_END};
const uint16_t PROGMEM combo13[] = { KC_W, KC_J, COMBO_END};
const uint16_t PROGMEM combo14[] = { KC_W, KC_M, COMBO_END};
const uint16_t PROGMEM combo15[] = { KC_D, KC_V, COMBO_END};
const uint16_t PROGMEM combo16[] = { KC_K, KC_M, COMBO_END};
const uint16_t PROGMEM combo17[] = { KC_E, KC_F, COMBO_END};
const uint16_t PROGMEM combo18[] = { KC_K, KC_T, COMBO_END};
const uint16_t PROGMEM combo19[] = { KC_P, KC_F, COMBO_END};
const uint16_t PROGMEM combo20[] = { KC_F, KC_M, COMBO_END};
const uint16_t PROGMEM combo21[] = { KC_J, KC_F, COMBO_END};
const uint16_t PROGMEM combo22[] = { KC_F, KC_E, KC_J, COMBO_END};
const uint16_t PROGMEM combo23[] = { KC_MINUS, KC_F, COMBO_END};
const uint16_t PROGMEM combo24[] = { KC_F, KC_K, COMBO_END};
const uint16_t PROGMEM combo25[] = { KC_COMMA, KC_DOT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_PLUS),
    COMBO(combo1, KC_EQUAL),
    COMBO(combo2, KC_LABK),
    COMBO(combo3, KC_RABK),
    COMBO(combo4, KC_AMPR),
    COMBO(combo5, KC_PIPE),
    COMBO(combo6, KC_BSLS),
    COMBO(combo7, KC_COLN),
    COMBO(combo8, KC_DQUO),
    COMBO(combo9, TT(20)),
    COMBO(combo10, OSL(7)),
    COMBO(combo11, OSL(7)),
    COMBO(combo12, LGUI(KC_SPACE)),
    COMBO(combo13, OSM(MOD_LALT)),
    COMBO(combo14, OSL(3)),
    COMBO(combo15, OSL(8)),
    COMBO(combo16, OSL(8)),
    COMBO(combo17, TG(2)),
    COMBO(combo18, TG(2)),
    COMBO(combo19, KC_PERC),
    COMBO(combo20, KC_AT),
    COMBO(combo21, ST_MACRO_0),
    COMBO(combo22, ST_MACRO_1),
    COMBO(combo23, KC_UNDS),
    COMBO(combo24, KC_AT),
    COMBO(combo25, KC_AT),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case DUAL_FUNC_0:
            return TAPPING_TERM -86;
        case MT(MOD_LCTL, KC_A):
            return TAPPING_TERM -43;
        case MT(MOD_LALT, KC_S):
            return TAPPING_TERM -43;
        case MT(MOD_LGUI, KC_D):
            return TAPPING_TERM -43;
        case MT(MOD_LSFT, KC_F):
            return TAPPING_TERM -43;
        case MT(MOD_LSFT, KC_J):
            return TAPPING_TERM -43;
        case MT(MOD_LGUI, KC_K):
            return TAPPING_TERM -43;
        case MT(MOD_RCTL, KC_SCLN):
            return TAPPING_TERM -43;
        case DUAL_FUNC_1:
            return TAPPING_TERM -86;
        default:
            return TAPPING_TERM;
    }
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS)SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT))SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL)SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT))SS_DELAY(100)  SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_F1))SS_DELAY(100)  SS_TAP(X_1));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_UNDS);
        } else {
          unregister_code16(KC_UNDS);
        }
      } else {
        if (record->event.pressed) {
          layer_on(12);
        } else {
          layer_off(12);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_UNDS);
        } else {
          unregister_code16(KC_UNDS);
        }
      } else {
        if (record->event.pressed) {
          layer_on(16);
        } else {
          layer_off(16);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_1)));
        } else {
          unregister_code16(LALT(LSFT(KC_1)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_1));
        } else {
          unregister_code16(LALT(KC_1));
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_2)));
        } else {
          unregister_code16(LALT(LSFT(KC_2)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_2));
        } else {
          unregister_code16(LALT(KC_2));
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_3)));
        } else {
          unregister_code16(LALT(LSFT(KC_3)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_3));
        } else {
          unregister_code16(LALT(KC_3));
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_4)));
        } else {
          unregister_code16(LALT(LSFT(KC_4)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_4));
        } else {
          unregister_code16(LALT(KC_4));
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_5)));
        } else {
          unregister_code16(LALT(LSFT(KC_5)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_5));
        } else {
          unregister_code16(LALT(KC_5));
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_Q)));
        } else {
          unregister_code16(LALT(LSFT(KC_Q)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_Q));
        } else {
          unregister_code16(LALT(KC_Q));
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_W)));
        } else {
          unregister_code16(LALT(LSFT(KC_W)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_W));
        } else {
          unregister_code16(LALT(KC_W));
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_E)));
        } else {
          unregister_code16(LALT(LSFT(KC_E)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_E));
        } else {
          unregister_code16(LALT(KC_E));
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_R)));
        } else {
          unregister_code16(LALT(LSFT(KC_R)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_R));
        } else {
          unregister_code16(LALT(KC_R));
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_T)));
        } else {
          unregister_code16(LALT(LSFT(KC_T)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_T));
        } else {
          unregister_code16(LALT(KC_T));
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_A)));
        } else {
          unregister_code16(LALT(LSFT(KC_A)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_A));
        } else {
          unregister_code16(LALT(KC_A));
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_S)));
        } else {
          unregister_code16(LALT(LSFT(KC_S)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_A));
        } else {
          unregister_code16(LALT(KC_A));
        }  
      }  
      return false;
    case DUAL_FUNC_14:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_D)));
        } else {
          unregister_code16(LALT(LSFT(KC_D)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_D));
        } else {
          unregister_code16(LALT(KC_D));
        }  
      }  
      return false;
    case DUAL_FUNC_15:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_F)));
        } else {
          unregister_code16(LALT(LSFT(KC_F)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_F));
        } else {
          unregister_code16(LALT(KC_F));
        }  
      }  
      return false;
    case DUAL_FUNC_16:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_G)));
        } else {
          unregister_code16(LALT(LSFT(KC_G)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_G));
        } else {
          unregister_code16(LALT(KC_G));
        }  
      }  
      return false;
    case DUAL_FUNC_17:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_Z)));
        } else {
          unregister_code16(LALT(LSFT(KC_Z)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_Z));
        } else {
          unregister_code16(LALT(KC_Z));
        }  
      }  
      return false;
    case DUAL_FUNC_18:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_X)));
        } else {
          unregister_code16(LALT(LSFT(KC_X)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_X));
        } else {
          unregister_code16(LALT(KC_X));
        }  
      }  
      return false;
    case DUAL_FUNC_19:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_C)));
        } else {
          unregister_code16(LALT(LSFT(KC_C)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_C));
        } else {
          unregister_code16(LALT(KC_C));
        }  
      }  
      return false;
    case DUAL_FUNC_20:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_V)));
        } else {
          unregister_code16(LALT(LSFT(KC_V)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_V));
        } else {
          unregister_code16(LALT(KC_V));
        }  
      }  
      return false;
    case DUAL_FUNC_21:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_B)));
        } else {
          unregister_code16(LALT(LSFT(KC_B)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_B));
        } else {
          unregister_code16(LALT(KC_B));
        }  
      }  
      return false;
    case DUAL_FUNC_22:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_6)));
        } else {
          unregister_code16(LALT(LSFT(KC_6)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_6));
        } else {
          unregister_code16(LALT(KC_6));
        }  
      }  
      return false;
    case DUAL_FUNC_23:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_7)));
        } else {
          unregister_code16(LALT(LSFT(KC_7)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_7));
        } else {
          unregister_code16(LALT(KC_7));
        }  
      }  
      return false;
    case DUAL_FUNC_24:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_8)));
        } else {
          unregister_code16(LALT(LSFT(KC_8)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_8));
        } else {
          unregister_code16(LALT(KC_8));
        }  
      }  
      return false;
    case DUAL_FUNC_25:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_9)));
        } else {
          unregister_code16(LALT(LSFT(KC_9)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_9));
        } else {
          unregister_code16(LALT(KC_9));
        }  
      }  
      return false;
    case DUAL_FUNC_26:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_0)));
        } else {
          unregister_code16(LALT(LSFT(KC_0)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_0));
        } else {
          unregister_code16(LALT(KC_0));
        }  
      }  
      return false;
    case DUAL_FUNC_27:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_Y)));
        } else {
          unregister_code16(LALT(LSFT(KC_Y)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_Y));
        } else {
          unregister_code16(LALT(KC_Y));
        }  
      }  
      return false;
    case DUAL_FUNC_28:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_U)));
        } else {
          unregister_code16(LALT(LSFT(KC_U)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_U));
        } else {
          unregister_code16(LALT(KC_U));
        }  
      }  
      return false;
    case DUAL_FUNC_29:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_I)));
        } else {
          unregister_code16(LALT(LSFT(KC_I)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_I));
        } else {
          unregister_code16(LALT(KC_I));
        }  
      }  
      return false;
    case DUAL_FUNC_30:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_O)));
        } else {
          unregister_code16(LALT(LSFT(KC_O)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_O));
        } else {
          unregister_code16(LALT(KC_O));
        }  
      }  
      return false;
    case DUAL_FUNC_31:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_P)));
        } else {
          unregister_code16(LALT(LSFT(KC_P)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_P));
        } else {
          unregister_code16(LALT(KC_P));
        }  
      }  
      return false;
    case DUAL_FUNC_32:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_H)));
        } else {
          unregister_code16(LALT(LSFT(KC_H)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_H));
        } else {
          unregister_code16(LALT(KC_H));
        }  
      }  
      return false;
    case DUAL_FUNC_33:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_J)));
        } else {
          unregister_code16(LALT(LSFT(KC_J)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_J));
        } else {
          unregister_code16(LALT(KC_J));
        }  
      }  
      return false;
    case DUAL_FUNC_34:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_K)));
        } else {
          unregister_code16(LALT(LSFT(KC_K)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_K));
        } else {
          unregister_code16(LALT(KC_K));
        }  
      }  
      return false;
    case DUAL_FUNC_35:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_L)));
        } else {
          unregister_code16(LALT(LSFT(KC_L)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_L));
        } else {
          unregister_code16(LALT(KC_L));
        }  
      }  
      return false;
    case DUAL_FUNC_36:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_N)));
        } else {
          unregister_code16(LALT(LSFT(KC_N)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_N));
        } else {
          unregister_code16(LALT(KC_N));
        }  
      }  
      return false;
    case DUAL_FUNC_37:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LSFT(KC_M)));
        } else {
          unregister_code16(LALT(LSFT(KC_M)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(LALT(KC_N));
        } else {
          unregister_code16(LALT(KC_N));
        }  
      }  
      return false;
    case DUAL_FUNC_38:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_MS_BTN1);
        } else {
          unregister_code16(KC_MS_BTN1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MS_BTN2);
        } else {
          unregister_code16(KC_MS_BTN2);
        }  
      }  
      return false;
    case DUAL_FUNC_39:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LALT(LGUI(KC_B)));
        } else {
          unregister_code16(LALT(LGUI(KC_B)));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RIGHT_ALT);
        } else {
          unregister_code16(KC_RIGHT_ALT);
        }  
      }  
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {
    uint8_t layer = biton32(state);
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();
  switch (layer) {
    case 1:
      ergodox_right_led_1_on();
      break;
    case 2:
      ergodox_right_led_2_on();
      break;
    case 3:
      ergodox_right_led_3_on();
      break;
    case 4:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      break;
    case 5:
      ergodox_right_led_1_on();
      ergodox_right_led_3_on();
      break;
    case 6:
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    case 7:
      ergodox_right_led_1_on();
      ergodox_right_led_2_on();
      ergodox_right_led_3_on();
      break;
    default:
      break;
  }
  return state;
};


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[42];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_G);
        tap_code16(KC_G);
        tap_code16(KC_G);
    }
    if(state->count > 3) {
        tap_code16(KC_G);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_G); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_G)); break;
        case DOUBLE_TAP: register_code16(KC_G); register_code16(KC_G); break;
        case DOUBLE_HOLD: register_code16(LGUI(KC_UP)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_G); register_code16(KC_G);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_G); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_G)); break;
        case DOUBLE_TAP: unregister_code16(KC_G); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(KC_UP)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_G); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(LSFT(KC_SLASH)));
        tap_code16(LCTL(LSFT(KC_SLASH)));
        tap_code16(LCTL(LSFT(KC_SLASH)));
    }
    if(state->count > 3) {
        tap_code16(LCTL(LSFT(KC_SLASH)));
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(LCTL(LSFT(KC_SLASH))); break;
        case DOUBLE_TAP: register_code16(LCTL(LGUI(KC_SPACE))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(LSFT(KC_SLASH))); register_code16(LCTL(LSFT(KC_SLASH)));
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_SLASH))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LGUI(KC_SPACE))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_SLASH))); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_LEFT);
        tap_code16(KC_MS_LEFT);
        tap_code16(KC_MS_LEFT);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_LEFT);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_MS_LEFT); break;
        case SINGLE_HOLD: register_code16(KC_MS_LEFT); break;
        case DOUBLE_TAP: register_code16(KC_MS_LEFT); register_code16(KC_MS_LEFT); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_RIGHT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_LEFT); register_code16(KC_MS_LEFT);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_LEFT); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_LEFT); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_LEFT); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_RIGHT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_LEFT); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_DOWN);
        tap_code16(KC_MS_DOWN);
        tap_code16(KC_MS_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_DOWN);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_MS_DOWN); break;
        case SINGLE_HOLD: register_code16(KC_MS_DOWN); break;
        case DOUBLE_TAP: register_code16(KC_MS_DOWN); register_code16(KC_MS_DOWN); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_UP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_DOWN); register_code16(KC_MS_DOWN);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_DOWN); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_DOWN); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_DOWN); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_UP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_DOWN); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_UP);
        tap_code16(KC_MS_UP);
        tap_code16(KC_MS_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_UP);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_MS_UP); break;
        case SINGLE_HOLD: register_code16(KC_MS_UP); break;
        case DOUBLE_TAP: register_code16(KC_MS_UP); register_code16(KC_MS_UP); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_DOWN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_UP); register_code16(KC_MS_UP);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_UP); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_UP); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_UP); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_DOWN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_UP); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_RIGHT);
        tap_code16(KC_MS_RIGHT);
        tap_code16(KC_MS_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_RIGHT);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_MS_RIGHT); break;
        case SINGLE_HOLD: register_code16(KC_MS_RIGHT); break;
        case DOUBLE_TAP: register_code16(KC_MS_RIGHT); register_code16(KC_MS_RIGHT); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_LEFT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_RIGHT); register_code16(KC_MS_RIGHT);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_RIGHT); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_RIGHT); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_RIGHT); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_LEFT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_RIGHT); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_LEFT);
        tap_code16(KC_MS_LEFT);
        tap_code16(KC_MS_LEFT);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_LEFT);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_MS_LEFT); break;
        case SINGLE_HOLD: register_code16(KC_MS_LEFT); break;
        case DOUBLE_TAP: register_code16(KC_MS_LEFT); register_code16(KC_MS_LEFT); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_RIGHT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_LEFT); register_code16(KC_MS_LEFT);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_LEFT); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_LEFT); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_LEFT); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_RIGHT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_LEFT); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_DOWN);
        tap_code16(KC_MS_DOWN);
        tap_code16(KC_MS_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_DOWN);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_MS_DOWN); break;
        case SINGLE_HOLD: register_code16(KC_MS_DOWN); break;
        case DOUBLE_TAP: register_code16(KC_MS_DOWN); register_code16(KC_MS_DOWN); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_UP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_DOWN); register_code16(KC_MS_DOWN);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_DOWN); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_DOWN); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_DOWN); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_UP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_DOWN); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_UP);
        tap_code16(KC_MS_UP);
        tap_code16(KC_MS_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_UP);
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_MS_UP); break;
        case SINGLE_HOLD: register_code16(KC_MS_UP); break;
        case DOUBLE_TAP: register_code16(KC_MS_UP); register_code16(KC_MS_UP); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_DOWN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_UP); register_code16(KC_MS_UP);
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_UP); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_UP); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_UP); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_DOWN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_UP); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_RIGHT);
        tap_code16(KC_MS_RIGHT);
        tap_code16(KC_MS_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_RIGHT);
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_MS_RIGHT); break;
        case SINGLE_HOLD: register_code16(KC_MS_RIGHT); break;
        case DOUBLE_TAP: register_code16(KC_MS_RIGHT); register_code16(KC_MS_RIGHT); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_LEFT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_RIGHT); register_code16(KC_MS_RIGHT);
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_RIGHT); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_RIGHT); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_RIGHT); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_LEFT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_RIGHT); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_LEFT));
        tap_code16(LSFT(KC_MS_LEFT));
        tap_code16(LSFT(KC_MS_LEFT));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_LEFT));
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_LEFT)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_LEFT)); register_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_LEFT)); register_code16(LSFT(KC_MS_LEFT));
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_DOWN));
        tap_code16(LSFT(KC_MS_DOWN));
        tap_code16(LSFT(KC_MS_DOWN));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_DOWN));
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_DOWN)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_DOWN)); register_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_UP)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_DOWN)); register_code16(LSFT(KC_MS_DOWN));
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_UP)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_UP));
    }
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP));
    }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_RIGHT));
        tap_code16(LSFT(KC_MS_RIGHT));
        tap_code16(LSFT(KC_MS_RIGHT));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_RIGHT));
    }
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_RIGHT)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_RIGHT)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_RIGHT)); register_code16(LSFT(KC_MS_RIGHT)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_LEFT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_RIGHT)); register_code16(LSFT(KC_MS_RIGHT));
    }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_RIGHT)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_RIGHT)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_RIGHT)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_LEFT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_RIGHT)); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(tap_dance_state_t *state, void *user_data);
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void on_dance_14(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_LEFT));
        tap_code16(LSFT(KC_MS_LEFT));
        tap_code16(LSFT(KC_MS_LEFT));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_LEFT));
    }
}

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_LEFT)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_LEFT)); register_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_LEFT)); register_code16(LSFT(KC_MS_LEFT));
    }
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(tap_dance_state_t *state, void *user_data);
void dance_15_finished(tap_dance_state_t *state, void *user_data);
void dance_15_reset(tap_dance_state_t *state, void *user_data);

void on_dance_15(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_DOWN));
        tap_code16(LSFT(KC_MS_DOWN));
        tap_code16(LSFT(KC_MS_DOWN));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_DOWN));
    }
}

void dance_15_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_DOWN)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_DOWN)); register_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_UP)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_DOWN)); register_code16(LSFT(KC_MS_DOWN));
    }
}

void dance_15_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_UP)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(tap_dance_state_t *state, void *user_data);
void dance_16_finished(tap_dance_state_t *state, void *user_data);
void dance_16_reset(tap_dance_state_t *state, void *user_data);

void on_dance_16(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_UP));
    }
}

void dance_16_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP));
    }
}

void dance_16_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(tap_dance_state_t *state, void *user_data);
void dance_17_finished(tap_dance_state_t *state, void *user_data);
void dance_17_reset(tap_dance_state_t *state, void *user_data);

void on_dance_17(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_RIGHT));
        tap_code16(LSFT(KC_MS_RIGHT));
        tap_code16(LSFT(KC_MS_RIGHT));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_RIGHT));
    }
}

void dance_17_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_RIGHT)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_RIGHT)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_RIGHT)); register_code16(LSFT(KC_MS_RIGHT)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_LEFT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_RIGHT)); register_code16(LSFT(KC_MS_RIGHT));
    }
}

void dance_17_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_RIGHT)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_RIGHT)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_RIGHT)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_LEFT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_RIGHT)); break;
    }
    dance_state[17].step = 0;
}
void on_dance_18(tap_dance_state_t *state, void *user_data);
void dance_18_finished(tap_dance_state_t *state, void *user_data);
void dance_18_reset(tap_dance_state_t *state, void *user_data);

void on_dance_18(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
    }
    if(state->count > 3) {
        tap_code16(KC_LEFT);
    }
}

void dance_18_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[18].step = dance_step(state);
    switch (dance_state[18].step) {
        case SINGLE_TAP: register_code16(KC_LEFT); break;
        case DOUBLE_TAP: register_code16(KC_HOME); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT); register_code16(KC_LEFT);
    }
}

void dance_18_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[18].step) {
        case SINGLE_TAP: unregister_code16(KC_LEFT); break;
        case DOUBLE_TAP: unregister_code16(KC_HOME); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LEFT); break;
    }
    dance_state[18].step = 0;
}
void on_dance_19(tap_dance_state_t *state, void *user_data);
void dance_19_finished(tap_dance_state_t *state, void *user_data);
void dance_19_reset(tap_dance_state_t *state, void *user_data);

void on_dance_19(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_RIGHT);
    }
}

void dance_19_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[19].step = dance_step(state);
    switch (dance_state[19].step) {
        case SINGLE_TAP: register_code16(KC_RIGHT); break;
        case DOUBLE_TAP: register_code16(KC_END); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RIGHT); register_code16(KC_RIGHT);
    }
}

void dance_19_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[19].step) {
        case SINGLE_TAP: unregister_code16(KC_RIGHT); break;
        case DOUBLE_TAP: unregister_code16(KC_END); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RIGHT); break;
    }
    dance_state[19].step = 0;
}
void on_dance_20(tap_dance_state_t *state, void *user_data);
void dance_20_finished(tap_dance_state_t *state, void *user_data);
void dance_20_reset(tap_dance_state_t *state, void *user_data);

void on_dance_20(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_LEFT);
        tap_code16(KC_MS_LEFT);
        tap_code16(KC_MS_LEFT);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_LEFT);
    }
}

void dance_20_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[20].step = dance_step(state);
    switch (dance_state[20].step) {
        case SINGLE_TAP: register_code16(KC_MS_LEFT); break;
        case SINGLE_HOLD: register_code16(KC_MS_LEFT); break;
        case DOUBLE_TAP: register_code16(KC_MS_LEFT); register_code16(KC_MS_LEFT); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_RIGHT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_LEFT); register_code16(KC_MS_LEFT);
    }
}

void dance_20_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[20].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_LEFT); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_LEFT); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_LEFT); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_RIGHT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_LEFT); break;
    }
    dance_state[20].step = 0;
}
void on_dance_21(tap_dance_state_t *state, void *user_data);
void dance_21_finished(tap_dance_state_t *state, void *user_data);
void dance_21_reset(tap_dance_state_t *state, void *user_data);

void on_dance_21(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_DOWN);
        tap_code16(KC_MS_DOWN);
        tap_code16(KC_MS_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_DOWN);
    }
}

void dance_21_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[21].step = dance_step(state);
    switch (dance_state[21].step) {
        case SINGLE_TAP: register_code16(KC_MS_DOWN); break;
        case SINGLE_HOLD: register_code16(KC_MS_DOWN); break;
        case DOUBLE_TAP: register_code16(KC_MS_DOWN); register_code16(KC_MS_DOWN); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_UP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_DOWN); register_code16(KC_MS_DOWN);
    }
}

void dance_21_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[21].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_DOWN); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_DOWN); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_DOWN); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_UP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_DOWN); break;
    }
    dance_state[21].step = 0;
}
void on_dance_22(tap_dance_state_t *state, void *user_data);
void dance_22_finished(tap_dance_state_t *state, void *user_data);
void dance_22_reset(tap_dance_state_t *state, void *user_data);

void on_dance_22(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_UP);
        tap_code16(KC_MS_UP);
        tap_code16(KC_MS_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_UP);
    }
}

void dance_22_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[22].step = dance_step(state);
    switch (dance_state[22].step) {
        case SINGLE_TAP: register_code16(KC_MS_UP); break;
        case SINGLE_HOLD: register_code16(KC_MS_UP); break;
        case DOUBLE_TAP: register_code16(KC_MS_UP); register_code16(KC_MS_UP); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_DOWN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_UP); register_code16(KC_MS_UP);
    }
}

void dance_22_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[22].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_UP); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_UP); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_UP); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_DOWN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_UP); break;
    }
    dance_state[22].step = 0;
}
void on_dance_23(tap_dance_state_t *state, void *user_data);
void dance_23_finished(tap_dance_state_t *state, void *user_data);
void dance_23_reset(tap_dance_state_t *state, void *user_data);

void on_dance_23(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_RIGHT);
        tap_code16(KC_MS_RIGHT);
        tap_code16(KC_MS_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_RIGHT);
    }
}

void dance_23_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[23].step = dance_step(state);
    switch (dance_state[23].step) {
        case SINGLE_TAP: register_code16(KC_MS_RIGHT); break;
        case SINGLE_HOLD: register_code16(KC_MS_RIGHT); break;
        case DOUBLE_TAP: register_code16(KC_MS_RIGHT); register_code16(KC_MS_RIGHT); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_LEFT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_RIGHT); register_code16(KC_MS_RIGHT);
    }
}

void dance_23_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[23].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_RIGHT); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_RIGHT); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_RIGHT); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_LEFT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_RIGHT); break;
    }
    dance_state[23].step = 0;
}
void on_dance_24(tap_dance_state_t *state, void *user_data);
void dance_24_finished(tap_dance_state_t *state, void *user_data);
void dance_24_reset(tap_dance_state_t *state, void *user_data);

void on_dance_24(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
    }
    if(state->count > 3) {
        tap_code16(KC_LEFT);
    }
}

void dance_24_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[24].step = dance_step(state);
    switch (dance_state[24].step) {
        case SINGLE_TAP: register_code16(KC_LEFT); break;
        case DOUBLE_TAP: register_code16(KC_HOME); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT); register_code16(KC_LEFT);
    }
}

void dance_24_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[24].step) {
        case SINGLE_TAP: unregister_code16(KC_LEFT); break;
        case DOUBLE_TAP: unregister_code16(KC_HOME); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LEFT); break;
    }
    dance_state[24].step = 0;
}
void on_dance_25(tap_dance_state_t *state, void *user_data);
void dance_25_finished(tap_dance_state_t *state, void *user_data);
void dance_25_reset(tap_dance_state_t *state, void *user_data);

void on_dance_25(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_RIGHT);
    }
}

void dance_25_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[25].step = dance_step(state);
    switch (dance_state[25].step) {
        case SINGLE_TAP: register_code16(KC_RIGHT); break;
        case DOUBLE_TAP: register_code16(KC_END); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RIGHT); register_code16(KC_RIGHT);
    }
}

void dance_25_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[25].step) {
        case SINGLE_TAP: unregister_code16(KC_RIGHT); break;
        case DOUBLE_TAP: unregister_code16(KC_END); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RIGHT); break;
    }
    dance_state[25].step = 0;
}
void on_dance_26(tap_dance_state_t *state, void *user_data);
void dance_26_finished(tap_dance_state_t *state, void *user_data);
void dance_26_reset(tap_dance_state_t *state, void *user_data);

void on_dance_26(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_LEFT);
        tap_code16(KC_MS_LEFT);
        tap_code16(KC_MS_LEFT);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_LEFT);
    }
}

void dance_26_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[26].step = dance_step(state);
    switch (dance_state[26].step) {
        case SINGLE_TAP: register_code16(KC_MS_LEFT); break;
        case SINGLE_HOLD: register_code16(KC_MS_LEFT); break;
        case DOUBLE_TAP: register_code16(KC_MS_LEFT); register_code16(KC_MS_LEFT); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_RIGHT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_LEFT); register_code16(KC_MS_LEFT);
    }
}

void dance_26_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[26].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_LEFT); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_LEFT); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_LEFT); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_RIGHT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_LEFT); break;
    }
    dance_state[26].step = 0;
}
void on_dance_27(tap_dance_state_t *state, void *user_data);
void dance_27_finished(tap_dance_state_t *state, void *user_data);
void dance_27_reset(tap_dance_state_t *state, void *user_data);

void on_dance_27(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_DOWN);
        tap_code16(KC_MS_DOWN);
        tap_code16(KC_MS_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_DOWN);
    }
}

void dance_27_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[27].step = dance_step(state);
    switch (dance_state[27].step) {
        case SINGLE_TAP: register_code16(KC_MS_DOWN); break;
        case SINGLE_HOLD: register_code16(KC_MS_DOWN); break;
        case DOUBLE_TAP: register_code16(KC_MS_DOWN); register_code16(KC_MS_DOWN); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_UP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_DOWN); register_code16(KC_MS_DOWN);
    }
}

void dance_27_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[27].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_DOWN); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_DOWN); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_DOWN); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_UP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_DOWN); break;
    }
    dance_state[27].step = 0;
}
void on_dance_28(tap_dance_state_t *state, void *user_data);
void dance_28_finished(tap_dance_state_t *state, void *user_data);
void dance_28_reset(tap_dance_state_t *state, void *user_data);

void on_dance_28(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_UP);
        tap_code16(KC_MS_UP);
        tap_code16(KC_MS_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_UP);
    }
}

void dance_28_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[28].step = dance_step(state);
    switch (dance_state[28].step) {
        case SINGLE_TAP: register_code16(KC_MS_UP); break;
        case SINGLE_HOLD: register_code16(KC_MS_UP); break;
        case DOUBLE_TAP: register_code16(KC_MS_UP); register_code16(KC_MS_UP); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_DOWN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_UP); register_code16(KC_MS_UP);
    }
}

void dance_28_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[28].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_UP); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_UP); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_UP); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_DOWN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_UP); break;
    }
    dance_state[28].step = 0;
}
void on_dance_29(tap_dance_state_t *state, void *user_data);
void dance_29_finished(tap_dance_state_t *state, void *user_data);
void dance_29_reset(tap_dance_state_t *state, void *user_data);

void on_dance_29(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_RIGHT);
        tap_code16(KC_MS_RIGHT);
        tap_code16(KC_MS_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_RIGHT);
    }
}

void dance_29_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[29].step = dance_step(state);
    switch (dance_state[29].step) {
        case SINGLE_TAP: register_code16(KC_MS_RIGHT); break;
        case SINGLE_HOLD: register_code16(KC_MS_RIGHT); break;
        case DOUBLE_TAP: register_code16(KC_MS_RIGHT); register_code16(KC_MS_RIGHT); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_LEFT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_RIGHT); register_code16(KC_MS_RIGHT);
    }
}

void dance_29_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[29].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_RIGHT); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_RIGHT); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_RIGHT); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_LEFT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_RIGHT); break;
    }
    dance_state[29].step = 0;
}
void on_dance_30(tap_dance_state_t *state, void *user_data);
void dance_30_finished(tap_dance_state_t *state, void *user_data);
void dance_30_reset(tap_dance_state_t *state, void *user_data);

void on_dance_30(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_LEFT));
        tap_code16(LSFT(KC_LEFT));
        tap_code16(LSFT(KC_LEFT));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_LEFT));
    }
}

void dance_30_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[30].step = dance_step(state);
    switch (dance_state[30].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_LEFT)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_HOME)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_LEFT)); register_code16(LSFT(KC_LEFT));
    }
}

void dance_30_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[30].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_LEFT)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_HOME)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_LEFT)); break;
    }
    dance_state[30].step = 0;
}
void on_dance_31(tap_dance_state_t *state, void *user_data);
void dance_31_finished(tap_dance_state_t *state, void *user_data);
void dance_31_reset(tap_dance_state_t *state, void *user_data);

void on_dance_31(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_RIGHT));
        tap_code16(LSFT(KC_RIGHT));
        tap_code16(LSFT(KC_RIGHT));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_RIGHT));
    }
}

void dance_31_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[31].step = dance_step(state);
    switch (dance_state[31].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_RIGHT)); break;
        case DOUBLE_TAP: register_code16(RSFT(KC_END)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_RIGHT)); register_code16(LSFT(KC_RIGHT));
    }
}

void dance_31_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[31].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_RIGHT)); break;
        case DOUBLE_TAP: unregister_code16(RSFT(KC_END)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_RIGHT)); break;
    }
    dance_state[31].step = 0;
}
void on_dance_32(tap_dance_state_t *state, void *user_data);
void dance_32_finished(tap_dance_state_t *state, void *user_data);
void dance_32_reset(tap_dance_state_t *state, void *user_data);

void on_dance_32(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_LEFT));
        tap_code16(LSFT(KC_MS_LEFT));
        tap_code16(LSFT(KC_MS_LEFT));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_LEFT));
    }
}

void dance_32_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[32].step = dance_step(state);
    switch (dance_state[32].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_LEFT)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_LEFT)); register_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_LEFT)); register_code16(LSFT(KC_MS_LEFT));
    }
}

void dance_32_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[32].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
    }
    dance_state[32].step = 0;
}
void on_dance_33(tap_dance_state_t *state, void *user_data);
void dance_33_finished(tap_dance_state_t *state, void *user_data);
void dance_33_reset(tap_dance_state_t *state, void *user_data);

void on_dance_33(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_DOWN));
        tap_code16(LSFT(KC_MS_DOWN));
        tap_code16(LSFT(KC_MS_DOWN));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_DOWN));
    }
}

void dance_33_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[33].step = dance_step(state);
    switch (dance_state[33].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_DOWN)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_DOWN)); register_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_UP)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_DOWN)); register_code16(LSFT(KC_MS_DOWN));
    }
}

void dance_33_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[33].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_UP)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
    }
    dance_state[33].step = 0;
}
void on_dance_34(tap_dance_state_t *state, void *user_data);
void dance_34_finished(tap_dance_state_t *state, void *user_data);
void dance_34_reset(tap_dance_state_t *state, void *user_data);

void on_dance_34(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_UP));
    }
}

void dance_34_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[34].step = dance_step(state);
    switch (dance_state[34].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP));
    }
}

void dance_34_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[34].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
    }
    dance_state[34].step = 0;
}
void on_dance_35(tap_dance_state_t *state, void *user_data);
void dance_35_finished(tap_dance_state_t *state, void *user_data);
void dance_35_reset(tap_dance_state_t *state, void *user_data);

void on_dance_35(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_UP));
    }
}

void dance_35_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[35].step = dance_step(state);
    switch (dance_state[35].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP));
    }
}

void dance_35_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[35].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
    }
    dance_state[35].step = 0;
}
void on_dance_36(tap_dance_state_t *state, void *user_data);
void dance_36_finished(tap_dance_state_t *state, void *user_data);
void dance_36_reset(tap_dance_state_t *state, void *user_data);

void on_dance_36(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_LEFT));
        tap_code16(LSFT(KC_LEFT));
        tap_code16(LSFT(KC_LEFT));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_LEFT));
    }
}

void dance_36_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[36].step = dance_step(state);
    switch (dance_state[36].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_LEFT)); break;
        case DOUBLE_TAP: register_code16(RSFT(KC_HOME)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_LEFT)); register_code16(LSFT(KC_LEFT));
    }
}

void dance_36_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[36].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_LEFT)); break;
        case DOUBLE_TAP: unregister_code16(RSFT(KC_HOME)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_LEFT)); break;
    }
    dance_state[36].step = 0;
}
void on_dance_37(tap_dance_state_t *state, void *user_data);
void dance_37_finished(tap_dance_state_t *state, void *user_data);
void dance_37_reset(tap_dance_state_t *state, void *user_data);

void on_dance_37(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_RIGHT));
        tap_code16(LSFT(KC_RIGHT));
        tap_code16(LSFT(KC_RIGHT));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_RIGHT));
    }
}

void dance_37_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[37].step = dance_step(state);
    switch (dance_state[37].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_RIGHT)); break;
        case DOUBLE_TAP: register_code16(RSFT(KC_END)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_RIGHT)); register_code16(LSFT(KC_RIGHT));
    }
}

void dance_37_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[37].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_RIGHT)); break;
        case DOUBLE_TAP: unregister_code16(RSFT(KC_END)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_RIGHT)); break;
    }
    dance_state[37].step = 0;
}
void on_dance_38(tap_dance_state_t *state, void *user_data);
void dance_38_finished(tap_dance_state_t *state, void *user_data);
void dance_38_reset(tap_dance_state_t *state, void *user_data);

void on_dance_38(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_LEFT));
        tap_code16(LSFT(KC_MS_LEFT));
        tap_code16(LSFT(KC_MS_LEFT));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_LEFT));
    }
}

void dance_38_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[38].step = dance_step(state);
    switch (dance_state[38].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_LEFT)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_LEFT)); register_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_LEFT)); register_code16(LSFT(KC_MS_LEFT));
    }
}

void dance_38_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[38].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
    }
    dance_state[38].step = 0;
}
void on_dance_39(tap_dance_state_t *state, void *user_data);
void dance_39_finished(tap_dance_state_t *state, void *user_data);
void dance_39_reset(tap_dance_state_t *state, void *user_data);

void on_dance_39(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_DOWN));
        tap_code16(LSFT(KC_MS_DOWN));
        tap_code16(LSFT(KC_MS_DOWN));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_DOWN));
    }
}

void dance_39_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[39].step = dance_step(state);
    switch (dance_state[39].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_DOWN)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_DOWN)); register_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_UP)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_DOWN)); register_code16(LSFT(KC_MS_DOWN));
    }
}

void dance_39_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[39].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_UP)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
    }
    dance_state[39].step = 0;
}
void on_dance_40(tap_dance_state_t *state, void *user_data);
void dance_40_finished(tap_dance_state_t *state, void *user_data);
void dance_40_reset(tap_dance_state_t *state, void *user_data);

void on_dance_40(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_UP));
    }
}

void dance_40_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[40].step = dance_step(state);
    switch (dance_state[40].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP));
    }
}

void dance_40_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[40].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
    }
    dance_state[40].step = 0;
}
void on_dance_41(tap_dance_state_t *state, void *user_data);
void dance_41_finished(tap_dance_state_t *state, void *user_data);
void dance_41_reset(tap_dance_state_t *state, void *user_data);

void on_dance_41(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_UP));
    }
}

void dance_41_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[41].step = dance_step(state);
    switch (dance_state[41].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP));
    }
}

void dance_41_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[41].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
    }
    dance_state[41].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
        [DANCE_18] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_18, dance_18_finished, dance_18_reset),
        [DANCE_19] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_19, dance_19_finished, dance_19_reset),
        [DANCE_20] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_20, dance_20_finished, dance_20_reset),
        [DANCE_21] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_21, dance_21_finished, dance_21_reset),
        [DANCE_22] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_22, dance_22_finished, dance_22_reset),
        [DANCE_23] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_23, dance_23_finished, dance_23_reset),
        [DANCE_24] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_24, dance_24_finished, dance_24_reset),
        [DANCE_25] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_25, dance_25_finished, dance_25_reset),
        [DANCE_26] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_26, dance_26_finished, dance_26_reset),
        [DANCE_27] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_27, dance_27_finished, dance_27_reset),
        [DANCE_28] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_28, dance_28_finished, dance_28_reset),
        [DANCE_29] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_29, dance_29_finished, dance_29_reset),
        [DANCE_30] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_30, dance_30_finished, dance_30_reset),
        [DANCE_31] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_31, dance_31_finished, dance_31_reset),
        [DANCE_32] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_32, dance_32_finished, dance_32_reset),
        [DANCE_33] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_33, dance_33_finished, dance_33_reset),
        [DANCE_34] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_34, dance_34_finished, dance_34_reset),
        [DANCE_35] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_35, dance_35_finished, dance_35_reset),
        [DANCE_36] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_36, dance_36_finished, dance_36_reset),
        [DANCE_37] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_37, dance_37_finished, dance_37_reset),
        [DANCE_38] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_38, dance_38_finished, dance_38_reset),
        [DANCE_39] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_39, dance_39_finished, dance_39_reset),
        [DANCE_40] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_40, dance_40_finished, dance_40_reset),
        [DANCE_41] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_41, dance_41_finished, dance_41_reset),
};
