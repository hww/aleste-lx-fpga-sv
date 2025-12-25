; ============================================================================
; KEYBOARD DRIVER
; ============================================================================
module keyboard_driver

; ---- КОНСТАНТЫ ----
NO_KEY                 equ 0xFF

; Биты состояния модификаторов
KBD_SHIFT_MASK         equ 0x01
KBD_CTRL_MASK          equ 0x02
KBD_ALT_MASK           equ 0x04
KBD_CAPS_MASK          equ 0x08
KBD_NUM_MASK           equ 0x10
KBD_SCROLL_MASK        equ 0x20

; Порт клавиатуры (пример, настройте под вашу аппаратуру)
KBD_DATA_PORT          equ 0x40
KBD_STATUS_PORT        equ 0x41
KBD_CMD_PORT           equ 0x42

; ---- ДАННЫЕ ДРАЙВЕРА ----
SECTION KBD_DATA
kbd_buffer:            ds 16          ; Буфер клавиш (FIFO)
kbd_buffer_start:      db 0           ; Указатель начала буфера
kbd_buffer_end:        db 0           ; Указатель конца буфера
kbd_modifiers:         db 0           ; Состояние модификаторов
kbd_repeat_delay:      dw 500         ; Задержка автоповтора (мс)
kbd_repeat_rate:       dw 50          ; Скорость автоповтора (мс)
kbd_last_key:          db 0           ; Последняя нажатая клавиша
kbd_last_time:         dw 0           ; Время последнего нажатия

; ==================== РЕАЛИЗАЦИЯ ====================

SECTION KBD_CODE

; ----------------------------------------------------------------------------
; kbd_init - Инициализация клавиатуры
; ----------------------------------------------------------------------------
PUBLIC _kbd_init
_kbd_init:
kbd_init_:
    ; Инициализация буфера
    xor a
    ld (kbd_buffer_start), a
    ld (kbd_buffer_end), a
    ld (kbd_modifiers), a
    ld (kbd_last_key), a
    ld hl, 0
    ld (kbd_last_time), hl
    
    ; Инициализация аппаратуры клавиатуры
    ; TODO: Настройка портов, прерываний и т@д@
    ret

; ----------------------------------------------------------------------------
; kbd_get_key - Получить нажатую клавишу
; Выход: A = скан-код клавиши (0xFF = нет нажатия)
; ----------------------------------------------------------------------------
PUBLIC _kbd_get_key
_kbd_get_key:
kbd_get_key_:
    ; Проверяем, есть ли данные в буфере
    ld a, (kbd_buffer_start)
    ld b, a
    ld a, (kbd_buffer_end)
    cp b
    jr z, @no_key           ; Буфер пуст
    
    ; Читаем из буфера
    ld hl, kbd_buffer
    ld d, 0
    ld e, b
    add hl, de
    ld a, (hl)
    
    ; Увеличиваем указатель начала
    inc b
    ld a, b
    and 0x0F                ; Ограничение размера буфера (16)
    ld (kbd_buffer_start), a
    
    ; Возвращаем код клавиши
    ld a, (hl)
    ret

@no_key:
    ld a, NO_KEY
    ret

; ----------------------------------------------------------------------------
; kbd_check_key - Проверить, нажата ли конкретная клавиша
; Вход: A = скан-код клавиши для проверки
; Выход: A = 0 (не нажата) или 1 (нажата)
; ----------------------------------------------------------------------------
PUBLIC _kbd_check_key
_kbd_check_key:
kbd_check_key_:
    ; TODO: Реализовать проверку конкретной клавиши
    ; Для заглушки проверяем только последнюю клавишу
    ld b, a
    ld a, (kbd_last_key)
    cp b
    jr z, @pressed
    xor a                  ; Не нажата
    ret
@pressed:
    ld a, 1                ; Нажата
    ret

; ----------------------------------------------------------------------------
; kbd_wait_key - Ожидать нажатия клавиши
; Выход: A = скан-код нажатой клавиши
; ----------------------------------------------------------------------------
PUBLIC _kbd_wait_key
_kbd_wait_key:
kbd_wait_key_:
@loop:
    call _kbd_get_key
    cp NO_KEY
    jr z, @loop
    ret

; ----------------------------------------------------------------------------
; kbd_set_repeat - Установить автоповтор клавиш
; Вход: HL = задержка перед повтором (мс)
;       DE = скорость повтора (мс)
; Выход: Нет
; ----------------------------------------------------------------------------
PUBLIC _kbd_set_repeat
_kbd_set_repeat:
kbd_set_repeat_:
    ld (kbd_repeat_delay), hl
    ld (kbd_repeat_rate), de
    ret

; ----------------------------------------------------------------------------
; kbd_get_shift_state - Получить состояние модификаторов
; Выход: A = битовая маска модификаторов
; ----------------------------------------------------------------------------
PUBLIC _kbd_get_shift_state
_kbd_get_shift_state:
kbd_get_shift_state_:
    ld a, (kbd_modifiers)
    ret

; ----------------------------------------------------------------------------
; kbd_is_shift_pressed - Проверить нажат ли Shift
; Выход: A = 0 или 1
; ----------------------------------------------------------------------------
PUBLIC _kbd_is_shift_pressed
_kbd_is_shift_pressed:
kbd_is_shift_pressed_:
    ld a, (kbd_modifiers)
    and KBD_SHIFT_MASK
    ret nz
    xor a
    ret

; ----------------------------------------------------------------------------
; kbd_is_ctrl_pressed - Проверить нажат ли Ctrl
; Выход: A = 0 или 1
; ----------------------------------------------------------------------------
PUBLIC _kbd_is_ctrl_pressed
_kbd_is_ctrl_pressed:
kbd_is_ctrl_pressed_:
    ld a, (kbd_modifiers)
    and KBD_CTRL_MASK
    ret nz
    xor a
    ret

; ----------------------------------------------------------------------------
; kbd_is_alt_pressed - Проверить нажат ли Alt
; Выход: A = 0 или 1
; ----------------------------------------------------------------------------
PUBLIC _kbd_is_alt_pressed
_kbd_is_alt_pressed:
kbd_is_alt_pressed_:
    ld a, (kbd_modifiers)
    and KBD_ALT_MASK
    ret nz
    xor a
    ret

; ----------------------------------------------------------------------------
; kbd_add_to_buffer - Добавить код в буфер (для прерываний)
; Вход: A = скан-код
; ----------------------------------------------------------------------------
PUBLIC _kbd_add_to_buffer
_kbd_add_to_buffer:
kbd_add_to_buffer_:
    push hl
    push de
    push bc
    
    ; Сохраняем последнюю клавишу
    ld (kbd_last_key), a
    
    ; Добавляем в буфер FIFO
    ld hl, kbd_buffer
    ld d, 0
    ld e, a
    ld a, (kbd_buffer_end)
    ld e, a
    add hl, de
    
    ; Сохраняем код
    ld (hl), a
    
    ; Увеличиваем указатель конца
    inc e
    ld a, e
    and 0x0F                ; Ограничение размера буфера
    ld (kbd_buffer_end), a
    
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; kbd_set_modifiers - Установить состояние модификаторов
; Вход: A = битовая маска
; ----------------------------------------------------------------------------
PUBLIC _kbd_set_modifiers
_kbd_set_modifiers:
kbd_set_modifiers_:
    ld (kbd_modifiers), a
    ret

; ----------------------------------------------------------------------------
; kbd_clear_buffer - Очистить буфер клавиатуры
; ----------------------------------------------------------------------------
PUBLIC _kbd_clear_buffer
_kbd_clear_buffer:
kbd_clear_buffer_:
    xor a
    ld (kbd_buffer_start), a
    ld (kbd_buffer_end), a
    ld (kbd_last_key), a
    ret