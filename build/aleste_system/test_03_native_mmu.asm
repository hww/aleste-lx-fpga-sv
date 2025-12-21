; test_port_simple.asm
; Просто проверяем: порт D7 читается/пишется?

    org 0x0000

start:
    di
    ld a, 0x01
loop:    
    ld sp, 0x3F00
    
    ; 1. Читаем 0xF0
    in a, (0xF0)
    ld (0x1000), a  ; Сохраняем
    
    ; 2. Пишем в 0xF0
    ld a, 0x03
    out (0xF0), a
    
    ; 3. Читаем обратно
    in a, (0xF0)
    ld (0x1001), a

    ; 4. Настраиваем user slot
    ld a, 0xFF
    out (0xFB), a

    ; 5. Выходим из супервизора
    ld a, 0x02
    out (0xF0), a

    ; 6. Бесконечный цикл
    di
    halt
    jr $
    
    ds 0x4000 - $, 0