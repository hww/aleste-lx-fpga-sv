; ============================================================================
; VIDEO API - ПОЛИМОРФНЫЙ ИНТЕРФЕЙС
; Располагается в банке 0x24, адрес FF00
; ============================================================================
SECTION BANK_24_VIDEO_API
org 0xFF00

; ---- ГЛОБАЛЬНЫЙ ПОЛИМОРФНЫЙ ДРАЙВЕР ----
; Полиморфная таблица функций (заполняется динамически video_drv)
PUBLIC _gfx_driver
_gfx_driver:
_gfx_init:              ds 3          ; 0: init (jp)
_gfx_get_info:          ds 3          ; 2: get_info
_gfx_draw_pixel:        ds 3          ; 4: draw_pixel
_gfx_get_pixel:         ds 3          ; 6: get_pixel
_gfx_fill_rect:         ds 3          ; 8: fill_rect
_gfx_copy_rect:         ds 3          ; 10: copy_rect
_gfx_scroll_up:         ds 3          ; 12: scroll_up
_gfx_scroll_down:       ds 3          ; 14: scroll_down
_gfx_put_char:          ds 3          ; 16: put_char
_gfx_put_string:        ds 3          ; 18: put_string
_gfx_draw_line:         ds 3          ; 20: draw_line
_gfx_draw_rect:         ds 3          ; 22: draw_rect
_gfx_draw_circle:       ds 3          ; 24: draw_circle
_gfx_set_palette:       ds 3          ; 26: set_palette
_gfx_get_palette:       ds 3          ; 28: get_palette
_gfx_wait_vsync:        ds 3          ; 30: wait_vsync
_gfx_clear_screen:      ds 3          ; 32: clear_screen
_gfx_driver_end:

; ---- СИСТЕМНЫЙ API (вызывает полиморфные функции) ----
PUBLIC _sys_video_init, _sys_video_set_mode, _sys_video_get_mode
PUBLIC _sys_video_clear_screen, _sys_video_wait_vsync
PUBLIC _sys_video_draw_pixel, _sys_video_get_pixel
PUBLIC _sys_video_draw_line, _sys_video_draw_rect, _sys_video_draw_circle
PUBLIC _sys_video_fill_rect, _sys_video_copy_rect
PUBLIC _sys_video_scroll_up, _sys_video_scroll_down
PUBLIC _sys_video_put_char, _sys_video_put_string
PUBLIC _sys_palette_set_color, _sys_palette_get_color
PUBLIC _sys_video_get_info

; ---- ВНЕШНИЕ ССЫЛКИ НА VIDEO_DRV ----
EXTERN _video_init, _video_set_mode, _video_get_mode
EXTERN _video_mode_to_driver

; ---- СИСТЕМНЫЕ ПЕРЕХОДЫ ----

; Основные функции (управляются video_drv)
_sys_video_init:            jp _video_init
_sys_video_set_mode:        jp _video_set_mode
_sys_video_get_mode:        jp _video_get_mode

; Графические функции (полиморфные через _gfx_driver)
_sys_video_clear_screen:    jp _gfx_clear_screen
_sys_video_wait_vsync:      jp _gfx_wait_vsync
_sys_video_get_info:        jp _gfx_get_info
_sys_video_draw_pixel:      jp _gfx_draw_pixel
_sys_video_get_pixel:       jp _gfx_get_pixel
_sys_video_fill_rect:       jp _gfx_fill_rect
_sys_video_copy_rect:       jp _gfx_copy_rect
_sys_video_scroll_up:       jp _gfx_scroll_up
_sys_video_scroll_down:     jp _gfx_scroll_down
_sys_video_draw_line:       jp _gfx_draw_line
_sys_video_draw_rect:       jp _gfx_draw_rect
_sys_video_draw_circle:     jp _gfx_draw_circle
_sys_video_put_char:        jp _gfx_put_char
_sys_video_put_string:      jp _gfx_put_string
_sys_palette_set_color:     jp _gfx_set_palette
_sys_palette_get_color:     jp _gfx_get_palette

; Заполнение
    ds 0xFFFF - $, 0xFF