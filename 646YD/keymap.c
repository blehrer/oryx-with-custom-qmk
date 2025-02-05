#include QMK_KEYBOARD_H
#ifdef AUDIO_ENABLE
#include "muse.h"
#endif
#include "eeprom.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)

enum planck_keycodes {
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
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
  ST_MACRO_21,
  ST_MACRO_22,
  ST_MACRO_23,
  ST_MACRO_24,
  ST_MACRO_25,
  ST_MACRO_26,
  ST_MACRO_27,
  ST_MACRO_28,
  ST_MACRO_29,
};

enum planck_layers {
  _BASE,
  _LOWER,
  _RAISE,
  _ADJUST,
  _LAYER4,
  _LAYER5,
  _LAYER6,
  _LAYER7,
  _LAYER8,
  _LAYER9,
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_planck_grid(KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_BSPACE,KC_LCTRL,KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,LT(4,KC_SCOLON),LT(8,KC_QUOTE),LSFT_T(KC_GRAVE),KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMMA,KC_DOT,LT(9,KC_SLASH),KC_UP,TT(5),TT(6),KC_LGUI,LOWER,KC_LALT,LSFT_T(KC_SPACE),KC_NO,RAISE,KC_ENTER,KC_LEFT,KC_RIGHT,KC_DOWN),

  [_LOWER] = LAYOUT_planck_grid(KC_TRANSPARENT,KC_F1,KC_F2,KC_F3,KC_F4,KC_NO,KC_NO,KC_F13,KC_F14,KC_F15,KC_F16,KC_TRANSPARENT,KC_TRANSPARENT,KC_F5,KC_F6,KC_F7,KC_F8,KC_NO,KC_NO,KC_F17,KC_F18,KC_F19,KC_F20,KC_TRANSPARENT,KC_TRANSPARENT,KC_F9,KC_F10,KC_F11,KC_F12,KC_NO,KC_NO,KC_F21,KC_F22,KC_F23,KC_TRANSPARENT,KC_AUDIO_VOL_UP,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_NO,KC_TRANSPARENT,KC_TRANSPARENT,KC_AUDIO_MUTE,KC_MEDIA_PLAY_PAUSE,KC_AUDIO_VOL_DOWN),

  [_RAISE] = LAYOUT_planck_grid(KC_ESCAPE,KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_DELETE,KC_RCTRL,KC_EXLM,KC_AT,KC_HASH,KC_DLR,KC_PERC,KC_CIRC,KC_LPRN,KC_RPRN,KC_AMPR,KC_ASTR,KC_TILD,KC_TRANSPARENT,KC_LCBR,KC_RCBR,KC_BSLASH,KC_PIPE,KC_UNDS,KC_EQUAL,KC_MINUS,KC_PLUS,KC_LBRACKET,KC_RBRACKET,KC_AUDIO_VOL_UP,KC_RALT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_SPACE,KC_NO,KC_TRANSPARENT,KC_TRANSPARENT,KC_AUDIO_MUTE,KC_MEDIA_PLAY_PAUSE,KC_AUDIO_VOL_DOWN),

  [_ADJUST] = LAYOUT_planck_grid(RESET,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,AU_ON,AU_OFF,AU_TOG,TO(7),KC_NO,RGB_TOG,RGB_VAI,RGB_VAD,LED_LEVEL,KC_NO,KC_NO,KC_NO,MU_ON,MU_OFF,MU_TOG,TO(0),KC_NO,RGB_MOD,RGB_HUI,RGB_HUD,TOGGLE_LAYER_COLOR,KC_TRANSPARENT,WEBUSB_PAIR,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_NO,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [_LAYER4] = LAYOUT_planck_grid(KC_TRANSPARENT,LALT(KC_1),LALT(KC_2),LALT(KC_3),LALT(KC_4),LALT(KC_5),LALT(KC_6),LALT(KC_7),LALT(KC_8),LALT(KC_9),LALT(KC_0),KC_TRANSPARENT,KC_TRANSPARENT,LALT(KC_0),KC_HOME,KC_LEFT,KC_RIGHT,KC_END,KC_PGDOWN,KC_DOWN,KC_UP,KC_PGUP,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,LCTL(KC_1),LCTL(KC_2),LCTL(KC_3),LCTL(KC_4),LCTL(KC_5),LCTL(KC_6),LCTL(KC_7),LCTL(KC_8),LCTL(KC_9),LCTL(KC_0),KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_DELETE,KC_NO,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [_LAYER5] = LAYOUT_planck_grid(TO(0),KC_NO,KC_MS_BTN2,KC_MS_UP,KC_MS_BTN1,KC_NO,KC_KP_SLASH,KC_KP_7,KC_KP_8,KC_KP_9,KC_KP_MINUS,KC_TRANSPARENT,KC_TRANSPARENT,KC_MS_WH_LEFT,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,KC_MS_WH_RIGHT,KC_KP_ASTERISK,KC_KP_4,KC_KP_5,KC_KP_6,KC_KP_PLUS,KC_TRANSPARENT,KC_LSHIFT,KC_NO,KC_MS_WH_DOWN,KC_MS_BTN3,KC_MS_WH_UP,KC_NO,KC_DELETE,KC_KP_1,KC_KP_2,KC_KP_3,KC_NO,KC_CALCULATOR,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_NO,KC_KP_0,KC_KP_ENTER,KC_KP_DOT,KC_EQUAL,KC_NUMLOCK),

  [_LAYER6] = LAYOUT_planck_grid(TO(0),KC_BRIGHTNESS_UP,KC_NO,KC_NO,DYN_REC_START1,DYN_REC_STOP,DYN_MACRO_PLAY1,KC_NO,KC_INSERT,KC_CAPSLOCK,KC_PSCREEN,ST_MACRO_0,KC_TRANSPARENT,KC_BRIGHTNESS_DOWN,KC_NO,KC_NO,DYN_REC_START2,DYN_REC_STOP,DYN_MACRO_PLAY2,KC_NO,KC_NUMLOCK,KC_SCROLLLOCK,KC_PAUSE,KC_TRANSPARENT,KC_LSHIFT,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_AUDIO_VOL_UP,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_NO,KC_TRANSPARENT,KC_TRANSPARENT,KC_AUDIO_MUTE,KC_MEDIA_PLAY_PAUSE,KC_AUDIO_VOL_DOWN),

  [_LAYER7] = LAYOUT_planck_grid(KC_TAB,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_LCTRL,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_SCOLON,KC_QUOTE,KC_LSHIFT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_GRAVE,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_LALT,KC_SPACE,KC_NO,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

  [_LAYER8] = LAYOUT_planck_grid(KC_TRANSPARENT,ST_MACRO_1,ST_MACRO_2,ST_MACRO_3,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,ST_MACRO_4,ST_MACRO_5,ST_MACRO_6,ST_MACRO_7,KC_TRANSPARENT,KC_TRANSPARENT,ST_MACRO_8,KC_TRANSPARENT,ST_MACRO_9,ST_MACRO_10,KC_TRANSPARENT,KC_TRANSPARENT,ST_MACRO_11,ST_MACRO_12,KC_TRANSPARENT,ST_MACRO_13,KC_TRANSPARENT,KC_TRANSPARENT,ST_MACRO_14,ST_MACRO_15,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,ST_MACRO_16,ST_MACRO_17,ST_MACRO_18,ST_MACRO_19,KC_TRANSPARENT,ST_MACRO_20,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_NO,KC_TRANSPARENT,KC_TRANSPARENT,ST_MACRO_21,ST_MACRO_22,ST_MACRO_23),

  [_LAYER9] = LAYOUT_planck_grid(KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,ST_MACRO_24,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,ST_MACRO_25,KC_TRANSPARENT,KC_TRANSPARENT,ST_MACRO_26,ST_MACRO_27,ST_MACRO_28,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,ST_MACRO_29,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_NO,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT),

};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [1] = { {0,0,0}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {0,0,0}, {0,0,0}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {0,0,0}, {0,0,0}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {0,0,0}, {0,0,0}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {0,0,0}, {0,0,0}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {0,0,0}, {0,0,0}, {30,96,255}, {30,96,255}, {30,96,255}, {30,96,255}, {14,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {14,255,255}, {14,255,255} },

    [3] = { {14,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {14,255,255}, {14,255,255}, {30,96,255}, {0,0,0}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {14,255,255}, {14,255,255}, {30,96,255}, {0,0,0}, {141,255,233}, {141,255,233}, {141,255,233}, {0,0,255}, {0,0,0}, {14,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {141,255,233}, {14,255,255}, {14,255,255}, {141,255,233}, {141,255,233}, {14,255,255}, {14,255,255}, {141,255,233}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {14,255,255}, {0,0,0}, {141,255,233}, {14,255,255}, {141,255,233}, {0,0,0}, {33,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {33,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {14,255,255}, {14,255,255}, {0,0,0}, {33,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {33,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {30,96,255}, {141,255,233}, {30,96,255}, {0,0,0}, {14,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {141,255,233}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {14,255,255}, {0,0,255}, {141,255,233}, {14,255,255} },

    [6] = { {14,255,255}, {0,0,255}, {0,0,0}, {0,0,0}, {14,255,255}, {33,255,255}, {141,255,233}, {0,0,0}, {141,255,233}, {141,255,233}, {141,255,233}, {14,255,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {14,255,255}, {33,255,255}, {141,255,233}, {0,0,0}, {33,255,255}, {33,255,255}, {33,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {14,255,255}, {14,255,255}, {14,255,255} },

    [7] = { {14,255,255}, {141,255,233}, {141,255,233}, {0,0,255}, {141,255,233}, {141,255,233}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {14,255,255}, {14,255,255}, {141,255,233}, {0,0,255}, {0,0,255}, {0,0,255}, {141,255,233}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {14,255,255}, {14,255,255}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {141,255,233}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {33,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {0,0,0}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255}, {14,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_LCTL(SS_TAP(X_DELETE))));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_KP_5)));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_KP_3)));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_E)));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_RALT(SS_TAP(X_KP_5))));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_KP_9)));

    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_QUOTE)));

    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_O)));

    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_RALT(SS_TAP(X_QUOTE))));

    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_RALT(SS_TAP(X_BSLASH))));

    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_BSLASH)));

    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_RBRACKET)));

    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_RALT(SS_TAP(X_RBRACKET))));

    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_SCOLON)));

    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_KP_7)));

    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_KP_1)));

    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_SLASH)));

    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_SLASH)));

    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_EQUAL)));

    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_RALT(SS_TAP(X_EQUAL))));

    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_KP_8)));

    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_KP_4)));

    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_KP_6)));

    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_KP_2)));

    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_U)));

    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_S)));

    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_G)));

    }
    break;
    case ST_MACRO_27:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_H)));

    }
    break;
    case ST_MACRO_28:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_J)));

    }
    break;
    case ST_MACRO_29:
    if (record->event.pressed) {
      SEND_STRING(SS_RALT(SS_TAP(X_C)));

    }
    break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

#ifdef AUDIO_ENABLE
bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

void encoder_update(bool clockwise) {
    if (muse_mode) {
        if (IS_LAYER_ON(_RAISE)) {
            if (clockwise) {
                muse_offset++;
            } else {
                muse_offset--;
            }
        } else {
            if (clockwise) {
                muse_tempo+=1;
            } else {
                muse_tempo-=1;
            }
        }
    } else {
        if (clockwise) {
        #ifdef MOUSEKEY_ENABLE
            register_code(KC_MS_WH_DOWN);
            unregister_code(KC_MS_WH_DOWN);
        #else
            register_code(KC_PGDN);
            unregister_code(KC_PGDN);
        #endif
        } else {
        #ifdef MOUSEKEY_ENABLE
            register_code(KC_MS_WH_UP);
            unregister_code(KC_MS_WH_UP);
        #else
            register_code(KC_PGUP);
            unregister_code(KC_PGUP);
        #endif
        }
    }
}

void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
    switch (keycode) {
    case RAISE:
    case LOWER:
        return false;
    default:
        return true;
    }
}
#endif

uint32_t layer_state_set_user(uint32_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
