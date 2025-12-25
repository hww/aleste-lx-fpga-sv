; ============================================================================
; VIDEO API JUMP TABLE - Интерфейс для всей системы
; Располагается в банке 0x24
; ============================================================================

; ---- ПУБЛИЧНЫЕ СИМВОЛЫ ----

; Основные функции видео
PUBLIC _sys_video_init, _sys_video_set_mode, _sys_video_get_mode
PUBLIC _sys_video_clear_screen, _sys_video_wait_vsync

; Графические функции
PUBLIC _sys_video_draw_pixel, _sys_video_get_pixel
PUBLIC _sys_video_draw_line, _sys_video_draw_rect, _sys_video_draw_circle
PUBLIC _sys_video_fill_rect, _sys_video_copy_rect
PUBLIC _sys_video_scroll_up, _sys_video_scroll_down

; Текстовые функции
PUBLIC _sys_video_put_char, _sys_video_put_string
PUBLIC _sys_video_set_cursor, _sys_video_get_cursor
PUBLIC _sys_video_set_colors, _sys_video_get_colors

; Функции консоли
PUBLIC _sys_console_init, _sys_console_put_char, _sys_console_put_string
PUBLIC _sys_console_clear, _sys_console_set_pos, _sys_console_get_pos

; Функции палитры
PUBLIC _sys_palette_init, _sys_palette_set_mode
PUBLIC _sys_palette_set_color, _sys_palette_get_color
PUBLIC _sys_palette_set_border, _sys_palette_set_colors

; Информационные функции
PUBLIC _sys_video_get_info, _sys_video_get_capabilities
PUBLIC _sys_video_detect_hardware, _sys_video_get_driver_type

; ---- ВНЕШНИЕ ССЫЛКИ ----

; Видео менеджер
EXTERN _video_init, _video_set_mode, _video_get_mode
EXTERN _video_clear_screen, _video_wait_vsync
EXTERN _video_get_info, _video_get_capabilities
EXTERN _video_detect_hardware, _video_get_driver_type

; Графика
EXTERN _video_draw_pixel, _video_get_pixel
EXTERN _video_draw_line, _video_draw_rect, _video_draw_circle
EXTERN _video_fill_rect, _video_copy_rect
EXTERN _video_scroll_up, _video_scroll_down

; Текст
EXTERN _video_put_char, _video_put_string
EXTERN _video_set_cursor, _video_get_cursor
EXTERN _video_set_colors, _video_get_colors

; Консоль
EXTERN _console_init, _console_put_char, _console_put_string
EXTERN _console_clear, _console_set_pos, _console_get_pos

; Палитра
EXTERN _palette_init, _palette_set_mode
EXTERN _palette_set_color, _palette_get_color
EXTERN _palette_set_border, _palette_set_colors

; ==================== ТАБЛИЦА ПЕРЕХОДОВ ====================

; ---- ОСНОВНЫЕ ВИДЕО ФУНКЦИИ ----
_sys_video_init:            jp _video_init
_sys_video_set_mode:        jp _video_set_mode
_sys_video_get_mode:        jp _video_get_mode
_sys_video_clear_screen:    jp _video_clear_screen
_sys_video_wait_vsync:      jp _video_wait_vsync
_sys_video_get_info:        jp _video_get_info
_sys_video_get_capabilities: jp _video_get_capabilities
_sys_video_detect_hardware: jp _video_detect_hardware
_sys_video_get_driver_type: jp _video_get_driver_type

; ---- ГРАФИЧЕСКИЕ ФУНКЦИИ ----
_sys_video_draw_pixel:      jp _video_draw_pixel
_sys_video_get_pixel:       jp _video_get_pixel
_sys_video_draw_line:       jp _video_draw_line
_sys_video_draw_rect:       jp _video_draw_rect
_sys_video_draw_circle:     jp _video_draw_circle
_sys_video_fill_rect:       jp _video_fill_rect
_sys_video_copy_rect:       jp _video_copy_rect
_sys_video_scroll_up:       jp _video_scroll_up
_sys_video_scroll_down:     jp _video_scroll_down

; ---- ТЕКСТОВЫЕ ФУНКЦИИ ----
_sys_video_put_char:        jp _video_put_char
_sys_video_put_string:      jp _video_put_string
_sys_video_set_cursor:      jp _video_set_cursor
_sys_video_get_cursor:      jp _video_get_cursor
_sys_video_set_colors:      jp _video_set_colors
_sys_video_get_colors:      jp _video_get_colors

; ---- ФУНКЦИИ КОНСОЛИ ----
_sys_console_init:          jp _console_init
_sys_console_put_char:      jp _console_put_char
_sys_console_put_string:    jp _console_put_string
_sys_console_clear:         jp _console_clear
_sys_console_set_pos:       jp _console_set_pos
_sys_console_get_pos:       jp _console_get_pos

; ---- ФУНКЦИИ ПАЛИТРЫ ----
_sys_palette_init:          jp _palette_init
_sys_palette_set_mode:      jp _palette_set_mode
_sys_palette_set_color:     jp _palette_set_color
_sys_palette_get_color:     jp _palette_get_color
_sys_palette_set_border:    jp _palette_set_border
_sys_palette_set_colors:    jp _palette_set_colors

; ==================== ДАННЫЕ И КОНСТАНТЫ ====================

; ---- ВИДЕО РЕЖИМЫ ----
video_modes:
    ; Номер, ширина, высота, глубина, название
    db 0, 80, 25, 0
    dw mode0_name
    db 1, 640, 200, 1
    dw mode1_name
    db 2, 320, 200, 4
    dw mode2_name
    db 3, 160, 200, 16
    dw mode3_name
    db 4, 320, 200, 2
    dw mode4_name
    db 5, 640, 200, 4
    dw mode5_name
    db 6, 320, 200, 16
    dw mode6_name
    db 7, 160, 200, 256
    dw mode7_name
    db 255  ; Конец таблицы

mode0_name: db "80x25 Text",0
mode1_name: db "640x200 1bpp (CPC Mode 2)",0
mode2_name: db "320x200 4bpp (CPC Mode 1)",0
mode3_name: db "160x200 16c (CPC Mode 0)",0
mode4_name: db "320x200 2bpp (16k)",0
mode5_name: db "640x200 4bpp (32k)",0
mode6_name: db "320x200 16c (32k)",0
mode7_name: db "160x200 256c (32k)",0

; ---- ТИПЫ ДРАЙВЕРОВ ----
driver_types:
    db 0, "None",0
    db 1, "CRTC 6845",0
    db 2, "V9938",0
    db 3, "VDP2",0
    db 4, "TMS9928",0
    db 5, "ULA Plus",0
    db 6, "EF9365",0
    db 255

; ---- РЕЖИМЫ ПАЛИТРЫ ----
palette_modes:
    db 0, "12-bit Native",0
    db 1, "CPC Legacy",0
    db 2, "MSX Compatible",0
    db 3, "YJK Advanced",0
    db 255

; ---- СТАНДАРТНЫЕ ЦВЕТА CPC ----
cpc_colors:
    ; Индекс, имя, RGB12 значение
    db 0
    db "Black",0
    dw 0x0000
    
    db 1
    db "Blue",0
    dw 0x000F
    
    db 2
    db "Bright Blue",0
    dw 0x00F0
    
    db 3
    db "Purple",0
    dw 0x00FF
    
    db 4
    db "Green",0
    dw 0x0F00
    
    db 5
    db "Cyan",0
    dw 0x0F0F
    
    db 6
    db "Bright Green",0
    dw 0x0FF0
    
    db 7
    db "Bright Cyan",0
    dw 0x0FFF
    
    db 8
    db "Red",0
    dw 0x0008
    
    db 9
    db "Violet",0
    dw 0x000F
    
    db 10
    db "Magenta",0
    dw 0x008F
    
    db 11
    db "Bright Magenta",0
    dw 0x00FF
    
    db 12
    db "Yellow",0
    dw 0x0800
    
    db 13
    db "White",0
    dw 0x080F
    
    db 14
    db "Pastel Blue",0
    dw 0x088F
    
    db 15
    db "Bright White",0
    dw 0x08FF
    
    db 16
    db "Dark Red",0
    dw 0x8000
    
    db 17
    db "Dark Violet",0
    dw 0x800F
    
    db 18
    db "Dark Green",0
    dw 0x8080
    
    db 19
    db "Dark Cyan",0
    dw 0x808F
    
    db 20
    db "Orange",0
    dw 0x8800
    
    db 21
    db "Pink",0
    dw 0x880F
    
    db 22
    db "Pastel Green",0
    dw 0x8880
    
    db 23
    db "Pastel Cyan",0
    dw 0x888F
    
    db 24
    db "Bright Red",0
    dw 0xF000
    
    db 25
    db "Bright Violet",0
    dw 0xF00F
    
    db 26
    db "Bright Yellow",0
    dw 0xF080
    
    db 27
    db "Bright Pink",0
    dw 0xF08F
    
    db 255  ; Конец таблицы

; ---- ESCAPE-ПОСЛЕДОВАТЕЛЬНОСТИ ДЛЯ КОНСОЛИ ----
escape_sequences:
    db "\c", 2  ; \c<fg><bg> - цвет
    db "\p", 2  ; \p<xx><yy> - позиция
    db "\C", 0  ; \C - очистка
    db "\s", 1  ; \s<attr> - атрибуты
    db "\b", 1  ; \b<color> - цвет бордюра
    db 0        ; Конец таблицы

; ---- СТРУКТУРА ИНФОРМАЦИИ О ВИДЕОРЕЖИМЕ ----
video_mode_info_struct:
    ; Формат: width(2), height(2), depth(1), pitch(2), vram_size(2), flags(1)
    ds 9

; ---- ЗАГОЛОВОК АУДИО-ВИДЕО ФАЙЛА ----
av_file_header:
    db "ALESTE-AV"      ; Сигнатура
    db 1                ; Версия
    db 0                ; Тип: 0=видео, 1=аудио, 2=смешанный
    dw 0                ; Длина данных
    dw 0                ; Смещение данных
    db 0                ; Режим видео
    db 0                ; Палитра
    ds 16               ; Зарезервировано

; Заполнение до конца страницы
    ds 0xFFFF - $, 0xFF