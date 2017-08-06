#include "nh60.h"

#define DEFAULT_LAYER 0
#define EXTRAS_LAYER 1
#define FULL_SIZE_LAYER 2
#define MOD_LAYER 3

#define ______ KC_TRNS
#define XXXXXX KC_NO
#define CTL_ESC CTL_T(KC_ESC)
#define HYPR_TAB ALL_T(KC_TAB)
#define SCREENSHOT LGUI(LSFT(KC_4))
#define COPY_SCREENSHOT LGUI(LCTL(LSFT(KC_4)))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[DEFAULT_LAYER] = KEYMAP(
		KC_GRV, 				 KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_DEL,
		HYPR_TAB, 			 KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC,
		CTL_ESC, 				 KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
		KC_LSFT, KC_Z, 	KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_CAPS, ______,
								KC_LALT, KC_LGUI, F(0), KC_RGUI, MO(FULL_SIZE_LAYER)
	),

	[EXTRAS_LAYER] = KEYMAP(
		______, ______, ______, ______, SCREENSHOT, COPY_SCREENSHOT, ______,  KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU, ______, ______,
		______, ______, ______, ______, ______, 			______, 				KC_PGUP, ______, KC_UP, ______, ______, ______, ______, KC_DEL,
		______, ______, ______, ______, ______, 		______, 				KC_PGDN, KC_LEFT, KC_DOWN, KC_RIGHT, ______, ______, ______,
		______, ______, ______, ______, ______, 		LCTL(KC_B), 				KC_HOME, KC_HOME, KC_PGDN, KC_INS, ______, ______, ______,
										______, ______, ______, 		______, 				______
	),

	[FULL_SIZE_LAYER] = KEYMAP(
		______, KC_F1, 	KC_F2, 	KC_F3, 	KC_F4, 	KC_F5, 	KC_F6, 	KC_F7, 	KC_F8, 	KC_F9, 	KC_F10, 	 KC_F11, 	KC_F12, ______, ______,
		______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
		MO(MOD_LAYER), ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
		______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
										______, ______, ______, ______, ______
	),

	[MOD_LAYER] = KEYMAP(
		______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, 	______, ______, ______, ______,
		______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
		______, ______, ______, ______, RESET, ______, ______, ______, ______, ______, ______, ______, ______,
		______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______, ______,
										______, ______, ______, ______, ______
	),

};

const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_TAP_KEY(EXTRAS_LAYER, KC_SPACE),
};
