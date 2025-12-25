; ============================================================================
; TEXT CONSOLE MANAGER
; ============================================================================
module text_console

EXTERN current_gfx_driver
EXTERN gfx_put_char, gfx_put_string
EXTERN gfx_scroll_up, gfx_clear_line

; ---- ДАННЫЕ КОНСОЛИ ----
SECTION TEXT_CONSOLE_DATA

; Параметры консоли
console_width:      db 80
console_height:     db 25
console_cursor_x:   db 0
console_cursor_y:   db 0
console_color_fg:   db 0x0F
console_color_bg:   db 0x00

; Текстовый буфер (80x25 символов + атрибуты)
text_buffer:        ds 80*25*2  ; char + attr

SECTION TEXT_CONSOLE_CODE

; ----------------------------------------------------------------------------
; console_init - Инициализация консоли
; ----------------------------------------------------------------------------
PUBLIC console_init
console_init:
    ; Очищаем буфер
    ld hl, text_buffer
    ld de, text_buffer + 1
    ld bc, 80*25*2 - 1
    ld (hl), ' '
    ldir
    
    ; Устанавливаем курсор
    xor a
    ld (console_cursor_x), a
    ld (console_cursor_y), a
    
    ; Устанавливаем цвета
    ld a, 0x0F
    ld (console_color_fg), a
    xor a
    ld (console_color_bg), a
    
    ret

; ----------------------------------------------------------------------------
; console_carriage_return - Возврат каретки
; ----------------------------------------------------------------------------
console_carriage_return:
    xor a
    ld (console_cursor_x), a
    ret

; ----------------------------------------------------------------------------
; console_backspace - Удаление символа
; ----------------------------------------------------------------------------
console_backspace:
    ld a, (console_cursor_x)
    or a
    ret z
    
    dec a
    ld (console_cursor_x), a
    
    ; Очищаем символ в буфере
    call console_clear_char_at_cursor
    
    ; Очищаем на экране
    ld a, (console_cursor_x)
    ld b, a
    ld a, (console_cursor_y)
    ld c, a
    call console_convert_to_pixels
    ld a, ' '
    ld hl, (console_color_bg)
    ld h, l
    call GFX_CALL_PUT_CHAR
    
    ret

; ----------------------------------------------------------------------------
; console_escape - Обработка ESC-последовательности
; ----------------------------------------------------------------------------
console_escape:
    ; TODO: Реализовать обработку ESC-последовательностей
    ret

; ----------------------------------------------------------------------------
; console_clear_char_at_cursor - Очистить символ в буфере
; ----------------------------------------------------------------------------
console_clear_char_at_cursor:
    push hl
    push de
    push bc
    
    ; Вычисляем адрес в буфере
    ld a, (console_cursor_y)
    ld hl, 0
    ld l, a
    add hl, hl  ; *2
    add hl, hl  ; *4
    add hl, hl  ; *8
    add hl, hl  ; *16
    add hl, hl  ; *32
    add hl, hl  ; *64
    push hl
    add hl, hl  ; *128
    pop de
    add hl, de  ; *192 (80*2.4)
    
    ld de, text_buffer
    add hl, de
    
    ld a, (console_cursor_x)
    add a, a    ; *2
    ld e, a
    ld d, 0
    add hl, de
    
    ; Записываем пробел
    ld (hl), ' '
    inc hl
    ld a, (console_color_fg)
    ld (hl), a
    
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; console_convert_to_pixels - Конвертировать текст. координаты в пиксели
; ----------------------------------------------------------------------------
console_convert_to_pixels:
    ; B = x (0-79), C = y (0-24)
    ; На выходе: B = x*8, C = y*8
    
    ; X координата
    ld a, b
    add a, a    ; *2
    add a, a    ; *4
    add a, a    ; *8
    ld b, a
    
    ; Y координата
    ld a, c
    add a, a    ; *2
    add a, a    ; *4
    add a, a    ; *8
    ld c, a
    
    ret

; ----------------------------------------------------------------------------
; GFX_CALL_PUT_CHAR - Вызов put_char через таблицу векторов
; ----------------------------------------------------------------------------
GFX_CALL_PUT_CHAR:
    ; A = символ, B = x, C = y, H = цвет
    push hl
    push de
    
    ; Получаем указатель на драйвер
    ld hl, (current_gfx_driver)
    ld de, 6    ; смещение до put_char в vtable
    add hl, de
    ld a, (hl)
    inc hl
    ld h, (hl)
    ld l, a
    
    ; Вызываем функцию
    ld a, (console_color_fg)
    ld h, a
    ex de, hl
    pop hl
    push hl
    call @jp_de
    
    pop de
    pop hl
    ret

@jp_de:
    jp (hl)

; ----------------------------------------------------------------------------
; console_update_buffer - Обновить символ в буфере
; ----------------------------------------------------------------------------
console_update_buffer:
    push hl
    push de
    push bc
    
    ; Вычисляем адрес в буфере
    ld a, (console_cursor_y)
    ld hl, 0
    ld l, a
    add hl, hl  ; *2
    add hl, hl  ; *4
    add hl, hl  ; *8
    add hl, hl  ; *16
    add hl, hl  ; *32
    add hl, hl  ; *64
    push hl
    add hl, hl  ; *128
    pop de
    add hl, de  ; *192 (80*2.4)
    
    ld de, text_buffer
    add hl, de
    
    ld a, (console_cursor_x)
    add a, a    ; *2
    ld e, a
    ld d, 0
    add hl, de
    
    ; Сохраняем символ и атрибут
    pop bc
    push bc
    ld (hl), c  ; символ
    inc hl
    ld a, (console_color_fg)
    ld (hl), a  ; атрибут
    
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; console_put_char - Вывести символ в консоль
; ----------------------------------------------------------------------------
PUBLIC console_put_char
console_put_char:
    ; A = символ
    cp 0x0A  ; LF
    jp z, console_newline
    cp 0x0D  ; CR
    jp z, console_carriage_return
    cp 0x08  ; BS
    jp z, console_backspace
    cp 0x1B  ; ESC
    jp z, console_escape
    
    ; Обычный символ
    push af
    push bc
    
    ; Получаем позицию курсора
    ld a, (console_cursor_x)
    ld b, a
    ld a, (console_cursor_y)
    ld c, a
    
    ; Выводим символ через графический драйвер
    ; Но сначала конвертируем координаты в пиксели
    call console_convert_to_pixels  ; BC = пиксельные координаты
    
    pop hl
    push hl
    ld a, l  ; символ
    ld hl, (console_color_fg)
    ld h, l
    call GFX_CALL_PUT_CHAR  ; через vtable!
    
    ; Обновляем буфер
    call console_update_buffer
    
    ; Сдвигаем курсор
    ld a, (console_cursor_x)
    inc a
    ld (console_cursor_x), a
    cp 80
    call nc, console_newline
    
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; console_put_string - Вывести строку в консоль
; ----------------------------------------------------------------------------
PUBLIC console_put_string
console_put_string:
    ; HL = строка
    push hl
    push af
    
console_put_string_loop:
    ld a, (hl)
    or a
    jr z, console_put_string_done
    
    call console_put_char
    inc hl
    jr console_put_string_loop
    
console_put_string_done:
    pop af
    pop hl
    ret

; ----------------------------------------------------------------------------
; console_newline - Переход на новую строку
; ----------------------------------------------------------------------------
console_newline:
    xor a
    ld (console_cursor_x), a
    
    ld a, (console_cursor_y)
    inc a
    ld (console_cursor_y), a
    cp 25
    ret c
    
    ; Прокрутка
    dec a
    ld (console_cursor_y), a
    call console_scroll_up
    ret

; ----------------------------------------------------------------------------
; console_scroll_up - Прокрутка консоли вверх
; ----------------------------------------------------------------------------
console_scroll_up:
    push hl
    push de
    push bc
    
    ; Прокрутка буфера
    ld hl, text_buffer + 80*2    ; начало второй строки
    ld de, text_buffer           ; начало первой строки
    ld bc, 80*24*2               ; 24 строки по 80*2 байт
    ldir
    
    ; Очистка последней строки в буфере
    ld hl, text_buffer + 80*24*2 ; начало последней строки
    ld de, text_buffer + 80*24*2 + 1
    ld bc, 80*2 - 1
    ld (hl), ' '
    ldir
    
    ; Прокрутка экрана через графический драйвер
    ld a, 8  ; 8 пикселей (высота строки)
    call gfx_scroll_up
    
    ; Очистка последней строки на экране
    ld c, 24  ; последняя строка
    call console_clear_line
    
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; console_clear_line - Очистить строку на экране
; ----------------------------------------------------------------------------
console_clear_line:
    ; C = номер строки (0-24)
    push bc
    
    ; Конвертируем в пиксели
    ld b, 0
    call console_convert_to_pixels
    
    ; Очищаем через графический драйвер
    ld a, c
    call gfx_clear_line
    
    pop bc
    ret

; ----------------------------------------------------------------------------
; console_clear_screen - Очистить весь экран
; ----------------------------------------------------------------------------
PUBLIC console_clear_screen
console_clear_screen:
    push hl
    push de
    push bc
    
    ; Очищаем буфер
    ld hl, text_buffer
    ld de, text_buffer + 1
    ld bc, 80*25*2 - 1
    ld (hl), ' '
    ldir
    
    ; Очищаем экран через графический драйвер
    call gfx_clear_screen
    
    ; Сбрасываем курсор
    xor a
    ld (console_cursor_x), a
    ld (console_cursor_y), a
    
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; console_set_cursor - Установить позицию курсора
; ----------------------------------------------------------------------------
PUBLIC console_set_cursor
console_set_cursor:
    ; B = x, C = y
    ld a, b
    cp 80
    jr c, console_set_cursor_x_ok
    ld a, 79
console_set_cursor_x_ok:
    ld (console_cursor_x), a
    
    ld a, c
    cp 25
    jr c, console_set_cursor_y_ok
    ld a, 24
console_set_cursor_y_ok:
    ld (console_cursor_y), a
    ret

; ----------------------------------------------------------------------------
; console_set_color - Установить цвет текста
; ----------------------------------------------------------------------------
PUBLIC console_set_color
console_set_color:
    ; A = цвет (старшие 4 бита - фон, младшие 4 - текст)
    push af
    
    and 0x0F
    ld (console_color_fg), a
    
    pop af
    rra
    rra
    rra
    rra
    and 0x0F
    ld (console_color_bg), a
    
    ret