; ============================================================================
; 4BPP GRAPHICS DRIVER (320x200, 16 цветов)
; ============================================================================
module gfx_driver_4bpp

EXTERN mul_hl_de, mul_de_a
EXTERN crtc_set_mode, crtc_wait_vsync
EXTERN gfx_draw_line, gfx_draw_rect, gfx_draw_circle
EXTERN gfx_copy_rect_generic, gfx_scroll_up_generic, gfx_scroll_down_generic
EXTERN font_get_char_data_8x8

; ---- КОНСТАНТЫ РЕЖИМА ----
WIDTH_4BPP        equ 320
HEIGHT_4BPP       equ 200
DEPTH_4BPP        equ 4
PITCH_4BPP        equ 160     ; 320/2 = 160 байт на строку
VRAM_SIZE_4BPP    equ 32000   ; 160*200
VRAM_BASE_4BPP    equ 0x4000

; Tetrada LUT (4 пикселя в байте)
SECTION GFX_4BPP_LUT

tetrada_lut:
    ; 16 цветов → 4 тетрады
    db 0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77
    db 0x88, 0x99, 0xAA, 0xBB, 0xCC, 0xDD, 0xEE, 0xFF

; ---- VTABLE ДЛЯ 4BPP ----
SECTION GFX_4BPP_VTABLE

PUBLIC gfx_4bpp_driver
gfx_4bpp_driver:
    dw gfx_4bpp_init          ; init
    dw gfx_4bpp_get_info      ; get_info
    dw gfx_4bpp_draw_pixel    ; draw_pixel (ОСОБЫЙ!)
    dw gfx_4bpp_get_pixel     ; get_pixel (ОСОБЫЙ!)
    dw gfx_4bpp_fill_rect     ; fill_rect
    dw gfx_4bpp_copy_rect     ; copy_rect (ОСОБЫЙ - выравнивание!)
    dw gfx_4bpp_scroll_up     ; scroll_up
    dw gfx_4bpp_scroll_down   ; scroll_down
    dw gfx_4bpp_put_char      ; put_char (ОСОБЫЙ - тетрады!)
    dw gfx_4bpp_put_string    ; put_string
    dw gfx_draw_line          ; draw_line
    dw gfx_draw_rect          ; draw_rect
    dw gfx_draw_circle        ; draw_circle
    dw gfx_4bpp_set_palette   ; set_palette (12-bit!)
    dw gfx_4bpp_get_palette   ; get_palette
    dw crtc_wait_vsync        ; wait_vsync

SECTION GFX_4BPP_CODE

; ----------------------------------------------------------------------------
; gfx_4bpp_init - Инициализация 4bpp режима
; ----------------------------------------------------------------------------
PUBLIC gfx_4bpp_init
gfx_4bpp_init:
    ; Установить CRTC режим 2 (320x200 4bpp)
    ld a, 2
    call crtc_set_mode
    
    ; Инициализировать VRAM базу
    ld hl, VRAM_BASE_4BPP
    ld (vram_base), hl
    
    ; Установить стандартную палитру
    call gfx_4bpp_init_palette
    
    ret

; ----------------------------------------------------------------------------
; gfx_4bpp_get_info - Получить информацию о режиме
; ----------------------------------------------------------------------------
PUBLIC gfx_4bpp_get_info
gfx_4bpp_get_info:
    ; Возврат: HL = структура VIDEO_MODE
    ld hl, gfx_4bpp_mode_info
    ret

; ----------------------------------------------------------------------------
; gfx_4bpp_calc_address - Вычислить адрес для 4bpp
; ----------------------------------------------------------------------------
gfx_4bpp_calc_address:
    ; B = X, C = Y
    ; Возврат: HL = адрес
    
    ; Y * 160
    ld h, 0
    ld l, c
    ld de, PITCH_4BPP
    call mul_hl_de      ; HL = Y * 160
    
    ; + X / 2 (2 пикселя в байте)
    ld a, b
    srl a               ; A = X / 2
    ld e, a
    ld d, 0
    add hl, de          ; HL = offset
    
    ; + VRAM base
    ld de, (vram_base)
    add hl, de          ; HL = адрес байта
    
    ret

; ----------------------------------------------------------------------------
; gfx_4bpp_draw_pixel - Нарисовать точку (4bpp)
; Вход: B = X (0-319), C = Y (0-199), A = цвет (0-15)
; ----------------------------------------------------------------------------
PUBLIC gfx_4bpp_draw_pixel
gfx_4bpp_draw_pixel:
    push hl
    push de
    push bc
    push af
    
    ; 2 пикселя в байте!
    ; addr = vram_base + y*160 + x/2
    call gfx_4bpp_calc_address  ; HL = адрес
    
    ; Проверяем чётность X
    ld a, b
    and 1
    jr z, gfx_4bpp_even_x
    
    ; Нечётный X - нижние 4 бита
    pop af
    push af
    and 0x0F       ; только 4 бита
    ld b, a
    
    ld a, (hl)
    and 0xF0       ; очищаем нижние 4 бита
    or b           ; устанавливаем новые
    jr gfx_4bpp_draw_done
    
gfx_4bpp_even_x:
    ; Чётный X - верхние 4 бита
    pop af
    push af
    and 0x0F
    rlca
    rlca
    rlca
    rlca           ; сдвигаем в верхние 4 бита
    ld b, a
    
    ld a, (hl)
    and 0x0F       ; очищаем верхние 4 бита
    or b           ; устанавливаем новые
    
gfx_4bpp_draw_done:
    ld (hl), a
    
    pop af
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; gfx_4bpp_get_pixel - Получить цвет пикселя (4bpp)
; ----------------------------------------------------------------------------
PUBLIC gfx_4bpp_get_pixel
gfx_4bpp_get_pixel:
    ; B = X, C = Y
    ; Возврат: A = цвет (0-15)
    push hl
    push bc
    
    call gfx_4bpp_calc_address  ; HL = адрес
    
    ; Проверяем чётность X
    ld a, b
    and 1
    jr z, gfx_4bpp_get_even_x
    
    ; Нечётный X - нижние 4 бита
    ld a, (hl)
    and 0x0F
    jr gfx_4bpp_get_done
    
gfx_4bpp_get_even_x:
    ; Чётный X - верхние 4 бита
    ld a, (hl)
    rlca
    rlca
    rlca
    rlca
    and 0x0F
    
gfx_4bpp_get_done:
    pop bc
    pop hl
    ret

; ----------------------------------------------------------------------------
; gfx_4bpp_put_char - Вывести символ (4bpp)
; ----------------------------------------------------------------------------
PUBLIC gfx_4bpp_put_char
gfx_4bpp_put_char:
    ; B = X (в пикселях), C = Y (в пикселях)
    ; A = символ, H = цвет (0-15)
    push hl
    push de
    push bc
    push af
    push ix
    
    ; 1. Получаем данные символа
    pop af
    push af
    call font_get_char_data_8x8  ; HL = данные шрифта 8x8
    
    ; 2. Рендерим 8 строк
    ld d, 8             ; высота символа
    ld a, h             ; сохраняем цвет
    ld (char_color_4bpp), a
    
gfx_4bpp_char_loop:
    push bc
    push hl
    
    ; Рендерим одну строку символа (2 пикселя за раз)
    ld a, (hl)          ; байт шрифта
    inc hl
    ld (char_byte_4bpp), a
    
    ; Рендерим 4 байта (8 пикселей)
    ld e, 4             ; 4 байта на строку (2 пикселя в байте)
    
gfx_4bpp_char_byte_loop:
    ; Получаем 2 бита из шрифта
    ld a, (char_byte_4bpp)
    ld b, a
    and 0xC0            ; первые 2 бита
    rlca
    rlca
    rlca                ; A = 00xx0000
    
    ; Применяем цвет
    cp 0
    jr z, gfx_4bpp_char_bg1
    ld a, (char_color_4bpp)
gfx_4bpp_char_bg1:
    ; Левый пиксель готов
    
    ; Готовим правый пиксель
    ld c, a             ; сохраняем левый пиксель
    ld a, b
    and 0x30            ; следующие 2 бита
    rlca
    rlca                ; A = 00xx0000
    
    ; Применяем цвет
    cp 0
    jr z, gfx_4bpp_char_bg2
    ld a, (char_color_4bpp)
gfx_4bpp_char_bg2:
    
    ; Объединяем два пикселя в байт
    rlca
    rlca
    rlca
    rlca               ; сдвигаем в верхние 4 бита
    or c               ; объединяем с левым пикселем
    
    ; Записываем байт
    call gfx_4bpp_write_byte
    
    ; Сдвигаем шрифтовый байт
    ld a, (char_byte_4bpp)
    sla a
    sla a               ; сдвигаем на 2 бита
    ld (char_byte_4bpp), a
    
    ; Следующий байт
    ld a, b
    add a, 2            ; X += 2 пикселя
    ld b, a
    dec e
    jr nz, gfx_4bpp_char_byte_loop
    
    pop hl
    pop bc
    
    ; Следующая строка
    inc c
    dec d
    jr nz, gfx_4bpp_char_loop
    
    pop ix
    pop af
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; gfx_4bpp_write_byte - Записать байт в 4bpp режиме
; ----------------------------------------------------------------------------
gfx_4bpp_write_byte:
    ; B = X, C = Y, A = байт данных
    push hl
    push de
    push bc
    push af
    
    ; Вычисляем адрес
    push af
    call gfx_4bpp_calc_address
    pop af
    
    ; Записываем байт
    ld (hl), a
    
    pop af
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; gfx_4bpp_put_string - Вывести строку
; ----------------------------------------------------------------------------
PUBLIC gfx_4bpp_put_string
gfx_4bpp_put_string:
    ; HL = указатель на строку
    ; B = X, C = Y, H = цвет
    push hl
    push de
    push bc
    push af
    
    ld (string_x_4bpp), bc
    ld a, h
    ld (string_color_4bpp), a
    
gfx_4bpp_string_loop:
    ld a, (hl)
    or a
    jr z, gfx_4bpp_string_done
    
    ; Выводим символ
    push hl
    ld bc, (string_x_4bpp)
    ld h, (string_color_4bpp)
    call gfx_4bpp_put_char
    pop hl
    
    ; Сдвигаем позицию на 8 пикселей
    ld a, (string_x_4bpp)
    add a, 8
    ld (string_x_4bpp), a
    
    ; Следующий символ
    inc hl
    jr gfx_4bpp_string_loop
    
gfx_4bpp_string_done:
    pop af
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; gfx_4bpp_fill_rect - Заполнить прямоугольник (4bpp)
; ----------------------------------------------------------------------------
PUBLIC gfx_4bpp_fill_rect
gfx_4bpp_fill_rect:
    ; B = X, C = Y, D = ширина, E = высота, H = цвет (0-15)
    push hl
    push de
    push bc
    push ix
    
    ; Создаем байт заполнения (2 одинаковых пикселя)
    ld a, h
    and 0x0F
    ld b, a
    rlca
    rlca
    rlca
    rlca
    or b                ; A = цвет | цвет (оба пикселя одинаковые)
    ld (fill_byte_4bpp), a
    
    ; Вычисляем начальный адрес
    call gfx_4bpp_calc_address
    ld (fill_addr_4bpp), hl
    
    ; Сохраняем размеры
    ld a, d
    srl a               ; ширина в байтах = ширина/2
    ld (fill_w_4bpp), a
    ld a, e
    ld (fill_h_4bpp), a
    
    ; Заполняем по строкам
gfx_4bpp_fill_y_loop:
    ld hl, (fill_addr_4bpp)
    ld a, (fill_w_4bpp)
    ld b, a
    
gfx_4bpp_fill_x_loop:
    ld a, (fill_byte_4bpp)
    ld (hl), a
    inc hl
    dec b
    jr nz, gfx_4bpp_fill_x_loop
    
    ; Следующая строка: +160 байт
    ld hl, (fill_addr_4bpp)
    ld de, PITCH_4BPP
    add hl, de
    ld (fill_addr_4bpp), hl
    
    ; Уменьшаем высоту
    ld a, (fill_h_4bpp)
    dec a
    ld (fill_h_4bpp), a
    jr nz, gfx_4bpp_fill_y_loop
    
    pop ix
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; gfx_4bpp_copy_rect - Копировать прямоугольник (4bpp)
; ----------------------------------------------------------------------------
PUBLIC gfx_4bpp_copy_rect
gfx_4bpp_copy_rect:
    jp gfx_copy_rect_generic

; ----------------------------------------------------------------------------
; gfx_4bpp_scroll_up - Прокрутка вверх (4bpp)
; ----------------------------------------------------------------------------
PUBLIC gfx_4bpp_scroll_up
gfx_4bpp_scroll_up:
    jp gfx_scroll_up_generic

; ----------------------------------------------------------------------------
; gfx_4bpp_scroll_down - Прокрутка вниз (4bpp)
; ----------------------------------------------------------------------------
PUBLIC gfx_4bpp_scroll_down
gfx_4bpp_scroll_down:
    jp gfx_scroll_down_generic

; ----------------------------------------------------------------------------
; gfx_4bpp_set_palette - Установить палитру
; ----------------------------------------------------------------------------
PUBLIC gfx_4bpp_set_palette
gfx_4bpp_set_palette:
    ; A = индекс цвета (0-15), H = значение (RRRGGGBBB)
    ; TODO: Реализовать установку 12-битной палитры
    ret

; ----------------------------------------------------------------------------
; gfx_4bpp_get_palette - Получить палитру
; ----------------------------------------------------------------------------
PUBLIC gfx_4bpp_get_palette
gfx_4bpp_get_palette:
    ; A = индекс цвета (0-15)
    ; Возврат: H = значение
    ld h, 0xFF  ; Белый цвет
    ret

; ----------------------------------------------------------------------------
; gfx_4bpp_init_palette - Инициализировать палитру
; ----------------------------------------------------------------------------
gfx_4bpp_init_palette:
    ; TODO: Инициализировать 16-цветную палитру
    ret

; ---- ДАННЫЕ ----
SECTION GFX_4BPP_DATA

vram_base:          dw VRAM_BASE_4BPP

; Временные переменные
char_color_4bpp:    db 0
char_byte_4bpp:     db 0
string_x_4bpp:      db 0
string_y_4bpp:      db 0
string_color_4bpp:  db 0
fill_byte_4bpp:     db 0
fill_addr_4bpp:     dw 0
fill_w_4bpp:        db 0
fill_h_4bpp:        db 0

; Информация о режиме
gfx_4bpp_mode_info:
    dw WIDTH_4BPP
    dw HEIGHT_4BPP
    db DEPTH_4BPP
    dw PITCH_4BPP
    dw VRAM_SIZE_4BPP
    db 16        ; palette_size (16 цветов)
    db 0         ; flags

SECTION GFX_4BPP_CONST
; Стандартная 16-цветная палитра
gfx_4bpp_default_palette:
    ; RRRGGGBBB формат
    db 0x00, 0x00, 0x00  ; 0: черный
    db 0x00, 0x00, 0x07  ; 1: синий
    db 0x00, 0x07, 0x00  ; 2: зеленый
    db 0x00, 0x07, 0x07  ; 3: голубой
    db 0x07, 0x00, 0x00  ; 4: красный
    db 0x07, 0x00, 0x07  ; 5: фиолетовый
    db 0x07, 0x07, 0x00  ; 6: желтый
    db 0x07, 0x07, 0x07  ; 7: белый
    db 0x00, 0x00, 0x0F  ; 8: ярко-синий
    db 0x00, 0x0F, 0x00  ; 9: ярко-зеленый
    db 0x00, 0x0F, 0x0F  ; 10: ярко-голубой
    db 0x0F, 0x00, 0x00  ; 11: ярко-красный
    db 0x0F, 0x00, 0x0F  ; 12: ярко-фиолетовый
    db 0x0F, 0x0F, 0x00  ; 13: ярко-желтый
    db 0x0F, 0x0F, 0x0F  ; 14: ярко-белый
    db 0x00, 0x00, 0x00  ; 15: черный (дубликат)