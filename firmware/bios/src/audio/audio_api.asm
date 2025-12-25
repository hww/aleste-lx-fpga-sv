; ============================================================================
; AUDIO API - ДАННЫЕ И ПОЛИМОРФНАЯ ТАБЛИЦА
; Располагается в банке 0x24
; ============================================================================
SECTION BANK_24_AUDIO_API
org 0xFF00

PUBLIC _audio_vtable, _audio_init_ptr, _audio_play_note_ptr, _audio_resume_ptr, _audio_pause_ptr
PUBLIC _audio_stop_ptr, _audio_set_volume_ptr
; ---- ГЛОБАЛЬНАЯ ПОЛИМОРФНАЯ ТАБЛИЦА МЕТОДОВ ----
PUBLIC _audio_vtable
_audio_vtable:
_audio_init_ptr:          ds 3    ; 0: init (jp)
_audio_play_note_ptr:     ds 3    ; 2: play_note
_audio_set_register_ptr:  ds 3    ; 4: set_register
_audio_get_register_ptr:  ds 3    ; 6: get_register
_audio_stop_ptr:          ds 3    ; 8: stop
_audio_pause_ptr:         ds 3    ; 10: pause
_audio_resume_ptr:        ds 3    ; 12: resume
_audio_set_volume_ptr:    ds 3    ; 14: set_volume
_audio_start_playback_ptr:ds 3    ; 16: start_playback
_audio_detect_ptr:        ds 3    ; 18: detect
_audio_shutdown_ptr:      ds 3    ; 20: shutdown
_audio_get_status_ptr:    ds 3    ; 22: get_status
_audio_vtable_end:

; ---- ТАБЛИЦЫ VTABLE ДЛЯ КОНКРЕТНЫХ ДРАЙВЕРОВ ----
; (включаем файлы с vtables)
INCLUDE "ay8910_api.asm"   ; VTABLE для AY-3-8910
INCLUDE "ay8912_api.asm"   ; VTABLE для AY-3-8912

; ---- ТАБЛИЦА ДРАЙВЕРОВ ----
PUBLIC _audio_drivers_table
_audio_drivers_table:
audio_drivers_table:
    dw _ay8910_vtable   ; 0: AY-3-8910
    dw _ay8912_vtable   ; 1: AY-3-8912
    dw _ay8912_vtable   ; 2: YM2149 (временно совместим)
    dw 0               ; 3: Зарезервировано
    dw 0               ; 4: Зарезервировано

; ---- ДАННЫЕ ДЛЯ АУДИО СИСТЕМЫ ----

; ---- ТИПЫ АУДИО УСТРОЙСТВ ----
audio_device_types:
    db 0x00, "None"         ; AUDIO_TYPE_NONE
    db 0x01, "AY-3-8910"    ; AUDIO_TYPE_AY8910
    db 0x02, "AY-3-8912"    ; AUDIO_TYPE_AY8912  
    db 0x03, "YM2149"       ; AUDIO_TYPE_YM2149
    db 0xFF                 ; Конец таблицы
