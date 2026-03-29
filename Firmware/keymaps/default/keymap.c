// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _VS,
    _BROWSER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┤   │
     * │ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │   │
     * ├───┼───┼───┤   │
     * │END| 0 │HOM│   │
     * └───┴───┴───┴───┘
     */
    [_BASE] = LAYOUT_numpad_4x4(
        KC_P7,   KC_P8,   KC_P9,   MO(_VS),
        KC_P4,   KC_P5,   KC_P6,
        KC_P1,   KC_P2,   KC_P3,   MO(_BROWSER),
        KC_END,  KC_P0,   KC_HOME
    ),
    [_VS] = LAYOUT_numpad_4x4(
        KC_P7,   KC_P8,   KC_P9,   MO(_BROWSER),
        KC_P4,   KC_P5,   KC_P6,
        KC_P1,   KC_P2,   KC_P3,   MO(_BASE),
        KC_END,  KC_P0,   KC_HOME
    ),
    [_BROWSER] = LAYOUT_numpad_4x4(
        KC_P7,   KC_P8,   KC_P9,   MO(_BASE),
        KC_P4,   KC_P5,   KC_P6,
        KC_P1,   KC_P2,   KC_P3,   MO(_VS),
        KC_END,  KC_P0,   KC_HOME
    )
};

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("DO SMTH\n"), false);
            break;
        case _VS:
            oled_write_P(PSTR("CODING ;)\n"), false);
            break;
        case _BROWSER:
            oled_write_P(PSTR("BROWSING 'u'\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // // Host Keyboard LED Status
    // led_t led_state = host_keyboard_led_state();
    // oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    // oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    // oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    
    return false;
}
#endif
