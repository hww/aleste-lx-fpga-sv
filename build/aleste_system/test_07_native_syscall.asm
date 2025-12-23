; test_syscall_complete.asm
; Полный тест SYSCALL механизма Aleste LX
; Проверяет: User Lock, переходы режимов, аргументы, возвраты

; Порты
GLOBAL_CTRL  equ 0xF0    ; Управление режимами
SYSCALL_PORT equ 0xF2    ; Syscall порт (Native Mode)
REPORT_BUF   equ 0x1000  ; Буфер отчёта
TEXT_PTR     equ 0x3F00  ; Указатель текста

; Биты GLOBAL_CTRL
BIT_SUPERVISOR equ 0b00000001
BIT_NATIVE     equ 0b00000010  
BIT_HOOK       equ 0b00000100
BIT_USER_LOCK  equ 0b00010000

; Коды Syscall
SYS_TEST_LOCK  equ 0x00    ; Тест User Lock
SYS_ECHO       equ 0x01    ; Эхо-тест
SYS_ADD        equ 0x02    ; Сложение чисел
SYS_EXIT       equ 0xFF    ; Выход

    org 0xC000  ; Supervisor Memory, Slot 3

; ============ SUPERVISOR INIT ============
start:
    di
    ld sp, 0x3F00
    
    ; Очистка буфера отчёта
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
    
    ; ===== ИНИЦИАЛИЗАЦИЯ СУПЕРВИЗОРА =====
    ld hl, msg_init
    call print_str
    
    ; Включаем Native + Supervisor + Hook
    ld a, BIT_SUPERVISOR | BIT_NATIVE | BIT_HOOK
    out (GLOBAL_CTRL), a
    
    ; Устанавливаем обработчик Syscall
    ld hl, syscall_handler
    ld (0x0100), hl  ; Syscall вектор
    
    ; ===== ТЕСТ 1: USER LOCK =====
test1:    
    ld hl, msg_test1
    call print_str
    
    ; 1A: Запускаем User Mode С User Lock
    ld a, BIT_NATIVE | BIT_USER_LOCK
    out (GLOBAL_CTRL), a
    
    ; Сохраняем текущий PC для возврата
    push hl
    ld hl, after_test1
    
    ; Эмулируем User Mode вызов
    ld a, SYS_TEST_LOCK
    ld bc, 0x1234
    ld de, 0x5678
    ld hl, 0x9ABC
    call syscall_wrapper
    
after_test1:
    pop hl
    
    ; Проверяем результат
    cp 0x00
    jr z, test1_ok
    
    ld hl, msg_failed
    call print_str
    jp test2
    
test1_ok:
    ld hl, msg_ok
    call print_str
    
    ; ===== ТЕСТ 2: ECHO С DI =====

test2:    
    call newline
    ld hl, msg_test2
    call print_str
    
    ; Включаем Hook для прерываний
    ld a, BIT_NATIVE | BIT_HOOK | BIT_USER_LOCK
    out (GLOBAL_CTRL), a
    
    ; User Mode с DI
    di
    ld a, SYS_ECHO
    ld bc, 0xDEAD
    ld de, 0xBEEF
    ld hl, 0xCAFE
    call syscall_wrapper
    
    ; Проверяем эхо
    cp 0x01           ; Код функции должен вернуться
    jr nz, test2_fail
    
    push bc
    pop hl
    ld de, 0xDEAD
    or a
    sbc hl, de
    jr nz, test2_fail
    
    ld hl, msg_ok
    call print_str
    jr test3
    
test2_fail:
    ld hl, msg_failed
    call print_str
    
    ; ===== ТЕСТ 3: АРИФМЕТИКА =====
test3:
    call newline
    ld hl, msg_test3
    call print_str
    
    ei                ; Включаем прерывания
    ld a, SYS_ADD
    ld d, 25          ; 25 + 37 = 62
    ld e, 37
    call syscall_wrapper
    
    cp 62
    jr nz, test3_fail
    
    ld hl, msg_ok
    call print_str
    jr test4
    
test3_fail:
    ld hl, msg_failed
    call print_str
    
    ; ===== ТЕСТ 4: ПРЕРЫВАНИЯ =====
test4:
    call newline
    ld hl, msg_test4
    call print_str
    
    ; Включаем обработчик прерываний
    ld a, 0xC3        ; JP
    ld (0x0038), a
    ld hl, interrupt_handler
    ld (0x0039), hl
    
    ; User Mode с Hook
    ld a, BIT_NATIVE | BIT_HOOK | BIT_USER_LOCK
    out (GLOBAL_CTRL), a
    
    ; Генерируем прерывание
    ei
    halt              ; Ожидаем прерывание
    di
    
    ; Проверяем, что прерывание обработано
    ld hl, (interrupt_counter)
    ld a, h
    or l
    jr z, test4_fail
    
    ld hl, msg_ok
    call print_str
    jr test_complete
    
test4_fail:
    ld hl, msg_failed
    call print_str
    
    ; ===== ЗАВЕРШЕНИЕ =====
test_complete:
    call newline
    ld hl, msg_complete
    call print_str
    
    ; Возвращаемся в супервизор
    ld a, BIT_SUPERVISOR | BIT_NATIVE
    out (GLOBAL_CTRL), a
    
    ; Выход
    ld a, SYS_EXIT
    call syscall_wrapper
    
    di
    halt

; ============ SYS CALL WRAPPER ============
; Эта обёртка ВСЕГДА используется для вызова Syscall
syscall_wrapper:
    out (SYSCALL_PORT), a  ; Волшебная команда
    ret                    ; Сюда вернётся управление

; ============ SYS CALL HANDLER ============
; Обработчик в Supervisor Mode
syscall_handler:
    ; Сохраняем все регистры
    push bc
    push de
    push hl
    push ix
    push iy
    exx
    ex af, af'
    push af
    push bc
    push de
    push hl
    
    ; A содержит код функции (передан через порт)
    ; BC, DE, HL содержат аргументы
    
    cp SYS_TEST_LOCK
    jp z, sys_test_lock
    cp SYS_ECHO
    jp z, sys_echo
    cp SYS_ADD
    jp z, sys_add
    cp SYS_EXIT
    jp z, sys_exit
    
    ; Неизвестная функция
    ld a, 0xFF
    jp syscall_return

; --- Функция 00: Тест User Lock ---
sys_test_lock:
    ; BC должен быть 0x1234
    ld hl, 0x1234
    or a
    sbc hl, bc
    jr nz, lock_fail
    
    ; DE должен быть 0x5678
    ld hl, 0x5678
    or a
    sbc hl, de
    jr nz, lock_fail
    
    ; HL должен быть 0x9ABC
    push de
    pop hl
    ld de, 0x9ABC
    or a
    sbc hl, de
    jr nz, lock_fail
    
    ; Успех
    ld a, 0x00
    jp syscall_return
    
lock_fail:
    ld a, 0xFE
    jp syscall_return

; --- Функция 01: Эхо ---
sys_echo:
    ; Возвращаем код функции в A
    ld a, SYS_ECHO
    ; BC уже содержит аргумент
    jp syscall_return

; --- Функция 02: Сложение ---
sys_add:
    ; D и E содержат числа
    push de
    pop hl
    ld a, h
    add a, l
    ; Результат в A
    jp syscall_return

; --- Функция FF: Выход ---
sys_exit:
    di
    halt

; --- Общий возврат ---
syscall_return:
    ; Восстанавливаем регистры
    pop hl
    pop de
    pop bc
    pop af
    ex af, af'
    exx
    pop iy
    pop ix
    pop hl
    pop de
    pop bc
    
    ; Подготавливаем выход из супервизора
    push af
    ld a, BIT_NATIVE | BIT_USER_LOCK  ; User Mode с Lock
    out (GLOBAL_CTRL), a
    pop af
    
    ret  ; Возврат в User Mode

; ============ INTERRUPT HANDLER ============
interrupt_handler:
    push af
    push hl
    
    ; Увеличиваем счётчик
    ld hl, (interrupt_counter)
    inc hl
    ld (interrupt_counter), hl
    
    pop hl
    pop af
    ei
    reti

; ============ ФУНКЦИИ ПЕЧАТИ ============
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

newline:
    ld a, 0x0D
    call print_char
    ld a, 0x0A
    jp print_char

; ============ СООБЩЕНИЯ ============
msg_title:    db "SYSCALL Complete Test v2.0", 0x0D, 0x0A, 0
msg_init:     db "Initializing Supervisor... ", 0
msg_test1:    db "Test 1 (User Lock): ", 0
msg_test2:    db "Test 2 (Echo with DI): ", 0
msg_test3:    db "Test 3 (Arithmetic): ", 0
msg_test4:    db "Test 4 (Interrupts): ", 0
msg_ok:       db "OK", 0
msg_failed:   db "FAILED", 0
msg_complete: db "All tests completed.", 0

; ============ ДАННЫЕ ============
interrupt_counter:
    dw 0

    ds 0x1000 - $, 0
    dw REPORT_BUF  ; TEXT_PTR
    
    ds 0x3FFE - $, 0
    dw 0x55AA