    REPORT_BUF      equ 0x1000  ; Отчёт в той же странице!
    TEXT_PTR        equ 0x3F00  ; Хранилище для указателя

    org 0x0000
    di
    ld sp, 0x0FFF
    
    ; Очистка буфера
    ld hl, 0x1000
    ld de, 0x1001
    ld bc, 0x0EFF
    ld (hl), ' '
    ldir
    
    ; Указатель
    ld hl, 0x1000
    ld (0x3F00), hl

    ld a, '('
    call print_char

    ; ===== ТЕСТ СЛОТОВ =====
    ld c, 0
    
test_slot_loop:
    ; Устанавливаем слот
    ld a, c
    add a, a
    add a, a
    or 3
    out (0xFA), a
    
    ; Страница 0
    xor a
    out (0xFD), a
    
    ; Пишем метку
    ld a, c
    add a, 0xA0      ; A0, A1, A2, A3
    ld (0x7FFF), a
    
    ; Читаем обратно
    ld a, (0x7FFF)
    
    ; Печатаем
    call print_hex
    ld a, ' '
    call print_char
    
    inc c
    ld a, c
    cp 4
    jr nz, test_slot_loop
    
    ; Новая строка
    ld a, 0x0D
    call print_char
    ld a, 0x0A
    call print_char
    
    ; ===== ТЕСТ СТРАНИЦ (только в слоте 0) =====
    ; Slot 0
    ld a, 0x03
    out (0xFA), a
    
    ld b, 0
    
test_page_loop:
    push bc
    ld a, b
    out (0xFD), a
    
    ; Пишем номер страницы
    ld a, b
    ld (0x7FFF), a
    
    ; Читаем
    ld a, (0x7FFF)
    call print_hex
    ld a, ' '
    call print_char
    
    pop bc
    inc b
    jr nz, test_page_loop
    
    ld a, ')'
    call print_char

    halt
 
; ============ ФУНКЦИИ ============
print_ac:
    ; Печатает A и C в hex: "(A-значение C-значение)"
    ; Пример: A=0x13, C=0xC0 → напечатает "(13 C0) "
    push af
    ld a, '('
    call print_char
    pop af
    
    push af
    push bc
    
    ; Печатаем A в hex
    call print_hex
    
    ld a, ' '
    call print_char
    
    ; Печатаем C в hex
    ld a, c
    call print_hex
    
    ld a, ')'
    call print_char
    
    ld a, ' '
    call print_char
    
    pop bc
    pop af
    ret

print_ab:
    ; Печатает A и B в hex: "(A-значение B-значение)"
    ; Пример: A=0x03, B=0x00 → напечатает "(03 00) "
    push af
    ld a, '('
    call print_char
    pop af
    
    push af
    push bc
    
    ; Печатаем A в hex
    call print_hex
    
    ld a, ' '
    call print_char
    
    ; Печатаем B в hex
    ld a, b
    call print_hex
    
    ld a, ')'
    call print_char
    
    ld a, ' '
    call print_char
    
    pop bc
    pop af
    ret

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

print_dec:
    cp 10
    jr c, pd_single
    ld d, '0' - 1
pd_loop:
    inc d
    sub 10
    jr nc, pd_loop
    add a, 10
    push af
    ld a, d
    call print_char
    pop af
pd_single:
    add a, '0'
    jp print_char

newline:
    ld a, 0x0D
    call print_char
    ld a, 0x0A
    jp print_char

; ============ СООБЩЕНИЯ ============
msg_start:   db "MMU Test v1.0", 0
msg_write:   db "Writing... ", 0
msg_verify:  db "Verifying:", 0
msg_slot:    db "Slot ", 0
msg_ok:      db " OK", 0
msg_errors:  db " ERR:", 0
msg_done:    db "Test complete", 0

; ============ ДАННЫЕ ============
    ds 0x1000 - $, 0  ; Заполняем до буфера отчёта

; Буфер отчёта начинается здесь
; ... код продолжается ...

    ds 0x3F00 - $, 0  ; Заполняем до текстового указателя
; Текст указатель
    dw REPORT_BUF

; Заполняем до конца страницы
    ds 0x3FFE - $, 0
    
    ; Сигнатура в конце (опционально)
    dw 0x55AA   