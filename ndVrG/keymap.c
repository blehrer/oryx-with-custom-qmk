#include QMK_KEYBOARD_H
#include "version.h"

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
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
  DANCE_42,
  DANCE_43,
  DANCE_44,
  DANCE_45,
  DANCE_46,
  DANCE_47,
  DANCE_48,
  DANCE_49,
  DANCE_50,
  DANCE_51,
  DANCE_52,
  DANCE_53,
  DANCE_54,
  DANCE_55,
  DANCE_56,
  DANCE_57,
  DANCE_58,
  DANCE_59,
  DANCE_60,
  DANCE_61,
  DANCE_62,
  DANCE_63,
  DANCE_64,
  DANCE_65,
  DANCE_66,
  DANCE_67,
  DANCE_68,
  DANCE_69,
  DANCE_70,
  DANCE_71,
  DANCE_72,
  DANCE_73,
  DANCE_74,
  DANCE_75,
  DANCE_76,
  DANCE_77,
  DANCE_78,
  DANCE_79,
  DANCE_80,
  DANCE_81,
  DANCE_82,
  DANCE_83,
  DANCE_84,
  DANCE_85,
  DANCE_86,
  DANCE_87,
  DANCE_88,
  DANCE_89,
  DANCE_90,
  DANCE_91,
  DANCE_92,
  DANCE_93,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TD(DANCE_0),                                    AS_TOGG,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           AS_TOGG,
    LT(3,KC_TAB),   KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           LGUI(KC_LBRC),                                  RGUI(KC_RBRC),  KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           OSL(3),
    KC_GRAVE,       KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,
    KC_LBRC,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           OSL(5),                                         OSL(5),         KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RBRC,
    MO(12),         LGUI(LSFT(KC_5)),OSM(MOD_MEH),   OSM(MOD_MEH),   MO(10),                                                                                                         KC_MINUS,       OSM(MOD_MEH),   OSM(MOD_MEH),   OSM(MOD_MEH),   CW_TOGG,
                                                                                                    OSM(MOD_RALT),  KC_PAGE_UP,     KC_PAGE_UP,     OSM(MOD_HYPR),
                                                                                                                    KC_PGDN,        KC_PGDN,
                                                                                    MT(MOD_LGUI, KC_BSPC),MT(MOD_LCTL, KC_DELETE),KC_LEFT_SHIFT,  KC_RIGHT_SHIFT, MT(MOD_RALT, KC_ENTER),MT(MOD_RGUI, KC_SPACE)
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_1),                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, MT(MOD_RALT, KC_A),MT(MOD_LCTL, KC_S),MT(MOD_LGUI, KC_D),MT(MOD_LSFT, KC_F),KC_TRANSPARENT,                                                                 KC_TRANSPARENT, MT(MOD_LSFT, KC_J),MT(MOD_LGUI, KC_K),MT(MOD_LCTL, KC_L),MT(MOD_RALT, KC_SCLN),KC_TRANSPARENT,
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
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_V,           KC_TRANSPARENT, OSL(6),                                         OSL(6),         KC_TRANSPARENT, KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT,
    LM(16,MOD_LSFT),KC_PSCR,        KC_TRANSPARENT, KC_TRANSPARENT, MO(14),                                                                                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    OSM(MOD_LGUI),  KC_PAGE_UP,     KC_PAGE_UP,     KC_TRANSPARENT,
                                                                                                                    KC_PGDN,        KC_PGDN,
                                                                                    MT(MOD_LCTL, KC_BSPC),MT(MOD_RALT, KC_DELETE),KC_LEFT_SHIFT,  KC_RIGHT_SHIFT, MT(MOD_LSFT | MOD_RCTL, KC_ENTER),MT(MOD_RGUI, KC_SPACE)
  ),
  [3] = LAYOUT_ergodox_pretty(
    TO(0),          LALT(KC_1),     LALT(KC_2),     LALT(KC_3),     LALT(KC_4),     LALT(KC_5),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(KC_6),     LALT(KC_7),     LALT(KC_8),     LALT(KC_9),     LALT(KC_0),     OSM(MOD_LSFT),
    KC_TRANSPARENT, LALT(KC_Q),     LALT(KC_W),     LALT(KC_E),     LALT(KC_R),     LALT(KC_T),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(KC_Y),     LALT(KC_U),     LALT(KC_I),     LALT(KC_O),     LALT(KC_P),     LALT(KC_TAB),
    KC_TRANSPARENT, LALT(KC_A),     LALT(KC_S),     LALT(KC_D),     LALT(KC_F),     LALT(KC_G),                                                                     LALT(KC_H),     LALT(KC_J),     LALT(KC_K),     LALT(KC_L),     KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, LALT(KC_Z),     LALT(KC_X),     LALT(KC_C),     LALT(KC_V),     LALT(KC_B),     KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(KC_N),     LALT(KC_J),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_ergodox_pretty(
    TO(0),          TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),    TD(DANCE_5),    TD(DANCE_6),    KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_22),   TD(DANCE_23),   TD(DANCE_24),   TD(DANCE_25),   TD(DANCE_26),   KC_TRANSPARENT,
    KC_TRANSPARENT, TD(DANCE_7),    TD(DANCE_8),    TD(DANCE_9),    TD(DANCE_10),   TD(DANCE_11),   KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_27),   TD(DANCE_28),   TD(DANCE_29),   TD(DANCE_30),   TD(DANCE_31),   KC_TRANSPARENT,
    KC_TRANSPARENT, TD(DANCE_12),   TD(DANCE_13),   TD(DANCE_14),   TD(DANCE_15),   TD(DANCE_16),                                                                   TD(DANCE_32),   TD(DANCE_33),   TD(DANCE_34),   TD(DANCE_35),   KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, TD(DANCE_17),   TD(DANCE_18),   TD(DANCE_19),   TD(DANCE_20),   TD(DANCE_21),   KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_36),   TD(DANCE_37),   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_ergodox_pretty(
    TO(0),          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_TILD,        LGUI(LSFT(KC_LBRC)),                                LGUI(LSFT(KC_RBRC)),TD(DANCE_38),   TD(DANCE_39),   TD(DANCE_40),   ST_MACRO_0,     ST_MACRO_1,     KC_F12,
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_UNDS,                                                                        TD(DANCE_41),   TD(DANCE_42),   TD(DANCE_43),   KC_F16,         KC_F13,         KC_TRANSPARENT,
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_TILD,        TO(0),                                          OSL(7),         TD(DANCE_44),   TD(DANCE_45),   TD(DANCE_46),   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_AMPR,        KC_ASTR,        KC_LABK,        KC_RABK,                                                                                                        KC_0,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_AUDIO_VOL_UP,KC_TRANSPARENT,
                                                                                                                    KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_DOWN,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_ergodox_pretty(
    TO(2),          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_TILD,        RCTL(KC_PAGE_UP),                                LCTL(KC_PGDN),  KC_7,           KC_8,           KC_9,           ST_MACRO_2,     ST_MACRO_3,     KC_F12,
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_UNDS,                                                                        KC_4,           KC_5,           KC_6,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_TILD,        TO(2),                                          OSL(7),         KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_AMPR,        KC_ASTR,        KC_LABK,        KC_RABK,                                                                                                        KC_0,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    OSM(MOD_LGUI),  KC_AUDIO_VOL_UP,KC_AUDIO_VOL_UP,KC_TRANSPARENT,
                                                                                                                    KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_DOWN,
                                                                                    MT(MOD_LCTL, KC_BSPC),MT(MOD_RALT, KC_DELETE),KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_RCTL, KC_ENTER),MT(MOD_RGUI, KC_SPACE)
  ),
  [7] = LAYOUT_ergodox_pretty(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          ST_MACRO_4,     ST_MACRO_5,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_F4,          KC_F5,          KC_F6,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                          TO(8),          KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_F10,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_ergodox_pretty(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F17,         KC_F18,         KC_F19,         ST_MACRO_6,     ST_MACRO_7,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_F14,         KC_F15,         KC_F16,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                          TO(9),          KC_F11,         KC_F12,         KC_F13,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_F20,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_ergodox_pretty(
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_8,     ST_MACRO_9,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_F24,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),                                          TO(6),          KC_F21,         KC_F22,         KC_F23,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_47),   TD(DANCE_48),   TD(DANCE_49),   TD(DANCE_50),   KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LM(11,MOD_LGUI),LM(11,MOD_LALT),LM(12,MOD_LSFT),MO(12),         LM(11,MOD_LALT),TD(DANCE_51)
  ),
  [11] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_52),   TD(DANCE_53),   TD(DANCE_54),   TD(DANCE_55),   KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_56)
  ),
  [12] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 LSFT(KC_LEFT),  LSFT(KC_DOWN),  LSFT(KC_UP),    LSFT(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_57),   TD(DANCE_58),   TD(DANCE_59),   TD(DANCE_60),   KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LM(13,MOD_LGUI),LM(13,MOD_LALT),KC_TRANSPARENT, KC_TRANSPARENT, LM(13,MOD_LALT),TD(DANCE_61)
  ),
  [13] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 LSFT(KC_LEFT),  LSFT(KC_DOWN),  LSFT(KC_UP),    LSFT(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_62),   TD(DANCE_63),   TD(DANCE_64),   TD(DANCE_65),   KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_66)
  ),
  [14] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 TD(DANCE_67),   KC_DOWN,        KC_UP,          TD(DANCE_68),   KC_TRANSPARENT, KC_GRAVE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_69),   TD(DANCE_70),   TD(DANCE_71),   TD(DANCE_72),   KC_TRANSPARENT, KC_TRANSPARENT,
    LM(16,MOD_LSFT),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    OSM(MOD_LGUI),  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    LM(15,MOD_LCTL),LM(15,MOD_LALT),MO(16),         MO(16),         LM(15,MOD_LCTL),TD(DANCE_73)
  ),
  [15] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 TD(DANCE_74),   KC_DOWN,        KC_UP,          TD(DANCE_75),   KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_76),   TD(DANCE_77),   TD(DANCE_78),   TD(DANCE_79),   KC_TRANSPARENT, KC_TRANSPARENT,
    LM(16,MOD_LSFT),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    OSM(MOD_LGUI),  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, MO(16),         MO(16),         KC_TRANSPARENT, TD(DANCE_80)
  ),
  [16] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 TD(DANCE_81),   LSFT(KC_DOWN),  LSFT(KC_UP),    TD(DANCE_82),   KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_83),   TD(DANCE_84),   TD(DANCE_85),   TD(DANCE_86),   KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    OSM(MOD_LGUI),  LSFT(KC_MS_BTN2),KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    LSFT(KC_MS_BTN1),KC_TRANSPARENT,
                                                                                    LM(17,MOD_LCTL),LM(17,MOD_LALT),KC_TRANSPARENT, KC_TRANSPARENT, LM(17,MOD_LCTL),LM(17,MOD_LGUI)
  ),
  [17] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 TD(DANCE_87),   LSFT(KC_DOWN),  LSFT(KC_UP),    TD(DANCE_88),   KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, TD(DANCE_89),   TD(DANCE_90),   TD(DANCE_91),   TD(DANCE_92),   KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    OSM(MOD_LGUI),  LSFT(KC_MS_BTN2),KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    LSFT(KC_MS_BTN1),KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [18] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, ST_MACRO_10,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LALT(LGUI(KC_6)),KC_TRANSPARENT, KC_TRANSPARENT, RGUI(KC_F8),    KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RALT(KC_F10),   LSFT(KC_F6),    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_93),   LALT(KC_F7),    KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
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
    COMBO(combo9, TT(18)),
    COMBO(combo10, OSL(5)),
    COMBO(combo11, OSL(5)),
    COMBO(combo12, LGUI(KC_SPACE)),
    COMBO(combo13, OSM(MOD_LALT)),
    COMBO(combo14, OSL(3)),
    COMBO(combo15, OSL(6)),
    COMBO(combo16, OSL(6)),
    COMBO(combo17, TG(2)),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS) SS_DELAY(100) SS_LSFT(SS_TAP(X_DOT)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_F1)) SS_DELAY(100) SS_TAP(X_1));
    }
    break;

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

static tap dance_state[94];

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


void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case DOUBLE_TAP: layer_move(1); break;
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
    }
    dance_state[0].step = 0;
}
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case DOUBLE_TAP: layer_move(0); break;
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_1)));
        tap_code16(LALT(LSFT(KC_1)));
        tap_code16(LALT(LSFT(KC_1)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_1)));
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_1))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_1)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_1))); register_code16(LALT(LSFT(KC_1))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_1))); register_code16(LALT(LSFT(KC_1)));
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_1))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_1)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_1))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_1))); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_2)));
        tap_code16(LALT(LSFT(KC_2)));
        tap_code16(LALT(LSFT(KC_2)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_2)));
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_2))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_2)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_2))); register_code16(LALT(LSFT(KC_2))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_2))); register_code16(LALT(LSFT(KC_2)));
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_2))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_2)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_2))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_2))); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_3)));
        tap_code16(LALT(LSFT(KC_3)));
        tap_code16(LALT(LSFT(KC_3)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_3)));
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_3))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_3)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_3))); register_code16(LALT(LSFT(KC_3))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_3))); register_code16(LALT(LSFT(KC_3)));
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_3))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_3)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_3))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_3))); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_4)));
        tap_code16(LALT(LSFT(KC_4)));
        tap_code16(LALT(LSFT(KC_4)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_4)));
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_4))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_4)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_4))); register_code16(LALT(LSFT(KC_4))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_4))); register_code16(LALT(LSFT(KC_4)));
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_4))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_4)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_4))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_4))); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_5)));
        tap_code16(LALT(LSFT(KC_5)));
        tap_code16(LALT(LSFT(KC_5)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_5)));
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_5))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_5)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_5))); register_code16(LALT(LSFT(KC_5))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_5))); register_code16(LALT(LSFT(KC_5)));
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_5))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_5)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_5))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_5))); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_Q)));
        tap_code16(LALT(LSFT(KC_Q)));
        tap_code16(LALT(LSFT(KC_Q)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_Q)));
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_Q))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_Q)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_Q))); register_code16(LALT(LSFT(KC_Q))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_Q))); register_code16(LALT(LSFT(KC_Q)));
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_Q))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_Q)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_Q))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_Q))); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_W)));
        tap_code16(LALT(LSFT(KC_W)));
        tap_code16(LALT(LSFT(KC_W)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_W)));
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_W))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_W)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_W))); register_code16(LALT(LSFT(KC_W))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_W))); register_code16(LALT(LSFT(KC_W)));
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_W))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_W)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_W))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_W))); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_E)));
        tap_code16(LALT(LSFT(KC_E)));
        tap_code16(LALT(LSFT(KC_E)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_E)));
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_E))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_E)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_E))); register_code16(LALT(LSFT(KC_E))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_E))); register_code16(LALT(LSFT(KC_E)));
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_E))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_E)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_E))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_E))); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_R)));
        tap_code16(LALT(LSFT(KC_R)));
        tap_code16(LALT(LSFT(KC_R)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_R)));
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_R))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_R)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_R))); register_code16(LALT(LSFT(KC_R))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_R))); register_code16(LALT(LSFT(KC_R)));
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_R))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_R)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_R))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_R))); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_T)));
        tap_code16(LALT(LSFT(KC_T)));
        tap_code16(LALT(LSFT(KC_T)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_T)));
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_T))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_T)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_T))); register_code16(LALT(LSFT(KC_T))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_T))); register_code16(LALT(LSFT(KC_T)));
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_T))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_T)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_T))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_T))); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_A)));
        tap_code16(LALT(LSFT(KC_A)));
        tap_code16(LALT(LSFT(KC_A)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_A)));
    }
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_A))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_A)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_A))); register_code16(LALT(LSFT(KC_A))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_A))); register_code16(LALT(LSFT(KC_A)));
    }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_A))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_A)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_A))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_A))); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_S)));
        tap_code16(LALT(LSFT(KC_S)));
        tap_code16(LALT(LSFT(KC_S)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_S)));
    }
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_S))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_A)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_S))); register_code16(LALT(LSFT(KC_S))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_S))); register_code16(LALT(LSFT(KC_S)));
    }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_S))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_A)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_S))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_S))); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(tap_dance_state_t *state, void *user_data);
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void on_dance_14(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_D)));
        tap_code16(LALT(LSFT(KC_D)));
        tap_code16(LALT(LSFT(KC_D)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_D)));
    }
}

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_D))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_D)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_D))); register_code16(LALT(LSFT(KC_D))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_D))); register_code16(LALT(LSFT(KC_D)));
    }
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_D))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_D)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_D))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_D))); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(tap_dance_state_t *state, void *user_data);
void dance_15_finished(tap_dance_state_t *state, void *user_data);
void dance_15_reset(tap_dance_state_t *state, void *user_data);

void on_dance_15(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_F)));
        tap_code16(LALT(LSFT(KC_F)));
        tap_code16(LALT(LSFT(KC_F)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_F)));
    }
}

void dance_15_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_F))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_F)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_F))); register_code16(LALT(LSFT(KC_F))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_F))); register_code16(LALT(LSFT(KC_F)));
    }
}

void dance_15_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_F))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_F)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_F))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_F))); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(tap_dance_state_t *state, void *user_data);
void dance_16_finished(tap_dance_state_t *state, void *user_data);
void dance_16_reset(tap_dance_state_t *state, void *user_data);

void on_dance_16(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_G)));
        tap_code16(LALT(LSFT(KC_G)));
        tap_code16(LALT(LSFT(KC_G)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_G)));
    }
}

void dance_16_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_G))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_G)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_G))); register_code16(LALT(LSFT(KC_G))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_G))); register_code16(LALT(LSFT(KC_G)));
    }
}

void dance_16_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_G))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_G)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_G))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_G))); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(tap_dance_state_t *state, void *user_data);
void dance_17_finished(tap_dance_state_t *state, void *user_data);
void dance_17_reset(tap_dance_state_t *state, void *user_data);

void on_dance_17(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_Z)));
        tap_code16(LALT(LSFT(KC_Z)));
        tap_code16(LALT(LSFT(KC_Z)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_Z)));
    }
}

void dance_17_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_Z))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_Z)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_Z))); register_code16(LALT(LSFT(KC_Z))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_Z))); register_code16(LALT(LSFT(KC_Z)));
    }
}

void dance_17_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_Z))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_Z)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_Z))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_Z))); break;
    }
    dance_state[17].step = 0;
}
void on_dance_18(tap_dance_state_t *state, void *user_data);
void dance_18_finished(tap_dance_state_t *state, void *user_data);
void dance_18_reset(tap_dance_state_t *state, void *user_data);

void on_dance_18(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_X)));
        tap_code16(LALT(LSFT(KC_X)));
        tap_code16(LALT(LSFT(KC_X)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_X)));
    }
}

void dance_18_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[18].step = dance_step(state);
    switch (dance_state[18].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_X))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_X)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_X))); register_code16(LALT(LSFT(KC_X))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_X))); register_code16(LALT(LSFT(KC_X)));
    }
}

void dance_18_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[18].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_X))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_X)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_X))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_X))); break;
    }
    dance_state[18].step = 0;
}
void on_dance_19(tap_dance_state_t *state, void *user_data);
void dance_19_finished(tap_dance_state_t *state, void *user_data);
void dance_19_reset(tap_dance_state_t *state, void *user_data);

void on_dance_19(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_C)));
        tap_code16(LALT(LSFT(KC_C)));
        tap_code16(LALT(LSFT(KC_C)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_C)));
    }
}

void dance_19_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[19].step = dance_step(state);
    switch (dance_state[19].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_C))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_C)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_C))); register_code16(LALT(LSFT(KC_C))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_C))); register_code16(LALT(LSFT(KC_C)));
    }
}

void dance_19_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[19].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_C))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_C)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_C))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_C))); break;
    }
    dance_state[19].step = 0;
}
void on_dance_20(tap_dance_state_t *state, void *user_data);
void dance_20_finished(tap_dance_state_t *state, void *user_data);
void dance_20_reset(tap_dance_state_t *state, void *user_data);

void on_dance_20(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_V)));
        tap_code16(LALT(LSFT(KC_V)));
        tap_code16(LALT(LSFT(KC_V)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_V)));
    }
}

void dance_20_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[20].step = dance_step(state);
    switch (dance_state[20].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_V))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_V)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_V))); register_code16(LALT(LSFT(KC_V))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_V))); register_code16(LALT(LSFT(KC_V)));
    }
}

void dance_20_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[20].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_V))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_V))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_V))); break;
    }
    dance_state[20].step = 0;
}
void on_dance_21(tap_dance_state_t *state, void *user_data);
void dance_21_finished(tap_dance_state_t *state, void *user_data);
void dance_21_reset(tap_dance_state_t *state, void *user_data);

void on_dance_21(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_B)));
        tap_code16(LALT(LSFT(KC_B)));
        tap_code16(LALT(LSFT(KC_B)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_B)));
    }
}

void dance_21_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[21].step = dance_step(state);
    switch (dance_state[21].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_B))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_B)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_B))); register_code16(LALT(LSFT(KC_B))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_B))); register_code16(LALT(LSFT(KC_B)));
    }
}

void dance_21_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[21].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_B))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_B)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_B))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_B))); break;
    }
    dance_state[21].step = 0;
}
void on_dance_22(tap_dance_state_t *state, void *user_data);
void dance_22_finished(tap_dance_state_t *state, void *user_data);
void dance_22_reset(tap_dance_state_t *state, void *user_data);

void on_dance_22(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_6)));
        tap_code16(LALT(LSFT(KC_6)));
        tap_code16(LALT(LSFT(KC_6)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_6)));
    }
}

void dance_22_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[22].step = dance_step(state);
    switch (dance_state[22].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_6))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_6)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_6))); register_code16(LALT(LSFT(KC_6))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_6))); register_code16(LALT(LSFT(KC_6)));
    }
}

void dance_22_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[22].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_6))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_6)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_6))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_6))); break;
    }
    dance_state[22].step = 0;
}
void on_dance_23(tap_dance_state_t *state, void *user_data);
void dance_23_finished(tap_dance_state_t *state, void *user_data);
void dance_23_reset(tap_dance_state_t *state, void *user_data);

void on_dance_23(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_7)));
        tap_code16(LALT(LSFT(KC_7)));
        tap_code16(LALT(LSFT(KC_7)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_7)));
    }
}

void dance_23_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[23].step = dance_step(state);
    switch (dance_state[23].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_7))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_7)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_7))); register_code16(LALT(LSFT(KC_7))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_7))); register_code16(LALT(LSFT(KC_7)));
    }
}

void dance_23_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[23].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_7))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_7)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_7))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_7))); break;
    }
    dance_state[23].step = 0;
}
void on_dance_24(tap_dance_state_t *state, void *user_data);
void dance_24_finished(tap_dance_state_t *state, void *user_data);
void dance_24_reset(tap_dance_state_t *state, void *user_data);

void on_dance_24(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_8)));
        tap_code16(LALT(LSFT(KC_8)));
        tap_code16(LALT(LSFT(KC_8)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_8)));
    }
}

void dance_24_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[24].step = dance_step(state);
    switch (dance_state[24].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_8))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_8)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_8))); register_code16(LALT(LSFT(KC_8))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_8))); register_code16(LALT(LSFT(KC_8)));
    }
}

void dance_24_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[24].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_8))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_8)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_8))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_8))); break;
    }
    dance_state[24].step = 0;
}
void on_dance_25(tap_dance_state_t *state, void *user_data);
void dance_25_finished(tap_dance_state_t *state, void *user_data);
void dance_25_reset(tap_dance_state_t *state, void *user_data);

void on_dance_25(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_9)));
        tap_code16(LALT(LSFT(KC_9)));
        tap_code16(LALT(LSFT(KC_9)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_9)));
    }
}

void dance_25_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[25].step = dance_step(state);
    switch (dance_state[25].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_9))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_9)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_9))); register_code16(LALT(LSFT(KC_9))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_9))); register_code16(LALT(LSFT(KC_9)));
    }
}

void dance_25_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[25].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_9))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_9)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_9))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_9))); break;
    }
    dance_state[25].step = 0;
}
void on_dance_26(tap_dance_state_t *state, void *user_data);
void dance_26_finished(tap_dance_state_t *state, void *user_data);
void dance_26_reset(tap_dance_state_t *state, void *user_data);

void on_dance_26(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_0)));
        tap_code16(LALT(LSFT(KC_0)));
        tap_code16(LALT(LSFT(KC_0)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_0)));
    }
}

void dance_26_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[26].step = dance_step(state);
    switch (dance_state[26].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_0))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_0)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_0))); register_code16(LALT(LSFT(KC_0))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_0))); register_code16(LALT(LSFT(KC_0)));
    }
}

void dance_26_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[26].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_0))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_0)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_0))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_0))); break;
    }
    dance_state[26].step = 0;
}
void on_dance_27(tap_dance_state_t *state, void *user_data);
void dance_27_finished(tap_dance_state_t *state, void *user_data);
void dance_27_reset(tap_dance_state_t *state, void *user_data);

void on_dance_27(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_Y)));
        tap_code16(LALT(LSFT(KC_Y)));
        tap_code16(LALT(LSFT(KC_Y)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_Y)));
    }
}

void dance_27_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[27].step = dance_step(state);
    switch (dance_state[27].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_Y))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_Y)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_Y))); register_code16(LALT(LSFT(KC_Y))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_Y))); register_code16(LALT(LSFT(KC_Y)));
    }
}

void dance_27_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[27].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_Y))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_Y)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_Y))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_Y))); break;
    }
    dance_state[27].step = 0;
}
void on_dance_28(tap_dance_state_t *state, void *user_data);
void dance_28_finished(tap_dance_state_t *state, void *user_data);
void dance_28_reset(tap_dance_state_t *state, void *user_data);

void on_dance_28(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_U)));
        tap_code16(LALT(LSFT(KC_U)));
        tap_code16(LALT(LSFT(KC_U)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_U)));
    }
}

void dance_28_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[28].step = dance_step(state);
    switch (dance_state[28].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_U))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_U)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_U))); register_code16(LALT(LSFT(KC_U))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_U))); register_code16(LALT(LSFT(KC_U)));
    }
}

void dance_28_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[28].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_U))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_U)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_U))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_U))); break;
    }
    dance_state[28].step = 0;
}
void on_dance_29(tap_dance_state_t *state, void *user_data);
void dance_29_finished(tap_dance_state_t *state, void *user_data);
void dance_29_reset(tap_dance_state_t *state, void *user_data);

void on_dance_29(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_I)));
        tap_code16(LALT(LSFT(KC_I)));
        tap_code16(LALT(LSFT(KC_I)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_I)));
    }
}

void dance_29_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[29].step = dance_step(state);
    switch (dance_state[29].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_I))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_I)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_I))); register_code16(LALT(LSFT(KC_I))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_I))); register_code16(LALT(LSFT(KC_I)));
    }
}

void dance_29_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[29].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_I))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_I)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_I))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_I))); break;
    }
    dance_state[29].step = 0;
}
void on_dance_30(tap_dance_state_t *state, void *user_data);
void dance_30_finished(tap_dance_state_t *state, void *user_data);
void dance_30_reset(tap_dance_state_t *state, void *user_data);

void on_dance_30(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_O)));
        tap_code16(LALT(LSFT(KC_O)));
        tap_code16(LALT(LSFT(KC_O)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_O)));
    }
}

void dance_30_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[30].step = dance_step(state);
    switch (dance_state[30].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_O))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_O)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_O))); register_code16(LALT(LSFT(KC_O))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_O))); register_code16(LALT(LSFT(KC_O)));
    }
}

void dance_30_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[30].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_O))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_O)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_O))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_O))); break;
    }
    dance_state[30].step = 0;
}
void on_dance_31(tap_dance_state_t *state, void *user_data);
void dance_31_finished(tap_dance_state_t *state, void *user_data);
void dance_31_reset(tap_dance_state_t *state, void *user_data);

void on_dance_31(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_P)));
        tap_code16(LALT(LSFT(KC_P)));
        tap_code16(LALT(LSFT(KC_P)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_P)));
    }
}

void dance_31_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[31].step = dance_step(state);
    switch (dance_state[31].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_P))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_P)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_P))); register_code16(LALT(LSFT(KC_P))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_P))); register_code16(LALT(LSFT(KC_P)));
    }
}

void dance_31_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[31].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_P))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_P)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_P))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_P))); break;
    }
    dance_state[31].step = 0;
}
void on_dance_32(tap_dance_state_t *state, void *user_data);
void dance_32_finished(tap_dance_state_t *state, void *user_data);
void dance_32_reset(tap_dance_state_t *state, void *user_data);

void on_dance_32(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_H)));
        tap_code16(LALT(LSFT(KC_H)));
        tap_code16(LALT(LSFT(KC_H)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_H)));
    }
}

void dance_32_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[32].step = dance_step(state);
    switch (dance_state[32].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_H))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_H)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_H))); register_code16(LALT(LSFT(KC_H))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_H))); register_code16(LALT(LSFT(KC_H)));
    }
}

void dance_32_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[32].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_H))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_H)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_H))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_H))); break;
    }
    dance_state[32].step = 0;
}
void on_dance_33(tap_dance_state_t *state, void *user_data);
void dance_33_finished(tap_dance_state_t *state, void *user_data);
void dance_33_reset(tap_dance_state_t *state, void *user_data);

void on_dance_33(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_J)));
        tap_code16(LALT(LSFT(KC_J)));
        tap_code16(LALT(LSFT(KC_J)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_J)));
    }
}

void dance_33_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[33].step = dance_step(state);
    switch (dance_state[33].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_J))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_J)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_J))); register_code16(LALT(LSFT(KC_J))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_J))); register_code16(LALT(LSFT(KC_J)));
    }
}

void dance_33_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[33].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_J))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_J)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_J))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_J))); break;
    }
    dance_state[33].step = 0;
}
void on_dance_34(tap_dance_state_t *state, void *user_data);
void dance_34_finished(tap_dance_state_t *state, void *user_data);
void dance_34_reset(tap_dance_state_t *state, void *user_data);

void on_dance_34(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_K)));
        tap_code16(LALT(LSFT(KC_K)));
        tap_code16(LALT(LSFT(KC_K)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_K)));
    }
}

void dance_34_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[34].step = dance_step(state);
    switch (dance_state[34].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_K))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_K)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_K))); register_code16(LALT(LSFT(KC_K))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_K))); register_code16(LALT(LSFT(KC_K)));
    }
}

void dance_34_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[34].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_K))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_K)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_K))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_K))); break;
    }
    dance_state[34].step = 0;
}
void on_dance_35(tap_dance_state_t *state, void *user_data);
void dance_35_finished(tap_dance_state_t *state, void *user_data);
void dance_35_reset(tap_dance_state_t *state, void *user_data);

void on_dance_35(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_L)));
        tap_code16(LALT(LSFT(KC_L)));
        tap_code16(LALT(LSFT(KC_L)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_L)));
    }
}

void dance_35_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[35].step = dance_step(state);
    switch (dance_state[35].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_L))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_L)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_L))); register_code16(LALT(LSFT(KC_L))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_L))); register_code16(LALT(LSFT(KC_L)));
    }
}

void dance_35_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[35].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_L))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_L)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_L))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_L))); break;
    }
    dance_state[35].step = 0;
}
void on_dance_36(tap_dance_state_t *state, void *user_data);
void dance_36_finished(tap_dance_state_t *state, void *user_data);
void dance_36_reset(tap_dance_state_t *state, void *user_data);

void on_dance_36(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_N)));
        tap_code16(LALT(LSFT(KC_N)));
        tap_code16(LALT(LSFT(KC_N)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_N)));
    }
}

void dance_36_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[36].step = dance_step(state);
    switch (dance_state[36].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_N))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_N)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_N))); register_code16(LALT(LSFT(KC_N))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_N))); register_code16(LALT(LSFT(KC_N)));
    }
}

void dance_36_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[36].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_N))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_N)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_N))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_N))); break;
    }
    dance_state[36].step = 0;
}
void on_dance_37(tap_dance_state_t *state, void *user_data);
void dance_37_finished(tap_dance_state_t *state, void *user_data);
void dance_37_reset(tap_dance_state_t *state, void *user_data);

void on_dance_37(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_M)));
        tap_code16(LALT(LSFT(KC_M)));
        tap_code16(LALT(LSFT(KC_M)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_M)));
    }
}

void dance_37_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[37].step = dance_step(state);
    switch (dance_state[37].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_M))); break;
        case SINGLE_HOLD: register_code16(LALT(KC_N)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_M))); register_code16(LALT(LSFT(KC_M))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_M))); register_code16(LALT(LSFT(KC_M)));
    }
}

void dance_37_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[37].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_M))); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_N)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_M))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_M))); break;
    }
    dance_state[37].step = 0;
}
void on_dance_38(tap_dance_state_t *state, void *user_data);
void dance_38_finished(tap_dance_state_t *state, void *user_data);
void dance_38_reset(tap_dance_state_t *state, void *user_data);

void on_dance_38(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_7);
        tap_code16(KC_7);
        tap_code16(KC_7);
    }
    if(state->count > 3) {
        tap_code16(KC_7);
    }
}

void dance_38_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[38].step = dance_step(state);
    switch (dance_state[38].step) {
        case SINGLE_TAP: register_code16(KC_7); break;
        case SINGLE_HOLD: register_code16(KC_F7); break;
        case DOUBLE_TAP: register_code16(KC_7); register_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_7); register_code16(KC_7);
    }
}

void dance_38_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[38].step) {
        case SINGLE_TAP: unregister_code16(KC_7); break;
        case SINGLE_HOLD: unregister_code16(KC_F7); break;
        case DOUBLE_TAP: unregister_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_7); break;
    }
    dance_state[38].step = 0;
}
void on_dance_39(tap_dance_state_t *state, void *user_data);
void dance_39_finished(tap_dance_state_t *state, void *user_data);
void dance_39_reset(tap_dance_state_t *state, void *user_data);

void on_dance_39(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_8);
        tap_code16(KC_8);
        tap_code16(KC_8);
    }
    if(state->count > 3) {
        tap_code16(KC_8);
    }
}

void dance_39_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[39].step = dance_step(state);
    switch (dance_state[39].step) {
        case SINGLE_TAP: register_code16(KC_8); break;
        case SINGLE_HOLD: register_code16(KC_F8); break;
        case DOUBLE_TAP: register_code16(KC_8); register_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_8); register_code16(KC_8);
    }
}

void dance_39_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[39].step) {
        case SINGLE_TAP: unregister_code16(KC_8); break;
        case SINGLE_HOLD: unregister_code16(KC_F8); break;
        case DOUBLE_TAP: unregister_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_8); break;
    }
    dance_state[39].step = 0;
}
void on_dance_40(tap_dance_state_t *state, void *user_data);
void dance_40_finished(tap_dance_state_t *state, void *user_data);
void dance_40_reset(tap_dance_state_t *state, void *user_data);

void on_dance_40(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_9);
        tap_code16(KC_9);
        tap_code16(KC_9);
    }
    if(state->count > 3) {
        tap_code16(KC_9);
    }
}

void dance_40_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[40].step = dance_step(state);
    switch (dance_state[40].step) {
        case SINGLE_TAP: register_code16(KC_9); break;
        case SINGLE_HOLD: register_code16(KC_F9); break;
        case DOUBLE_TAP: register_code16(KC_9); register_code16(KC_9); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_9); register_code16(KC_9);
    }
}

void dance_40_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[40].step) {
        case SINGLE_TAP: unregister_code16(KC_9); break;
        case SINGLE_HOLD: unregister_code16(KC_F9); break;
        case DOUBLE_TAP: unregister_code16(KC_9); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_9); break;
    }
    dance_state[40].step = 0;
}
void on_dance_41(tap_dance_state_t *state, void *user_data);
void dance_41_finished(tap_dance_state_t *state, void *user_data);
void dance_41_reset(tap_dance_state_t *state, void *user_data);

void on_dance_41(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_4);
        tap_code16(KC_4);
        tap_code16(KC_4);
    }
    if(state->count > 3) {
        tap_code16(KC_4);
    }
}

void dance_41_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[41].step = dance_step(state);
    switch (dance_state[41].step) {
        case SINGLE_TAP: register_code16(KC_4); break;
        case SINGLE_HOLD: register_code16(KC_F4); break;
        case DOUBLE_TAP: register_code16(KC_4); register_code16(KC_4); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_4); register_code16(KC_4);
    }
}

void dance_41_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[41].step) {
        case SINGLE_TAP: unregister_code16(KC_4); break;
        case SINGLE_HOLD: unregister_code16(KC_F4); break;
        case DOUBLE_TAP: unregister_code16(KC_4); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_4); break;
    }
    dance_state[41].step = 0;
}
void on_dance_42(tap_dance_state_t *state, void *user_data);
void dance_42_finished(tap_dance_state_t *state, void *user_data);
void dance_42_reset(tap_dance_state_t *state, void *user_data);

void on_dance_42(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_5);
        tap_code16(KC_5);
        tap_code16(KC_5);
    }
    if(state->count > 3) {
        tap_code16(KC_5);
    }
}

void dance_42_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[42].step = dance_step(state);
    switch (dance_state[42].step) {
        case SINGLE_TAP: register_code16(KC_5); break;
        case SINGLE_HOLD: register_code16(KC_F5); break;
        case DOUBLE_TAP: register_code16(KC_5); register_code16(KC_5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_5); register_code16(KC_5);
    }
}

void dance_42_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[42].step) {
        case SINGLE_TAP: unregister_code16(KC_5); break;
        case SINGLE_HOLD: unregister_code16(KC_F5); break;
        case DOUBLE_TAP: unregister_code16(KC_5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_5); break;
    }
    dance_state[42].step = 0;
}
void on_dance_43(tap_dance_state_t *state, void *user_data);
void dance_43_finished(tap_dance_state_t *state, void *user_data);
void dance_43_reset(tap_dance_state_t *state, void *user_data);

void on_dance_43(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_6);
        tap_code16(KC_6);
        tap_code16(KC_6);
    }
    if(state->count > 3) {
        tap_code16(KC_6);
    }
}

void dance_43_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[43].step = dance_step(state);
    switch (dance_state[43].step) {
        case SINGLE_TAP: register_code16(KC_6); break;
        case SINGLE_HOLD: register_code16(KC_F6); break;
        case DOUBLE_TAP: register_code16(KC_6); register_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_6); register_code16(KC_6);
    }
}

void dance_43_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[43].step) {
        case SINGLE_TAP: unregister_code16(KC_6); break;
        case SINGLE_HOLD: unregister_code16(KC_F6); break;
        case DOUBLE_TAP: unregister_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_6); break;
    }
    dance_state[43].step = 0;
}
void on_dance_44(tap_dance_state_t *state, void *user_data);
void dance_44_finished(tap_dance_state_t *state, void *user_data);
void dance_44_reset(tap_dance_state_t *state, void *user_data);

void on_dance_44(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_1);
        tap_code16(KC_1);
        tap_code16(KC_1);
    }
    if(state->count > 3) {
        tap_code16(KC_1);
    }
}

void dance_44_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[44].step = dance_step(state);
    switch (dance_state[44].step) {
        case SINGLE_TAP: register_code16(KC_1); break;
        case SINGLE_HOLD: register_code16(KC_F1); break;
        case DOUBLE_TAP: register_code16(KC_1); register_code16(KC_1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_1); register_code16(KC_1);
    }
}

void dance_44_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[44].step) {
        case SINGLE_TAP: unregister_code16(KC_1); break;
        case SINGLE_HOLD: unregister_code16(KC_F1); break;
        case DOUBLE_TAP: unregister_code16(KC_1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_1); break;
    }
    dance_state[44].step = 0;
}
void on_dance_45(tap_dance_state_t *state, void *user_data);
void dance_45_finished(tap_dance_state_t *state, void *user_data);
void dance_45_reset(tap_dance_state_t *state, void *user_data);

void on_dance_45(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_2);
        tap_code16(KC_2);
        tap_code16(KC_2);
    }
    if(state->count > 3) {
        tap_code16(KC_2);
    }
}

void dance_45_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[45].step = dance_step(state);
    switch (dance_state[45].step) {
        case SINGLE_TAP: register_code16(KC_2); break;
        case SINGLE_HOLD: register_code16(KC_F2); break;
        case DOUBLE_TAP: register_code16(KC_2); register_code16(KC_2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_2); register_code16(KC_2);
    }
}

void dance_45_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[45].step) {
        case SINGLE_TAP: unregister_code16(KC_2); break;
        case SINGLE_HOLD: unregister_code16(KC_F2); break;
        case DOUBLE_TAP: unregister_code16(KC_2); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_2); break;
    }
    dance_state[45].step = 0;
}
void on_dance_46(tap_dance_state_t *state, void *user_data);
void dance_46_finished(tap_dance_state_t *state, void *user_data);
void dance_46_reset(tap_dance_state_t *state, void *user_data);

void on_dance_46(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_3);
        tap_code16(KC_3);
        tap_code16(KC_3);
    }
    if(state->count > 3) {
        tap_code16(KC_3);
    }
}

void dance_46_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[46].step = dance_step(state);
    switch (dance_state[46].step) {
        case SINGLE_TAP: register_code16(KC_3); break;
        case SINGLE_HOLD: register_code16(KC_F3); break;
        case DOUBLE_TAP: register_code16(KC_3); register_code16(KC_3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_3); register_code16(KC_3);
    }
}

void dance_46_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[46].step) {
        case SINGLE_TAP: unregister_code16(KC_3); break;
        case SINGLE_HOLD: unregister_code16(KC_F3); break;
        case DOUBLE_TAP: unregister_code16(KC_3); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_3); break;
    }
    dance_state[46].step = 0;
}
void on_dance_47(tap_dance_state_t *state, void *user_data);
void dance_47_finished(tap_dance_state_t *state, void *user_data);
void dance_47_reset(tap_dance_state_t *state, void *user_data);

void on_dance_47(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_LEFT);
        tap_code16(KC_MS_LEFT);
        tap_code16(KC_MS_LEFT);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_LEFT);
    }
}

void dance_47_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[47].step = dance_step(state);
    switch (dance_state[47].step) {
        case SINGLE_TAP: register_code16(KC_MS_LEFT); break;
        case SINGLE_HOLD: register_code16(KC_MS_LEFT); break;
        case DOUBLE_TAP: register_code16(KC_MS_LEFT); register_code16(KC_MS_LEFT); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_RIGHT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_LEFT); register_code16(KC_MS_LEFT);
    }
}

void dance_47_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[47].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_LEFT); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_LEFT); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_LEFT); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_RIGHT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_LEFT); break;
    }
    dance_state[47].step = 0;
}
void on_dance_48(tap_dance_state_t *state, void *user_data);
void dance_48_finished(tap_dance_state_t *state, void *user_data);
void dance_48_reset(tap_dance_state_t *state, void *user_data);

void on_dance_48(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_DOWN);
        tap_code16(KC_MS_DOWN);
        tap_code16(KC_MS_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_DOWN);
    }
}

void dance_48_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[48].step = dance_step(state);
    switch (dance_state[48].step) {
        case SINGLE_TAP: register_code16(KC_MS_DOWN); break;
        case SINGLE_HOLD: register_code16(KC_MS_DOWN); break;
        case DOUBLE_TAP: register_code16(KC_MS_DOWN); register_code16(KC_MS_DOWN); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_UP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_DOWN); register_code16(KC_MS_DOWN);
    }
}

void dance_48_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[48].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_DOWN); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_DOWN); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_DOWN); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_UP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_DOWN); break;
    }
    dance_state[48].step = 0;
}
void on_dance_49(tap_dance_state_t *state, void *user_data);
void dance_49_finished(tap_dance_state_t *state, void *user_data);
void dance_49_reset(tap_dance_state_t *state, void *user_data);

void on_dance_49(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_UP);
        tap_code16(KC_MS_UP);
        tap_code16(KC_MS_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_UP);
    }
}

void dance_49_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[49].step = dance_step(state);
    switch (dance_state[49].step) {
        case SINGLE_TAP: register_code16(KC_MS_UP); break;
        case SINGLE_HOLD: register_code16(KC_MS_UP); break;
        case DOUBLE_TAP: register_code16(KC_MS_UP); register_code16(KC_MS_UP); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_DOWN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_UP); register_code16(KC_MS_UP);
    }
}

void dance_49_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[49].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_UP); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_UP); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_UP); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_DOWN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_UP); break;
    }
    dance_state[49].step = 0;
}
void on_dance_50(tap_dance_state_t *state, void *user_data);
void dance_50_finished(tap_dance_state_t *state, void *user_data);
void dance_50_reset(tap_dance_state_t *state, void *user_data);

void on_dance_50(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_RIGHT);
        tap_code16(KC_MS_RIGHT);
        tap_code16(KC_MS_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_RIGHT);
    }
}

void dance_50_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[50].step = dance_step(state);
    switch (dance_state[50].step) {
        case SINGLE_TAP: register_code16(KC_MS_RIGHT); break;
        case SINGLE_HOLD: register_code16(KC_MS_RIGHT); break;
        case DOUBLE_TAP: register_code16(KC_MS_RIGHT); register_code16(KC_MS_RIGHT); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_LEFT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_RIGHT); register_code16(KC_MS_RIGHT);
    }
}

void dance_50_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[50].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_RIGHT); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_RIGHT); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_RIGHT); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_LEFT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_RIGHT); break;
    }
    dance_state[50].step = 0;
}
void on_dance_51(tap_dance_state_t *state, void *user_data);
void dance_51_finished(tap_dance_state_t *state, void *user_data);
void dance_51_reset(tap_dance_state_t *state, void *user_data);

void on_dance_51(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_BTN1);
        tap_code16(KC_MS_BTN1);
        tap_code16(KC_MS_BTN1);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_BTN1);
    }
}

void dance_51_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[51].step = dance_step(state);
    switch (dance_state[51].step) {
        case SINGLE_TAP: register_code16(KC_MS_BTN1); break;
        case SINGLE_HOLD: register_code16(KC_MS_BTN2); break;
        case DOUBLE_TAP: register_code16(KC_MS_BTN1); register_code16(KC_MS_BTN1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_BTN1); register_code16(KC_MS_BTN1);
    }
}

void dance_51_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[51].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_BTN1); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_BTN2); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_BTN1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_BTN1); break;
    }
    dance_state[51].step = 0;
}
void on_dance_52(tap_dance_state_t *state, void *user_data);
void dance_52_finished(tap_dance_state_t *state, void *user_data);
void dance_52_reset(tap_dance_state_t *state, void *user_data);

void on_dance_52(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_LEFT);
        tap_code16(KC_MS_LEFT);
        tap_code16(KC_MS_LEFT);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_LEFT);
    }
}

void dance_52_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[52].step = dance_step(state);
    switch (dance_state[52].step) {
        case SINGLE_TAP: register_code16(KC_MS_LEFT); break;
        case SINGLE_HOLD: register_code16(KC_MS_LEFT); break;
        case DOUBLE_TAP: register_code16(KC_MS_LEFT); register_code16(KC_MS_LEFT); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_RIGHT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_LEFT); register_code16(KC_MS_LEFT);
    }
}

void dance_52_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[52].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_LEFT); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_LEFT); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_LEFT); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_RIGHT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_LEFT); break;
    }
    dance_state[52].step = 0;
}
void on_dance_53(tap_dance_state_t *state, void *user_data);
void dance_53_finished(tap_dance_state_t *state, void *user_data);
void dance_53_reset(tap_dance_state_t *state, void *user_data);

void on_dance_53(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_DOWN);
        tap_code16(KC_MS_DOWN);
        tap_code16(KC_MS_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_DOWN);
    }
}

void dance_53_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[53].step = dance_step(state);
    switch (dance_state[53].step) {
        case SINGLE_TAP: register_code16(KC_MS_DOWN); break;
        case SINGLE_HOLD: register_code16(KC_MS_DOWN); break;
        case DOUBLE_TAP: register_code16(KC_MS_DOWN); register_code16(KC_MS_DOWN); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_UP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_DOWN); register_code16(KC_MS_DOWN);
    }
}

void dance_53_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[53].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_DOWN); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_DOWN); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_DOWN); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_UP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_DOWN); break;
    }
    dance_state[53].step = 0;
}
void on_dance_54(tap_dance_state_t *state, void *user_data);
void dance_54_finished(tap_dance_state_t *state, void *user_data);
void dance_54_reset(tap_dance_state_t *state, void *user_data);

void on_dance_54(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_UP);
        tap_code16(KC_MS_UP);
        tap_code16(KC_MS_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_UP);
    }
}

void dance_54_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[54].step = dance_step(state);
    switch (dance_state[54].step) {
        case SINGLE_TAP: register_code16(KC_MS_UP); break;
        case SINGLE_HOLD: register_code16(KC_MS_UP); break;
        case DOUBLE_TAP: register_code16(KC_MS_UP); register_code16(KC_MS_UP); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_DOWN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_UP); register_code16(KC_MS_UP);
    }
}

void dance_54_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[54].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_UP); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_UP); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_UP); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_DOWN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_UP); break;
    }
    dance_state[54].step = 0;
}
void on_dance_55(tap_dance_state_t *state, void *user_data);
void dance_55_finished(tap_dance_state_t *state, void *user_data);
void dance_55_reset(tap_dance_state_t *state, void *user_data);

void on_dance_55(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_RIGHT);
        tap_code16(KC_MS_RIGHT);
        tap_code16(KC_MS_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_RIGHT);
    }
}

void dance_55_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[55].step = dance_step(state);
    switch (dance_state[55].step) {
        case SINGLE_TAP: register_code16(KC_MS_RIGHT); break;
        case SINGLE_HOLD: register_code16(KC_MS_RIGHT); break;
        case DOUBLE_TAP: register_code16(KC_MS_RIGHT); register_code16(KC_MS_RIGHT); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_LEFT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_RIGHT); register_code16(KC_MS_RIGHT);
    }
}

void dance_55_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[55].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_RIGHT); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_RIGHT); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_RIGHT); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_LEFT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_RIGHT); break;
    }
    dance_state[55].step = 0;
}
void on_dance_56(tap_dance_state_t *state, void *user_data);
void dance_56_finished(tap_dance_state_t *state, void *user_data);
void dance_56_reset(tap_dance_state_t *state, void *user_data);

void on_dance_56(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_BTN1);
        tap_code16(KC_MS_BTN1);
        tap_code16(KC_MS_BTN1);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_BTN1);
    }
}

void dance_56_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[56].step = dance_step(state);
    switch (dance_state[56].step) {
        case SINGLE_TAP: register_code16(KC_MS_BTN1); break;
        case SINGLE_HOLD: register_code16(KC_MS_BTN2); break;
        case DOUBLE_TAP: register_code16(KC_MS_BTN1); register_code16(KC_MS_BTN1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_BTN1); register_code16(KC_MS_BTN1);
    }
}

void dance_56_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[56].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_BTN1); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_BTN2); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_BTN1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_BTN1); break;
    }
    dance_state[56].step = 0;
}
void on_dance_57(tap_dance_state_t *state, void *user_data);
void dance_57_finished(tap_dance_state_t *state, void *user_data);
void dance_57_reset(tap_dance_state_t *state, void *user_data);

void on_dance_57(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_LEFT));
        tap_code16(LSFT(KC_MS_LEFT));
        tap_code16(LSFT(KC_MS_LEFT));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_LEFT));
    }
}

void dance_57_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[57].step = dance_step(state);
    switch (dance_state[57].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_LEFT)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_LEFT)); register_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_LEFT)); register_code16(LSFT(KC_MS_LEFT));
    }
}

void dance_57_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[57].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
    }
    dance_state[57].step = 0;
}
void on_dance_58(tap_dance_state_t *state, void *user_data);
void dance_58_finished(tap_dance_state_t *state, void *user_data);
void dance_58_reset(tap_dance_state_t *state, void *user_data);

void on_dance_58(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_DOWN));
        tap_code16(LSFT(KC_MS_DOWN));
        tap_code16(LSFT(KC_MS_DOWN));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_DOWN));
    }
}

void dance_58_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[58].step = dance_step(state);
    switch (dance_state[58].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_DOWN)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_DOWN)); register_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_UP)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_DOWN)); register_code16(LSFT(KC_MS_DOWN));
    }
}

void dance_58_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[58].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_UP)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
    }
    dance_state[58].step = 0;
}
void on_dance_59(tap_dance_state_t *state, void *user_data);
void dance_59_finished(tap_dance_state_t *state, void *user_data);
void dance_59_reset(tap_dance_state_t *state, void *user_data);

void on_dance_59(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_UP));
    }
}

void dance_59_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[59].step = dance_step(state);
    switch (dance_state[59].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP));
    }
}

void dance_59_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[59].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
    }
    dance_state[59].step = 0;
}
void on_dance_60(tap_dance_state_t *state, void *user_data);
void dance_60_finished(tap_dance_state_t *state, void *user_data);
void dance_60_reset(tap_dance_state_t *state, void *user_data);

void on_dance_60(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_RIGHT));
        tap_code16(LSFT(KC_MS_RIGHT));
        tap_code16(LSFT(KC_MS_RIGHT));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_RIGHT));
    }
}

void dance_60_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[60].step = dance_step(state);
    switch (dance_state[60].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_RIGHT)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_RIGHT)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_RIGHT)); register_code16(LSFT(KC_MS_RIGHT)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_LEFT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_RIGHT)); register_code16(LSFT(KC_MS_RIGHT));
    }
}

void dance_60_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[60].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_RIGHT)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_RIGHT)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_RIGHT)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_LEFT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_RIGHT)); break;
    }
    dance_state[60].step = 0;
}
void on_dance_61(tap_dance_state_t *state, void *user_data);
void dance_61_finished(tap_dance_state_t *state, void *user_data);
void dance_61_reset(tap_dance_state_t *state, void *user_data);

void on_dance_61(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_BTN1);
        tap_code16(KC_MS_BTN1);
        tap_code16(KC_MS_BTN1);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_BTN1);
    }
}

void dance_61_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[61].step = dance_step(state);
    switch (dance_state[61].step) {
        case SINGLE_TAP: register_code16(KC_MS_BTN1); break;
        case SINGLE_HOLD: register_code16(KC_MS_BTN2); break;
        case DOUBLE_TAP: register_code16(KC_MS_BTN1); register_code16(KC_MS_BTN1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_BTN1); register_code16(KC_MS_BTN1);
    }
}

void dance_61_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[61].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_BTN1); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_BTN2); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_BTN1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_BTN1); break;
    }
    dance_state[61].step = 0;
}
void on_dance_62(tap_dance_state_t *state, void *user_data);
void dance_62_finished(tap_dance_state_t *state, void *user_data);
void dance_62_reset(tap_dance_state_t *state, void *user_data);

void on_dance_62(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_LEFT));
        tap_code16(LSFT(KC_MS_LEFT));
        tap_code16(LSFT(KC_MS_LEFT));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_LEFT));
    }
}

void dance_62_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[62].step = dance_step(state);
    switch (dance_state[62].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_LEFT)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_LEFT)); register_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_LEFT)); register_code16(LSFT(KC_MS_LEFT));
    }
}

void dance_62_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[62].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
    }
    dance_state[62].step = 0;
}
void on_dance_63(tap_dance_state_t *state, void *user_data);
void dance_63_finished(tap_dance_state_t *state, void *user_data);
void dance_63_reset(tap_dance_state_t *state, void *user_data);

void on_dance_63(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_DOWN));
        tap_code16(LSFT(KC_MS_DOWN));
        tap_code16(LSFT(KC_MS_DOWN));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_DOWN));
    }
}

void dance_63_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[63].step = dance_step(state);
    switch (dance_state[63].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_DOWN)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_DOWN)); register_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_UP)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_DOWN)); register_code16(LSFT(KC_MS_DOWN));
    }
}

void dance_63_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[63].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_UP)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
    }
    dance_state[63].step = 0;
}
void on_dance_64(tap_dance_state_t *state, void *user_data);
void dance_64_finished(tap_dance_state_t *state, void *user_data);
void dance_64_reset(tap_dance_state_t *state, void *user_data);

void on_dance_64(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_UP));
    }
}

void dance_64_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[64].step = dance_step(state);
    switch (dance_state[64].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP));
    }
}

void dance_64_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[64].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
    }
    dance_state[64].step = 0;
}
void on_dance_65(tap_dance_state_t *state, void *user_data);
void dance_65_finished(tap_dance_state_t *state, void *user_data);
void dance_65_reset(tap_dance_state_t *state, void *user_data);

void on_dance_65(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_RIGHT));
        tap_code16(LSFT(KC_MS_RIGHT));
        tap_code16(LSFT(KC_MS_RIGHT));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_RIGHT));
    }
}

void dance_65_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[65].step = dance_step(state);
    switch (dance_state[65].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_RIGHT)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_RIGHT)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_RIGHT)); register_code16(LSFT(KC_MS_RIGHT)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_LEFT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_RIGHT)); register_code16(LSFT(KC_MS_RIGHT));
    }
}

void dance_65_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[65].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_RIGHT)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_RIGHT)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_RIGHT)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_LEFT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_RIGHT)); break;
    }
    dance_state[65].step = 0;
}
void on_dance_66(tap_dance_state_t *state, void *user_data);
void dance_66_finished(tap_dance_state_t *state, void *user_data);
void dance_66_reset(tap_dance_state_t *state, void *user_data);

void on_dance_66(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_BTN1);
        tap_code16(KC_MS_BTN1);
        tap_code16(KC_MS_BTN1);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_BTN1);
    }
}

void dance_66_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[66].step = dance_step(state);
    switch (dance_state[66].step) {
        case SINGLE_TAP: register_code16(KC_MS_BTN1); break;
        case SINGLE_HOLD: register_code16(KC_MS_BTN2); break;
        case DOUBLE_TAP: register_code16(KC_MS_BTN1); register_code16(KC_MS_BTN1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_BTN1); register_code16(KC_MS_BTN1);
    }
}

void dance_66_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[66].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_BTN1); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_BTN2); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_BTN1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_BTN1); break;
    }
    dance_state[66].step = 0;
}
void on_dance_67(tap_dance_state_t *state, void *user_data);
void dance_67_finished(tap_dance_state_t *state, void *user_data);
void dance_67_reset(tap_dance_state_t *state, void *user_data);

void on_dance_67(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
    }
    if(state->count > 3) {
        tap_code16(KC_LEFT);
    }
}

void dance_67_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[67].step = dance_step(state);
    switch (dance_state[67].step) {
        case SINGLE_TAP: register_code16(KC_LEFT); break;
        case DOUBLE_TAP: register_code16(KC_HOME); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT); register_code16(KC_LEFT);
    }
}

void dance_67_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[67].step) {
        case SINGLE_TAP: unregister_code16(KC_LEFT); break;
        case DOUBLE_TAP: unregister_code16(KC_HOME); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LEFT); break;
    }
    dance_state[67].step = 0;
}
void on_dance_68(tap_dance_state_t *state, void *user_data);
void dance_68_finished(tap_dance_state_t *state, void *user_data);
void dance_68_reset(tap_dance_state_t *state, void *user_data);

void on_dance_68(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_RIGHT);
    }
}

void dance_68_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[68].step = dance_step(state);
    switch (dance_state[68].step) {
        case SINGLE_TAP: register_code16(KC_RIGHT); break;
        case DOUBLE_TAP: register_code16(KC_END); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RIGHT); register_code16(KC_RIGHT);
    }
}

void dance_68_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[68].step) {
        case SINGLE_TAP: unregister_code16(KC_RIGHT); break;
        case DOUBLE_TAP: unregister_code16(KC_END); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RIGHT); break;
    }
    dance_state[68].step = 0;
}
void on_dance_69(tap_dance_state_t *state, void *user_data);
void dance_69_finished(tap_dance_state_t *state, void *user_data);
void dance_69_reset(tap_dance_state_t *state, void *user_data);

void on_dance_69(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_LEFT);
        tap_code16(KC_MS_LEFT);
        tap_code16(KC_MS_LEFT);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_LEFT);
    }
}

void dance_69_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[69].step = dance_step(state);
    switch (dance_state[69].step) {
        case SINGLE_TAP: register_code16(KC_MS_LEFT); break;
        case SINGLE_HOLD: register_code16(KC_MS_LEFT); break;
        case DOUBLE_TAP: register_code16(KC_MS_LEFT); register_code16(KC_MS_LEFT); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_RIGHT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_LEFT); register_code16(KC_MS_LEFT);
    }
}

void dance_69_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[69].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_LEFT); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_LEFT); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_LEFT); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_RIGHT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_LEFT); break;
    }
    dance_state[69].step = 0;
}
void on_dance_70(tap_dance_state_t *state, void *user_data);
void dance_70_finished(tap_dance_state_t *state, void *user_data);
void dance_70_reset(tap_dance_state_t *state, void *user_data);

void on_dance_70(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_DOWN);
        tap_code16(KC_MS_DOWN);
        tap_code16(KC_MS_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_DOWN);
    }
}

void dance_70_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[70].step = dance_step(state);
    switch (dance_state[70].step) {
        case SINGLE_TAP: register_code16(KC_MS_DOWN); break;
        case SINGLE_HOLD: register_code16(KC_MS_DOWN); break;
        case DOUBLE_TAP: register_code16(KC_MS_DOWN); register_code16(KC_MS_DOWN); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_UP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_DOWN); register_code16(KC_MS_DOWN);
    }
}

void dance_70_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[70].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_DOWN); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_DOWN); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_DOWN); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_UP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_DOWN); break;
    }
    dance_state[70].step = 0;
}
void on_dance_71(tap_dance_state_t *state, void *user_data);
void dance_71_finished(tap_dance_state_t *state, void *user_data);
void dance_71_reset(tap_dance_state_t *state, void *user_data);

void on_dance_71(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_UP);
        tap_code16(KC_MS_UP);
        tap_code16(KC_MS_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_UP);
    }
}

void dance_71_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[71].step = dance_step(state);
    switch (dance_state[71].step) {
        case SINGLE_TAP: register_code16(KC_MS_UP); break;
        case SINGLE_HOLD: register_code16(KC_MS_UP); break;
        case DOUBLE_TAP: register_code16(KC_MS_UP); register_code16(KC_MS_UP); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_DOWN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_UP); register_code16(KC_MS_UP);
    }
}

void dance_71_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[71].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_UP); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_UP); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_UP); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_DOWN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_UP); break;
    }
    dance_state[71].step = 0;
}
void on_dance_72(tap_dance_state_t *state, void *user_data);
void dance_72_finished(tap_dance_state_t *state, void *user_data);
void dance_72_reset(tap_dance_state_t *state, void *user_data);

void on_dance_72(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_RIGHT);
        tap_code16(KC_MS_RIGHT);
        tap_code16(KC_MS_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_RIGHT);
    }
}

void dance_72_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[72].step = dance_step(state);
    switch (dance_state[72].step) {
        case SINGLE_TAP: register_code16(KC_MS_RIGHT); break;
        case SINGLE_HOLD: register_code16(KC_MS_RIGHT); break;
        case DOUBLE_TAP: register_code16(KC_MS_RIGHT); register_code16(KC_MS_RIGHT); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_LEFT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_RIGHT); register_code16(KC_MS_RIGHT);
    }
}

void dance_72_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[72].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_RIGHT); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_RIGHT); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_RIGHT); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_LEFT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_RIGHT); break;
    }
    dance_state[72].step = 0;
}
void on_dance_73(tap_dance_state_t *state, void *user_data);
void dance_73_finished(tap_dance_state_t *state, void *user_data);
void dance_73_reset(tap_dance_state_t *state, void *user_data);

void on_dance_73(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_BTN1);
        tap_code16(KC_MS_BTN1);
        tap_code16(KC_MS_BTN1);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_BTN1);
    }
}

void dance_73_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[73].step = dance_step(state);
    switch (dance_state[73].step) {
        case SINGLE_TAP: register_code16(KC_MS_BTN1); break;
        case SINGLE_HOLD: register_code16(KC_MS_BTN2); break;
        case DOUBLE_TAP: register_code16(KC_MS_BTN1); register_code16(KC_MS_BTN1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_BTN1); register_code16(KC_MS_BTN1);
    }
}

void dance_73_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[73].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_BTN1); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_BTN2); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_BTN1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_BTN1); break;
    }
    dance_state[73].step = 0;
}
void on_dance_74(tap_dance_state_t *state, void *user_data);
void dance_74_finished(tap_dance_state_t *state, void *user_data);
void dance_74_reset(tap_dance_state_t *state, void *user_data);

void on_dance_74(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
    }
    if(state->count > 3) {
        tap_code16(KC_LEFT);
    }
}

void dance_74_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[74].step = dance_step(state);
    switch (dance_state[74].step) {
        case SINGLE_TAP: register_code16(KC_LEFT); break;
        case DOUBLE_TAP: register_code16(KC_HOME); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT); register_code16(KC_LEFT);
    }
}

void dance_74_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[74].step) {
        case SINGLE_TAP: unregister_code16(KC_LEFT); break;
        case DOUBLE_TAP: unregister_code16(KC_HOME); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LEFT); break;
    }
    dance_state[74].step = 0;
}
void on_dance_75(tap_dance_state_t *state, void *user_data);
void dance_75_finished(tap_dance_state_t *state, void *user_data);
void dance_75_reset(tap_dance_state_t *state, void *user_data);

void on_dance_75(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_RIGHT);
    }
}

void dance_75_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[75].step = dance_step(state);
    switch (dance_state[75].step) {
        case SINGLE_TAP: register_code16(KC_RIGHT); break;
        case DOUBLE_TAP: register_code16(KC_END); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RIGHT); register_code16(KC_RIGHT);
    }
}

void dance_75_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[75].step) {
        case SINGLE_TAP: unregister_code16(KC_RIGHT); break;
        case DOUBLE_TAP: unregister_code16(KC_END); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RIGHT); break;
    }
    dance_state[75].step = 0;
}
void on_dance_76(tap_dance_state_t *state, void *user_data);
void dance_76_finished(tap_dance_state_t *state, void *user_data);
void dance_76_reset(tap_dance_state_t *state, void *user_data);

void on_dance_76(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_LEFT);
        tap_code16(KC_MS_LEFT);
        tap_code16(KC_MS_LEFT);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_LEFT);
    }
}

void dance_76_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[76].step = dance_step(state);
    switch (dance_state[76].step) {
        case SINGLE_TAP: register_code16(KC_MS_LEFT); break;
        case SINGLE_HOLD: register_code16(KC_MS_LEFT); break;
        case DOUBLE_TAP: register_code16(KC_MS_LEFT); register_code16(KC_MS_LEFT); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_RIGHT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_LEFT); register_code16(KC_MS_LEFT);
    }
}

void dance_76_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[76].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_LEFT); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_LEFT); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_LEFT); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_RIGHT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_LEFT); break;
    }
    dance_state[76].step = 0;
}
void on_dance_77(tap_dance_state_t *state, void *user_data);
void dance_77_finished(tap_dance_state_t *state, void *user_data);
void dance_77_reset(tap_dance_state_t *state, void *user_data);

void on_dance_77(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_DOWN);
        tap_code16(KC_MS_DOWN);
        tap_code16(KC_MS_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_DOWN);
    }
}

void dance_77_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[77].step = dance_step(state);
    switch (dance_state[77].step) {
        case SINGLE_TAP: register_code16(KC_MS_DOWN); break;
        case SINGLE_HOLD: register_code16(KC_MS_DOWN); break;
        case DOUBLE_TAP: register_code16(KC_MS_DOWN); register_code16(KC_MS_DOWN); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_UP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_DOWN); register_code16(KC_MS_DOWN);
    }
}

void dance_77_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[77].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_DOWN); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_DOWN); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_DOWN); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_UP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_DOWN); break;
    }
    dance_state[77].step = 0;
}
void on_dance_78(tap_dance_state_t *state, void *user_data);
void dance_78_finished(tap_dance_state_t *state, void *user_data);
void dance_78_reset(tap_dance_state_t *state, void *user_data);

void on_dance_78(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_UP);
        tap_code16(KC_MS_UP);
        tap_code16(KC_MS_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_UP);
    }
}

void dance_78_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[78].step = dance_step(state);
    switch (dance_state[78].step) {
        case SINGLE_TAP: register_code16(KC_MS_UP); break;
        case SINGLE_HOLD: register_code16(KC_MS_UP); break;
        case DOUBLE_TAP: register_code16(KC_MS_UP); register_code16(KC_MS_UP); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_DOWN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_UP); register_code16(KC_MS_UP);
    }
}

void dance_78_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[78].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_UP); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_UP); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_UP); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_DOWN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_UP); break;
    }
    dance_state[78].step = 0;
}
void on_dance_79(tap_dance_state_t *state, void *user_data);
void dance_79_finished(tap_dance_state_t *state, void *user_data);
void dance_79_reset(tap_dance_state_t *state, void *user_data);

void on_dance_79(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_RIGHT);
        tap_code16(KC_MS_RIGHT);
        tap_code16(KC_MS_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_RIGHT);
    }
}

void dance_79_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[79].step = dance_step(state);
    switch (dance_state[79].step) {
        case SINGLE_TAP: register_code16(KC_MS_RIGHT); break;
        case SINGLE_HOLD: register_code16(KC_MS_RIGHT); break;
        case DOUBLE_TAP: register_code16(KC_MS_RIGHT); register_code16(KC_MS_RIGHT); break;
        case DOUBLE_HOLD: register_code16(KC_MS_WH_LEFT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_RIGHT); register_code16(KC_MS_RIGHT);
    }
}

void dance_79_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[79].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_RIGHT); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_RIGHT); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_RIGHT); break;
        case DOUBLE_HOLD: unregister_code16(KC_MS_WH_LEFT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_RIGHT); break;
    }
    dance_state[79].step = 0;
}
void on_dance_80(tap_dance_state_t *state, void *user_data);
void dance_80_finished(tap_dance_state_t *state, void *user_data);
void dance_80_reset(tap_dance_state_t *state, void *user_data);

void on_dance_80(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_BTN1);
        tap_code16(KC_MS_BTN1);
        tap_code16(KC_MS_BTN1);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_BTN1);
    }
}

void dance_80_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[80].step = dance_step(state);
    switch (dance_state[80].step) {
        case SINGLE_TAP: register_code16(KC_MS_BTN1); break;
        case SINGLE_HOLD: register_code16(KC_MS_BTN2); break;
        case DOUBLE_TAP: register_code16(KC_MS_BTN1); register_code16(KC_MS_BTN1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_BTN1); register_code16(KC_MS_BTN1);
    }
}

void dance_80_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[80].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_BTN1); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_BTN2); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_BTN1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_BTN1); break;
    }
    dance_state[80].step = 0;
}
void on_dance_81(tap_dance_state_t *state, void *user_data);
void dance_81_finished(tap_dance_state_t *state, void *user_data);
void dance_81_reset(tap_dance_state_t *state, void *user_data);

void on_dance_81(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_LEFT));
        tap_code16(LSFT(KC_LEFT));
        tap_code16(LSFT(KC_LEFT));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_LEFT));
    }
}

void dance_81_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[81].step = dance_step(state);
    switch (dance_state[81].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_LEFT)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_HOME)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_LEFT)); register_code16(LSFT(KC_LEFT));
    }
}

void dance_81_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[81].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_LEFT)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_HOME)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_LEFT)); break;
    }
    dance_state[81].step = 0;
}
void on_dance_82(tap_dance_state_t *state, void *user_data);
void dance_82_finished(tap_dance_state_t *state, void *user_data);
void dance_82_reset(tap_dance_state_t *state, void *user_data);

void on_dance_82(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_RIGHT));
        tap_code16(LSFT(KC_RIGHT));
        tap_code16(LSFT(KC_RIGHT));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_RIGHT));
    }
}

void dance_82_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[82].step = dance_step(state);
    switch (dance_state[82].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_RIGHT)); break;
        case DOUBLE_TAP: register_code16(RSFT(KC_END)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_RIGHT)); register_code16(LSFT(KC_RIGHT));
    }
}

void dance_82_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[82].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_RIGHT)); break;
        case DOUBLE_TAP: unregister_code16(RSFT(KC_END)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_RIGHT)); break;
    }
    dance_state[82].step = 0;
}
void on_dance_83(tap_dance_state_t *state, void *user_data);
void dance_83_finished(tap_dance_state_t *state, void *user_data);
void dance_83_reset(tap_dance_state_t *state, void *user_data);

void on_dance_83(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_LEFT));
        tap_code16(LSFT(KC_MS_LEFT));
        tap_code16(LSFT(KC_MS_LEFT));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_LEFT));
    }
}

void dance_83_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[83].step = dance_step(state);
    switch (dance_state[83].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_LEFT)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_LEFT)); register_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_LEFT)); register_code16(LSFT(KC_MS_LEFT));
    }
}

void dance_83_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[83].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
    }
    dance_state[83].step = 0;
}
void on_dance_84(tap_dance_state_t *state, void *user_data);
void dance_84_finished(tap_dance_state_t *state, void *user_data);
void dance_84_reset(tap_dance_state_t *state, void *user_data);

void on_dance_84(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_DOWN));
        tap_code16(LSFT(KC_MS_DOWN));
        tap_code16(LSFT(KC_MS_DOWN));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_DOWN));
    }
}

void dance_84_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[84].step = dance_step(state);
    switch (dance_state[84].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_DOWN)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_DOWN)); register_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_UP)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_DOWN)); register_code16(LSFT(KC_MS_DOWN));
    }
}

void dance_84_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[84].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_UP)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
    }
    dance_state[84].step = 0;
}
void on_dance_85(tap_dance_state_t *state, void *user_data);
void dance_85_finished(tap_dance_state_t *state, void *user_data);
void dance_85_reset(tap_dance_state_t *state, void *user_data);

void on_dance_85(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_UP));
    }
}

void dance_85_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[85].step = dance_step(state);
    switch (dance_state[85].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP));
    }
}

void dance_85_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[85].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
    }
    dance_state[85].step = 0;
}
void on_dance_86(tap_dance_state_t *state, void *user_data);
void dance_86_finished(tap_dance_state_t *state, void *user_data);
void dance_86_reset(tap_dance_state_t *state, void *user_data);

void on_dance_86(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_UP));
    }
}

void dance_86_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[86].step = dance_step(state);
    switch (dance_state[86].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP));
    }
}

void dance_86_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[86].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
    }
    dance_state[86].step = 0;
}
void on_dance_87(tap_dance_state_t *state, void *user_data);
void dance_87_finished(tap_dance_state_t *state, void *user_data);
void dance_87_reset(tap_dance_state_t *state, void *user_data);

void on_dance_87(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_LEFT));
        tap_code16(LSFT(KC_LEFT));
        tap_code16(LSFT(KC_LEFT));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_LEFT));
    }
}

void dance_87_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[87].step = dance_step(state);
    switch (dance_state[87].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_LEFT)); break;
        case DOUBLE_TAP: register_code16(RSFT(KC_HOME)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_LEFT)); register_code16(LSFT(KC_LEFT));
    }
}

void dance_87_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[87].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_LEFT)); break;
        case DOUBLE_TAP: unregister_code16(RSFT(KC_HOME)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_LEFT)); break;
    }
    dance_state[87].step = 0;
}
void on_dance_88(tap_dance_state_t *state, void *user_data);
void dance_88_finished(tap_dance_state_t *state, void *user_data);
void dance_88_reset(tap_dance_state_t *state, void *user_data);

void on_dance_88(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_RIGHT));
        tap_code16(LSFT(KC_RIGHT));
        tap_code16(LSFT(KC_RIGHT));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_RIGHT));
    }
}

void dance_88_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[88].step = dance_step(state);
    switch (dance_state[88].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_RIGHT)); break;
        case DOUBLE_TAP: register_code16(RSFT(KC_END)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_RIGHT)); register_code16(LSFT(KC_RIGHT));
    }
}

void dance_88_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[88].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_RIGHT)); break;
        case DOUBLE_TAP: unregister_code16(RSFT(KC_END)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_RIGHT)); break;
    }
    dance_state[88].step = 0;
}
void on_dance_89(tap_dance_state_t *state, void *user_data);
void dance_89_finished(tap_dance_state_t *state, void *user_data);
void dance_89_reset(tap_dance_state_t *state, void *user_data);

void on_dance_89(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_LEFT));
        tap_code16(LSFT(KC_MS_LEFT));
        tap_code16(LSFT(KC_MS_LEFT));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_LEFT));
    }
}

void dance_89_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[89].step = dance_step(state);
    switch (dance_state[89].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_LEFT)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_LEFT)); register_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_LEFT)); register_code16(LSFT(KC_MS_LEFT));
    }
}

void dance_89_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[89].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_LEFT)); break;
    }
    dance_state[89].step = 0;
}
void on_dance_90(tap_dance_state_t *state, void *user_data);
void dance_90_finished(tap_dance_state_t *state, void *user_data);
void dance_90_reset(tap_dance_state_t *state, void *user_data);

void on_dance_90(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_DOWN));
        tap_code16(LSFT(KC_MS_DOWN));
        tap_code16(LSFT(KC_MS_DOWN));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_DOWN));
    }
}

void dance_90_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[90].step = dance_step(state);
    switch (dance_state[90].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_DOWN)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_DOWN)); register_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_UP)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_DOWN)); register_code16(LSFT(KC_MS_DOWN));
    }
}

void dance_90_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[90].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_UP)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_DOWN)); break;
    }
    dance_state[90].step = 0;
}
void on_dance_91(tap_dance_state_t *state, void *user_data);
void dance_91_finished(tap_dance_state_t *state, void *user_data);
void dance_91_reset(tap_dance_state_t *state, void *user_data);

void on_dance_91(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_UP));
    }
}

void dance_91_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[91].step = dance_step(state);
    switch (dance_state[91].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP));
    }
}

void dance_91_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[91].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
    }
    dance_state[91].step = 0;
}
void on_dance_92(tap_dance_state_t *state, void *user_data);
void dance_92_finished(tap_dance_state_t *state, void *user_data);
void dance_92_reset(tap_dance_state_t *state, void *user_data);

void on_dance_92(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
        tap_code16(LSFT(KC_MS_UP));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_MS_UP));
    }
}

void dance_92_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[92].step = dance_step(state);
    switch (dance_state[92].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: register_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_MS_UP)); register_code16(LSFT(KC_MS_UP));
    }
}

void dance_92_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[92].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
        case DOUBLE_HOLD: unregister_code16(LSFT(KC_MS_WH_DOWN)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_MS_UP)); break;
    }
    dance_state[92].step = 0;
}
void on_dance_93(tap_dance_state_t *state, void *user_data);
void dance_93_finished(tap_dance_state_t *state, void *user_data);
void dance_93_reset(tap_dance_state_t *state, void *user_data);

void on_dance_93(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LGUI(KC_B)));
        tap_code16(LALT(LGUI(KC_B)));
        tap_code16(LALT(LGUI(KC_B)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LGUI(KC_B)));
    }
}

void dance_93_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[93].step = dance_step(state);
    switch (dance_state[93].step) {
        case SINGLE_TAP: register_code16(LALT(LGUI(KC_B))); break;
        case SINGLE_HOLD: register_code16(KC_RIGHT_ALT); break;
        case DOUBLE_TAP: register_code16(LALT(LGUI(KC_B))); register_code16(LALT(LGUI(KC_B))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LGUI(KC_B))); register_code16(LALT(LGUI(KC_B)));
    }
}

void dance_93_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[93].step) {
        case SINGLE_TAP: unregister_code16(LALT(LGUI(KC_B))); break;
        case SINGLE_HOLD: unregister_code16(KC_RIGHT_ALT); break;
        case DOUBLE_TAP: unregister_code16(LALT(LGUI(KC_B))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LGUI(KC_B))); break;
    }
    dance_state[93].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
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
        [DANCE_42] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_42, dance_42_finished, dance_42_reset),
        [DANCE_43] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_43, dance_43_finished, dance_43_reset),
        [DANCE_44] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_44, dance_44_finished, dance_44_reset),
        [DANCE_45] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_45, dance_45_finished, dance_45_reset),
        [DANCE_46] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_46, dance_46_finished, dance_46_reset),
        [DANCE_47] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_47, dance_47_finished, dance_47_reset),
        [DANCE_48] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_48, dance_48_finished, dance_48_reset),
        [DANCE_49] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_49, dance_49_finished, dance_49_reset),
        [DANCE_50] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_50, dance_50_finished, dance_50_reset),
        [DANCE_51] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_51, dance_51_finished, dance_51_reset),
        [DANCE_52] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_52, dance_52_finished, dance_52_reset),
        [DANCE_53] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_53, dance_53_finished, dance_53_reset),
        [DANCE_54] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_54, dance_54_finished, dance_54_reset),
        [DANCE_55] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_55, dance_55_finished, dance_55_reset),
        [DANCE_56] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_56, dance_56_finished, dance_56_reset),
        [DANCE_57] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_57, dance_57_finished, dance_57_reset),
        [DANCE_58] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_58, dance_58_finished, dance_58_reset),
        [DANCE_59] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_59, dance_59_finished, dance_59_reset),
        [DANCE_60] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_60, dance_60_finished, dance_60_reset),
        [DANCE_61] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_61, dance_61_finished, dance_61_reset),
        [DANCE_62] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_62, dance_62_finished, dance_62_reset),
        [DANCE_63] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_63, dance_63_finished, dance_63_reset),
        [DANCE_64] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_64, dance_64_finished, dance_64_reset),
        [DANCE_65] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_65, dance_65_finished, dance_65_reset),
        [DANCE_66] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_66, dance_66_finished, dance_66_reset),
        [DANCE_67] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_67, dance_67_finished, dance_67_reset),
        [DANCE_68] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_68, dance_68_finished, dance_68_reset),
        [DANCE_69] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_69, dance_69_finished, dance_69_reset),
        [DANCE_70] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_70, dance_70_finished, dance_70_reset),
        [DANCE_71] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_71, dance_71_finished, dance_71_reset),
        [DANCE_72] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_72, dance_72_finished, dance_72_reset),
        [DANCE_73] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_73, dance_73_finished, dance_73_reset),
        [DANCE_74] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_74, dance_74_finished, dance_74_reset),
        [DANCE_75] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_75, dance_75_finished, dance_75_reset),
        [DANCE_76] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_76, dance_76_finished, dance_76_reset),
        [DANCE_77] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_77, dance_77_finished, dance_77_reset),
        [DANCE_78] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_78, dance_78_finished, dance_78_reset),
        [DANCE_79] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_79, dance_79_finished, dance_79_reset),
        [DANCE_80] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_80, dance_80_finished, dance_80_reset),
        [DANCE_81] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_81, dance_81_finished, dance_81_reset),
        [DANCE_82] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_82, dance_82_finished, dance_82_reset),
        [DANCE_83] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_83, dance_83_finished, dance_83_reset),
        [DANCE_84] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_84, dance_84_finished, dance_84_reset),
        [DANCE_85] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_85, dance_85_finished, dance_85_reset),
        [DANCE_86] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_86, dance_86_finished, dance_86_reset),
        [DANCE_87] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_87, dance_87_finished, dance_87_reset),
        [DANCE_88] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_88, dance_88_finished, dance_88_reset),
        [DANCE_89] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_89, dance_89_finished, dance_89_reset),
        [DANCE_90] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_90, dance_90_finished, dance_90_reset),
        [DANCE_91] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_91, dance_91_finished, dance_91_reset),
        [DANCE_92] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_92, dance_92_finished, dance_92_reset),
        [DANCE_93] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_93, dance_93_finished, dance_93_reset),
};
