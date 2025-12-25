; ============================================================================
; AY-3-8910 DRIVER (конкретная реализация)
; ============================================================================
module ay8910_driver

INCLUDE "ay_base.asm"

SECTION AY8910_DATA

; Таблица методов (vtable) для AY-3-8910
ay8910_vtable:
    dw ay_base_init          ; 0: init
    dw ay_base_play_note     ; 2: play_note
    dw ay_base_set_register  ; 4: set_register
    dw ay_base_get_register  ; 6: get_register
    dw ay_base_stop          ; 8: stop
    dw ay_base_pause         ; 10: pause
    dw ay_base_resume        ; 12: resume
    dw ay_base_set_volume    ; 14: set_volume
    dw ay_base_start_playback; 16: start_playback
    dw ay8910_detect         ; 18: detect (СВОЙ метод!)

SECTION AY8910_CODE

; ----------------------------------------------------------------------------
; ay8910_detect - Специфичная проверка AY-3-8910
; ----------------------------------------------------------------------------
PUBLIC ay8910_detect
ay8910_detect:
    push bc
    push de
    push hl
    
    ; 1. Сначала базовая проверка
    call ay_base_detect
    or a
    jr z, @not_found
    
    ; 2. Проверяем порты ввода/вывода (есть только у AY-3-8910)
    ; Пробуем записать в порт A
    ld a, AY_REG_IO_A
    call ay_base_select_register
    ld a, 0x55
    call ay_base_write_register
    
    ; Ждём
    ld bc, 200
@delay1:
    dec bc
    ld a, b
    or c
    jr nz, @delay1
    
    ; Пробуем прочитать (должно сохраниться для 8910)
    ld c, AY_REG_IO_A
    call ay_base_get_register
    cp 0x55
    jr nz, @not_found  ; Если изменилось - не AY-3-8910
    
    ; 3. Дополнительная проверка
    ; Пробуем другой тест
    ld a, AY_REG_ENV_SHAPE
    call ay_base_select_register
    ld a, 0x0F
    call ay_base_write_register
    
    ld bc, 200
@delay2:
    dec bc
    ld a, b
    or c
    jr nz, @delay2
    
    ld c, AY_REG_ENV_SHAPE
    call ay_base_get_register
    cp 0x0F
    jr nz, @not_found
    
    ; Все проверки пройдены
    ld a, 1  ; Это AY-3-8910!
    jr @exit
    
@not_found:
    xor a  ; Не AY-3-8910
    
@exit:
    pop hl
    pop de
    pop bc
    ret