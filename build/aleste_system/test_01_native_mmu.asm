; test_01_native_mmu.asm
; Двухпроходный тест MMU Aleste LX
; ВСЁ в Slot 3, Page 0 (физический 0xC00000)
; Отчёт по адресу 0x1000 (в той же странице)

; Порты Native Mode
REG_CONTROL     equ 0xD7
SUPER_SLOT_PORT equ 0xD9
USER_SLOT_PORT  equ 0xDB
BANK_0_PORT     equ 0xDC
BANK_1_PORT     equ 0xDD
BANK_2_PORT     equ 0xDE
BANK_3_PORT     equ 0xDF

; Адреса
REPORT_BUF      equ 0x1000  ; Отчёт в той же странице!
TEXT_PTR        equ 0x3F00  ; Хранилище для указателя
SIG_ADDR        equ 0x7FFE  ; Для тестируемых страниц

    org 0x0000  ; Slot 3, Page 0 (логический 0xC000-0xFFFF)

main:
    di
    ld sp, 0x3F00
    
    ; ============ ИНИЦИАЛИЗАЦИЯ ============
    
    ; Проверяем Native Mode
    in a, (REG_CONTROL)
    set 0, a        ; native_mode=1
    out (REG_CONTROL), a
    
    ; Очистка буфера отчёта
    ld hl, REPORT_BUF
    ld de, REPORT_BUF + 1
    ld bc, 0x0EFF      ; Очищаем 0x1000..0x1FFF
    ld (hl), ' '
    ldir
    
    ; Инициализация указателя
    ld hl, REPORT_BUF
    ld (TEXT_PTR), hl
    
    ; Заголовок
    ld hl, msg_start
    call print_str
    call newline
    
    ; ============ ПРОХОД 1: ЗАПИСЬ ============
    ld hl, msg_write
    call print_str
    
    ld c, 0             ; Счётчик слота (0-3)
    
write_slot_loop:
    ; Устанавливаем текущий слот (остаёмся в Slot 3!)
    ld a, c
    out (SUPER_SLOT_PORT), a
    
    ; Тестируем 256 страниц через BANK_1 (4000-7FFF)
    ld b, 0
    
write_page_loop:
    push bc
    
    ; Устанавливаем BANK_1 на тестируемую страницу
    ld a, b
    out (BANK_1_PORT), a
    
    ; Записываем сигнатуру
    ld hl, SIG_ADDR
    ld (hl), c          ; Слот
    inc hl
    ld (hl), b          ; Страница
    
    ; Прогресс
    ld a, b
    and 0x0F
    jr nz, write_next
    ld a, '.'
    call print_char
    
write_next:
    pop bc
    inc b
    jr nz, write_page_loop
    
    inc c
    ld a, c
    cp 4
    jr nz, write_slot_loop
    
    call newline
    
    ; ============ ПРОХОД 2: ПРОВЕРКА ============
    ld hl, msg_verify
    call print_str
    call newline
    
    ld c, 0
    
verify_slot_loop:
    ; Вывод номера слота
    push bc
    ld hl, msg_slot
    call print_str
    ld a, c
    call print_hex
    ld a, ':'
    call print_char
    ld a, ' '
    call print_char
    pop bc
    
    ; Устанавливаем слот
    ld a, c
    out (SUPER_SLOT_PORT), a
    
    ; Тестируем страницы
    ld b, 0
    ld e, 0             ; Счётчик ошибок
    
verify_page_loop:
    push bc
    
    ; Устанавливаем BANK_1
    ld a, b
    out (BANK_1_PORT), a
    
    ; Проверяем сигнатуру
    ld hl, SIG_ADDR
    ld a, (hl)
    cp c
    jr nz, verify_fail
    inc hl
    ld a, (hl)
    cp b
    jr nz, verify_fail
    
    pop bc
    inc b
    jr nz, verify_page_loop
    
    ; Слот проверен
    ld a, e
    or a
    jr z, slot_ok
    
    ; Ошибки
    push bc
    ld hl, msg_errors
    call print_str
    ld a, e
    call print_dec
    pop bc
    jr slot_next
    
slot_ok:
    ld hl, msg_ok
    call print_str
    
slot_next:
    call newline
    inc c
    ld a, c
    cp 4
    jr nz, verify_slot_loop
    
    ; ============ ИТОГ ============
    ld hl, msg_done
    call print_str
    
    ; Бесконечный цикл
    di
    halt
    jr $

verify_fail:
    inc e
    pop bc
    inc b
    jr nz, verify_page_loop
    jr slot_next

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