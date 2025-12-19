; test_port_simple.asm
; Просто проверяем: порт D7 читается/пишется?

    org 0x0000

start:
    di
    ld a, 0x00
loop:
    out (0xDB), a
    in a, (0xD1)
    inc a
    jp loop



    ld sp, 0x3F00
    
    ; 1. Читаем D7
    in a, (0xD7)
    ld (0x1000), a  ; Сохраняем
    
    ; 2. Пишем в D7
    ld a, 0x03
    out (0xD7), a
    
    ; 3. Читаем обратно
    in a, (0xD7)
    ld (0x1001), a
    
    ; 4. Бесконечный цикл
    di
    halt
    jr $
    
    ds 0x4000 - $, 0