; ============================================================================
; VIDEO MANAGER - главный координатор
; ============================================================================
module video_drv

; Включаем все компоненты
INCLUDE "video_base.asm"  ; Базовые утилиты
INCLUDE "video_crtc.asm"
INCLUDE "video_palette.asm"
INCLUDE "gfx_driver_1bpp.asm"
INCLUDE "gfx_driver_4bpp.asm"
INCLUDE "gfx_primitives.asm"
INCLUDE "text_console.asm"

; ---- ТАБЛИЦА ДРАЙВЕРОВ ----
SECTION VIDEO_MANAGER_DATA

; Таблица драйверов для всех режимов
gfx_drivers_table:
    dw gfx_1bpp_driver    ; Режим 0: 640x200 1bpp
    dw gfx_4bpp_driver    ; Режим 1: 320x200 4bpp
    ; ... другие драйверы

; Текущий драйвер
current_gfx_driver_ptr: dw 0

; ---- ГЛАВНЫЙ API ----
SECTION VIDEO_MANAGER_CODE

; ----------------------------------------------------------------------------
; video_init - Инициализация всей видеосистемы
; ----------------------------------------------------------------------------
PUBLIC video_init
video_init:
    ; 1. Инициализация CRTC
    call crtc_init
    
    ; 2. Инициализация палитры
    call palette_init
    
    ; 3. Установка режима по умолчанию
    ld a, 0  ; 640x200 1bpp
    call video_set_mode
    
    ; 4. Инициализация консоли
    call console_init
    
    ret

; ----------------------------------------------------------------------------
; video_set_mode - Установить видеорежим
; ----------------------------------------------------------------------------
PUBLIC video_set_mode
video_set_mode:
    ; A = номер режима
    
    ; 1. Установить CRTC режим
    call crtc_set_mode
    
    ; 2. Выбрать соответствующий графический драйвер
    call gfx_select_driver
    
    ; 3. Обновить палитру для режима
    call palette_update_for_mode
    
    ; 4. Очистить экран
    call GFX_CALL_CLEAR_SCREEN
    
    ret

; ----------------------------------------------------------------------------
; gfx_select_driver - Выбрать графический драйвер
; ----------------------------------------------------------------------------
gfx_select_driver:
    ; A = номер режима
    
    ; Получаем драйвер из таблицы
    ld hl, gfx_drivers_table
    ld c, a
    ld b, 0
    add hl, bc
    add hl, bc
    
    ld a, (hl)
    inc hl
    ld h, (hl)
    ld l, a
    ld (current_gfx_driver_ptr), hl
    
    ; Инициализируем драйвер
    call GFX_CALL_INIT
    
    ret

; ----------------------------------------------------------------------------
; Макросы для вызова методов текущего драйвера
; ----------------------------------------------------------------------------
MACRO GFX_CALL offset
    ld hl, (current_gfx_driver_ptr)
    ld bc, offset
    add hl, bc
    ld a, (hl)
    inc hl
    ld h, (hl)
    ld l, a
    call hl
ENDM

; Публичные API функции
PUBLIC video_draw_pixel
video_draw_pixel:
    GFX_CALL 4  ; draw_pixel
    ret

PUBLIC video_put_char
video_put_char:
    GFX_CALL 16 ; put_char
    ret

PUBLIC video_copy_rect
video_copy_rect:
    GFX_CALL 10 ; copy_rect
    ret