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
REPORT_BUF      equ 0x1000  ; Отчёт в той же странице!
TEXT_PTR        equ 0x3F00  ; Хранилище для указателя
SIG_ADDR_SLOT   equ 0x7FFE  ; Для тестируемых страниц
SIG_ADDR_BANK   equ 0x7FFF  ; Для тестируемых страниц

; Винимание!  Программа находится в страинице 0000-3FFF слота 3


SIG_ADDR        equ 0x7FFF  ; Будем использовать только один адрес


    org 0x0000
    di
    ld sp, 0x3F00
    
    ; Установка Native Mode
    ld a, 3
    out (0xF0), a
    
    ; Очистка буфера
    ld hl, REPORT_BUF
    ld de, REPORT_BUF + 1
    ld bc, 0x0FFF
    ld (hl), ' '
    ldir
    
    ld hl, REPORT_BUF
    ld (TEXT_PTR), hl
    
    ; Заголовок
    ld hl, msg_title
    call print_str
    
    ; ===== ЗАПИСЬ =====
    ld hl, msg_write
    call print_str
    
    ld c, 0  ; Слот
    
write_slot_loop:
    ; Устанавливаем слот для страницы 1
    ld a, c
    add a, a      ; ×2
    add a, a      ; ×4
    or 0x03       ; Страница 0 = слот 3
    out (0xFA), a
    
    ; Тестируем банки 0x00-0xFB
    ld b, 0
    
write_bank_loop:
    ; Пропускаем MMIO
    ld a, b
    cp 0xFC
    jp nc, write_next_bank
    
    ; Устанавливаем банк
    out (0xFD), a
    
    ; Записываем: (слот << 4) | (банк & 0x0F)
    push bc
    ld a, c
    add a, a      ; ×2
    add a, a      ; ×4
    add a, a      ; ×8
    add a, a      ; ×16
    ld d, a
    
    ld a, b
    and 0x0F
    or d
    ld (0x7FFF), a
    pop bc
    
write_next_bank:
    inc b
    jp nz, write_bank_loop
    
    ; Прогресс
    ld a, '.'
    call print_char
    
    inc c
    ld a, c
    cp 4
    jp nz, write_slot_loop
    
    call newline
    ld hl, msg_write_done
    call print_str
    
    ; ===== ПРОВЕРКА =====
    ld hl, msg_verify
    call print_str
    
    ld c, 0
    ld de, 0      ; Счётчик ошибок в DE!
    
verify_slot_loop:
    ; Вывод слота
    ld a, 'S'
    call print_char
    ld a, ':'
    call print_char
    ld a, c
    call print_hex
    ld a, ' '
    call print_char
    
    ; Устанавливаем слот
    ld a, c
    add a, a
    add a, a
    or 0x03
    out (0xFA), a
    
    ; Проверяем банки
    ld b, 0
    ld h, 0      ; Ошибки в этом слоте (в H)
    
verify_bank_loop:
    ; Пропускаем MMIO
    ld a, b
    cp 0xFC
    jp nc, verify_next_bank
    
    ; Устанавливаем банк
    out (0xFD), a
    
    ; Вычисляем ожидаемое
    push bc
    push de
    push hl
    
    ; Ожидаемое = (слот << 4) | (банк & 0x0F)
    ld a, c
    add a, a
    add a, a
    add a, a
    add a, a
    ld l, a      ; L = слот << 4
    
    ld a, b
    and 0x0F
    or l
    ld l, a      ; L = ожидаемое значение
    
    ; Читаем и сравниваем
    ld a, (0x7FFF)
    cp l
    jr z, check_ok
    
    ; Ошибка! Увеличиваем счётчики
    pop hl
    inc h        ; Ошибки в слоте
    push hl
    
    pop hl
    pop de
    push de
    push hl
    
    inc de       ; Общий счётчик
    
    ; Выводим первые 3 ошибки
    ld a, h
    cp 3
    jr nc, no_display
    
    ld a, '('
    call print_char
    ld a, c
    call print_hex
    ld a, '/'
    call print_char
    ld a, b
    call print_hex
    ld a, '='
    call print_char
    ld a, l
    call print_hex
    ld a, '!'
    call print_char
    ld a, (0x7FFF)
    call print_hex
    ld a, ')'
    call print_char
    ld a, ' '
    call print_char
    
no_display:
    jr check_done

check_ok:
    pop hl
    pop de
    pop bc
    jr verify_next_bank

check_done:
    pop hl
    pop de
    pop bc

verify_next_bank:
    inc b
    jp nz, verify_bank_loop
    
    ; Статистика по слоту
    ld a, h
    or a
    jr nz, slot_has_errors
    
    ; Слот без ошибок
    ld hl, msg_ok
    call print_str
    jr slot_next
    
slot_has_errors:
    ; Слот с ошибками
    ld a, '['
    call print_char
    ld a, h
    call print_dec
    ld a, ']'
    call print_char
    
slot_next:
    call newline
    
    inc c
    ld a, c
    cp 4
    jp nz, verify_slot_loop
    
    ; ===== ИТОГ =====
    call newline
    
    ; Проверяем счётчик ошибок (DE)
    ld a, d
    or e
    jr nz, test_failed
    
    ; Все тесты пройдены
    ld hl, msg_all_ok
    call print_str
    jr test_end
    
test_failed:
    ; Были ошибки
    push de
    ld hl, msg_some_failed
    call print_str
    ld a, ' '
    call print_char
    ld a, '('
    call print_char
    pop de
    
    ; Выводим количество ошибок
    push de
    ld a, d
    call print_hex
    ld a, e
    call print_hex
    ld a, ')'
    call print_char
    pop de

test_end:
    call newline
    ld hl, msg_complete
    call print_str
    
    di
    halt

; Сообщения
msg_title:      db "MMU Test v4 (DE counter)", 0x0D, 0x0A, 0
msg_write:      db "Writing... ", 0
msg_write_done: db "Done", 0x0D, 0x0A, 0
msg_verify:     db "Verifying:", 0x0D, 0x0A, 0
msg_ok:         db "OK", 0
msg_all_ok:     db "All tests PASSED!", 0
msg_some_failed:db "FAILED!", 0
msg_complete:   db "Test complete.", 0

; Функции печати
print_char:
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
    push bc
    push de
    
    cp 100
    jr c, less_than_100
    
    ld b, '0' - 1
hundreds_loop:
    inc b
    sub 100
    jr nc, hundreds_loop
    add a, 100
    
    ld c, a
    ld a, b
    call print_char
    ld a, c
    
less_than_100:
    cp 10
    jr c, less_than_10
    
    ld b, '0' - 1
tens_loop:
    inc b
    sub 10
    jr nc, tens_loop
    add a, 10
    
    ld c, a
    ld a, b
    call print_char
    ld a, c
    
less_than_10:
    add a, '0'
    call print_char
    
    pop de
    pop bc
    ret

newline:
    ld a, 0x0D
    call print_char
    ld a, 0x0A
    jp print_char

    ds 0x1000 - $, 0
    dw REPORT_BUF
    
    ds 0x3FFE - $, 0
    dw 0x55AA