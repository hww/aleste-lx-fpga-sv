; ============================================================================
; KEYBOARD CODES AND TABLES
; ============================================================================

; ---- ОСНОВНЫЕ СКАН-КОДЫ ----
KBD_SCAN_ESC        equ 0x01
KBD_SCAN_1          equ 0x02
KBD_SCAN_2          equ 0x03
KBD_SCAN_3          equ 0x04
KBD_SCAN_4          equ 0x05
KBD_SCAN_5          equ 0x06
KBD_SCAN_6          equ 0x07
KBD_SCAN_7          equ 0x08
KBD_SCAN_8          equ 0x09
KBD_SCAN_9          equ 0x0A
KBD_SCAN_0          equ 0x0B
KBD_SCAN_MINUS      equ 0x0C
KBD_SCAN_EQUALS     equ 0x0D
KBD_SCAN_BACKSPACE  equ 0x0E
KBD_SCAN_TAB        equ 0x0F
KBD_SCAN_Q          equ 0x10
KBD_SCAN_W          equ 0x11
KBD_SCAN_E          equ 0x12
KBD_SCAN_R          equ 0x13
KBD_SCAN_T          equ 0x14
KBD_SCAN_Y          equ 0x15
KBD_SCAN_U          equ 0x16
KBD_SCAN_I          equ 0x17
KBD_SCAN_O          equ 0x18
KBD_SCAN_P          equ 0x19
KBD_SCAN_LBRACKET   equ 0x1A
KBD_SCAN_RBRACKET   equ 0x1B
KBD_SCAN_ENTER      equ 0x1C
KBD_SCAN_LCTRL      equ 0x1D
KBD_SCAN_A          equ 0x1E
KBD_SCAN_S          equ 0x1F
KBD_SCAN_D          equ 0x20
KBD_SCAN_F          equ 0x21
KBD_SCAN_G          equ 0x22
KBD_SCAN_H          equ 0x23
KBD_SCAN_J          equ 0x24
KBD_SCAN_K          equ 0x25
KBD_SCAN_L          equ 0x26
KBD_SCAN_SEMICOLON  equ 0x27
KBD_SCAN_QUOTE      equ 0x28
KBD_SCAN_BACKTICK   equ 0x29
KBD_SCAN_LSHIFT     equ 0x2A
KBD_SCAN_BACKSLASH  equ 0x2B
KBD_SCAN_Z          equ 0x2C
KBD_SCAN_X          equ 0x2D
KBD_SCAN_C          equ 0x2E
KBD_SCAN_V          equ 0x2F
KBD_SCAN_B          equ 0x30
KBD_SCAN_N          equ 0x31
KBD_SCAN_M          equ 0x32
KBD_SCAN_COMMA      equ 0x33
KBD_SCAN_PERIOD     equ 0x34
KBD_SCAN_SLASH      equ 0x35
KBD_SCAN_RSHIFT     equ 0x36
KBD_SCAN_KPASTERISK equ 0x37
KBD_SCAN_LALT       equ 0x38
KBD_SCAN_SPACE      equ 0x39

; ---- ФУНКЦИОНАЛЬНЫЕ КЛАВИШИ ----
KBD_SCAN_F1         equ 0x3B
KBD_SCAN_F2         equ 0x3C
KBD_SCAN_F3         equ 0x3D
KBD_SCAN_F4         equ 0x3E
KBD_SCAN_F5         equ 0x3F
KBD_SCAN_F6         equ 0x40
KBD_SCAN_F7         equ 0x41
KBD_SCAN_F8         equ 0x42
KBD_SCAN_F9         equ 0x43
KBD_SCAN_F10        equ 0x44
KBD_SCAN_F11        equ 0x57
KBD_SCAN_F12        equ 0x58

; ---- КЛАВИШИ УПРАВЛЕНИЯ КУРСОРОМ ----
KBD_SCAN_HOME       equ 0x47
KBD_SCAN_UP         equ 0x48
KBD_SCAN_PGUP       equ 0x49
KBD_SCAN_LEFT       equ 0x4B
KBD_SCAN_RIGHT      equ 0x4D
KBD_SCAN_END        equ 0x4F
KBD_SCAN_DOWN       equ 0x50
KBD_SCAN_PGDN       equ 0x51
KBD_SCAN_INSERT     equ 0x52
KBD_SCAN_DELETE     equ 0x53

; ---- РАСШИРЕННЫЕ КЛАВИШИ ----
KBD_SCAN_LWIN       equ 0x5B
KBD_SCAN_RWIN       equ 0x5C
KBD_SCAN_MENU       equ 0x5D