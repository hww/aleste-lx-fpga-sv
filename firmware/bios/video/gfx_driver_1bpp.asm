; ============================================================================
; 1BPP GRAPHICS DRIVER (640x200, монохромный)
; ============================================================================
module gfx_driver_1bpp

EXTERN mul_hl_de, mul_de_a
EXTERN crtc_set_mode, crtc_wait_vsync
EXTERN gfx_draw_line, gfx_draw_rect, gfx_draw_circle
EXTERN gfx_copy_rect_generic, gfx_scroll_up_generic, gfx_scroll_down_generic
EXTERN font_get_char_data, font_get_char_data_8x8

; ---- КОНСТАНТЫ РЕЖИМА ----
WIDTH_1BPP        equ 640
HEIGHT_1BPP       equ 200
DEPTH_1BPP        equ 1
PITCH_1BPP        equ 80      ; 640/8 = 80 байт на строку
VRAM_SIZE_1BPP    equ 16000   ; 80*200

; VRAM база для 1bpp режима
VRAM_BASE_1BPP    equ 0x4000

; ---- VTABLE ДЛЯ 1BPP ----
SECTION GFX_1BPP_VTABLE

PUBLIC gfx_1bpp_driver
gfx_1bpp_driver:
    dw gfx_1bpp_init          ; 0: init
    dw gfx_1bpp_get_info      ; 2: get_info
    dw gfx_1bpp_draw_pixel    ; 4: draw_pixel
    dw gfx_1bpp_get_pixel     ; 6: get_pixel
    dw gfx_1bpp_fill_rect     ; 8: fill_rect
    dw gfx_1bpp_copy_rect     ; 10: copy_rect
    dw gfx_1bpp_scroll_up     ; 12: scroll_up
    dw gfx_1bpp_scroll_down   ; 14: scroll_down
    dw gfx_1bpp_put_char      ; 16: put_char
    dw gfx_1bpp_put_string    ; 18: put_string
    dw gfx_draw_line          ; 20: draw_line (общая)
    dw gfx_draw_rect          ; 22: draw_rect (общая)
    dw gfx_draw_circle        ; 24: draw_circle (общая)
    dw gfx_1bpp_set_palette   ; 26: set_palette
    dw gfx_1bpp_get_palette   ; 28: get_palette
    dw crtc_wait_vsync        ; 30: wait_vsync

SECTION GFX_1BPP_CODE

; ----------------------------------------------------------------------------
; gfx_1bpp_init - Инициализация 1bpp режима
; ----------------------------------------------------------------------------
PUBLIC gfx_1bpp_init
gfx_1bpp_init:
    ; Установить CRTC режим 1 (640x200 1bpp)
    ld a, 1
    call crtc_set_mode
    
    ; Установить палитру
    call gfx_1bpp_init_palette
    
    ; Инициализировать VRAM базу
    ld hl, VRAM_BASE_1BPP
    ld (vram_base), hl
    
    ret

; ----------------------------------------------------------------------------
; gfx_1bpp_get_info - Получить информацию о режиме
; ----------------------------------------------------------------------------
PUBLIC gfx_1bpp_get_info
gfx_1bpp_get_info:
    ; Возврат: HL = структура VIDEO_MODE
    ld hl, gfx_1bpp_mode_info
    ret

; ---- ОСОБЫЕ РЕАЛИЗАЦИИ ДЛЯ 1BPP ----

; ----------------------------------------------------------------------------
; gfx_1bpp_draw_pixel - Нарисовать точку (1bpp)
; Вход: B = X (0-639), C = Y (0-199), A = цвет (0/1)
; ----------------------------------------------------------------------------
PUBLIC gfx_1bpp_draw_pixel
gfx_1bpp_draw_pixel:
    push hl
    push de
    push bc
    push af
    
    ; 1. Вычислить адрес байта
    ; addr = vram_base + y*80 + x/8
    call gfx_1bpp_calc_address  ; HL = адрес байта, C = маска бита
    
    ; 2. Получить текущий байт
    ld e, (hl)
    
    ; 3. Установить/сбросить бит
    pop af      ; A = цвет (0/1)
    push af
    
    or a
    jr z, gfx_1bpp_clear_bit
    
    ; Установить бит
    ld a, e
    or c        ; C = маска бита
    jr gfx_1bpp_write_byte
    
gfx_1bpp_clear_bit:
    ; Сбросить бит
    ld a, c
    cpl         ; инвертировать маску
    and e
    
gfx_1bpp_write_byte:
    ld (hl), a
    
    pop af
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; gfx_1bpp_calc_address - Вычислить адрес и маску для пикселя
; ----------------------------------------------------------------------------
gfx_1bpp_calc_address:
    ; B = X, C = Y
    ; Возврат: HL = адрес, C = маска бита
    
    ; Y * 80
    ld h, 0
    ld l, c
    ld de, PITCH_1BPP
    call mul_hl_de      ; HL = Y * 80
    
    ; + X / 8
    ld a, b
    srl a
    srl a
    srl a               ; A = X / 8
    ld e, a
    ld d, 0
    add hl, de          ; HL = offset
    
    ; + VRAM base
    ld de, (vram_base)
    add hl, de          ; HL = адрес байта
    
    ; Маска бита: 7 - (X % 8)
    ld a, b
    and 7               ; A = X % 8
    ld c, 0x80
gfx_1bpp_mask_loop:
    or a
    jr z, gfx_1bpp_mask_done
    rrc c               ; сдвиг вправо
    dec a
    jr gfx_1bpp_mask_loop
    
gfx_1bpp_mask_done:
    ret

; ----------------------------------------------------------------------------
; gfx_1bpp_get_pixel - Получить цвет пикселя
; ----------------------------------------------------------------------------
PUBLIC gfx_1bpp_get_pixel
gfx_1bpp_get_pixel:
    ; B = X, C = Y
    ; Возврат: A = цвет (0/1)
    push hl
    push bc
    
    call gfx_1bpp_calc_address  ; HL = адрес, C = маска
    
    ld a, (hl)
    and c
    jr z, gfx_1bpp_pixel_0
    
    ld a, 1
    jr gfx_1bpp_get_pixel_done
    
gfx_1bpp_pixel_0:
    xor a
    
gfx_1bpp_get_pixel_done:
    pop bc
    pop hl
    ret

; ----------------------------------------------------------------------------
; gfx_1bpp_fill_rect - Заполнить прямоугольник
; ----------------------------------------------------------------------------
PUBLIC gfx_1bpp_fill_rect
gfx_1bpp_fill_rect:
    ; B = X, C = Y, D = ширина, E = высота, H = цвет (0/1)
    push hl
    push de
    push bc
    push ix
    
    ; Простая реализация через цикл пикселей
    ld a, h
    ld (fill_color), a
    
    ; Сохраняем координаты
    ld (rect_x), bc
    ld a, d
    ld (rect_w), a
    ld a, e
    ld (rect_h), a
    
    ; Начальная Y координата
    ld a, c
    ld (current_y), a
    
gfx_1bpp_fill_rect_y_loop:
    ld a, (rect_x)
    ld b, a
    ld a, (current_y)
    ld c, a
    
    ; Заполняем строку
    ld a, (rect_w)
    ld d, a
    
gfx_1bpp_fill_rect_x_loop:
    push bc
    push de
    ld a, (fill_color)
    call gfx_1bpp_draw_pixel
    pop de
    pop bc
    
    inc b
    dec d
    jr nz, gfx_1bpp_fill_rect_x_loop
    
    ; Следующая строка
    ld a, (current_y)
    inc a
    ld (current_y), a
    
    ld a, (rect_h)
    dec a
    ld (rect_h), a
    jr nz, gfx_1bpp_fill_rect_y_loop
    
    pop ix
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; gfx_1bpp_put_char - Вывести символ (1bpp)
; ----------------------------------------------------------------------------
PUBLIC gfx_1bpp_put_char
gfx_1bpp_put_char:
    ; B = X (в пикселях), C = Y (в пикселях)
    ; A = символ, H = цвет (0/1)
    push hl
    push de
    push bc
    push af
    
    ; 1. Получаем данные символа
    pop af
    push af
    call font_get_char_data_8x8  ; HL = данные шрифта 8x8
    
    ; 2. Рендерим 8 строк
    ld d, 8             ; высота символа
    ld a, h             ; сохраняем цвет
    ld (char_color), a
    
gfx_1bpp_char_loop:
    push bc
    push hl
    
    ; Рендерим одну строку символа
    ld a, (hl)          ; байт шрифта
    inc hl
    ld (char_byte), a
    
    ; Рендерим 8 пикселей строки
    ld e, 8             ; ширина символа
    
gfx_1bpp_char_pixel_loop:
    ld a, (char_byte)
    rlca                ; бит в carry
    ld (char_byte), a
    jr nc, gfx_1bpp_char_pixel_skip
    
    ; Рисуем пиксель
    push bc
    push de
    ld a, (char_color)
    call gfx_1bpp_draw_pixel
    pop de
    pop bc
    
gfx_1bpp_char_pixel_skip:
    inc b               ; следующий пиксель по X
    dec e
    jr nz, gfx_1bpp_char_pixel_loop
    
    pop hl
    pop bc
    
    ; Следующая строка
    inc c
    dec d
    jr nz, gfx_1bpp_char_loop
    
    pop af
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; gfx_1bpp_put_string - Вывести строку
; ----------------------------------------------------------------------------
PUBLIC gfx_1bpp_put_string
gfx_1bpp_put_string:
    ; HL = указатель на строку
    ; B = X, C = Y, H = цвет
    push hl
    push de
    push bc
    push af
    
    ld (string_x), bc
    ld a, h
    ld (string_color), a
    
gfx_1bpp_string_loop:
    ld a, (hl)
    or a
    jr z, gfx_1bpp_string_done
    
    ; Выводим символ
    push hl
    ld bc, (string_x)
    ld h, (string_color)
    call gfx_1bpp_put_char
    pop hl
    
    ; Сдвигаем позицию на 8 пикселей
    ld a, (string_x)
    add a, 8
    ld (string_x), a
    
    ; Следующий символ
    inc hl
    jr gfx_1bpp_string_loop
    
gfx_1bpp_string_done:
    pop af
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; gfx_1bpp_set_palette - Установить палитру (1bpp)
; ----------------------------------------------------------------------------
PUBLIC gfx_1bpp_set_palette
gfx_1bpp_set_palette:
    ; A = индекс цвета (0-1), H = значение
    ret  ; В 1bpp палитра не используется

; ----------------------------------------------------------------------------
; gfx_1bpp_get_palette - Получить палитру (1bpp)
; ----------------------------------------------------------------------------
PUBLIC gfx_1bpp_get_palette
gfx_1bpp_get_palette:
    ; A = индекс цвета (0-1)
    ; Возврат: H = значение
    ld h, 0xFF  ; Белый цвет
    ret

; ----------------------------------------------------------------------------
; gfx_1bpp_init_palette - Инициализировать палитру
; ----------------------------------------------------------------------------
gfx_1bpp_init_palette:
    ; Черно-белая палитра
    ; Устанавливаем через порты палитры (зависит от железа)
    ret

; ----------------------------------------------------------------------------
; gfx_1bpp_copy_rect - Копировать прямоугольник
; ----------------------------------------------------------------------------
PUBLIC gfx_1bpp_copy_rect
gfx_1bpp_copy_rect:
    jp gfx_copy_rect_generic

; ----------------------------------------------------------------------------
; gfx_1bpp_scroll_up - Прокрутка вверх
; ----------------------------------------------------------------------------
PUBLIC gfx_1bpp_scroll_up
gfx_1bpp_scroll_up:
    jp gfx_scroll_up_generic

; ----------------------------------------------------------------------------
; gfx_1bpp_scroll_down - Прокрутка вниз
; ----------------------------------------------------------------------------
PUBLIC gfx_1bpp_scroll_down
gfx_1bpp_scroll_down:
    jp gfx_scroll_down_generic

; ---- ДАННЫЕ ----
SECTION GFX_1BPP_DATA

; VRAM база
vram_base:      dw VRAM_BASE_1BPP

; Временные переменные для функций
fill_color:     db 0
rect_x:         db 0
rect_y:         db 0
rect_w:         db 0
rect_h:         db 0
current_y:      db 0
char_color:     db 0
char_byte:      db 0
string_x:       db 0
string_y:       db 0
string_color:   db 0

; Информация о режиме
gfx_1bpp_mode_info:
    dw WIDTH_1BPP
    dw HEIGHT_1BPP
    db DEPTH_1BPP
    dw PITCH_1BPP
    dw VRAM_SIZE_1BPP
    db 2        ; palette_size (чёрный/белый)
    db 0        ; flags

SECTION GFX_1BPP_CONST
; Палитра для 1bpp
gfx_1bpp_palette:
    db 0x00, 0x00, 0x00  ; черный
    db 0xFF, 0xFF, 0xFF  ; белый