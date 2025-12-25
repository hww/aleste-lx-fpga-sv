; ============================================================================
; KEYBOARD API JUMP TABLE
; Располагается в банке 0x23
; ============================================================================
SECTION BANK_23_KBD_API
org 0xFF00

; ---- ПУБЛИЧНЫЕ СИМВОЛЫ ----
PUBLIC _sys_kbd_init, _sys_kbd_get_key, _sys_kbd_check_key, _sys_kbd_wait_key
PUBLIC _sys_kbd_set_repeat, _sys_kbd_get_shift_state, _sys_kbd_is_shift_pressed
PUBLIC _sys_kbd_is_ctrl_pressed, _sys_kbd_is_alt_pressed, _sys_kbd_clear_buffer

; ---- ВНЕШНИЕ ССЫЛКИ ----
EXTERN _kbd_init, _kbd_get_key, _kbd_check_key, _kbd_wait_key
EXTERN _kbd_set_repeat, _kbd_get_shift_state, _kbd_is_shift_pressed
EXTERN _kbd_is_ctrl_pressed, _kbd_is_alt_pressed, _kbd_clear_buffer
EXTERN _kbd_add_to_buffer, _kbd_set_modifiers    ; Для внутреннего использования

; ==================== ТАБЛИЦА ПЕРЕХОДОВ ====================

_sys_kbd_init:           jp _kbd_init
_sys_kbd_get_key:        jp _kbd_get_key
_sys_kbd_check_key:      jp _kbd_check_key
_sys_kbd_wait_key:       jp _kbd_wait_key
_sys_kbd_set_repeat:     jp _kbd_set_repeat
_sys_kbd_get_shift_state: jp _kbd_get_shift_state
_sys_kbd_is_shift_pressed: jp _kbd_is_shift_pressed
_sys_kbd_is_ctrl_pressed: jp _kbd_is_ctrl_pressed
_sys_kbd_is_alt_pressed:  jp _kbd_is_alt_pressed
_sys_kbd_clear_buffer:    jp _kbd_clear_buffer

; ==================== ДАННЫЕ И КОНСТАНТЫ ====================

; ---- ТАБЛИЦА ПРЕОБРАЗОВАНИЯ СКАН-КОДОВ В ASCII ----
kbd_scan_to_ascii:
    ; Обычные клавиши без Shift
    db 0x00, 0x00, '1', '2', '3', '4', '5', '6'   ; 00-07
    db '7', '8', '9', '0', '-', '=', 0x08, 0x09   ; 08-0F (Backspace, Tab)
    db 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i'     ; 10-17
    db 'o', 'p', '[', ']', 0x0D, 0x00, 'a', 's'   ; 18-1F (Enter, Ctrl)
    db 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'     ; 20-27
    db "'", '`', 0x00, '\', 'z', 'x', 'c', 'v'    ; 28-2F (Left Shift)
    db 'b', 'n', 'm', ',', '.', '/', 0x00, 0x00   ; 30-37 (Right Shift)
    db 0x00, ' ', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 ; 38-3F (Alt, Caps)
    
    ; С Shift
kbd_scan_to_ascii_shift:
    db 0x00, 0x00, '!', '@', '#', '$', '%', '^'   ; 00-07
    db '&', '*', '(', ')', '_', '+', 0x08, 0x09   ; 08-0F
    db 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I'     ; 10-17
    db 'O', 'P', '{', '}', 0x0D, 0x00, 'A', 'S'   ; 18-1F
    db 'D', 'F', 'G', 'H', 'J', 'K', 'L', ':'     ; 20-27
    db '"', '~', 0x00, '|', 'Z', 'X', 'C', 'V'    ; 28-2F
    db 'B', 'N', 'M', '<', '>', '?', 0x00, 0x00   ; 30-37
    db 0x00, ' ', 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 ; 38-3F

; ---- КОДЫ СПЕЦИАЛЬНЫХ КЛАВИШ ----
kbd_special_codes:
    db 0x01  ; F1
    db 0x02  ; F2
    db 0x03  ; F3
    db 0x04  ; F4
    db 0x05  ; F5
    db 0x06  ; F6
    db 0x07  ; F7
    db 0x08  ; F8
    db 0x09  ; F9
    db 0x0A  ; F10
    db 0x0B  ; F11
    db 0x0C  ; F12
    db 0x50  ; Стрелка вверх
    db 0x51  ; Стрелка вниз
    db 0x52  ; Стрелка влево
    db 0x53  ; Стрелка вправо
    db 0x47  ; Home
    db 0x4F  ; End
    db 0x49  ; Page Up
    db 0x51  ; Page Down
    db 0x45  ; Insert
    db 0x46  ; Delete
    db 0x5B  ; Left Windows
    db 0x5C  ; Right Windows
    db 0x5D  ; Menu

; Заполнение до конца страницы
    ds 0xFFFF - $, 0xFF