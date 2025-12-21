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
SUPER_SLOT_PORT equ 0xFA
USER_SLOT_PORT  equ 0xFB
BANK_0_PORT     equ 0xFC
BANK_1_PORT     equ 0xFD
BANK_2_PORT     equ 0xFE
BANK_3_PORT     equ 0xFF

; Адреса
REPORT_BUF      equ 0x1000  ; Отчёт в той же странице!
TEXT_PTR        equ 0x3F00  ; Хранилище для указателя
SIG_ADDR_SLOT   equ 0x7FFE  ; Для тестируемых страниц
SIG_ADDR_BANK   equ 0x7FFF  ; Для тестируемых страниц

    org 0x0000  ; Slot 3, Page 0 (логический 0xC000-0xFFFF)


; Винимание!  Программа находится в страинице 0000-3FFF слота 3
main:
    di
    ; ============ ИНИЦИАЛИЗАЦИЯ ============
    ld sp, 0x3F00

    ld a,3
    out (REG_CONTROL),a
    
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

ld c, 0

write_slot_loop:
    ; Этот код РАБОТАЛ
    ld a, c
    add a,a
    add a,a
    or a,3
    out (SUPER_SLOT_PORT), a
    
    ld b, 0
write_page_loop:
    push bc
    ld a, b
    out (BANK_1_PORT), a
    
    ; Записываем сигнатуру КАК БЫЛО
    ld a, c
    ld (SIG_ADDR_SLOT), a
    ld a, b  
    ld (SIG_ADDR_BANK), a
    
    pop bc
    inc b
    jp nz, write_page_loop

    ; Прогресс (работало!)
    ld a, '.'
    call print_char

    inc c
    ld a, c
    cp 4
    jp nz, write_slot_loop
    
call newline

; ============ ПРОХОД 2: ПРОВЕРКА ============
; ФИКСИМ ТОЛЬКО ПРОВЕРКУ
ld hl, msg_verify
call print_str
call newline
call newline
ld c, 0  ; ← ВАЖНО! Сбрасываем C в 0!

verify_slot_loop:
    ; Вывод слота
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
    
    ; Устанавливаем слот (ТОТ ЖЕ КОД ЧТО ПРИ ЗАПИСИ)
    ld a, c
    add a,a
    add a,a
    or a,3
    out (SUPER_SLOT_PORT), a
    
    ; Простая проверка - просто читаем и печатаем
    ld b, 0
verify_page_loop:
    push bc
    ld a, b
    out (BANK_1_PORT), a
    
    ; Читаем что записали
    ld a, (SIG_ADDR_SLOT)
    call print_hex  ; Просто печатаем прочитанное
    ld a, ' '
    call print_char
    
    ld a, (SIG_ADDR_BANK)
    call print_hex  ; Просто печатаем прочитанное
    ld a, ' '
    call print_char
    
    pop bc
    inc b
    jr nz, verify_page_loop
    
    call newline
    inc c
    ld a, c
    cp 4
    jr nz, verify_slot_loop
    
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