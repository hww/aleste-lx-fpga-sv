; ============================================================================
; SYSTEM INFO API JUMP TABLE
; Располагается в банке 0x28
; ============================================================================
SECTION BANK_28_SYSINFO_API
org 0xFF00

; ---- ПУБЛИЧНЫЕ СИМВОЛЫ ----
PUBLIC _sys_sysinfo_init, _sys_get_version, _sys_get_version_full
PUBLIC _sys_get_memory_info, _sys_get_cpu_info, _sys_get_system_info
PUBLIC _sys_get_time, _sys_get_time_full, _sys_get_date, _sys_set_time
PUBLIC _sys_set_date, _sys_reboot, _sys_shutdown, _sys_get_serial_number
PUBLIC _sys_get_device_info, _sys_get_system_status, _sys_get_uptime
PUBLIC _sys_get_temperature, _sys_get_battery_status, _sys_set_power_mode

; ---- ВНЕШНИЕ ССЫЛКИ ----
EXTERN _sysinfo_init, _get_version, _get_version_full
EXTERN _get_memory_info, _get_cpu_info, _get_system_info
EXTERN _get_time, _get_time_full, _get_date, _set_time, _set_date
EXTERN _reboot, _shutdown, _get_serial_number, _get_device_info
EXTERN _get_system_status

; ==================== ТАБЛИЦА ПЕРЕХОДОВ ====================

_sys_sysinfo_init:      jp _sysinfo_init
_sys_get_version:       jp _get_version
_sys_get_version_full:  jp _get_version_full
_sys_get_memory_info:   jp _get_memory_info
_sys_get_cpu_info:      jp _get_cpu_info
_sys_get_system_info:   jp _get_system_info
_sys_get_time:          jp _get_time
_sys_get_time_full:     jp _get_time_full
_sys_get_date:          jp _get_date
_sys_set_time:          jp _set_time
_sys_set_date:          jp _set_date
_sys_reboot:            jp _reboot
_sys_shutdown:          jp _shutdown
_sys_get_serial_number: jp _get_serial_number
_sys_get_device_info:   jp _get_device_info
_sys_get_system_status: jp _get_system_status

; ---- ДОПОЛНИТЕЛЬНЫЕ ФУНКЦИИ ----
EXTERN _sys_get_uptime, _sys_get_temperature, _sys_get_battery_status, _sys_set_power_mode
_sys_get_system_status: jp _get_uptime

_sys_get_temperature:   jp _get_temperature

_sys_get_battery_status:jp _get_battery_status

_sys_set_power_mode:    jp _sys_set_power_mode

; ==================== ДАННЫЕ И КОНСТАНТЫ ====================

; ---- СТРУКТУРЫ ДАННЫХ ----

; Структура MEMORY_INFO (16 байт)
memory_info_structure:
    dw 0      ; total_pages (в 16KB страницах)
    dw 0      ; free_pages
    dw 0      ; largest_free_block
    db 0      ; memory_type (0=unknown, 1=RAM, 2=ROM, 3=flash)
    db 0      ; flags (бит 0=MMU, бит 1=кэш)
    ds 10     ; reserved

; Структура CPU_INFO (32 байта)
cpu_info_structure:
    db 0      ; cpu_type
    dw 0      ; cpu_speed (кГц)
    db 0      ; cpu_flags
    ds 8      ; cpu_model[8]
    ds 16     ; cpu_vendor[16]
    ds 6      ; reserved

; Структура SYSTEM_INFO (64 байта)
system_info_structure:
    db 0      ; system_flags
    db 0      ; boot_device
    dw 0      ; total_memory (KB)
    dw 0      ; free_memory (KB)
    ds 6      ; serial_number[6]
    ds 16     ; os_name[16]
    ds 8      ; os_version[8]
    ds 8      ; build_date[8] (YYYYMMDD)
    ds 8      ; build_time[8] (HHMMSS)
    ds 8      ; reserved

; Структура DEVICE_INFO (32 байта)
device_info_structure:
    db 0      ; device_type
    db 0      ; device_id
    db 0      ; device_flags
    db 0      ; device_status
    dw 0      ; base_address
    dw 0      ; irq_number
    ds 8      ; device_name[8]
    ds 16     ; description[16]

; ---- СТАНДАРТНЫЕ СТРОКИ ----
sys_version_string:   db "Aleste OS v1.0", 0
sys_copyright_string: db "(C) 2024 Aleste Project", 0
sys_manufacturer:     db "Aleste Computers", 0

; ---- СИСТЕМНЫЕ КОНСТАНТЫ ----
sys_constants:
    db 0x01      ; PAGE_SIZE_LOG2 (14 для 16KB)
    db 0x04      ; MAX_SLOTS
    db 0x04      ; MAX_PAGES_PER_SLOT
    db 0xFF      ; MAX_BANK
    dw 0x4000    ; PAGE_SIZE (16KB)
    dw 0x10000   ; SLOT_SIZE (64KB)
    dw 0x40000   ; TOTAL_ADDRESSABLE (256KB)

; Заполнение до конца страницы
    ds 0xFFFF - $, 0xFF