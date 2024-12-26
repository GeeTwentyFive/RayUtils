// RayUtils - https://github.com/GeeTwentyFive/RayUtils
/*
MIT License

Copyright (c) 2024 Gee

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef _RAYUTILS_H
#define _RAYUTILS_H

#include "../../external/raylib/raylib.h"



void RayUtils__KeycodeToASCII(KeyboardKey keyCode, char *OUT_ascii) {

        switch (keyCode) {

                // Single-character ASCII-mapped

                case KEY_APOSTROPHE:
                case KEY_COMMA:
                case KEY_MINUS:
                case KEY_PERIOD:
                case KEY_SLASH:
                case KEY_ZERO:
                case KEY_ONE:
                case KEY_TWO:
                case KEY_THREE:
                case KEY_FOUR:
                case KEY_FIVE:
                case KEY_SIX:
                case KEY_SEVEN:
                case KEY_EIGHT:
                case KEY_NINE:
                case KEY_SEMICOLON:
                case KEY_EQUAL:
                case KEY_A:
                case KEY_B:
                case KEY_C:
                case KEY_D:
                case KEY_E:
                case KEY_F:
                case KEY_G:
                case KEY_H:
                case KEY_I:
                case KEY_J:
                case KEY_K:
                case KEY_L:
                case KEY_M:
                case KEY_N:
                case KEY_O:
                case KEY_P:
                case KEY_Q:
                case KEY_R:
                case KEY_S:
                case KEY_T:
                case KEY_U:
                case KEY_V:
                case KEY_W:
                case KEY_X:
                case KEY_Y:
                case KEY_Z:
                case KEY_LEFT_BRACKET:
                case KEY_BACKSLASH:
                case KEY_RIGHT_BRACKET:
                case KEY_GRAVE:

                OUT_ascii[0] = (char)keyCode;
                OUT_ascii[1] = 0;

                break;



                // Multi-character

                case KEY_SPACE: TextCopy(OUT_ascii, "Space"); break;
                case KEY_ESCAPE: TextCopy(OUT_ascii, "Escape"); break;
                case KEY_ENTER: TextCopy(OUT_ascii, "Enter"); break;
                case KEY_TAB: TextCopy(OUT_ascii, "Tab"); break;
                case KEY_BACKSPACE: TextCopy(OUT_ascii, "Backspace"); break;
                case KEY_INSERT: TextCopy(OUT_ascii, "Insert"); break;
                case KEY_DELETE: TextCopy(OUT_ascii, "Delete"); break;
                case KEY_RIGHT: TextCopy(OUT_ascii, "Right arrow"); break;
                case KEY_LEFT: TextCopy(OUT_ascii, "Left arrow"); break;
                case KEY_DOWN: TextCopy(OUT_ascii, "Down arrow"); break;
                case KEY_UP: TextCopy(OUT_ascii, "Up arrow"); break;
                case KEY_PAGE_UP: TextCopy(OUT_ascii, "Page up"); break;
                case KEY_PAGE_DOWN: TextCopy(OUT_ascii, "Page down"); break;
                case KEY_HOME: TextCopy(OUT_ascii, "Home"); break;
                case KEY_END: TextCopy(OUT_ascii, "End"); break;
                case KEY_CAPS_LOCK: TextCopy(OUT_ascii, "Caps lock"); break;
                case KEY_SCROLL_LOCK: TextCopy(OUT_ascii, "Scroll lock"); break;
                case KEY_NUM_LOCK: TextCopy(OUT_ascii, "Num lock"); break;
                case KEY_PRINT_SCREEN: TextCopy(OUT_ascii, "Print screen"); break;
                case KEY_PAUSE: TextCopy(OUT_ascii, "Pause"); break;
                case KEY_F1: TextCopy(OUT_ascii, "F1"); break;
                case KEY_F2: TextCopy(OUT_ascii, "F2"); break;
                case KEY_F3: TextCopy(OUT_ascii, "F3"); break;
                case KEY_F4: TextCopy(OUT_ascii, "F4"); break;
                case KEY_F5: TextCopy(OUT_ascii, "F5"); break;
                case KEY_F6: TextCopy(OUT_ascii, "F6"); break;
                case KEY_F7: TextCopy(OUT_ascii, "F7"); break;
                case KEY_F8: TextCopy(OUT_ascii, "F8"); break;
                case KEY_F9: TextCopy(OUT_ascii, "F9"); break;
                case KEY_F10: TextCopy(OUT_ascii, "F10"); break;
                case KEY_F11: TextCopy(OUT_ascii, "F11"); break;
                case KEY_F12: TextCopy(OUT_ascii, "F12"); break;
                case KEY_LEFT_SHIFT: TextCopy(OUT_ascii, "Left shift"); break;
                case KEY_LEFT_CONTROL: TextCopy(OUT_ascii, "Left control"); break;
                case KEY_LEFT_ALT: TextCopy(OUT_ascii, "Left alt"); break;
                case KEY_LEFT_SUPER: TextCopy(OUT_ascii, "Left super"); break;
                case KEY_RIGHT_SHIFT: TextCopy(OUT_ascii, "Right shift"); break;
                case KEY_RIGHT_CONTROL: TextCopy(OUT_ascii, "Right control"); break;
                case KEY_RIGHT_ALT: TextCopy(OUT_ascii, "Right alt"); break;
                case KEY_RIGHT_SUPER: TextCopy(OUT_ascii, "Right super"); break;
                case KEY_KB_MENU: TextCopy(OUT_ascii, "Menu"); break;
                case KEY_KP_0: TextCopy(OUT_ascii, "Keypad 0"); break;
                case KEY_KP_1: TextCopy(OUT_ascii, "Keypad 1"); break;
                case KEY_KP_2: TextCopy(OUT_ascii, "Keypad 2"); break;
                case KEY_KP_3: TextCopy(OUT_ascii, "Keypad 3"); break;
                case KEY_KP_4: TextCopy(OUT_ascii, "Keypad 4"); break;
                case KEY_KP_5: TextCopy(OUT_ascii, "Keypad 5"); break;
                case KEY_KP_6: TextCopy(OUT_ascii, "Keypad 6"); break;
                case KEY_KP_7: TextCopy(OUT_ascii, "Keypad 7"); break;
                case KEY_KP_8: TextCopy(OUT_ascii, "Keypad 8"); break;
                case KEY_KP_9: TextCopy(OUT_ascii, "Keypad 9"); break;
                case KEY_KP_DECIMAL: TextCopy(OUT_ascii, "Keypad decimal"); break;
                case KEY_KP_DIVIDE: TextCopy(OUT_ascii, "Keypad divide"); break;
                case KEY_KP_MULTIPLY: TextCopy(OUT_ascii, "Keypad multiply"); break;
                case KEY_KP_SUBTRACT: TextCopy(OUT_ascii, "Keypad subtract"); break;
                case KEY_KP_ADD: TextCopy(OUT_ascii, "Keypad add"); break;
                case KEY_KP_ENTER: TextCopy(OUT_ascii, "Keypad enter"); break;
                case KEY_KP_EQUAL: TextCopy(OUT_ascii, "Keypad equal"); break;
                case KEY_BACK: TextCopy(OUT_ascii, "Back"); break;
                case KEY_MENU: TextCopy(OUT_ascii, "Menu"); break;
                case KEY_VOLUME_UP: TextCopy(OUT_ascii, "Volume up"); break;
                case KEY_VOLUME_DOWN: TextCopy(OUT_ascii, "Volume down"); break;

        }

}



#endif // _RAYUTILS_H