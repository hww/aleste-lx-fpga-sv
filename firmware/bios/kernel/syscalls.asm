; JUMP_TABLE.ASM - Полная таблица переходов API системы
SECTION BANK_20_JUMPTABLE
org 0xFF00

; ==================== СИСТЕМНЫЕ КОНСТАНТЫ ====================
SYS_API_VERSION      equ 0x0200      ; Версия API 2.0

; ==================== ЭКСПОРТИРУЕМЫЕ ФУНКЦИИ ====================

; ---- ВИДЕО ДРАЙВЕР ----
PUBLIC _sys_scr_init_video, _sys_scr_clear_screen, _sys_scr_put_char
PUBLIC _sys_scr_put_string, _sys_scr_set_cursor, _sys_scr_get_cursor
PUBLIC _sys_scr_scroll_up, _sys_scr_set_color, _sys_scr_get_color
PUBLIC _sys_scr_draw_pixel, _sys_scr_draw_line, _sys_scr_draw_rect

; ---- MMU ДРАЙВЕР (БАЗОВЫЕ) ----
PUBLIC _sys_mmu_get_slot, _sys_mmu_set_slot, _sys_mmu_set_page, _sys_mmu_get_page

; ---- MMU ДРАЙВЕР (LEGACY-СОВМЕСТИМЫЕ) ----
PUBLIC _sys_mmu_read, _sys_mmu_write, _sys_mmu_call, _sys_mmu_jump

; ---- MMU ДРАЙВЕР (РАСШИРЕННЫЕ) ----
PUBLIC _sys_mmu_save_state, _sys_mmu_restore_state
PUBLIC _sys_mmu_map, _sys_mmu_get_mapped
PUBLIC _sys_mmu_setup_window, _sys_mmu_get_context, _sys_mmu_set_context

; ---- MMU ДРАЙВЕР (СТАРЫЕ ИМЕНА ДЛЯ СОВМЕСТИМОСТИ) ----
PUBLIC _sys_mmu_get_current_slot, _sys_mmu_set_bank_for_page, _sys_mmu_get_bank_for_page
PUBLIC _sys_mmu_set_all_banks_for_current_slot, _sys_mmu_set_bank_for_slot_page
PUBLIC _sys_mmu_get_bank_for_slot_page, _sys_mmu_save_full_state, _sys_mmu_restore_full_state
PUBLIC _sys_mmu_map_bank_to_address, _sys_mmu_get_bank_for_address, _sys_mmu_copy_cross_slot

; ---- ДИСКОВЫЕ ОПЕРАЦИИ ----
PUBLIC _sys_disk_read, _sys_disk_write, _sys_disk_get_status
PUBLIC _sys_disk_get_info, _sys_disk_format, _sys_disk_seek

; ---- УПРАВЛЕНИЕ ПРОЦЕССАМИ ----
PUBLIC _sys_proc_create, _sys_proc_kill, _sys_proc_suspend, _sys_proc_resume
PUBLIC _sys_proc_get_info, _sys_proc_yield, _sys_proc_sleep

; ---- ПРЕРЫВАНИЯ И ТАЙМЕРЫ ----
PUBLIC _sys_int_enable, _sys_int_disable, _sys_int_set_handler
PUBLIC _sys_timer_start, _sys_timer_stop, _sys_timer_get_count
PUBLIC _sys_get_tick_count, _sys_delay_ms

; ---- КЛАВИАТУРА И ВВОД ----
PUBLIC _sys_kbd_get_key, _sys_kbd_check_key, _sys_kbd_wait_key
PUBLIC _sys_kbd_set_repeat, _sys_kbd_get_shift_state

; ---- ФАЙЛОВАЯ СИСТЕМА ----
PUBLIC _sys_fs_open, _sys_fs_close, _sys_fs_read, _sys_fs_write
PUBLIC _sys_fs_seek, _sys_fs_tell, _sys_fs_delete, _sys_fs_rename
PUBLIC _sys_fs_get_attr, _sys_fs_set_attr, _sys_fs_get_free_space

; ---- СЕТЕВЫЕ ФУНКЦИИ ----
PUBLIC _sys_net_init, _sys_net_send, _sys_net_receive
PUBLIC _sys_net_get_ip, _sys_net_set_ip, _sys_net_connect

; ---- УТИЛИТЫ И МАТЕМАТИКА ----
PUBLIC _sys_memcpy, _sys_memset, _sys_memcmp
PUBLIC _sys_strcpy, _sys_strlen, _sys_strcmp
PUBLIC _sys_rand, _sys_srand, _sys_atoi, _sys_itoa

; ---- ГРАФИЧЕСКИЕ УТИЛИТЫ ----
PUBLIC _sys_gfx_draw_sprite, _sys_gfx_load_sprite, _sys_gfx_fill
PUBLIC _sys_gfx_copy_rect, _sys_gfx_transform

; ---- АУДИО ДРАЙВЕР ----
PUBLIC _sys_audio_init, _sys_audio_play, _sys_audio_stop
PUBLIC _sys_audio_set_volume, _sys_audio_get_status

; ---- СИСТЕМНАЯ ИНФОРМАЦИЯ ----
PUBLIC _sys_get_version, _sys_get_memory_info, _sys_get_cpu_info
PUBLIC _sys_get_time, _sys_set_time, _sys_reboot, _sys_shutdown

; ---- КОНСТАНТЫ И ДАННЫЕ ----
PUBLIC _sys_scr_font_data, _sys_api_version, _sys_error_codes

; ==================== ВНЕШНИЕ ССЫЛКИ ====================

; Видео драйвер
EXTERN _scr_init_video, _scr_clear_screen, _scr_put_char
EXTERN _scr_put_string, _scr_set_cursor, _scr_get_cursor
EXTERN _scr_scroll_up, _scr_set_color, _scr_get_color
EXTERN _scr_draw_pixel, _scr_draw_line, _scr_draw_rect
EXTERN _scr_font_data

; MMU драйвер (новые функции)
EXTERN _mmu_get_slot, _mmu_set_slot, _mmu_set_page, _mmu_get_page
EXTERN _mmu_read, _mmu_write, _mmu_call, _mmu_jump
EXTERN _mmu_save_state, _mmu_restore_state, _mmu_map, _mmu_get_mapped
EXTERN _mmu_setup_window, _mmu_get_context, _mmu_set_context

; MMU драйвер (старые функции для совместимости)
EXTERN _mmu_get_current_slot, _mmu_set_bank_for_page, _mmu_get_bank_for_page
EXTERN _mmu_set_all_banks_for_current_slot, _mmu_set_bank_for_slot_page
EXTERN _mmu_get_bank_for_slot_page, _mmu_save_full_state, _mmu_restore_full_state
EXTERN _mmu_map_bank_to_address, _mmu_get_bank_for_address, _mmu_copy_cross_slot

; Дисковые операции
EXTERN _disk_read, _disk_write, _disk_get_status
EXTERN _disk_get_info, _disk_format, _disk_seek

; Управление процессами  
EXTERN _proc_create, _proc_kill, _proc_suspend, _proc_resume
EXTERN _proc_get_info, _proc_yield, _proc_sleep

; Прерывания и таймеры
EXTERN _int_enable, _int_disable, _int_set_handler
EXTERN _timer_start, _timer_stop, _timer_get_count
EXTERN _get_tick_count, _delay_ms

; Клавиатура
EXTERN _kbd_get_key, _kbd_check_key, _kbd_wait_key
EXTERN _kbd_set_repeat, _kbd_get_shift_state

; Файловая система
EXTERN _fs_open, _fs_close, _fs_read, _fs_write
EXTERN _fs_seek, _fs_tell, _fs_delete, _fs_rename
EXTERN _fs_get_attr, _fs_set_attr, _fs_get_free_space

; Сеть
EXTERN _net_init, _net_send, _net_receive
EXTERN _net_get_ip, _net_set_ip, _net_connect

; Утилиты
EXTERN _memcpy, _memset, _memcmp
EXTERN _strcpy, _strlen, _strcmp
EXTERN _rand, _srand, _atoi, _itoa

; Графика
EXTERN _gfx_draw_sprite, _gfx_load_sprite, _gfx_fill
EXTERN _gfx_copy_rect, _gfx_transform

; Аудио
EXTERN _audio_init, _audio_play, _audio_stop
EXTERN _audio_set_volume, _audio_get_status

; Системная информация
EXTERN _get_version, _get_memory_info, _get_cpu_info
EXTERN _get_time, _set_time, _reboot, _shutdown

; ==================== ТАБЛИЦА ПЕРЕХОДОВ ====================

; ---- ВИДЕО ДРАЙВЕР ----
_sys_scr_init_video:     jp _scr_init_video
_sys_scr_clear_screen:   jp _scr_clear_screen
_sys_scr_put_char:       jp _scr_put_char
_sys_scr_put_string:     jp _scr_put_string
_sys_scr_set_cursor:     jp _scr_set_cursor
_sys_scr_get_cursor:     jp _scr_get_cursor
_sys_scr_scroll_up:      jp _scr_scroll_up
_sys_scr_set_color:      jp _scr_set_color
_sys_scr_get_color:      jp _scr_get_color
_sys_scr_draw_pixel:     jp _scr_draw_pixel
_sys_scr_draw_line:      jp _scr_draw_line
_sys_scr_draw_rect:      jp _scr_draw_rect

; ---- MMU ДРАЙВЕР (БАЗОВЫЕ) ----
_sys_mmu_get_slot:       jp _mmu_get_slot
_sys_mmu_set_slot:       jp _mmu_set_slot
_sys_mmu_set_page:       jp _mmu_set_page
_sys_mmu_get_page:       jp _mmu_get_page

; ---- MMU ДРАЙВЕР (LEGACY-СОВМЕСТИМЫЕ) ----
_sys_mmu_read:           jp _mmu_read
_sys_mmu_write:          jp _mmu_write
_sys_mmu_call:           jp _mmu_call
_sys_mmu_jump:           jp _mmu_jump

; ---- MMU ДРАЙВЕР (РАСШИРЕННЫЕ) ----
_sys_mmu_save_state:     jp _mmu_save_state
_sys_mmu_restore_state:  jp _mmu_restore_state
_sys_mmu_map:            jp _mmu_map
_sys_mmu_get_mapped:     jp _mmu_get_mapped
_sys_mmu_setup_window:   jp _mmu_setup_window
_sys_mmu_get_context:    jp _mmu_get_context
_sys_mmu_set_context:    jp _mmu_set_context

; ---- MMU ДРАЙВЕР (СТАРЫЕ ИМЕНА ДЛЯ СОВМЕСТИМОСТИ) ----
_sys_mmu_get_current_slot:       jp _mmu_get_current_slot
_sys_mmu_set_bank_for_page:      jp _mmu_set_bank_for_page
_sys_mmu_get_bank_for_page:      jp _mmu_get_bank_for_page
_sys_mmu_set_all_banks_for_current_slot: jp _mmu_set_all_banks_for_current_slot
_sys_mmu_set_bank_for_slot_page: jp _mmu_set_bank_for_slot_page
_sys_mmu_get_bank_for_slot_page: jp _mmu_get_bank_for_slot_page
_sys_mmu_save_full_state:        jp _mmu_save_full_state
_sys_mmu_restore_full_state:     jp _mmu_restore_full_state
_sys_mmu_map_bank_to_address:    jp _mmu_map_bank_to_address
_sys_mmu_get_bank_for_address:   jp _mmu_get_bank_for_address
_sys_mmu_copy_cross_slot:        jp _mmu_copy_cross_slot

; ---- ДИСКОВЫЕ ОПЕРАЦИИ ----
_sys_disk_read:          jp _disk_read
_sys_disk_write:         jp _disk_write
_sys_disk_get_status:    jp _disk_get_status
_sys_disk_get_info:      jp _disk_get_info
_sys_disk_format:        jp _disk_format
_sys_disk_seek:          jp _disk_seek

; ---- УПРАВЛЕНИЕ ПРОЦЕССАМИ ----
_sys_proc_create:        jp _proc_create
_sys_proc_kill:          jp _proc_kill
_sys_proc_suspend:       jp _proc_suspend
_sys_proc_resume:        jp _proc_resume
_sys_proc_get_info:      jp _proc_get_info
_sys_proc_yield:         jp _proc_yield
_sys_proc_sleep:         jp _proc_sleep

; ---- ПРЕРЫВАНИЯ И ТАЙМЕРЫ ----
_sys_int_enable:         jp _int_enable
_sys_int_disable:        jp _int_disable
_sys_int_set_handler:    jp _int_set_handler
_sys_timer_start:        jp _timer_start
_sys_timer_stop:         jp _timer_stop
_sys_timer_get_count:    jp _timer_get_count
_sys_get_tick_count:     jp _get_tick_count
_sys_delay_ms:           jp _delay_ms

; ---- КЛАВИАТУРА И ВВОД ----
_sys_kbd_get_key:        jp _kbd_get_key
_sys_kbd_check_key:      jp _kbd_check_key
_sys_kbd_wait_key:       jp _kbd_wait_key
_sys_kbd_set_repeat:     jp _kbd_set_repeat
_sys_kbd_get_shift_state: jp _kbd_get_shift_state

; ---- ФАЙЛОВАЯ СИСТЕМА ----
_sys_fs_open:            jp _fs_open
_sys_fs_close:           jp _fs_close
_sys_fs_read:            jp _fs_read
_sys_fs_write:           jp _fs_write
_sys_fs_seek:            jp _fs_seek
_sys_fs_tell:            jp _fs_tell
_sys_fs_delete:          jp _fs_delete
_sys_fs_rename:          jp _fs_rename
_sys_fs_get_attr:        jp _fs_get_attr
_sys_fs_set_attr:        jp _fs_set_attr
_sys_fs_get_free_space:  jp _fs_get_free_space

; ---- СЕТЕВЫЕ ФУНКЦИИ ----
_sys_net_init:           jp _net_init
_sys_net_send:           jp _net_send
_sys_net_receive:        jp _net_receive
_sys_net_get_ip:         jp _net_get_ip
_sys_net_set_ip:         jp _net_set_ip
_sys_net_connect:        jp _net_connect

; ---- УТИЛИТЫ И МАТЕМАТИКА ----
_sys_memcpy:             jp _memcpy
_sys_memset:             jp _memset
_sys_memcmp:             jp _memcmp
_sys_strcpy:             jp _strcpy
_sys_strlen:             jp _strlen
_sys_strcmp:             jp _strcmp
_sys_rand:               jp _rand
_sys_srand:              jp _srand
_sys_atoi:               jp _atoi
_sys_itoa:               jp _itoa

; ---- ГРАФИЧЕСКИЕ УТИЛИТЫ ----
_sys_gfx_draw_sprite:    jp _gfx_draw_sprite
_sys_gfx_load_sprite:    jp _gfx_load_sprite
_sys_gfx_fill:           jp _gfx_fill
_sys_gfx_copy_rect:      jp _gfx_copy_rect
_sys_gfx_transform:      jp _gfx_transform

; ---- АУДИО ДРАЙВЕР ----
_sys_audio_init:         jp _audio_init
_sys_audio_play:         jp _audio_play
_sys_audio_stop:         jp _audio_stop
_sys_audio_set_volume:   jp _audio_set_volume
_sys_audio_get_status:   jp _audio_get_status

; ---- СИСТЕМНАЯ ИНФОРМАЦИЯ ----
_sys_get_version:        jp _get_version
_sys_get_memory_info:    jp _get_memory_info
_sys_get_cpu_info:       jp _get_cpu_info
_sys_get_time:           jp _get_time
_sys_set_time:           jp _set_time
_sys_reboot:             jp _reboot
_sys_shutdown:           jp _shutdown

; ==================== КОНСТАНТЫ И ДАННЫЕ ====================

_sys_scr_font_data:
    dw _scr_font_data

_sys_api_version:
    dw SYS_API_VERSION

_sys_error_codes:
    ; Стандартные коды ошибок
    db 0x00  ; NO_ERROR
    db 0x01  ; INVALID_PARAMETER
    db 0x02  ; OUT_OF_MEMORY
    db 0x03  ; DEVICE_ERROR
    db 0x04  ; FILE_NOT_FOUND
    db 0x05  ; ACCESS_DENIED
    db 0x06  ; DISK_FULL
    db 0x07  ; TIMEOUT
    db 0x08  ; NOT_IMPLEMENTED
    db 0x09  ; BUSY
    db 0x0A  ; INVALID_SLOT
    db 0x0B  ; INVALID_BANK
    db 0x0C  ; INVALID_ADDRESS
    db 0xFF  ; UNKNOWN_ERROR

; ==================== ЗАПОЛНИТЕЛЬ ДО КОНЦА СЕКЦИИ ====================
    ds 0xFFFF - $, 0xFF  ; Заполнение до конца страницы