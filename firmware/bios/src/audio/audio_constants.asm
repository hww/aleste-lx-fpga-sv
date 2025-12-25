; ============================================================================
; AUDIO CONSTANTS
; ============================================================================

; Коды ошибок
AUDIO_NO_ERROR         equ 0x00
AUDIO_NOT_INITIALIZED  equ 0x01
AUDIO_HARDWARE_ERROR   equ 0x02
AUDIO_BUFFER_OVERFLOW  equ 0x03
AUDIO_INVALID_FORMAT   equ 0x04
AUDIO_PLAYBACK_ACTIVE  equ 0x05
AUDIO_CHIP_NOT_FOUND   equ 0x06

; Статус воспроизведения
AUDIO_STATUS_IDLE      equ 0x00
AUDIO_STATUS_PLAYING   equ 0x01
AUDIO_STATUS_PAUSED    equ 0x02
AUDIO_STATUS_STOPPED   equ 0x03

; Типы аудио устройств
AUDIO_TYPE_NONE        equ 0x00
AUDIO_TYPE_AY8910      equ 0x01
AUDIO_TYPE_AY8912      equ 0x02
AUDIO_TYPE_YM2149      equ 0x03

; Форматы аудио
AUDIO_FORMAT_RAW       equ 0x00
AUDIO_FORMAT_VTX       equ 0x01
AUDIO_FORMAT_PTK       equ 0x02

; Каналы AY-3-8910
AUDIO_CHANNEL_A        equ 0
AUDIO_CHANNEL_B        equ 1
AUDIO_CHANNEL_C        equ 2

; Порты AY
AY_REGISTER_PORT       equ 0xFD
AY_DATA_PORT           equ 0xFE

; Регистры AY
AY_REG_TONE_A_FINE     equ 0
AY_REG_TONE_A_COARSE   equ 1
AY_REG_TONE_B_FINE     equ 2
AY_REG_TONE_B_COARSE   equ 3
AY_REG_TONE_C_FINE     equ 4
AY_REG_TONE_C_COARSE   equ 5
AY_REG_NOISE_PERIOD    equ 6
AY_REG_ENABLE          equ 7
AY_REG_VOLUME_A        equ 8
AY_REG_VOLUME_B        equ 9
AY_REG_VOLUME_C        equ 10
AY_REG_ENV_FINE        equ 11
AY_REG_ENV_COARSE      equ 12
AY_REG_ENV_SHAPE       equ 13
AY_REG_IO_A            equ 14
AY_REG_IO_B            equ 15

; Формы огибающей AY
AY_ENV_DOWN            equ 0x00  ; \_________
AY_ENV_UP              equ 0x0C  ; /_________
AY_ENV_DOWN_HOLD       equ 0x08  ; \~~~~~~~~~
AY_ENV_UP_HOLD         equ 0x0C  ; /~~~~~~~~~
AY_ENV_TRIANGLE        equ 0x0A  ; /\/\/\/\
AY_ENV_SAWTOOTH        equ 0x08  ; /|/|/|/|

; Макрос для вызова метода из vtable
; Вход: vtable - имя таблицы методов
;       method - указатель на метод в базовой vtable
;
; Примеры вызовов
;     CALLVTABLE ay8910_vtable, _audio_init_ptr          ; init
;     CALLVTABLE ay8910_vtable, _audio_play_note_ptr     ; play_note
;     CALLVTABLE ay8910_vtable, _audio_detect_ptr        ; detect
;     CALLVTABLE ay8912_vtable, _audio_stop_ptr          ; stop
;     CALLVTABLE current_vtable, _audio_set_volume_ptr   ; set_volume
MACRO CALLVTABLE vtable, method
    push hl
    push de
    push bc
    
    ; Вычисляем смещение: method - _audio_vtable
    ld hl, method
    ld de, _audio_vtable
    or a            ; сброс флага переноса
    sbc hl, de      ; hl = смещение в байтах
    
    ; Добавляем смещение к целевой vtable
    ex de, hl       ; de = смещение
    ld hl, vtable
    add hl, de      ; hl = адрес метода в целевой vtable
    
    ; Вызываем метод
    call call_hl
    
    pop bc
    pop de
    pop hl
ENDM

; Функция вызова по адресу в HL
call_hl:
    jp (hl)