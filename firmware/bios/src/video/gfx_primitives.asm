; ============================================================================
; GRAPHICS PRIMITIVES - универсальные реализации
; ============================================================================
module gfx_primitives

EXTERN current_gfx_driver

; ----------------------------------------------------------------------------
; gfx_draw_line - Алгоритм Брезенхема (универсальный)
; ----------------------------------------------------------------------------
PUBLIC gfx_draw_line
gfx_draw_line:
    ; B = x1, C = y1, D = x2, E = y2, H = цвет
    push hl
    push de
    push bc
    push af
    push ix
    
    ; Сохраняем параметры
    ld a, b
    ld (line_x1), a
    ld a, c
    ld (line_y1), a
    ld a, d
    ld (line_x2), a
    ld a, e
    ld (line_y2), a
    ld a, h
    ld (line_color), a
    
    ; Вычисляем dx и dy
    ; dx = abs(x2 - x1)
    ld a, (line_x2)
    ld b, a
    ld a, (line_x1)
    sub b
    jp nc, gfx_line_dx_positive
    neg
gfx_line_dx_positive:
    ld (line_dx), a
    
    ; dy = abs(y2 - y1)
    ld a, (line_y2)
    ld b, a
    ld a, (line_y1)
    sub b
    jp nc, gfx_line_dy_positive
    neg
gfx_line_dy_positive:
    ld (line_dy), a
    
    ; Определяем steep (крутизна)
    ld a, (line_dy)
    ld b, a
    ld a, (line_dx)
    cp b
    jp c, gfx_line_steep_true
    
    ; NOT steep (|dx| >= |dy|)
    xor a
    ld (line_steep), a
    
    ; Убеждаемся, что x1 < x2
    ld a, (line_x1)
    ld b, a
    ld a, (line_x2)
    cp b
    jp nc, gfx_line_not_steep_continue
    
    ; Меняем точки местами
    ld a, b
    ld (line_x2), a
    ld a, (line_x1)
    ld (line_x1), a
    
    ld a, (line_y1)
    ld b, a
    ld a, (line_y2)
    ld (line_y1), a
    ld a, b
    ld (line_y2), a
    
    jp gfx_line_not_steep_continue
    
gfx_line_steep_true:
    ; Steep (|dy| > |dx|)
    ld a, 1
    ld (line_steep), a
    
    ; Убеждаемся, что y1 < y2
    ld a, (line_y1)
    ld b, a
    ld a, (line_y2)
    cp b
    jp nc, gfx_line_steep_continue
    
    ; Меняем точки местами
    ld a, b
    ld (line_y2), a
    ld a, (line_y1)
    ld (line_y1), a
    
    ld a, (line_x1)
    ld b, a
    ld a, (line_x2)
    ld (line_x1), a
    ld a, b
    ld (line_x2), a

gfx_line_steep_continue:
    ; Для steep линии меняем x и y местами
    ld a, (line_dx)
    ld b, a
    ld a, (line_dy)
    ld (line_dx), a
    ld a, b
    ld (line_dy), a
    
    ; Продолжаем как не-steep линию
gfx_line_not_steep_continue:
    ; Инициализация алгоритма Брезенхема
    ld a, (line_dy)
    sla a
    ld (line_error), a
    
    ld a, (line_dx)
    ld b, a
    ld a, (line_error)
    sub b
    ld (line_error), a
    
    ; ystep = 1 если y1 < y2, иначе -1
    ld a, (line_y2)
    ld b, a
    ld a, (line_y1)
    cp b
    jp c, gfx_line_ystep_positive
    ld a, -1
    jp gfx_line_set_ystep
gfx_line_ystep_positive:
    ld a, 1
gfx_line_set_ystep:
    ld (line_ystep), a
    
    ; Основной цикл
    ld a, (line_x1)
    ld (line_x), a
    ld a, (line_y1)
    ld (line_y), a
    
    ld a, (line_dx)
    inc a
    ld b, a
    
gfx_line_loop:
    ; Рисуем точку
    push bc
    ld a, (line_x)
    ld b, a
    ld a, (line_y)
    ld c, a
    ld a, (line_steep)
    or a
    jp z, gfx_line_draw_point
    
    ; Для steep линии меняем x и y
    ld d, b
    ld b, c
    ld c, d
    
gfx_line_draw_point:
    ld a, (line_color)
    call GFX_CALL_DRAW_PIXEL
    pop bc
    
    ; Проверяем error
    ld a, (line_error)
    bit 7, a
    jp z, gfx_line_error_positive
    
    ; error < 0
    ld a, (line_error)
    ld c, a
    ld a, (line_dy)
    add a, c
    add a, c
    ld (line_error), a
    jp gfx_line_next
    
gfx_line_error_positive:
    ; error >= 0
    ld a, (line_error)
    ld c, a
    ld a, (line_dx)
    ld d, a
    ld a, c
    sub d
    sub d
    ld (line_error), a
    
    ; y += ystep
    ld a, (line_y)
    ld c, a
    ld a, (line_ystep)
    add a, c
    ld (line_y), a
    
gfx_line_next:
    ; x += 1
    ld a, (line_x)
    inc a
    ld (line_x), a
    
    djnz gfx_line_loop
    
    pop ix
    pop af
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; GFX_CALL_DRAW_PIXEL - Вызов draw_pixel через таблицу векторов
; ----------------------------------------------------------------------------
GFX_CALL_DRAW_PIXEL:
    ; A = цвет, B = X, C = Y
    push hl
    push de
    
    ; Получаем указатель на драйвер
    ld hl, (current_gfx_driver)
    ld de, 4    ; смещение до draw_pixel в vtable
    add hl, de
    ld a, (hl)
    inc hl
    ld h, (hl)
    ld l, a
    
    ; Вызываем функцию
    ex de, hl
    pop hl
    push hl
    call jp_de
    
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; gfx_copy_rect_generic - Копирование прямоугольника (универсальное)
; ----------------------------------------------------------------------------
PUBLIC gfx_copy_rect_generic
gfx_copy_rect_generic:
    ; B = src_x, C = src_y, D = dst_x, E = dst_y, H = w, L = h
    push hl
    push de
    push bc
    push af
    push ix
    
    ; Сохраняем параметры
    ld a, b
    ld (copy_src_x), a
    ld a, c
    ld (copy_src_y), a
    ld a, d
    ld (copy_dst_x), a
    ld a, e
    ld (copy_dst_y), a
    ld a, h
    ld (copy_w), a
    ld a, l
    ld (copy_h), a
    
    ; Получаем pitch из текущего драйвера
    call gfx_get_pitch
    ld (copy_pitch), hl
    
    ; Определяем направление копирования
    ; Если dst_y > src_y - копируем снизу вверх
    ld a, (copy_dst_y)
    ld b, a
    ld a, (copy_src_y)
    cp b
    jp c, gfx_copy_downward
    
    ; Копируем сверху вниз
    xor a
    ld (copy_reverse), a
    jp gfx_copy_start
    
gfx_copy_downward:
    ; Копируем снизу вверх
    ld a, 1
    ld (copy_reverse), a
    
gfx_copy_start:
    ; Реализация копирования (упрощенная)
    ; TODO: Оптимизировать для больших областей
    
    pop ix
    pop af
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; gfx_scroll_up_generic - Прокрутка вверх
; ----------------------------------------------------------------------------
PUBLIC gfx_scroll_up_generic
gfx_scroll_up_generic:
    ; A = количество строк
    push hl
    push de
    push bc
    push af
    
    ; Сохраняем количество строк
    ld (scroll_lines), a
    
    ; Получаем pitch и VRAM размер
    call gfx_get_pitch
    ld (scroll_pitch), hl
    
    call gfx_get_vram_size
    ld (scroll_vram_size), hl
    
    ; Вычисляем размер для копирования
    ; size = (height - lines) * pitch
    ld a, (scroll_lines)
    ld b, a
    call gfx_get_height
    sub b
    jp z, gfx_scroll_up_done  ; Прокручивать нечего
    
    ld l, a
    ld h, 0
    ld de, (scroll_pitch)
    call mul_hl_de
    ld (scroll_copy_size), hl
    
    ; source = vram + lines * pitch
    ld a, (scroll_lines)
    ld l, a
    ld h, 0
    ld de, (scroll_pitch)
    call mul_hl_de
    ld de, (vram_base)
    add hl, de
    ld (scroll_src), hl
    
    ; dest = vram
    ld hl, (vram_base)
    ld (scroll_dst), hl
    
    ; memcpy(dest, source, copy_size)
    ld hl, (scroll_src)
    ld de, (scroll_dst)
    ld bc, (scroll_copy_size)
    ldir
    
    ; Очищаем последние строки
    call gfx_clear_last_lines
    
gfx_scroll_up_done:
    pop af
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; gfx_scroll_down_generic - Прокрутка вниз
; ----------------------------------------------------------------------------
PUBLIC gfx_scroll_down_generic
gfx_scroll_down_generic:
    ; A = количество строк
    push hl
    push de
    push bc
    push af
    
    ; Сохраняем количество строк
    ld (scroll_lines), a
    
    ; Получаем pitch и VRAM размер
    call gfx_get_pitch
    ld (scroll_pitch), hl
    
    call gfx_get_vram_size
    ld (scroll_vram_size), hl
    
    ; Вычисляем размер для копирования
    ; size = (height - lines) * pitch
    ld a, (scroll_lines)
    ld b, a
    call gfx_get_height
    sub b
    jp z, gfx_scroll_down_done  ; Прокручивать нечего
    
    ld l, a
    ld h, 0
    ld de, (scroll_pitch)
    call mul_hl_de
    ld (scroll_copy_size), hl
    
    ; source = vram
    ld hl, (vram_base)
    ld (scroll_src), hl
    
    ; dest = vram + lines * pitch
    ld a, (scroll_lines)
    ld l, a
    ld h, 0
    ld de, (scroll_pitch)
    call mul_hl_de
    ld de, (vram_base)
    add hl, de
    ld (scroll_dst), hl
    
    ; memcpy(dest, source, copy_size) - с конца
    ld hl, (scroll_src)
    ld de, (scroll_dst)
    ld bc, (scroll_copy_size)
    
    ; Копируем с конца
    add hl, bc
    dec hl
    ex de, hl
    add hl, bc
    dec hl
    ex de, hl
    lddr
    
    ; Очищаем первые строки
    call gfx_clear_first_lines
    
gfx_scroll_down_done:
    pop af
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; gfx_get_pitch - Получить pitch из текущего драйвера
; ----------------------------------------------------------------------------
gfx_get_pitch:
    push hl
    push de
    
    ; Получаем информацию о режиме
    ld hl, (current_gfx_driver)
    ld de, 2    ; смещение до get_info
    add hl, de
    ld a, (hl)
    inc hl
    ld h, (hl)
    ld l, a
    call jp_de  ; HL = структура VIDEO_MODE
    
    ; Pitch находится по смещению 6
    ld de, 6
    add hl, de
    ld e, (hl)
    inc hl
    ld d, (hl)
    ex de, hl
    
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; gfx_get_height - Получить высоту экрана
; ----------------------------------------------------------------------------
gfx_get_height:
    push hl
    push de
    
    ; Получаем информацию о режиме
    ld hl, (current_gfx_driver)
    ld de, 2    ; смещение до get_info
    add hl, de
    ld a, (hl)
    inc hl
    ld h, (hl)
    ld l, a
    call jp_de  ; HL = структура VIDEO_MODE
    
    ; Высота находится по смещению 2
    inc hl
    inc hl
    ld e, (hl)
    inc hl
    ld d, (hl)
    ex de, hl
    ld a, l
    
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; gfx_get_vram_size - Получить размер VRAM
; ----------------------------------------------------------------------------
gfx_get_vram_size:
    push hl
    push de
    
    ; Получаем информацию о режиме
    ld hl, (current_gfx_driver)
    ld de, 2    ; смещение до get_info
    add hl, de
    ld a, (hl)
    inc hl
    ld h, (hl)
    ld l, a
    call jp_de  ; HL = структура VIDEO_MODE
    
    ; Размер VRAM находится по смещению 8
    ld de, 8
    add hl, de
    ld e, (hl)
    inc hl
    ld d, (hl)
    ex de, hl
    
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; gfx_clear_last_lines - Очистить последние строки
; ----------------------------------------------------------------------------
gfx_clear_last_lines:
    push hl
    push de
    push bc
    push af
    
    ; Вычисляем адрес начала последних строк
    ld a, (scroll_lines)
    ld l, a
    ld h, 0
    ld de, (scroll_pitch)
    call mul_hl_de  ; HL = lines * pitch
    
    ld de, (scroll_vram_size)
    ex de, hl
    sbc hl, de      ; HL = vram_size - lines * pitch
    ld de, (vram_base)
    add hl, de      ; HL = адрес начала
    
    ; Очищаем lines * pitch байт
    ld de, hl
    inc de
    ld bc, (scroll_lines)
    ld a, b
    ld b, c
    ld c, a
    ld hl, (scroll_pitch)
    call mul_hl_bc  ; HL = lines * pitch
    ld bc, hl
    dec bc
    ld (hl), 0
    ldir
    
    pop af
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; gfx_clear_first_lines - Очистить первые строки
; ----------------------------------------------------------------------------
gfx_clear_first_lines:
    push hl
    push de
    push bc
    push af
    
    ; Адрес начала VRAM
    ld hl, (vram_base)
    
    ; Количество байт для очистки
    ld a, (scroll_lines)
    ld e, a
    ld d, 0
    ld hl, (scroll_pitch)
    call mul_hl_de  ; HL = lines * pitch
    
    ; Очищаем
    ld de, hl
    ld hl, (vram_base)
    ex de, hl
    ld bc, hl
    dec bc
    ld (hl), 0
    ldir
    
    pop af
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; mul_hl_bc - Умножение HL * BC
; ----------------------------------------------------------------------------
mul_hl_bc:
    ; Вход: HL, BC
    ; Выход: HL = HL * BC
    push de
    push af
    
    ld de, 0
    ld a, 16
    
mul_hl_bc_loop:
    add hl, hl
    rl e
    rl d
    jp nc, mul_hl_bc_no_add
    add hl, bc
    
mul_hl_bc_no_add:
    dec a
    jp nz, mul_hl_bc_loop
    
    pop af
    pop de
    ret

; ----------------------------------------------------------------------------
; jp_de - Вызов по адресу в DE
; ----------------------------------------------------------------------------
jp_de:
    jp (hl)


gfx_clear_screen:

    ret 

; ---- ДАННЫЕ ----
SECTION GFX_PRIMITIVES_DATA

; Для линии
line_x1:        db 0
line_y1:        db 0
line_x2:        db 0
line_y2:        db 0
line_dx:        db 0
line_dy:        db 0
line_error:     db 0
line_ystep:     db 0
line_steep:     db 0
line_x:         db 0
line_y:         db 0
line_color:     db 0

; Для копирования
copy_src_x:     db 0
copy_src_y:     db 0
copy_dst_x:     db 0
copy_dst_y:     db 0
copy_w:         db 0
copy_h:         db 0
copy_pitch:     dw 0
copy_reverse:   db 0

; Для прокрутки
scroll_lines:   db 0
scroll_pitch:   dw 0
scroll_vram_size: dw 0
scroll_copy_size: dw 0
scroll_src:     dw 0
scroll_dst:     dw 0

; Для умножения
SECTION GFX_PRIMITIVES_TEMP
temp_value:     dw 0