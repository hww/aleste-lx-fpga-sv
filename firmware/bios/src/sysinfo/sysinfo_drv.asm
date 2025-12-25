; ============================================================================
; SYSTEM INFORMATION AND CONTROL DRIVER
; ============================================================================
module system_info_driver

; ---- КОНСТАНТЫ ----
SYSINFO_NO_ERROR          equ 0x00
SYSINFO_INVALID_PARAM     equ 0x01
SYSINFO_NOT_AVAILABLE     equ 0x02
SYSINFO_HARDWARE_ERROR    equ 0x03

; Версия системы
SYS_VERSION_MAJOR         equ 1
SYS_VERSION_MINOR         equ 0
SYS_VERSION_BUILD         equ 0
SYS_VERSION_FULL          equ (SYS_VERSION_MAJOR << 8) | SYS_VERSION_MINOR

; Флаги системы
SYS_FLAG_MMU              equ 0x01  ; Наличие MMU
SYS_FLAG_RTC              equ 0x02  ; Наличие RTC
SYS_FLAG_DMA              equ 0x04  ; Наличие DMA
SYS_FLAG_FPU              equ 0x08  ; Наличие FPU
SYS_FLAG_NETWORK          equ 0x10  ; Наличие сети
SYS_FLAG_AUDIO            equ 0x20  ; Наличие звука
SYS_FLAG_VIDEO_ACCEL      equ 0x40  ; Наличие видеоускорителя

; Типы процессоров
CPU_TYPE_Z80              equ 0x01
CPU_TYPE_Z180             equ 0x02
CPU_TYPE_Z280             equ 0x03
CPU_TYPE_Z380             equ 0x04
CPU_TYPE_R800             equ 0x05
CPU_TYPE_EZ80             equ 0x06

; Режимы процессора
CPU_MODE_NATIVE           equ 0x00
CPU_MODE_COMPAT           equ 0x01
CPU_MODE_TURBO            equ 0x02

; ---- ДАННЫЕ ДРАЙВЕРА ----
SECTION SYSINFO_DATA

; Системное время
sys_time_hours:           db 0
sys_time_minutes:         db 0
sys_time_seconds:         db 0
sys_time_ticks:           dw 0     ; Счетчик тиков с полуночи

; Системная информация
sys_flags:                db 0
sys_cpu_type:             db CPU_TYPE_Z80
sys_cpu_speed:            dw 4000   ; 4 MHz в кГц
sys_total_memory:         dw 0      ; В KB
sys_free_memory:          dw 0
sys_boot_device:          db 0
sys_serial_number:        ds 6      ; 6-байтный серийный номер

; Информация о железе
hw_mmu_present:           db 0
hw_rtc_present:           db 0
hw_dma_present:           db 0
hw_fpu_present:           db 0
hw_sound_present:         db 0
hw_network_present:       db 0

; Таблица устройств
device_table:             ds 32     ; 16 устройств * 2 байта

; ==================== СИСТЕМНЫЕ ФУНКЦИИ ====================

SECTION SYSINFO_CODE

; ----------------------------------------------------------------------------
; sysinfo_init - Инициализация системной информации
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _sysinfo_init
_sysinfo_init:
sysinfo_init_:
    push bc
    push de
    push hl
    
    ; Определяем железо
    call detect_hardware
    
    ; Определяем процессор
    call detect_cpu
    
    ; Определяем память
    call detect_memory
    
    ; Инициализируем RTC если есть
    call init_rtc
    
    ; Устанавливаем системные флаги
    ld a, (hw_mmu_present)
    or a
    jr z, @no_mmu
    ld a, (sys_flags)
    or SYS_FLAG_MMU
    ld (sys_flags), a
@no_mmu:
    
    ; Устанавливаем начальное время
    call rtc_read_time
    
    xor a  ; Успех
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; Инициализируем RTC если есть
; ----------------------------------------------------------------------------
init_rtc:
    ret
; ----------------------------------------------------------------------------
; get_version - Получить версию системы
; Выход: HL = версия (старший байт = major, младший = minor)
; ----------------------------------------------------------------------------
PUBLIC _get_version
_get_version:
get_version_:
    ld hl, SYS_VERSION_FULL
    ret

; ----------------------------------------------------------------------------
; get_version_full - Получить полную версию системы
; Выход: A = major, B = minor, C = build
; ----------------------------------------------------------------------------
PUBLIC _get_version_full
_get_version_full:
get_version_full_:
    ld a, SYS_VERSION_MAJOR
    ld b, SYS_VERSION_MINOR
    ld c, SYS_VERSION_BUILD
    ret

; ----------------------------------------------------------------------------
; get_memory_info - Получить информацию о памяти
; Вход: HL = указатель на структуру MEMORY_INFO
; Выход: Структура заполнена
; ----------------------------------------------------------------------------
PUBLIC _get_memory_info
_get_memory_info:
get_memory_info_:
    push bc
    push de
    push hl
    
    ld de, hl  ; DE указывает на структуру
    
    ; total_pages (16 бит)
    ld hl, (sys_total_memory)
    ld a, h
    srl a
    srl a      ; Делим на 4 (KB -> 16KB страницы)
    ld (de), a
    inc de
    ld a, l
    rra
    rra
    and 0xC0
    or h
    ld (de), a
    inc de
    
    ; free_pages (16 бит)
    ld hl, (sys_free_memory)
    ld a, h
    srl a
    srl a
    ld (de), a
    inc de
    ld a, l
    rra
    rra
    and 0xC0
    or h
    ld (de), a
    inc de
    
    ; largest_free_block (16 бит)
    ld hl, (sys_free_memory)  ; Пока то же что и free
    ld (de), l
    inc de
    ld (de), h
    inc de
    
    ; memory_type (8 бит)
    ld a, 1  ; RAM
    ld (de), a
    inc de
    
    ; flags (8 бит)
    ld a, (sys_flags)
    and SYS_FLAG_MMU
    jr z, @no_mmu_flag
    ld a, 0x01  ; MMU присутствует
@no_mmu_flag:
    ld (de), a
    inc de
    
    ; reserved (10 байт)
    ld b, 10
    xor a
@fill_reserved:
    ld (de), a
    inc de
    djnz @fill_reserved
    
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; get_cpu_info - Получить информацию о процессоре
; Вход: HL = указатель на структуру CPU_INFO
; Выход: Структура заполнена
; ----------------------------------------------------------------------------
PUBLIC _get_cpu_info
_get_cpu_info:
get_cpu_info_:
    push bc
    push de
    push hl
    
    ld de, hl
    
    ; cpu_type
    ld a, (sys_cpu_type)
    ld (de), a
    inc de
    
    ; cpu_speed (в кГц, 16 бит)
    ld hl, (sys_cpu_speed)
    ld (de), l
    inc de
    ld (de), h
    inc de
    
    ; cpu_flags
    ld a, (sys_flags)
    ld (de), a
    inc de
    
    ; cpu_model[8]
    ld hl, cpu_model_string
    ld bc, 8
    ldir
    
    ; cpu_vendor[16]
    ld hl, cpu_vendor_string
    ld bc, 16
    ldir
    
    ; reserved[6]
    ld b, 6
    xor a
@fill_reserved:
    ld (de), a
    inc de
    djnz @fill_reserved
    
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; get_system_info - Получить общую информацию о системе
; Вход: HL = указатель на структуру SYSTEM_INFO
; Выход: Структура заполнена
; ----------------------------------------------------------------------------
PUBLIC _get_system_info
_get_system_info:
get_system_info_:
    push bc
    push de
    push hl
    
    ld de, hl
    
    ; system_flags
    ld a, (sys_flags)
    ld (de), a
    inc de
    
    ; boot_device
    ld a, (sys_boot_device)
    ld (de), a
    inc de
    
    ; total_memory (KB, 16 бит)
    ld hl, (sys_total_memory)
    ld (de), l
    inc de
    ld (de), h
    inc de
    
    ; free_memory (KB, 16 бит)
    ld hl, (sys_free_memory)
    ld (de), l
    inc de
    ld (de), h
    inc de
    
    ; serial_number[6]
    ld hl, sys_serial_number
    ld bc, 6
    ldir
    
    ; os_name[16]
    ld hl, os_name_string
    ld bc, 16
    ldir
    
    ; os_version[8]
    ld hl, os_version_string
    ld bc, 8
    ldir
    
    ; reserved[8]
    ld b, 8
    xor a
@fill_reserved:
    ld (de), a
    inc de
    djnz @fill_reserved
    
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; get_time - Получить текущее время
; Выход: B = часы (0-23), C = минуты (0-59), D = секунды (0-59)
; ----------------------------------------------------------------------------
PUBLIC _get_time
_get_time:
get_time_:
    push af
    push hl
    
    ; Проверяем наличие RTC
    ld a, (hw_rtc_present)
    or a
    jr z, @no_rtc
    
    ; Читаем из RTC
    call rtc_read_time
    jr @done
    
@no_rtc:
    ; Используем системное время
    ld a, (sys_time_hours)
    ld b, a
    ld a, (sys_time_minutes)
    ld c, a
    ld a, (sys_time_seconds)
    ld d, a
    
@done:
    pop hl
    pop af
    ret

; ----------------------------------------------------------------------------
; get_time_full - Получить полное время
; Выход: B=часы, C=минуты, D=секунды, E=сотые секунды
; ----------------------------------------------------------------------------
PUBLIC _get_time_full
_get_time_full:
get_time_full_:
    call _get_time
    ld e, 0  ; Сотые секунды не поддерживаются
    ret

; ----------------------------------------------------------------------------
; get_date - Получить текущую дату
; Выход: B = день (1-31), C = месяц (1-12), D = год (0-99), E = день недели (0-6)
; ----------------------------------------------------------------------------
PUBLIC _get_date
_get_date:
get_date_:
    push af
    push hl
    
    ld a, (hw_rtc_present)
    or a
    jr z, @no_rtc
    
    call rtc_read_date
    jr @done
    
@no_rtc:
    ; Стандартная дата (01@01@00)
    ld b, 1   ; День
    ld c, 1   ; Месяц
    ld d, 0   ; Год
    ld e, 0   ; День недели (воскресенье)
    
@done:
    pop hl
    pop af
    ret

; ----------------------------------------------------------------------------
; set_time - Установить время
; Вход: B = часы, C = минуты, D = секунды
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _set_time
_set_time:
set_time_:
    push bc
    push de
    push hl
    
    ; Проверяем параметры
    ld a, b
    cp 24
    jr nc, @invalid_time
    
    ld a, c
    cp 60
    jr nc, @invalid_time
    
    ld a, d
    cp 60
    jr nc, @invalid_time
    
    ; Сохраняем в системное время
    ld a, b
    ld (sys_time_hours), a
    ld a, c
    ld (sys_time_minutes), a
    ld a, d
    ld (sys_time_seconds), a
    
    ; Устанавливаем в RTC если есть
    ld a, (hw_rtc_present)
    or a
    jr z, @success
    
    call rtc_write_time
    
@success:
    xor a
    jr @done
    
@invalid_time:
    ld a, SYSINFO_INVALID_PARAM
    
@done:
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; set_date - Установить дату
; Вход: B = день, C = месяц, D = год (0-99), E = день недели (0-6)
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _set_date
_set_date:
set_date_:
    push bc
    push de
    push hl
    
    ; Проверяем параметры
    ld a, b
    cp 1
    jr c, @invalid_date
    cp 32
    jr nc, @invalid_date
    
    ld a, c
    cp 1
    jr c, @invalid_date
    cp 13
    jr nc, @invalid_date
    
    ld a, d
    cp 100
    jr nc, @invalid_date
    
    ld a, e
    cp 7
    jr nc, @invalid_date
    
    ; Устанавливаем в RTC если есть
    ld a, (hw_rtc_present)
    or a
    jr z, @success
    
    call rtc_write_date
    
@success:
    xor a
    jr @done
    
@invalid_date:
    ld a, SYSINFO_INVALID_PARAM
    
@done:
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; reboot - Перезагрузить систему
; Вход: A = тип перезагрузки (0=мягкая, 1=жесткая, 2=в загрузчик)
; Выход: Не возвращается
; ----------------------------------------------------------------------------
PUBLIC _reboot
_reboot:
reboot_:
    push af
    
    cp 0
    jr z, @soft_reboot
    cp 1
    jr z, @hard_reboot
    cp 2
    jr z, @bootloader
    
    ; По умолчанию мягкая перезагрузка
    
@soft_reboot:
    ; Сохраняем состояние если нужно
    call save_reboot_state
    
    ; Сбрасываем систему
    jp 0x0000
    
@hard_reboot:
    ; Полный сброс
    di
    halt  ; Останавливаем процессор
    ; Контроллер сброса должен перезапустить систему
    
@bootloader:
    ; Переход в загрузчик
    jp 0xFF00  ; Адрес загрузчика
    
@done:
    pop af
    ret

; ----------------------------------------------------------------------------
; shutdown - Выключить систему
; Вход: A = причина (0=нормальное, 1=аварийное, 2=спящий режим)
; Выход: Не возвращается
; ----------------------------------------------------------------------------
PUBLIC _shutdown
_shutdown:
shutdown_:
    push af
    
    cp 0
    jr z, @normal_shutdown
    cp 1
    jr z, @emergency_shutdown
    cp 2
    jr z, @sleep_mode
    
    ; По умолчанию нормальное выключение
    
@normal_shutdown:
    ; Сохраняем состояние
    call save_shutdown_state
    
    ; Отключаем все устройства
    call power_off_devices
    
    ; Отключаем процессор
    di
    halt
    jr shutdown_  ; На всякий случай
    
@emergency_shutdown:
    ; Немедленное выключение
    di
    halt
    
@sleep_mode:
    ; Спящий режим
    call enter_sleep_mode
    ; Процессор останавливается, но память сохраняется
    
@done:
    pop af
    ret

; ----------------------------------------------------------------------------
; get_serial_number - Получить серийный номер системы
; Выход: HL = указатель на 6-байтный серийный номер
; ----------------------------------------------------------------------------
PUBLIC _get_serial_number
_get_serial_number:
get_serial_number_:
    ld hl, sys_serial_number
    ret

; ----------------------------------------------------------------------------
; get_device_info - Получить информацию об устройстве
; Вход: A = номер устройства (0-15)
;       HL = указатель на структуру DEVICE_INFO
; Выход: A = код ошибки
; ----------------------------------------------------------------------------
PUBLIC _get_device_info
_get_device_info:
get_device_info_:
    push bc
    push de
    push hl
    
    cp 16
    jr nc, @invalid_device
    
    ; Получаем запись из таблицы устройств
    ld b, 0
    ld c, a
    sla c           ; *2
    ld hl, device_table
    add hl, bc
    
    ; Копируем информацию
    ld e, (hl)
    inc hl
    ld d, (hl)
    
    ; Если устройство отсутствует
    ld a, d
    or e
    jr z, @device_not_found
    
    ; TODO: Заполнить структуру DEVICE_INFO
    
    xor a
    jr @done
    
@invalid_device:
    ld a, SYSINFO_INVALID_PARAM
    jr @done
    
@device_not_found:
    ld a, SYSINFO_NOT_AVAILABLE
    
@done:
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; get_system_status - Получить статус системы
; Выход: A = битовая маска статуса
; ----------------------------------------------------------------------------
PUBLIC _get_system_status
_get_system_status:
get_system_status_:
    push bc
    
    xor a
    
    ; Бит 0: система инициализирована
    set 0, a
    
    ; Бит 1: MMU активен
    ld b, a
    ld a, (hw_mmu_present)
    or a
    ld a, b
    jr z, @no_mmu
    set 1, a
@no_mmu:
    
    ; Бит 2: RTC работает
    ld b, a
    ld a, (hw_rtc_present)
    or a
    ld a, b
    jr z, @no_rtc
    set 2, a
@no_rtc:
    
    ; Бит 3: есть ошибки
    ; TODO: Проверить ошибки системы
    
    ; Бит 4: система в спящем режиме
    ; TODO: Проверить режим сна
    
    ; Остальные биты зарезервированы
    
    pop bc
    ret

; ==================== ВНУТРЕННИЕ ФУНКЦИИ ====================

; ----------------------------------------------------------------------------
; detect_hardware - Определить наличие оборудования
; ----------------------------------------------------------------------------
detect_hardware:
    push af
    push bc
    
    ; Проверяем MMU
    call detect_mmu
    ld (hw_mmu_present), a
    
    ; Проверяем RTC
    call detect_rtc
    ld (hw_rtc_present), a
    
    ; Проверяем DMA
    call detect_dma
    ld (hw_dma_present), a
    
    ; Проверяем FPU
    call detect_fpu
    ld (hw_fpu_present), a
    
    ; Проверяем звук
    call detect_sound
    ld (hw_sound_present), a
    
    ; Проверяем сеть
    call detect_network
    ld (hw_network_present), a
    
    ; Определяем серийный номер
    call read_serial_number
    
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; detect_cpu - Определить тип процессора
; ----------------------------------------------------------------------------
detect_cpu:
    push af
    
    ; По умолчанию Z80
    ld a, CPU_TYPE_Z80
    ld (sys_cpu_type), a
    
    ; Определяем скорость
    call measure_cpu_speed
    ld (sys_cpu_speed), hl
    
    ; TODO: Определить Z180/Z280 и другие
    
    pop af
    ret

; ----------------------------------------------------------------------------
; detect_memory - Определить объем памяти
; ----------------------------------------------------------------------------
detect_memory:
    push af
    push bc
    push hl
    
    ; TODO: Реальное определение памяти
    ; Пока ставим 256KB
    ld hl, 256
    ld (sys_total_memory), hl
    ld (sys_free_memory), hl
    
    pop hl
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; detect_mmu - Определить наличие MMU
; ----------------------------------------------------------------------------
detect_mmu:
    ; Пытаемся записать/прочитать регистр MMU
    ld a, 0xAA
    out (0xF0), a  ; GLOBAL_CTRL
    in a, (0xF0)
    cp 0xAA
    jr nz, @no_mmu
    
    ; MMU присутствует
    ld a, 1
    ret
    
@no_mmu:
    xor a
    ret

; ----------------------------------------------------------------------------
; detect_rtc - Определить наличие RTC
; ----------------------------------------------------------------------------
detect_rtc:
    ; Пытаемся прочитать время
    ; TODO: Реальная проверка RTC
    xor a  ; Пока нет RTC
    ret

; ----------------------------------------------------------------------------
; measure_cpu_speed - Измерить скорость процессора
; ----------------------------------------------------------------------------
measure_cpu_speed:
    ; TODO: Реальное измерение скорости
    ld hl, 4000  ; 4 MHz по умолчанию
    ret

; ----------------------------------------------------------------------------
; read_serial_number - Прочитать серийный номер
; ----------------------------------------------------------------------------
read_serial_number:
    push bc
    push hl
    
    ; TODO: Прочитать из EEPROM или другого хранилища
    ; Пока фиктивный номер
    ld hl, sys_serial_number
    ld (hl), 0x12
    inc hl
    ld (hl), 0x34
    inc hl
    ld (hl), 0x56
    inc hl
    ld (hl), 0x78
    inc hl
    ld (hl), 0x9A
    inc hl
    ld (hl), 0xBC
    
    pop hl
    pop bc
    ret

; ----------------------------------------------------------------------------
; rtc_read_time - Читать время из RTC
; ----------------------------------------------------------------------------
rtc_read_time:
    ; TODO: Реальное чтение RTC
    ret

; ----------------------------------------------------------------------------
; rtc_write_time - Записать время в RTC
; ----------------------------------------------------------------------------
rtc_write_time:
    ; TODO: Реальная запись RTC
    ret

; ----------------------------------------------------------------------------
; rtc_read_date - Читать дату из RTC
; ----------------------------------------------------------------------------
rtc_read_date:
    ; TODO: Реальное чтение даты
    ret

; ----------------------------------------------------------------------------
; rtc_write_date - Записать дату в RTC
; ----------------------------------------------------------------------------
rtc_write_date:
    ; TODO: Реальная запись даты
    ret

; ----------------------------------------------------------------------------
; save_reboot_state - Сохранить состояние перед перезагрузкой
; ----------------------------------------------------------------------------
save_reboot_state:
    ; TODO: Сохранить важное состояние
    ret

; ----------------------------------------------------------------------------
; save_shutdown_state - Сохранить состояние перед выключением
; ----------------------------------------------------------------------------
save_shutdown_state:
    ; TODO: Сохранить состояние для быстрого старта
    ret

; ----------------------------------------------------------------------------
; power_off_devices - Отключить все устройства
; ----------------------------------------------------------------------------
power_off_devices:
    ; TODO: Отключить устройства для экономии энергии
    ret

; ----------------------------------------------------------------------------
; enter_sleep_mode - Перейти в спящий режим
; ----------------------------------------------------------------------------
enter_sleep_mode:
    ; TODO: Включить спящий режим
    ret

; ----------------------------------------------------------------------------
; detect_dma, detect_fpu, detect_sound, detect_network
; ----------------------------------------------------------------------------
detect_dma:
    xor a
    ret

detect_fpu:
    xor a
    ret

detect_sound:
    xor a
    ret

detect_network:
    xor a
    ret

; ----------------------------------------------------------------------------
;  ДОПОЛНИТЕЛЬНЫЕ ФУНКЦИИ 
; ----------------------------------------------------------------------------
PUBLIC _get_uptime
_get_uptime:
    ; Получить время работы системы в секундах
    push hl
    push de
    
    ; TODO: Реализовать
    ld hl, 0
    ld de, 0
    
    pop de
    pop hl
    ret
PUBLIC _get_temperature
_get_temperature:
    ; Получить температуру системы
    push bc
    
    ; TODO: Прочитать датчик температуры
    ld a, 25  ; 25°C по умолчанию
    
    pop bc
    ret
PUBLIC _get_battery_status
_get_battery_status:
    ; Получить статус батареи
    push bc
    
    ; TODO: Проверить батарею
    ld a, 0x80  ; Бит 7=1 (заряжается), остальные=уровень
    
    pop bc
    ret
PUBLIC _set_power_mode
_set_power_mode:
    ; Установить режим питания
    push af
    push bc
    
    ; A = режим (0=нормальный, 1=экономичный, 2=спящий)
    cp 2
    jr z, @sleep_mode
    cp 1
    jr z, @power_save
    
    ; Нормальный режим
    jr @done
    
@power_save:
    ; Экономичный режим
    ; TODO: Понизить частоту CPU
    jr @done
    
@sleep_mode:
    ; Спящий режим
    call enter_sleep_mode
    
@done:
    pop bc
    pop af
    ret


; ==================== ДАННЫЕ ====================

cpu_model_string:   db "Z80     "  ; 8 символов
cpu_vendor_string:  db "Zilog             "  ; 16 символов
os_name_string:     db "Aleste OS        "  ; 16 символов  
os_version_string:  db "1@0     "  ; 8 символов