; ============================================================================
; AUDIO API JUMP TABLE
; Располагается в банке 0x24
; ============================================================================
SECTION BANK_24_AUDIO_API
org 0xFF00

; ---- ПУБЛИЧНЫЕ СИМВОЛЫ ----
PUBLIC _sys_audio_init, _sys_audio_play, _sys_audio_stop, _sys_audio_pause
PUBLIC _sys_audio_resume, _sys_audio_set_volume, _sys_audio_get_status
PUBLIC _sys_audio_get_device_type, _sys_audio_play_note, _sys_audio_set_noise
PUBLIC _sys_audio_set_envelope, _sys_audio_enable_channel

; ---- ФУНКЦИИ AY-3-8910 (теперь это просто псевдонимы) ----
PUBLIC _sys_ay8910_init, _sys_ay8910_play_note, _sys_ay8910_set_noise
PUBLIC _sys_ay8910_set_envelope, _sys_ay8910_enable_channel, _sys_ay8910_stop
PUBLIC _sys_ay8910_pause, _sys_ay8910_resume

; ---- НОВЫЕ ФУНКЦИИ ДЛЯ AY-3-8912 И YM2149 ----
PUBLIC _sys_ay8912_init, _sys_ym2149_init
PUBLIC _sys_audio_select_driver, _sys_audio_auto_detect

; ---- ВНЕШНИЕ ССЫЛКИ ----
EXTERN _audio_init, _audio_play, _audio_stop, _audio_pause, _audio_resume
EXTERN _audio_set_volume, _audio_get_status, _audio_get_device_type
EXTERN _audio_select_driver, _audio_auto_detect
; AY-3-8910 функции теперь в базовом драйвере
EXTERN _ay_base_play_note, _ay_base_set_noise, _ay_base_set_envelope
EXTERN _ay_base_enable_channel, _ay_base_stop, _ay_base_pause, _ay_base_resume
; Функции для конкретных чипов
EXTERN _ay8910_init, _ay8912_init, _ym2149_init

; ==================== ТАБЛИЦА ПЕРЕХОДОВ ====================

; ---- ОСНОВНЫЕ АУДИО ФУНКЦИИ (полиморфные) ----
_sys_audio_init:           jp _audio_init
_sys_audio_play:           jp _audio_play          ; Полиморфный вызов
_sys_audio_stop:           jp _audio_stop          ; Полиморфный вызов
_sys_audio_pause:          jp _audio_pause         ; Полиморфный вызов
_sys_audio_resume:         jp _audio_resume        ; Полиморфный вызов
_sys_audio_set_volume:     jp _audio_set_volume    ; Полиморфный вызов
_sys_audio_get_status:     jp _audio_get_status
_sys_audio_get_device_type: jp _audio_get_device_type

; ---- НОВЫЕ ФУНКЦИИ УПРАВЛЕНИЯ ДРАЙВЕРАМИ ----
_sys_audio_select_driver:  jp _audio_select_driver ; Выбрать драйвер вручную
_sys_audio_auto_detect:    jp _audio_auto_detect   ; Автоопределение чипа

; ---- БАЗОВЫЕ ФУНКЦИИ AY (общие для всех AY-совместимых) ----
_sys_ay8910_init:          jp _ay8910_init         ; Инициализация AY-3-8910
_sys_ay8912_init:          jp _ay8912_init         ; Инициализация AY-3-8912
_sys_ym2149_init:          jp _ym2149_init         ; Инициализация YM2149

; ---- ОБЩИЕ AY ФУНКЦИИ (работают с текущим драйвером) ----
_sys_ay8910_play_note:     jp _ay_base_play_note   ; Теперь общая функция
_sys_ay8910_set_noise:     jp _ay_base_set_noise   ; Теперь общая функция
_sys_ay8910_set_envelope:  jp _ay_base_set_envelope ; Теперь общая функция
_sys_ay8910_enable_channel: jp _ay_base_enable_channel ; Теперь общая функция
_sys_ay8910_stop:          jp _ay_base_stop        ; Теперь общая функция
_sys_ay8910_pause:         jp _ay_base_pause       ; Теперь общая функция
_sys_ay8910_resume:        jp _ay_base_resume      ; Теперь общая функция

; ---- ПСЕВДОНИМЫ ДЛЯ УДОБСТВА И ОБРАТНОЙ СОВМЕСТИМОСТИ ----
_sys_audio_play_note:      jp _ay_base_play_note   ; Псевдоним для совместимости
_sys_audio_set_noise:      jp _ay_base_set_noise   ; Псевдоним для совместимости
_sys_audio_set_envelope:   jp _ay_base_set_envelope ; Псевдоним для совместимости
_sys_audio_enable_channel: jp _ay_base_enable_channel ; Псевдоним для совместимости

; ==================== ДАННЫЕ И КОНСТАНТЫ ====================

; ---- ТИПЫ АУДИО УСТРОЙСТВ ----
audio_device_types:
    db 0x00, "None"         ; AUDIO_TYPE_NONE
    db 0x01, "AY-3-8910"    ; AUDIO_TYPE_AY8910
    db 0x02, "AY-3-8912"    ; AUDIO_TYPE_AY8912  
    db 0x03, "YM2149"       ; AUDIO_TYPE_YM2149
    db 0x04, "SAA1099"      ; Зарезервировано
    db 0x05, "SN76489"      ; Зарезервировано
    db 0xFF                 ; Конец таблицы

; ---- ТАБЛИЦА ЧАСТОТ ДЛЯ AY ----
ay_frequency_table:
    ; Ноты от C0 до B7 (96 нот)
    include "ay_frequencies.inc"

; ---- СТАНДАРТНЫЕ ФОРМЫ ОГИБАЮЩЕЙ ----
ay_envelope_shapes:
    db 0x00       ; \_________ однократное падение
    db 0x0C       ; /_________ однократный подъем  
    db 0x08       ; \~~~~~~~~~ падение с удержанием
    db 0x0C       ; /~~~~~~~~~ подъем с удержанием
    db 0x0A       ; /\/\/\/\ треугольник
    db 0x08       ; /|/|/|/| пила

; ---- ИНСТРУМЕНТЫ AY ----
ay_instruments:
    ; Пианино
    db 0x0F, 0x0F, 0x0F, 0x00  ; Громкости A,B,C, форма огибающей
    dw 0x1000                  ; Период огибающей
    db 0x00                    ; Флаги (бит 0: использовать шум)
    
    ; Скрипка
    db 0x0C, 0x0A, 0x08, 0x0A
    dw 0x0800
    db 0x00
    
    ; Бас
    db 0x0F, 0x00, 0x00, 0x00
    dw 0x2000
    db 0x00
    
    ; Ударные
    db 0x0F, 0x0F, 0x0F, 0x08
    dw 0x0100
    db 0x01                    ; Использовать шум

; ---- СТРУКТУРА АУДИО ТРЕКА ----
audio_track_header:
    db "AYTRACK"              ; Сигнатура
    db 1                      ; Версия
    db 0                      ; Количество каналов (1-3)
    dw 0                      ; Длина в тактах
    dw 0                      ; Темп (BPM)
    db 0                      ; Количество инструментов

; ---- ТАБЛИЦА ДРАЙВЕРОВ ДЛЯ АВТОДЕТЕКТА ----
driver_detect_order:
    db 1     ; Сначала пробуем AY-3-8910
    db 2     ; Потом AY-3-8912
    db 3     ; Потом YM2149
    db 0     ; Конец списка

; Заполнение до конца страницы
    ds 0xFFFF - $, 0xFF