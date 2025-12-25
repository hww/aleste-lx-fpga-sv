; ============================================================================
; AUDIO DRIVER - МЕНЕДЖЕР ДРАЙВЕРОВ
; ============================================================================
module audio_driver

; ---- КОНСТАНТЫ ----
INCLUDE "audio_api.asm"
INCLUDE "audio_constants.asm"

INCLUDE "ay_base.asm"
INCLUDE "ay8910.asm"
INCLUDE "ay8912.asm"

; ---- ДАННЫЕ ----
SECTION AUDIO_DATA

; Текущий выбранный драйвер
PUBLIC current_driver_type
current_driver_type: db AUDIO_TYPE_NONE

; Состояние
audio_initialized:  db 0
audio_status:       db AUDIO_STATUS_IDLE
audio_master_volume:db 255

; Текущая vtable
current_vtable:     dw 0

; ---- КОД ----
SECTION AUDIO_CODE

; ----------------------------------------------------------------------------
; audio_select_driver - Выбрать драйвер по типу
; Вход: A = тип драйвера (индекс в таблице)
; ----------------------------------------------------------------------------
PUBLIC _audio_select_driver
_audio_select_driver:
    ; Сохраняем регистры
    push bc
    push de
    push hl
    
    ; Получаем адрес vtable из таблицы драйверов
    ld hl, _audio_drivers_table
    ld c, a
    ld b, 0
    add hl, bc
    add hl, bc          ; hl = адрес vtable в таблице
    
    ; Загружаем адрес vtable драйвера
    ld e, (hl)
    inc hl
    ld d, (hl)          ; de = адрес vtable драйвера
    ex de, hl           ; hl = адрес vtable драйвера
    
    ; Сохраняем vtable
    ld (current_vtable), hl
    
    ; Копируем vtable драйвера в полиморфную таблицу
    ld de, _audio_vtable    ; куда копируем
    ld bc, _audio_vtable_end - _audio_vtable  ; размер vtable
    ldir                ; копируем bc байт из hl в de
    
    ; Сохраняем тип драйвера
    ld (current_driver_type), a
    
    ; Инициализируем драйвер
    call _audio_init_ptr
    
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; audio_auto_detect - Автоопределение чипа (упрощенная версия)
; Возвращает: A = найденный тип чипа
; ----------------------------------------------------------------------------
PUBLIC _audio_auto_detect
_audio_auto_detect:
    push bc
    push hl
    
    ; Пробуем AY-3-8910
    call ay8910_detect
    or a
    jr nz, @found_ay8910
    
    ; Пробуем AY-3-8912
    call ay8912_detect
    or a
    jr nz, @found_ay8912
    
    ; Пробуем YM2149 (пока используем AY-3-8912 детект)
    ; TODO: создать отдельный детект для YM2149
    call ay8912_detect
    or a
    jr nz, @found_ym2149
    
    ; Ничего не найдено
    ld a, AUDIO_TYPE_NONE
    jr @exit

@found_ay8910:
    ld a, AUDIO_TYPE_AY8910
    jr @exit

@found_ay8912:
    ld a, AUDIO_TYPE_AY8912
    jr @exit

@found_ym2149:
    ld a, AUDIO_TYPE_YM2149

@exit:
    pop hl
    pop bc
    ret

; ----------------------------------------------------------------------------
; audio_init - Публичная инициализация
; ----------------------------------------------------------------------------
PUBLIC _audio_init
_audio_init:
    push af
    
    ; Проверяем, не инициализировано ли уже
    ld a, (audio_initialized)
    or a
    jr nz, @already_init
    
    ; Автодетект
    call _audio_auto_detect
    cp AUDIO_TYPE_NONE
    jr z, @no_chip
    
    ; Инициализируем
    call _audio_select_driver
    
    ; Устанавливаем флаг
    ld a, 1
    ld (audio_initialized), a
    
    xor a  ; Успех
    jr @exit
    
@already_init:
    xor a
    jr @exit
    
@no_chip:
    ld a, AUDIO_CHIP_NOT_FOUND

@exit:
    pop af
    ret

; ----------------------------------------------------------------------------
; audio_play - Воспроизвести ноту (публичный API)
; ----------------------------------------------------------------------------
PUBLIC _audio_play
_audio_play:
    ; A = нота, B = канал, C = громкость
    push af
    push bc
    
    ; Проверяем инициализацию
    ld a, (audio_initialized)
    or a
    jr z, @not_init
    
    ; Проверяем статус
    ld a, (audio_status)
    cp AUDIO_STATUS_PLAYING
    jr z, @already_playing
    
    ; Вызываем метод play_note
    call _audio_play_note_ptr
    
    ; Устанавливаем статус
    ld a, AUDIO_STATUS_PLAYING
    ld (audio_status), a
    
    xor a  ; Успех
    jr @exit
    
@not_init:
    ld a, AUDIO_NOT_INITIALIZED
    jr @exit
    
@already_playing:
    xor a  ; Играет, но не ошибка

@exit:
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; audio_stop - Остановить (публичный API)
; ----------------------------------------------------------------------------
PUBLIC _audio_stop
_audio_stop:
    push af
    
    ; Вызываем метод stop
    call _audio_stop_ptr
    
    ld a, AUDIO_STATUS_STOPPED
    ld (audio_status), a
    
    pop af
    ret

; ----------------------------------------------------------------------------
; audio_pause - Пауза (публичный API)
; ----------------------------------------------------------------------------
PUBLIC _audio_pause
_audio_pause:
    push af
    
    ld a, (audio_status)
    cp AUDIO_STATUS_PLAYING
    jr nz, @exit
    
    ; Вызываем метод pause
    call _audio_pause_ptr
    
    ld a, AUDIO_STATUS_PAUSED
    ld (audio_status), a

@exit:
    pop af
    ret

; ----------------------------------------------------------------------------
; audio_resume - Продолжить (публичный API)
; ----------------------------------------------------------------------------
PUBLIC _audio_resume
_audio_resume:
    push af
    
    ld a, (audio_status)
    cp AUDIO_STATUS_PAUSED
    jr nz, @exit
    
    ; Вызываем метод resume
    call _audio_resume_ptr
    
    ld a, AUDIO_STATUS_PLAYING
    ld (audio_status), a

@exit:
    pop af
    ret

; ----------------------------------------------------------------------------
; audio_set_volume - Установить громкость (публичный API)
; ----------------------------------------------------------------------------
PUBLIC _audio_set_volume
_audio_set_volume:
    ; A = громкость 0-255, B = канал
    push bc
    
    ; Сохраняем общую громкость
    ld (audio_master_volume), a
    
    ; Вызываем метод set_volume
    call _audio_set_volume_ptr
    
    pop bc
    ret

; ----------------------------------------------------------------------------
; Прочие публичные функции
; ----------------------------------------------------------------------------
PUBLIC _audio_get_status
_audio_get_status:
    ld a, (audio_status)
    ret

PUBLIC _audio_get_device_type
_audio_get_device_type:
    ld a, (current_driver_type)
    ret