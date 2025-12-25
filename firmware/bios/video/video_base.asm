; ============================================================================
; BASE VIDEO DRIVER - Общие методы для всех видеочипов
; ============================================================================
module video_base

; ---- КОНСТАНТЫ ----
VIDEO_TYPE_NONE      equ 0
VIDEO_TYPE_CRTC6845  equ 1  ; Aleste LX, CPC
VIDEO_TYPE_V9938     equ 2  ; MSX2
VIDEO_TYPE_VDP2      equ 3  ; Sega Genesis
VIDEO_TYPE_TMS9928   equ 4  ; MSX1, ColecoVision
VIDEO_TYPE_ULA_PLUS  equ 5  ; ZX Spectrum 128K
VIDEO_TYPE_EF9365    equ 6  ; Thomson MO/TO

; ---- ОБЩИЕ ДАННЫЕ ----
SECTION VIDEO_BASE_DATA

; Текущие параметры
current_width:     dw 80
current_height:    dw 25
current_depth:     db 1      ; бит на пиксель
current_vram_base: dw 0x4000

; Цвета
fg_color:         db 0xFF
bg_color:         db 0x00

; Курсор
cursor_x:         db 0
cursor_y:         db 0

; ---- ОБЩИЕ МЕТОДЫ (реализации) ----
SECTION VIDEO_BASE_CODE

; ----------------------------------------------------------------------------
; video_base_init - Базовая инициализация
; ----------------------------------------------------------------------------
PUBLIC video_base_init
video_base_init:
    ret  ; Абстрактный метод, будет переопределен

; ----------------------------------------------------------------------------
; video_base_clear_screen - Очистка экрана
; ----------------------------------------------------------------------------
PUBLIC video_base_clear_screen
video_base_clear_screen:
    push hl
    push de
    push bc
    
    ; Получаем размер VRAM
    call video_base_get_vram_size
    ld (vram_temp_size), hl
    
    ; Заполняем нулями
    ld hl, (current_vram_base)
    ld de, (current_vram_base)
    inc de
    ld bc, (vram_temp_size)
    dec bc
    ld (hl), 0
    ldir
    
    ; Сбрасываем курсор
    xor a
    ld (cursor_x), a
    ld (cursor_y), a
    
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; video_base_put_char - Вывести символ в позицию курсора
; ----------------------------------------------------------------------------
PUBLIC video_base_put_char
video_base_put_char:
    ; A = символ
    push hl
    push de
    push bc
    push af
    
    ; Вычисляем адрес в VRAM
    call video_base_calc_cursor_addr
    ex de, hl  ; DE = адрес в VRAM
    
    ; Получаем символ из шрифта
    pop af
    push af
    call video_base_get_font_char
    ; HL = указатель на данные символа
    
    ; Рендерим символ
    call video_base_render_char
    
    ; Сдвигаем курсор
    call video_base_advance_cursor
    
    pop af
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; video_base_put_string - Вывести строку
; ----------------------------------------------------------------------------
PUBLIC video_base_put_string
video_base_put_string:
    ; HL = указатель на строку
    push hl
    push af
    
@video_base_put_string_loop:
    ld a, (hl)
    or a
    jp z, @video_base_put_string_done
    
    cp 10  ; LF
    jp z, @video_base_put_string_newline
    cp 13  ; CR
    jp z, @video_base_put_string_carriage
    
    ; Обычный символ
    call video_base_put_char
    jp @video_base_put_string_next
    
@video_base_put_string_newline:
    call video_base_newline
    jp @video_base_put_string_next
    
@video_base_put_string_carriage:
    call video_base_carriage_return
    
@video_base_put_string_next:
    inc hl
    jp @video_base_put_string_loop
    
@video_base_put_string_done:
    pop af
    pop hl
    ret

; ----------------------------------------------------------------------------
; video_base_set_cursor - Установить позицию курсора
; ----------------------------------------------------------------------------
PUBLIC video_base_set_cursor
video_base_set_cursor:
    ; B = X, C = Y
    ld a, b
    ld (cursor_x), a
    ld a, c
    ld (cursor_y), a
    ret

; ----------------------------------------------------------------------------
; video_base_get_cursor - Получить позицию курсора
; ----------------------------------------------------------------------------
PUBLIC video_base_get_cursor
video_base_get_cursor:
    ; Возврат: B = X, C = Y
    ld a, (cursor_x)
    ld b, a
    ld a, (cursor_y)
    ld c, a
    ret

; ----------------------------------------------------------------------------
; video_base_scroll_up - Прокрутка вверх
; ----------------------------------------------------------------------------
PUBLIC video_base_scroll_up
video_base_scroll_up:
    push hl
    push de
    push bc
    
    ; Вычисляем размер строки в байтах
    call video_base_get_bytes_per_line
    ld (line_size), hl
    
    ; Копируем строки
    ld hl, (current_vram_base)
    ld de, (current_vram_base)
    ld bc, (line_size)
    add hl, bc  ; HL = вторая строка
    
    ; Количество строк для копирования
    ld a, (current_height)
    dec a
    ld b, a
    
@video_base_scroll_up_loop:
    push bc
    ld bc, (line_size)
    ldir
    pop bc
    dec b
    jp nz, @video_base_scroll_up_loop
    
    ; Очищаем последнюю строку
    ld hl, (current_vram_base)
    ld a, (current_height)
    dec a
    call video_base_get_line_addr
    ex de, hl
    inc de
    ld bc, (line_size)
    dec bc
    ld (hl), 0
    ldir
    
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; video_base_set_color - Установить цвета
; ----------------------------------------------------------------------------
PUBLIC video_base_set_color
video_base_set_color:
    ; A = цвет текста, B = цвет фона
    ld (fg_color), a
    ld a, b
    ld (bg_color), a
    ret

; ----------------------------------------------------------------------------
; video_base_get_color - Получить цвета
; ----------------------------------------------------------------------------
PUBLIC video_base_get_color
video_base_get_color:
    ; Возврат: A = цвет текста, B = цвет фона
    ld a, (fg_color)
    ld b, a
    ld a, (bg_color)
    ld c, a
    ld b, c  ; B = цвет фона
    ret

; ----------------------------------------------------------------------------
; mul_hl_de - Умножение HL * DE
; ----------------------------------------------------------------------------
mul_hl_de:
    ; Вход: HL, DE
    ; Выход: HL = HL * DE
    push af
    push bc
    push de
    
    ld bc, 0
    ld a, 16
    
@mul_hl_de_loop:
    add hl, hl
    rl e
    rl d
    jp nc, @mul_hl_de_no_add
    add hl, bc
    
@mul_hl_de_no_add:
    dec a
    jp nz, @mul_hl_de_loop
    
    pop de
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; mul_de_a - Умножение DE * A
; ----------------------------------------------------------------------------
mul_de_a:
    ; Вход: DE, A
    ; Выход: DE = DE * A
    push hl
    push bc
    
    ld hl, 0
    ld b, 8
    
@mul_de_a_loop:
    add hl, hl
    sla e
    rl d
    jp nc, @mul_de_a_no_add
    add hl, de
    
@mul_de_a_no_add:
    dec b
    jp nz, @mul_de_a_loop
    
    ex de, hl
    
    pop bc
    pop hl
    ret

; ----------------------------------------------------------------------------
; mul_a_b - Умножение A * B (быстрое для 8 бит)
; ----------------------------------------------------------------------------
mul_a_b:
    ; Вход: A, B
    ; Выход: HL = A * B
    push de
    
    ld l, a
    ld h, 0
    ld d, h
    ld e, b
    
    ld a, b
    or a
    jp z, @mul_a_b_done
    
    ld a, b  ; сохраняем счетчик
    
@mul_a_b_loop_8:
    add hl, hl
    rl e
    rl d
    jp nc, @mul_a_b_skip_8
    add hl, de
    
@mul_a_b_skip_8:
    dec a
    jp nz, @mul_a_b_loop_8
    
@mul_a_b_done:
    pop de
    ret

; ---- ВСПОМОГАТЕЛЬНЫЕ МЕТОДЫ ----

; ----------------------------------------------------------------------------
; video_base_calc_cursor_addr - Вычислить адрес курсора
; ----------------------------------------------------------------------------
video_base_calc_cursor_addr:
    ; Возврат HL = адрес в VRAM
    ld a, (cursor_y)
    call video_base_get_line_addr
    ld a, (cursor_x)
    call video_base_add_x_offset
    ret

; ----------------------------------------------------------------------------
; video_base_get_line_addr - Адрес начала строки Y
; ----------------------------------------------------------------------------
video_base_get_line_addr:
    ; A = номер строки, возврат HL = адрес
    push de
    push bc
    
    call video_base_get_bytes_per_line
    push hl
    pop de  ; DE = bytes per line
    
    ld h, 0
    ld l, a
    call mul_hl_de  ; HL = Y * bytes_per_line
    
    ld de, (current_vram_base)
    add hl, de
    
    pop bc
    pop de
    ret

; ----------------------------------------------------------------------------
; video_base_add_x_offset - Добавить смещение X
; ----------------------------------------------------------------------------
video_base_add_x_offset:
    ; A = X, HL = базовый адрес, возврат HL = адрес + X*bytes_per_pixel
    push de
    push bc
    
    call video_base_get_bytes_per_pixel
    ld e, a
    ld d, 0
    
    ; Умножаем X на bytes_per_pixel
    push af
    ld a, (cursor_x)
    call mul_de_a  ; DE = X * bytes_per_pixel
    pop af
    
    add hl, de
    
    pop bc
    pop de
    ret

; ----------------------------------------------------------------------------
; video_base_advance_cursor - Сдвинуть курсор
; ----------------------------------------------------------------------------
video_base_advance_cursor:
    ld a, (cursor_x)
    inc a
    ld (cursor_x), a
    
    ; Проверка переноса
    ld b, a
    ld a, (current_width)
    cp b
    ret nc
    
    ; Перенос строки
    xor a
    ld (cursor_x), a
    ld a, (cursor_y)
    inc a
    ld (cursor_y), a
    
    ; Проверка прокрутки
    ld b, a
    ld a, (current_height)
    cp b
    ret nc
    
    ; Прокрутка
    dec a
    ld (cursor_y), a
    call video_base_scroll_up
    ret

; ----------------------------------------------------------------------------
; video_base_newline - Переход на новую строку
; ----------------------------------------------------------------------------
video_base_newline:
    xor a
    ld (cursor_x), a
    ld a, (cursor_y)
    inc a
    ld (cursor_y), a
    
    ; Проверка прокрутки
    ld b, a
    ld a, (current_height)
    cp b
    ret nc
    
    dec a
    ld (cursor_y), a
    call video_base_scroll_up
    ret

; ----------------------------------------------------------------------------
; video_base_carriage_return - Возврат каретки
; ----------------------------------------------------------------------------
video_base_carriage_return:
    xor a
    ld (cursor_x), a
    ret

; ---- АБСТРАКТНЫЕ МЕТОДЫ (должны быть реализованы в наследниках) ----

; ----------------------------------------------------------------------------
; video_base_get_vram_size - Размер VRAM
; ----------------------------------------------------------------------------
video_base_get_vram_size:
    ; Должен быть переопределен
    ld hl, 0
    ret

; ----------------------------------------------------------------------------
; video_base_get_bytes_per_line - Байт на строку
; ----------------------------------------------------------------------------
video_base_get_bytes_per_line:
    ; Должен быть переопределен
    ld hl, 80
    ret

; ----------------------------------------------------------------------------
; video_base_get_bytes_per_pixel - Байт на пиксель
; ----------------------------------------------------------------------------
video_base_get_bytes_per_pixel:
    ; Должен быть переопределен
    ld a, 1
    ret

; ----------------------------------------------------------------------------
; video_base_get_font_char - Получить данные символа
; ----------------------------------------------------------------------------
video_base_get_font_char:
    ; A = символ, возврат HL = данные
    ; Должен быть переопределен
    ld hl, default_font
    ret

; ----------------------------------------------------------------------------
; video_base_render_char - Отрендерить символ
; ----------------------------------------------------------------------------
video_base_render_char:
    ; HL = данные символа, DE = адрес в VRAM
    ; Должен быть переопределен
    ret

; ---- ДАННЫЕ ----
SECTION VIDEO_BASE_TEMP
vram_temp_size:   dw 0
line_size:        dw 0

SECTION VIDEO_BASE_CONST
default_font:     ds 256 * 8  ; Заглушка для шрифта