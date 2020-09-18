/* A standard layout for the Dactyl Manuform 5x6 Keyboard */

#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* base (qwerty)
 * ,-----------------------------------------,               ,-----------------------------------------,
 * |  ` ~ |   1  |   2  |   3  |   4  |   5  |               |   6  |   7  |   8  |   9  |   0  |  = + |
 * |------+------+------+------+------+------|               |------+------+------+------+------+------|
 * |  tab |   q  |   w  |   e  |   r  |   t  |               |   y  |   u  |   i  |   o  |   p  |  - _ |
 * |------+------+------+------+------+------|               |------+------+------+------+------+------|
 * | caps |   a  |   s  |   d  |   f  |   g  |               |   h  |   j  |   k  |   l  |  ; : |  ' " |
 * |------+------+------+------+------+------|               |------+------+------+------+------+------|
 * |  esc |   z  |   x  |   c  |   v  |   b  |               |   n  |   m  |  , < |  . > |  / ? |  \ | |
 * ,------+------+------+--------------------,               ,--------------------+------+------+------,
 *               |  ` ~ |   $  |                                           |  = + | - _  |
 *               '------+------'------'                             '------'------+------'
 *                      | raise|space |                             | enter|lower |
 *                      '------+------'                             '------+------'
 *                             '------+------'               '------+------'
 *                             | ctrl | shift|               |shift | ctrl |
 *                             '------+------'               '------+------'
 *                             |  bs  | del  |               |  gui | alt  |
 *                             '------+------'               '------+------'
 */

  [_QWERTY] = LAYOUT_5x6(
     KC_GRV , KC_1  , KC_2   , KC_3  , KC_4   , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_EQL ,
     KC_TAB , KC_Q  , KC_W   , KC_E  , KC_R   , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_MINS,
     KC_CAPS, KC_A  , KC_S   , KC_D  , KC_F   , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
     KC_ESC , KC_Z  , KC_X   , KC_C  , KC_V   , KC_B  ,                         KC_N  , KC_M  ,KC_COMM, KC_DOT,KC_SLSH,KC_BSLS,
                      KC_GRV ,KC_DLR ,                                                         KC_EQL ,KC_MINS,
                               RAISE , KC_SPC,                                         KC_ENT , LOWER ,
                                       KC_LCTL,KC_LSFT,                        KC_RSFT,KC_RCTL,
                                       KC_BSPC, KC_DEL,                        KC_LGUI,KC_LALT
  ),

/* base (lower)
 * ,-----------------------------------------,               ,-----------------------------------------,
 * |   ~  |   !  |   @  |   #  |   $  |   %  |               |   ^  |   &  |   *  |   (  |   )  |   |  |
 * |------+------+------+------+------+------|               |------+------+------+------+------+------|
 * |      |      |      |      |      |   {  |               |   }  |   7  |   8  |   9  |   /  |   *  |
 * |------+------+------+------+------+------|               |------+------+------+------+------+------|
 * |      | home | pgUp | pgDn | end  |   [  |               |   ]  |   4  |   5  |   6  |   -  |   +  |
 * |------+------+------+------+------+------|               |------+------+------+------+------+------|
 * |      |      |      |      |      |   (  |               |   )  |   1  |   2  |   3  |   =  | NLCK |
 * ,------+------+------+--------------------,               ,--------------------+------+------+------,
 *               |      |      |                                           |   0  |   .  |
 *               '------+------'------'                             '------'------+------'
 *                      |      |      |                             |      |      |
 *                      '------+------'                             '------+------'
 *                             '------+------'               '------+------'
 *                             |      |      |               |      |      |
 *                             '------+------'               '------+------'
 *                             |      |      |               |      |      |
 *                             '------+------'               '------+------'
 */

  [_LOWER] = LAYOUT_5x6(

     KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
     _______,_______,_______,_______,_______,KC_LCBR,                        KC_RCBR, KC_P7 , KC_P8 , KC_P9 ,KC_PSLS,KC_PAST,
     _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LBRC,                        KC_RBRC, KC_P4 , KC_P5 , KC_P6 ,KC_MINS,KC_PPLS,
     _______,_______,_______,_______,_______,KC_LPRN,                        KC_RPRN, KC_P1 , KC_P2 , KC_P3 ,KC_EQL ,KC_NLCK,
                                             _______,_______,              KC_P0,KC_PDOT,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______
  ),

/* base (raise)
 * ,-----------------------------------------,               ,-----------------------------------------,
 * |  F12 |  F1  |  F2  |  F3  |  F4  |  F5  |               |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |
 * |------+------+------+------+------+------|               |------+------+------+------+------+------|
 * | MUTE |      | brUP | brDN |      |   {  |               |   }  |   7  |   8  |   9  |   /  |   *  |
 * |------+------+------+------+------+------|               |------+------+------+------+------+------|
 * | VOLU | left |  up  | down | right|   [  |               |   ]  |   4  |   5  |   6  |   -  |   +  |
 * |------+------+------+------+------+------|               |------+------+------+------+------+------|
 * | VOLD |pTrack| play |pNext |      |   (  |               |   )  |   1  |   2  |   3  |   =  | NLCK |
 * ,------+------+------+--------------------,               ,--------------------+------+------+------,
 *               |      | PSCR |                                           |   0  |   .  |
 *               '------+------'------'                             '------'------+------'
 *                      |      |      |                             |      |      |
 *                      '------+------'                             '------+------'
 *                             '------+------'               '------+------'
 *                             |      |      |               |      |      |
 *                             '------+------'               '------+------'
 *                             |      |      |               |      |      |
 *                             '------+------'               '------+------'
 */

  [_RAISE] = LAYOUT_5x6(
       KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
       KC_MUTE,_______,KC_BRIU,KC_BRID,_______,KC_LCBR,                        KC_RCBR, KC_7  , KC_8  , KC_9  ,KC_PSLS,KC_PAST,
       KC_VOLU,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LBRC,                        KC_RBRC, KC_4  , KC_5  , KC_6  ,KC_MINS,KC_PPLS,
       KC_VOLD,KC_MPRV,KC_MPLY,KC_MNXT,_______,KC_LPRN,                        KC_RPRN, KC_1  , KC_2  , KC_3  ,KC_EQL ,KC_NLCK,
                                               _______,KC_PSCR,             KC_0  ,KC_PDOT,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______
  ),
};


