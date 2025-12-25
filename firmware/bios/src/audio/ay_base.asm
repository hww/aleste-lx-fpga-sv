; ============================================================================
; BASE AY DRIVER - Реализация всех общих методов
; ============================================================================
module ay_base

; ---- ДАННЫЕ ----
SECTION AY_BASE_DATA

; Тень регистров
PUBLIC ay_shadow_regs
ay_shadow_regs:       ds 16

PUBLIC ay_selected_reg
ay_selected_reg:      db 0

PUBLIC ay_initialized
ay_initialized:       db 0

; Данные для паузы
PUBLIC pause_vol_a, pause_vol_b, pause_vol_c
pause_vol_a:          db 0
pause_vol_b:          db 0
pause_vol_c:          db 0

; ---- ПУБЛИЧНЫЕ МЕТОДЫ ----
SECTION AY_BASE_CODE

; ----------------------------------------------------------------------------
; ay_base_init - Базовая инициализация
; ----------------------------------------------------------------------------
PUBLIC ay_base_init
ay_base_init:
    push af
    push bc
    push hl
    
    ld a, (ay_initialized)
    or a
    jr nz, @exit
    
    ; Сбрасываем тень регистров
    ld hl, ay_shadow_regs
    ld de, ay_shadow_regs + 1
    ld bc, 15
    ld (hl), 0
    ldir
    
    ; Сбрасываем все регистры чипа
    ld b, 16
    ld c, 0
@reset_loop:
    ld a, c
    call ay_base_select_register
    xor a
    call ay_base_write_register
    inc c
    djnz @reset_loop
    
    ; Базовая настройка
    ld a, 0x07  ; Включить все тоны
    ld c, AY_REG_ENABLE
    call ay_base_set_register
    
    ld a, 0x0F  ; Макс громкость
    ld c, AY_REG_VOLUME_A
    call ay_base_set_register
    ld c, AY_REG_VOLUME_B
    call ay_base_set_register
    ld c, AY_REG_VOLUME_C
    call ay_base_set_register
    
    ld a, 1
    ld (ay_initialized), a
    
@exit:
    pop hl
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; ay_base_select_register - Выбрать регистр
; ----------------------------------------------------------------------------
PUBLIC ay_base_select_register
ay_base_select_register:
    push bc
    ld (ay_selected_reg), a
    ld c, AY_REGISTER_PORT
    out (c), a
    pop bc
    ret

; ----------------------------------------------------------------------------
; ay_base_write_register - Записать в выбранный регистр
; ----------------------------------------------------------------------------
PUBLIC ay_base_write_register
ay_base_write_register:
    push bc
    push hl
    push af
    
    ; Обновляем тень
    ld hl, ay_shadow_regs
    ld a, (ay_selected_reg)
    ld c, a
    ld b, 0
    add hl, bc
    pop af
    ld (hl), a
    
    ; Пишем в чип
    ld c, AY_DATA_PORT
    out (c), a
    
    pop hl
    pop bc
    ret

; ----------------------------------------------------------------------------
; ay_base_set_register - Установить регистр (A=значение, C=регистр)
; ----------------------------------------------------------------------------
PUBLIC ay_base_set_register
ay_base_set_register:
    push af
    ld a, c
    call ay_base_select_register
    pop af
    jp ay_base_write_register

; ----------------------------------------------------------------------------
; ay_base_get_register - Получить значение из тени (C=регистр, возврат A)
; ----------------------------------------------------------------------------
PUBLIC ay_base_get_register
ay_base_get_register:
    push hl
    push bc
    ld hl, ay_shadow_regs
    ld b, 0
    add hl, bc
    ld a, (hl)
    pop bc
    pop hl
    ret

; ----------------------------------------------------------------------------
; ay_base_play_note - Воспроизвести ноту (A=нота, B=канал, C=громкость)
; ----------------------------------------------------------------------------
PUBLIC ay_base_play_note
ay_base_play_note:
    push af
    push bc
    push de
    push hl
    
    ; Получаем частоту ноты
    ld hl, note_freq_table
    add a, a          ; умножаем на 2 (каждый элемент - 2 байта)
    ld e, a
    ld d, 0
    add hl, de
    ld e, (hl)
    inc hl
    ld d, (hl)
    ex de, hl         ; hl = частота
    
    ; Определяем базовый регистр для канала
    ld a, b
    or a
    jr z, @ch_a
    dec a
    jr z, @ch_b
    ; Канал C
    
@ch_c:
    ld a, l
    ld c, AY_REG_TONE_C_FINE
    call ay_base_set_register
    ld a, h
    ld c, AY_REG_TONE_C_COARSE
    call ay_base_set_register
    ld a, AY_REG_VOLUME_C
    jr @set_volume
    
@ch_b:
    ld a, l
    ld c, AY_REG_TONE_B_FINE
    call ay_base_set_register
    ld a, h
    ld c, AY_REG_TONE_B_COARSE
    call ay_base_set_register
    ld a, AY_REG_VOLUME_B
    jr @set_volume
    
@ch_a:
    ld a, l
    ld c, AY_REG_TONE_A_FINE
    call ay_base_set_register
    ld a, h
    ld c, AY_REG_TONE_A_COARSE
    call ay_base_set_register
    ld a, AY_REG_VOLUME_A

@set_volume:
    ; Устанавливаем громкость
    ld c, a
    ld a, e          ; Громкость была в e
    and 0x0F
    call ay_base_set_register
    
    pop hl
    pop de
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; ay_base_stop - Остановить воспроизведение
; ----------------------------------------------------------------------------
PUBLIC ay_base_stop
ay_base_stop:
    push af
    push bc
    
    ; Выключаем все каналы
    ld a, 0x38       ; Выключить все тоны
    ld c, AY_REG_ENABLE
    call ay_base_set_register
    
    ; Сбрасываем громкость
    xor a
    ld c, AY_REG_VOLUME_A
    call ay_base_set_register
    ld c, AY_REG_VOLUME_B
    call ay_base_set_register
    ld c, AY_REG_VOLUME_C
    call ay_base_set_register
    
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; ay_base_pause - Пауза
; ----------------------------------------------------------------------------
PUBLIC ay_base_pause
ay_base_pause:
    push af
    push bc
    
    ; Сохраняем текущие громкости
    ld c, AY_REG_VOLUME_A
    call ay_base_get_register
    ld (pause_vol_a), a
    
    ld c, AY_REG_VOLUME_B
    call ay_base_get_register
    ld (pause_vol_b), a
    
    ld c, AY_REG_VOLUME_C
    call ay_base_get_register
    ld (pause_vol_c), a
    
    ; Устанавливаем громкость в 0
    xor a
    ld c, AY_REG_VOLUME_A
    call ay_base_set_register
    ld c, AY_REG_VOLUME_B
    call ay_base_set_register
    ld c, AY_REG_VOLUME_C
    call ay_base_set_register
    
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; ay_base_resume - Продолжить
; ----------------------------------------------------------------------------
PUBLIC ay_base_resume
ay_base_resume:
    push af
    push bc
    
    ; Восстанавливаем громкости
    ld a, (pause_vol_a)
    ld c, AY_REG_VOLUME_A
    call ay_base_set_register
    
    ld a, (pause_vol_b)
    ld c, AY_REG_VOLUME_B
    call ay_base_set_register
    
    ld a, (pause_vol_c)
    ld c, AY_REG_VOLUME_C
    call ay_base_set_register
    
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; ay_base_set_volume - Установить громкость (A=громкость 0-255, B=канал)
; ----------------------------------------------------------------------------
PUBLIC ay_base_set_volume
ay_base_set_volume:
    push bc
    
    ; Преобразуем 0-255 в 0-15
    srl a
    srl a
    srl a
    srl a
    and 0x0F
    
    ; Определяем регистр громкости
    ld c, AY_REG_VOLUME_A
    ld a, b
    or a
    jr z, @set
    ld c, AY_REG_VOLUME_B
    dec a
    jr z, @set
    ld c, AY_REG_VOLUME_C
    
@set:
    ld a, c          ; Восстанавливаем значение громкости
    pop bc
    push bc
    call ay_base_set_register
    
    pop bc
    ret

; ----------------------------------------------------------------------------
; ay_base_start_playback - Запустить потоковое воспроизведение
; ----------------------------------------------------------------------------
PUBLIC ay_base_start_playback
ay_base_start_playback:
    ret  ; Заглушка, нужно реализовать

; ----------------------------------------------------------------------------
; ay_base_detect - Базовая проверка AY-совместимого чипа
; ----------------------------------------------------------------------------
PUBLIC ay_base_detect
ay_base_detect:
    push bc
    
    ; Пробуем записать тестовое значение
    ld a, AY_REG_VOLUME_A
    call ay_base_select_register
    ld a, 0x0A
    call ay_base_write_register
    
    ; Ждём
    ld bc, 100
@delay:
    dec bc
    ld a, b
    or c
    jr nz, @delay
    
    ; Пробуем прочитать
    ld c, AY_REG_VOLUME_A
    call ay_base_get_register
    cp 0x0A
    
    jr z, @detected
    xor a  ; Не обнаружен
    jr @exit
    
@detected:
    ld a, 1  ; Обнаружен
    
@exit:
    pop bc
    ret

; ---- ТАБЛИЦА ЧАСТОТ ----
SECTION AY_BASE_CONST

note_freq_table:
    ; C0-B0
    dw 3822, 3608, 3405, 3214, 3034, 2863, 2703, 2551, 2408, 2273, 2145, 2025
    ; C1-B1  
    dw 1911, 1804, 1703, 1607, 1517, 1432, 1351, 1276, 1204, 1136, 1073, 1012
    ; C2-B2
    dw 956, 902, 851, 804, 758, 716, 676, 638, 602, 568, 536, 506
    ; C3-B3
    dw 478, 451, 426, 402, 379, 358, 338, 319, 301, 284, 268, 253
    ; C4-B4
    dw 239, 225, 213, 201, 190, 179, 169, 159, 150, 142, 134, 127
    ; C5-B5
    dw 119, 113, 106, 100, 95, 89, 84, 80, 75, 71, 67, 63
    ; C6-B6
    dw 60, 56, 53, 50, 47, 45, 42, 40, 38, 36, 34, 32
    ; C7-B7
    dw 30, 28, 26, 25, 24, 22, 21, 20, 19, 18, 17, 16