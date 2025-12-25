EXTERN _main
SECTION code_crt_start
; aleste.asm
; z80asm синтаксис

    org 0x0000  ; ИЛИ .org

; =============== ВЕКТОРА ===============
; RST 00h
    di
    jp start
    
; Заполняем до 0x0038 (правильный синтаксис)
    defs 0x0038 - $      ; без значения - заполнит 0x00
    ; ИЛИ
    ; defs 0x0038 - $, 0xFF  ; заполнит 0xFF
    
; IM1 прерывание (0x0038)
    ei
    reti
    
; Заполняем до 0x0066
    defs 0x0066 - $
    
; NMI (0x0066)
    retn
    
; Заполняем до 0x8000
    defs 0x100 - $

; =============== ОСНОВНОЙ КОД ===============
start:
    ; Инициализация Aleste
    di
    ld a, 0x00
    out (0xF0), a
    ld sp, 0xFF00
    ld a, 0x02
    out (0xF0), a

    
    ; Вызов C main()
    call _main
    
    ; Завершение
    di
    halt
