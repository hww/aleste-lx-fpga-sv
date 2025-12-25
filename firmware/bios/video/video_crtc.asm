; ============================================================================
; CRTC 6845 CONTROLLER DRIVER
; ============================================================================
module video_crtc

; ---- КОНСТАНТЫ ----
CRTC_INDEX    equ 0x20
CRTC_DATA     equ 0x21
MMIO_PAGE     equ 0xF1

; ---- РЕГИСТРЫ CRTC ----
CRTC_HTOTAL         equ 0x00
CRTC_HDISPLAY       equ 0x01
CRTC_HSYNCPOS       equ 0x02
CRTC_HSYNCWIDTH     equ 0x03
CRTC_VTOTAL         equ 0x04
CRTC_VADJUST        equ 0x05
CRTC_VDISPLAY       equ 0x06
CRTC_VSYNCPOS       equ 0x07
CRTC_INTERLACE      equ 0x08
CRTC_MAXSCAN        equ 0x09
CRTC_CURSOR_START   equ 0x0A
CRTC_CURSOR_END     equ 0x0B
CRTC_START_ADDR_H   equ 0x0C
CRTC_START_ADDR_L   equ 0x0D
CRTC_CURSOR_H       equ 0x0E
CRTC_CURSOR_L       equ 0x0F

; Расширенные регистры (Aleste LX)
CRTC_VIDEO_CONTROL  equ 0x12
CRTC_ADDR_MODE      equ 0x14
CRTC_PIXEL_CTRL     equ 0x15

SECTION VIDEO_CRTC_DATA

; Текущий режим CRTC
crtc_current_mode:   db 0
crtc_current_width:  dw 640
crtc_current_height: dw 200
crtc_current_depth:  db 1

SECTION VIDEO_CRTC_CODE

; ----------------------------------------------------------------------------
; crtc_init - Инициализация CRTC
; ----------------------------------------------------------------------------
PUBLIC crtc_init
crtc_init:
    ; Включить страницу MMIO для CRTC
    ld a, 3
    out (MMIO_PAGE), a
    ret

; ----------------------------------------------------------------------------
; crtc_set_mode - Установить видеорежим
; Вход: A = номер режима (0-10)
; ----------------------------------------------------------------------------
PUBLIC crtc_set_mode
crtc_set_mode:
    push af
    push bc
    push hl
    
    ; Сохраняем номер режима
    ld (crtc_current_mode), a
    
    ; Получаем таблицу параметров для этого режима
    call crtc_get_mode_table
    
    ; Устанавливаем все регистры из таблицы
    call crtc_set_registers
    
    ; Обновляем параметры ширины/высоты/глубины
    call crtc_update_params
    
    pop hl
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; crtc_get_mode_table - Получить таблицу параметров режима
; Вход: A = номер режима
; Выход: HL = таблица, B = количество записей
; ----------------------------------------------------------------------------
crtc_get_mode_table:
    ld hl, crtc_mode_tables
    ld c, a
    ld b, 0
    add hl, bc
    add hl, bc
    add hl, bc      ; ×8 (каждая таблица 8 байт)
    
    ; Читаем указатель и размер
    ld e, (hl)
    inc hl
    ld d, (hl)
    inc hl
    ld b, (hl)
    
    ex de, hl      ; HL = таблица
    ret

; ----------------------------------------------------------------------------
; crtc_set_registers - Установить регистры из таблицы
; ----------------------------------------------------------------------------
crtc_set_registers:
    ; HL = таблица [reg, value]...
    ; B = количество записей
    ld c, CRTC_INDEX
    
@loop:
    ld a, (hl)      ; регистр
    out (c), a
    inc hl
    
    inc c           ; CRTC_DATA
    ld a, (hl)      ; значение
    out (c), a
    inc hl
    
    dec c           ; вернуться к INDEX
    djnz @loop
    ret

; ----------------------------------------------------------------------------
; crtc_set_start_addr - Установить начальный адрес VRAM
; Вход: HL = адрес (0x0000-0xFFFF)
; ----------------------------------------------------------------------------
PUBLIC crtc_set_start_addr
crtc_set_start_addr:
    push af
    
    ; START_ADDR_H
    ld a, CRTC_START_ADDR_H
    out (CRTC_INDEX), a
    ld a, h
    out (CRTC_DATA), a
    
    ; START_ADDR_L
    ld a, CRTC_START_ADDR_L
    out (CRTC_INDEX), a
    ld a, l
    out (CRTC_DATA), a
    
    pop af
    ret

; ----------------------------------------------------------------------------
; crtc_set_cursor_pos - Установить позицию курсора
; Вход: DE = позиция (0-1999 для 80x25)
; ----------------------------------------------------------------------------
PUBLIC crtc_set_cursor_pos
crtc_set_cursor_pos:
    push af
    
    ; CURSOR_H
    ld a, CRTC_CURSOR_H
    out (CRTC_INDEX), a
    ld a, d
    out (CRTC_DATA), a
    
    ; CURSOR_L
    ld a, CRTC_CURSOR_L
    out (CRTC_INDEX), a
    ld a, e
    out (CRTC_DATA), a
    
    pop af
    ret

; ----------------------------------------------------------------------------
; crtc_wait_vsync - Ожидание вертикальной синхронизации
; ----------------------------------------------------------------------------
PUBLIC crtc_wait_vsync
crtc_wait_vsync:
    ; TODO: Реализовать через чтение статуса или таймер
    ret

; ---- ТАБЛИЦЫ РЕЖИМОВ CRTC ----

include "video_crtc_modes.asm"

