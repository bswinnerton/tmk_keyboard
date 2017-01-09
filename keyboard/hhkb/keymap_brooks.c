/*
 * HHKB Layout
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn0|
     * `-----------------------------------------------------------'
     *       |Alt|Gui  |         Space         |Gui  |Fn1|
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV, \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC,     \
           LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,           \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN0,           \
                LALT,LGUI,          SPC,                RGUI,FN1),

    /* Layer 1: Multimedia
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |Prv|Pau|Nxt|   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |Contro|VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |   |   |   |   |   |  +|  -|End|PgD|Dow|Shift |Fn0|
     * `-----------------------------------------------------------'
     *      |Alt |Gui  |Space                  |Gui  |Fn1|
     *      `--------------------------------------------'
     */
    KEYMAP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
           CAPS,MPRV,MPLY,MFFD,NO  ,NO  ,NO  ,NO  ,PSCR,SLCK,PAUS,UP,  NO  ,BSPC,     \
           LCTL,VOLD,VOLU,MUTE,NO  ,NO  ,PAST,PSLS,HOME,PGUP,LEFT,RGHT,ENT,           \
           LSFT,NO  ,NO  ,NO  ,NO  ,NO  ,PPLS,PMNS,END, PGDN,DOWN,RSFT,FN0,           \
                LALT,LGUI,          SPC,                RGUI,FN1),

    /* Layer 2: Mouse Mode for WASD
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |McU|   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |McL|McD|McR|   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |Fn0|
     * `-----------------------------------------------------------'
     *       |   |Rclck|       Left Click      |Rclck|Fn1|
     *       `-------------------------------------------'
     */
    KEYMAP(NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,  \
           NO  ,NO  ,MS_U,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,       \
           NO  ,MS_L,MS_D,MS_R,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,            \
           NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,FN0,             \
                NO  ,BTN2,          BTN1,               BTN2,FN1)
};

/*
 * Fn action definition
 */
const action_t fn_actions[] PROGMEM = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_TOGGLE(2)
};
