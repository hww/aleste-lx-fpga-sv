; ============================================================================
; INTERRUPT VECTORS TABLE
; Таблица векторов прерываний
; ============================================================================
SECTION INT_VECTORS
org 0x0000

; ---- ВЕКТОРЫ ПРЕРЫВАНИЙ Z80 ----

; Режим 0 (по умолчанию в ZX Spectrum)
int_vectors_mode0:
    ; 8 векторов по 1 байту (RST)
    ret                     ; RST 0x00
    nop
    nop
    
    ret                     ; RST 0x08
    nop
    nop
    nop
    nop
    
    ret                     ; RST 0x10
    nop
    nop
    nop
    nop
    
    ret                     ; RST 0x18
    nop
    nop
    nop
    nop
    
    ret                     ; RST 0x20
    nop
    nop
    nop
    nop
    
    ret                     ; RST 0x28
    nop
    nop
    nop
    nop
    
    ret                     ; RST 0x30
    nop
    nop
    nop
    nop
    
    ret                     ; RST 0x38 (IM1)
    nop

; Режим 1 (один вектор)
int_vector_mode1:
    jp system_timer_handler   ; Все маскируемые прерывания идут сюда

; Режим 2 (таблица векторов)
int_vector_table_mode2:
    ; Указатель на таблицу устанавливается через регистр I
    ; Каждый вектор - 2 байта
    dw default_irq_handler   ; Вектор 0
    dw default_irq_handler   ; Вектор 1
    dw default_irq_handler   ; Вектор 2
    dw default_irq_handler   ; Вектор 3
    dw default_irq_handler   ; Вектор 4
    dw default_irq_handler   ; Вектор 5
    dw default_irq_handler   ; Вектор 6
    dw default_irq_handler   ; Вектор 7

; ---- RST ВЫЗОВЫ (Z80 SOFTWARE INTERRUPTS) ----

; RST 0x00 - Сброс системы
rst_00:
    jp system_reset

; RST 0x08 - Быстрый вызов (используется системой)
rst_08:
    ; Сохраняем адрес возврата
    push hl
    ld hl, 2
    add hl, sp
    ld (sys_call_return), hl
    pop hl
    
    ; Вызываем системную функцию
    jp system_fast_call

; RST 0x10 - Еще один быстрый вызов
rst_10:
    ; Может использоваться для других целей
    ret

; RST 0x18 - И еще один
rst_18:
    ret

; RST 0x20 - Графические функции
rst_20:
    jp graphics_fast_call

; RST 0x28 - Ввод/вывод
rst_28:
    jp io_fast_call

; RST 0x30 - Математические функции
rst_30:
    jp math_fast_call

; RST 0x38 - Прерывание (IM1)
rst_38:
    jp system_timer_handler

; ---- ДАННЫЕ ДЛЯ RST ВЫЗОВОВ ----
sys_call_return: dw 0