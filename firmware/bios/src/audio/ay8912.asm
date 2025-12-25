; ============================================================================
; AY-3-8912 DRIVER (конкретная реализация)
; ============================================================================
module ay8912_driver

; Для AY-3-8912 порты могут быть другими
AY8912_REGISTER_PORT  equ 0xFD  ; Тот же порт
AY8912_DATA_PORT      equ 0xFE  ; Тот же порт



SECTION AY8912_CODE

; ----------------------------------------------------------------------------
; ay8912_detect - Специфичная проверка AY-3-8912
; ----------------------------------------------------------------------------
PUBLIC ay8912_detect
ay8912_detect:
    push bc
    push de
    push hl
    
    ; 1. Базовая проверка
    call ay_base_detect
    or a
    jr z, @not_found
    
    ; 2. AY-3-8912 не имеет портов ввода/вывода (регистры 14-15)
    ; Пробуем записать в порт A (регистр 14)
    ld a, AY_REG_IO_A
    call ay_base_select_register
    ld a, 0xAA
    call ay_base_write_register
    
    ; Ждём больше, чем для 8910
    ld bc, 500
@delay:
    dec bc
    ld a, b
    or c
    jr nz, @delay
    
    ; Пробуем прочитать
    ld c, AY_REG_IO_A
    call ay_base_get_register
    cp 0xAA
    
    ; Для AY-3-8912 значение НЕ должно сохраниться
    ; (порта ввода нет, запись игнорируется, чтение возвращает 0)
    jr z, @not_found  ; Если сохранилось - это AY-3-8910
    
    ; 3. Дополнительная проверка специфичных особенностей
    ; AY-3-8912 имеет только 3 бита для порта B
    ld a, AY_REG_IO_B
    call ay_base_select_register
    ld a, 0xFF
    call ay_base_write_register
    
    ld bc, 500
@delay2:
    dec bc
    ld a, b
    or c
    jr nz, @delay2
    
    ld c, AY_REG_IO_B
    call ay_base_get_register
    and 0xF8  ; Проверяем, что старшие 5 бит = 0
    jr nz, @not_found
    
    ; Все проверки пройдены
    ld a, 1  ; Это AY-3-8912!
    jr @exit
    
@not_found:
    xor a  ; Не AY-3-8912
    
@exit:
    pop hl
    pop de
    pop bc
    ret