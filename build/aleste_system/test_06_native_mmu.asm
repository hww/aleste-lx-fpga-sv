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
   org 0x0000
    di
    ld sp, 0x3F00
    
    ; Очистка
    ld hl, 0x1000
    ld de, 0x1001
    ld bc, 0x0FFF
    ld (hl), ' '
    ;ldir
    
    ld hl, 0x1000
    ld (0x3F00), hl
    
    ; ===== ТЕСТ: Проверка работы BANK портов =====
    ld hl, msg_test_ports
    call print_str
    
    ; Тест 1: Прямая запись в разные банки
    ; Устанавливаем слот 0 для страницы 4000-7FFF
    ld a, 0x03  ; 0000-3FFF=слот3, 4000-7FFF=слот0
    out (0xFA), a
    
    ld hl, msg_bank0
    call print_str
    
    ; Банк 0
    xor a
    out (0xFD), a  ; BANK_1_PORT
    
    ; Записываем метку
    ld a, 0xA0
    ld (0x4000), a
    
    ; Читаем
    ld a, (0x4000)
    call print_hex
    call newline
    
    ; Банк 1
    ld hl, msg_bank1
    call print_str
    
    ld a, 0x01
    out (0xFD), a
    
    ; Записываем другую метку
    ld a, 0xB1
    ld (0x4000), a
    
    ; Читаем
    ld a, (0x4000)
    call print_hex
    call newline
    
    ; Возвращаемся в банк 0
    ld hl, msg_bank0_again
    call print_str
    
    xor a
    out (0xFD), a
    
    ; Читаем из банка 0 - должно быть A0
    ld a, (0x4000)
    call print_hex
    call newline
    
    ; ===== ТЕСТ: Все порты банков =====
    call newline
    ld hl, msg_all_bank_ports
    call print_str
    
    ; Тестируем все 4 порта банков
    ld b, 4
    ld c, 0xFC  ; BANK_0_PORT
    
test_bank_port:
    push bc
    
    ; Устанавливаем значение через порт
    ld a, b
    dec a
    out (c), a
    
    ; Пытаемся записать
    ld a, b
    add a, 0x30
    ld (0x4000), a
    
    ; Выводим результат
    ld a, 'P'
    call print_char
    ld a, ':'
    call print_char
    ld a, c
    call print_hex
    ld a, ' '
    call print_char
    ld a, 'V'
    call print_char
    ld a, ':'
    call print_char
    ld a, (0x4000)
    call print_hex
    ld a, ' '
    call print_char
    
    pop bc
    inc c
    djnz test_bank_port
    
    call newline
    
    ; ===== ТЕСТ: Дамп конфигурации =====
    call newline
    ld hl, msg_current_config
    call print_str
    
    ; Читаем текущие настройки слотов
    in a, (0xFA)
    call print_hex
    ld a, ' '
    call print_char
    
    ; Читаем текущие настройки банков
    ld c, 0xFC
    ld b, 4
    
read_bank_config:
    in a, (c)
    call print_hex
    ld a, ' '
    call print_char
    inc c
    djnz read_bank_config
    
    call newline
    
    halt

; Сообщения
msg_test_ports:      db "Testing BANK ports:", 0x0D, 0x0A, 0
msg_bank0:          db "Bank 0 write A0, read: ", 0
msg_bank1:          db "Bank 1 write B1, read: ", 0
msg_bank0_again:    db "Back to Bank 0, read: ", 0
msg_all_bank_ports: db "All bank ports:", 0x0D, 0x0A, 0
msg_current_config: db "Current config (slot,bank0-3): ", 0


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