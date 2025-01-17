#include QMK_KEYBOARD_H
#include "version.h"
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
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

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
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // base: qwerty-derived
  [0] = LAYOUT_ergodox_pretty(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           XXXXXXX,                                        XXXXXXX,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_LABK,                                        KC_RABK,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    LALT(LCTL(KC_LGUI)),KC_A,       KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    KC_LSPO,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           KC_LBRACKET,                                    KC_RBRACKET,    KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSPC,
    KC_LCTRL,       XXXXXXX,        KC_LCTRL,       KC_LALT,        KC_LGUI,                                                                                                        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        MO(3),
                                                                                                    XXXXXXX,        XXXXXXX,        XXXXXXX,        KC_DELETE,
                                                                                                                    XXXXXXX,        XXXXXXX,
                                                                                    KC_SPACE,       MO(2),          KC_ESCAPE,      MO(1),          KC_BSPACE,      KC_ENTER
  ),
  // navigation
  [1] = LAYOUT_ergodox_pretty(
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                                        XXXXXXX,        XXXXXXX,        LGUI(KC_MINUS), LGUI(KC_0),     RGUI(KC_EQUAL), XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                                        XXXXXXX,        KC_HOME,        KC_PGDOWN,      KC_PGUP,        KC_END,         XXXXXXX,        XXXXXXX,
    _______,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                                                                        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       XXXXXXX,        XXXXXXX,
    _______,        XXXXXXX,        _______,        _______,        _______,        XXXXXXX,        XXXXXXX,                                        XXXXXXX,        XXXXXXX,        KC_VOLD,        KC_MUTE,        KC_VOLU,        XXXXXXX,        XXXXXXX,
    _______,        _______,        _______,        _______,        _______,                                                                                                        KC_MPRV,        KC_MPLY,        KC_MNXT,        XXXXXXX,        XXXXXXX,
                                                                                                    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
                                                                                                                    XXXXXXX,        XXXXXXX,
                                                                                    XXXXXXX,        XXXXXXX,        _______,        XXXXXXX,        XXXXXXX,        XXXXXXX
  ),
  // symbols and F-keys
  [2] = LAYOUT_ergodox_pretty(
    XXXXXXX,        KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          XXXXXXX,                                        XXXXXXX,        KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                                        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    _______,        KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                                                        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_PLUS,        KC_EQUAL,       XXXXXXX,
    _______,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                                        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    _______,        _______,        _______,        _______,        _______,                                                                                                        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
                                                                                                    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
                                                                                                                    XXXXXXX,        XXXXXXX,
                                                                                    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX
  ),
  // mouse (ESDF)
  [3] = LAYOUT_ergodox_pretty(
    _______,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,                                        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        XXXXXXX,        KC_MS_UP,       XXXXXXX,        KC_MS_WH_UP,    XXXXXXX,                                        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    XXXXXXX,        XXXXXXX,        KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_DOWN,                                                                  XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    KC_MS_ACCEL1,   XXXXXXX,        XXXXXXX,        XXXXXXX,        KC_MS_WH_LEFT,  KC_MS_WH_RIGHT, XXXXXXX,                                        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
    KC_MS_ACCEL2,   XXXXXXX,        _______,        _______,        _______,                                                                                                        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
                                                                                                    XXXXXXX,        XXXXXXX,        XXXXXXX,        XXXXXXX,
                                                                                                                    XXXXXXX,        XXXXXXX,
                                                                                    KC_MS_BTN1,     KC_MS_BTN2,     _______,        XXXXXXX,        XXXXXXX,        XXXXXXX
  ),
};




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

  }
  return true;
}

uint8_t layer_state_set_user(uint8_t state) {
    uint8_t layer = biton(state);
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
