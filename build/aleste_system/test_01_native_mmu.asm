; test_01_native_mmu.asm
; Минимальный тест MMU для Aleste LX
; Тестирует 4 слота × 256 страниц = 1024 комбинации

; Порты Native Mode
SUPER_SLOT_PORT   equ 0xD9
BANK_0_PORT       equ 0xDC

; Адреса
TEXT_BUFFER       equ 0x1000  ; Буфер для вывода (Slot 1, Page 0x10)
SIGNATURE_ADDR    equ 0x3FFE    ; Последние 2 байта страницы

    org 0x0000  ; Загружаем в слот 3, страницу 0

main:
    di
    ld sp, 0x3F00
    
    ; Очистка текстового буфера
    ld hl, TEXT_BUFFER
    ld de, TEXT_BUFFER + 1
    ld bc, 0x0FFF
    ld (hl), ' '
    ldir
    
    ; Инициализация указателя
    ld hl, TEXT_BUFFER
    ld (text_ptr), hl
    
    ; Настраиваем Slot 1 для текстового буфера
    ld a, 0x10          ; Page 0x10 для текстового буфера
    out (BANK_0_PORT), a
    
    ; Заголовок
    ld hl, msg_start
    call print_str
    
    ; --------------------------------------------------------
    ; Основной тест: все слоты и страницы
    ; --------------------------------------------------------
    ld c, 0             ; Счетчик слота (0-3)
    
slot_loop:
    ; Вывод текущего слота
    push bc
    ld hl, msg_slot
    call print_str
    ld a, c
    call print_hex
    ld a, 0x0D
    call print_char
    ld a, 0x0A
    call print_char
    pop bc
    
    ; Устанавливаем текущий слот
    ld a, c
    out (SUPER_SLOT_PORT), a
    
    ; Тестируем 256 страниц
    ld b, 0
    
page_loop:
    push bc
    
    ; Устанавливаем BANK_0 на тестируемую страницу
    ld a, b
    out (BANK_0_PORT), a
    
    ; Читаем сигнатуру
    ld hl, SIGNATURE_ADDR
    ld a, (hl)          ; Прочитанный слот
    inc hl
    ld d, (hl)          ; Прочитанная страница
    
    ; Сравниваем с ожидаемыми
    ld a, c             ; Ожидаемый слот
    cp (hl)
    jp nz, test_fail
    
    ld a, b             ; Ожидаемая страница
    cp d
    jp nz, test_fail
    
    ; Успех
    pop bc
    inc b
    jp nz, page_loop
    
    ; Все страницы в слоте пройдены
    inc c
    ld a, c
    cp 4
    jp nz, slot_loop
    
    ; Все тесты успешны
    ld hl, msg_success
    call print_str
    jp halt_system

test_fail:
    ; Ошибка - выводим информацию
    pop bc              ; Восстанавливаем B=страница, C=слот
    
    ld hl, msg_fail
    call print_str
    
    ; Ожидаемый слот
    ld a, c
    call print_hex
    ld a, '/'
    call print_char
    
    ; Ожидаемая страница
    ld a, b
    call print_hex
    ld a, ' '
    call print_char
    
    ; Фактический слот
    ld hl, SIGNATURE_ADDR
    ld a, (hl)
    call print_hex
    ld a, '/'
    call print_char
    
    ; Фактическая страница
    inc hl
    ld a, (hl)
    call print_hex
    
    ld a, 0x0D
    call print_char
    ld a, 0x0A
    call print_char

halt_system:
    ; Завершающее сообщение
    ld hl, msg_done
    call print_str
    
    ; Бесконечный цикл
    di
    halt
    jp halt_system

; ------------------------------------------------------------
; Вспомогательные функции
; ------------------------------------------------------------
print_char:
    ; A = символ
    push hl
    ld hl, (text_ptr)
    ld (hl), a
    inc hl
    ld (text_ptr), hl
    pop hl
    ret

print_str:
    ; HL = указатель на строку (0-terminated)
    ld a, (hl)
    or a
    ret z
    call print_char
    inc hl
    jr print_str

print_hex:
    ; A = число для вывода в HEX
    push af
    rrca
    rrca
    rrca
    rrca
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
    call print_char
    ret

; ------------------------------------------------------------
; Сообщения
; ------------------------------------------------------------
msg_start:   db "MMU Test Start", 0x0D, 0x0A, 0
msg_slot:    db "Slot ", 0
msg_success: db 0x0D, 0x0A, "ALL TESTS PASSED!", 0x0D, 0x0A, 0
msg_fail:    db "FAIL: Expected ", 0
msg_done:    db 0x0D, 0x0A, "Test Complete", 0x0D, 0x0A, 0

; ------------------------------------------------------------
; Данные
; ------------------------------------------------------------
text_ptr:    dw TEXT_BUFFER

; Резервируем место до конца страницы
; (без сигнатур в коде!)
    ;org 0xFFFE
    ; Пусто - сигнатуры добавит скрипт