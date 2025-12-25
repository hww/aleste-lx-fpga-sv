; ============================================================================
; AUDIO DRIVER - Полиморфный интерфейс
; ============================================================================
module audio_driver

; ---- КОНСТАНТЫ ----
AUDIO_NO_ERROR        equ 0x00
AUDIO_NOT_INITIALIZED equ 0x01
AUDIO_CHIP_NOT_FOUND  equ 0x06

AUDIO_TYPE_NONE       equ 0x00
AUDIO_TYPE_AY8910     equ 0x01
AUDIO_TYPE_AY8912     equ 0x02
AUDIO_TYPE_YM2149     equ 0x03

AUDIO_STATUS_IDLE     equ 0x00
AUDIO_STATUS_PLAYING  equ 0x01
AUDIO_STATUS_PAUSED   equ 0x02
AUDIO_STATUS_STOPPED  equ 0x03

; ---- ДАННЫЕ ----
SECTION AUDIO_DATA

; Текущий активный драйвер (vtable)
current_vtable:     dw 0

; Состояние
audio_initialized:  db 0
audio_device_type:  db AUDIO_TYPE_NONE
audio_status:       db AUDIO_STATUS_IDLE
audio_master_volume:db 255

; ---- МАКРОСЫ ----
MACRO CALL_METHOD offset
    push hl
    push bc
    ld hl, (current_vtable)
    ld a, h
    or l
    jr z, @skip
    ld bc, offset
    add hl, bc
    ld a, (hl)
    inc hl
    ld h, (hl)
    ld l, a
    or h
    jr z, @skip
    call call_hl
@skip:
    pop bc
    pop hl
ENDM

; ==================== ПУБЛИЧНЫЙ API ====================

SECTION AUDIO_CODE

; Включаем конкретные драйверы (их vtables)
EXTERN ay8910_vtable
EXTERN ay8912_vtable
EXTERN ym2149_vtable

; ----------------------------------------------------------------------------
; audio_init - Инициализация (публичный API)
; ----------------------------------------------------------------------------
PUBLIC _audio_init
_audio_init:
    push af
    push bc
    push hl
    
    ; Проверяем инициализацию
    ld a, (audio_initialized)
    or a
    jr nz, @already_init
    
    ; Автоопределение чипа
    call audio_auto_detect
    ld (audio_device_type), a
    
    cp AUDIO_TYPE_NONE
    jr z, @no_chip
    
    ; Выбираем соответствующий драйвер
    call select_driver_by_type
    ld (current_vtable), hl
    
    ; Инициализируем драйвер
    CALL_METHOD 0  ; init
    
    ; Устанавливаем флаги
    ld a, 1
    ld (audio_initialized), a
    
    xor a  ; Успех
    jr @exit
    
@no_chip:
    ld a, AUDIO_CHIP_NOT_FOUND
    jr @exit
    
@already_init:
    xor a  ; Уже инициализировано

@exit:
    pop hl
    pop bc
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
    CALL_METHOD 2
    
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
    
    CALL_METHOD 8  ; stop
    
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
    
    CALL_METHOD 10  ; pause
    
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
    
    CALL_METHOD 12  ; resume
    
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
    
    ; Вызываем метод драйвера
    CALL_METHOD 14  ; set_volume
    
    pop bc
    ret

; ==================== ВНУТРЕННИЕ ФУНКЦИИ ====================

; ----------------------------------------------------------------------------
; audio_auto_detect - Автоопределение чипа
; ----------------------------------------------------------------------------
audio_auto_detect:
    push bc
    push hl
    
    ; Пробуем каждый тип в порядке приоритета
    ld b, AUDIO_TYPE_AY8910
    
@try_detect:
    ; Временно выбираем vtable для проверки
    push bc
    ld a, b
    call select_driver_by_type
    ld (current_vtable), hl
    
    ; Вызываем detect
    CALL_METHOD 18
    
    ; Проверяем результат
    or a
    jr nz, @found
    
    ; Пробуем следующий тип
    pop bc
    inc b
    ld a, b
    cp AUDIO_TYPE_YM2149 + 1
    jr c, @try_detect
    
    ; Ничего не найдено
    ld a, AUDIO_TYPE_NONE
    jr @exit
    
@found:
    pop bc  ; Восстанавливаем тип
    ld a, b ; Возвращаем тип найденного чипа

@exit:
    pop hl
    pop bc
    ret

; ----------------------------------------------------------------------------
; select_driver_by_type - Выбрать vtable по типу
; Вход: A = тип чипа
; Выход: HL = указатель на vtable
; ----------------------------------------------------------------------------
select_driver_by_type:
    cp AUDIO_TYPE_AY8910
    jr z, @ay8910
    cp AUDIO_TYPE_AY8912
    jr z, @ay8912
    cp AUDIO_TYPE_YM2149
    jr z, @ym2149
    
    ; Неизвестный тип
    ld hl, 0
    ret
    
@ay8910:
    ld hl, ay8910_vtable
    ret
    
@ay8912:
    ld hl, ay8912_vtable
    ret
    
@ym2149:
    ; Для YM2149 пока используем ay8912_vtable (совместим)
    ; TODO: Создать отдельный драйвер для YM2149
    ld hl, ay8912_vtable
    ret

; ----------------------------------------------------------------------------
; call_hl - Вспомогательная функция
; ----------------------------------------------------------------------------
call_hl:
    jp (hl)