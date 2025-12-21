; test_01_native_mmu.asm
; Двухпроходный тест MMU Aleste LX
; ВСЁ в Slot 3, Page 0 (физический 0xC00000)
; Отчёт по адресу 0x1000 (в той же странице)

; Порты Native Mode
REG_CONTROL     equ 0xF0

; Слотовый регистр
; биты
; 1-0 управляеют слотом в странице 0000-3FFF
; 3-2 управляеют слотом в странице 4000-7FFF
; 5-4 управляеют слотом в странице 8000-BFFF
; 7-6 управляеют слотом в странице C000-7FFF
; Винимание!  Программа находится в страинице 0000-3FFF слота 3
SUPER_SLOT_PORT equ 0xFA // Works after reset
USER_SLOT_PORT  equ 0xFB // Do not use it
BANK_0_PORT     equ 0xFC
BANK_1_PORT     equ 0xFD
BANK_2_PORT     equ 0xFE
BANK_3_PORT     equ 0xFF

; Адреса


SIG_ADDR_SLOT   equ 0x7FFE  ; Для тестируемых страниц
SIG_ADDR_BANK   equ 0x7FFF  ; Для тестируемых страниц

; Винимание!  Программа находится в страинице 0000-3FFF слота 3

REPORT_BUF      equ 0x1000
TEXT_PTR        equ 0x3F00

    org 0x0000
    
    di
    ; Устанавливаем указатель вывода
    ld hl, REPORT_BUF
    ld (TEXT_PTR), hl
    
    ; Очищаем буфер
    ld hl, REPORT_BUF
    ld de, REPORT_BUF + 1
    ld bc, 0x0FFF
    ld (hl), ' '
    ldir
    
    ; ===== ПРОСТОЙ ТЕСТ =====
    ; Выводим сообщение
    ld hl, msg_hello
    call print_str
    
    ; Тест 1: Базовая запись/чтение
    ld hl, msg_test1
    call print_str
    
    ld a, 0x55
    ld (0x7FFF), a
    ld a, (0x7FFF)
    call print_hex
    call newline
    
    ; Тест 2: Смена банка
    ld hl, msg_test2
    call print_str
    
    ; Устанавливаем слот 0 для 4000-7FFF
    ld a, 0x03  ; 0000-3FFF=слот3, 4000-7FFF=слот0
    out (0xFA), a
    
    ; Банк 0
    xor a
    out (0xFD), a
    ld a, 0xAA
    ld (0x7FFF), a
    
    ; Банк 1
    ld a, 0x01
    out (0xFD), a
    ld a, 0xBB
    ld (0x7FFF), a
    
    ; Возвращаемся в банк 0
    xor a
    out (0xFD), a
    ld a, (0x7FFF)
    call print_hex
    call newline
    
    ; Тест 3: Смена слота
    ld hl, msg_test3
    call print_str
    
    ; Слот 0
    ld a, 0x03
    out (0xFA), a
    xor a
    out (0xFD), a
    ld a, 0xC0
    ld (0x7FFF), a
    
    ; Слот 1
    ld a, 0x07
    out (0xFA), a
    xor a
    out (0xFD), a
    ld a, 0xC1
    ld (0x7FFF), a
    
    ; Проверяем
    ld a, 0x03
    out (0xFA), a
    ld a, (0x7FFF)
    call print_hex
    ld a, ' '
    call print_char
    
    ld a, 0x07
    out (0xFA), a
    ld a, (0x7FFF)
    call print_hex
    call newline
    
    ; Завершение
    ld hl, msg_done
    call print_str
    
    di
    halt

; ============ ФУНКЦИИ ============
print_char:
    ; A = символ
    push hl
    ld hl, (TEXT_PTR)
    ld (hl), a
    inc hl
    ld (TEXT_PTR), hl
    pop hl
    ret

print_str:
    ld a, (hl)
    or a
    ret z
    call print_char
    inc hl
    jr print_str

print_hex:
    push af
    rra
    rra
    rra
    rra
    call ph_digit
    pop af
ph_digit:
    and 0x0F
    cp 10
    jr c, ph_num
    add a, 'A' - 10
    jr ph_out
ph_num:
    add a, '0'
ph_out:
    jp print_char

newline:
    ld a, 0x0D
    call print_char
    ld a, 0x0A
    jp print_char

; ============ СООБЩЕНИЯ ============
msg_hello: db "MMU Simple Test", 0x0D, 0x0A, 0
msg_test1: db "Test1 (basic): ", 0
msg_test2: db "Test2 (banks): ", 0
msg_test3: db "Test3 (slots): ", 0
msg_done:  db "Done.", 0

; ============ ДАННЫЕ ============
    ds 0x1000 - $, 0

; Текст указатель
    dw REPORT_BUF

    ds 0x3FFE - $, 0
    dw 0x55AA