; test_syscall_mmu.asm
; Тест SYSCALL и MMU Aleste LX
; Проверяет переход в Supervisor Mode и возврат в User Mode
; с правильной настройкой слотов и страниц

; Порты
REG_CONTROL     equ 0xF0    ; Global Control
REG_SYSCALL     equ 0xF2    ; Syscall trigger
SUPER_SLOT_PORT equ 0xFA    ; Supervisor slot register
USER_SLOT_PORT  equ 0xFB    ; User slot register
BANK_0_PORT     equ 0xFC    ; Bank 0 (page 0)
BANK_1_PORT     equ 0xFD    ; Bank 1 (page 1)

; Адреса
REPORT_BUF      equ 0x1000  ; Буфер отчёта
TEXT_PTR        equ 0x3F00  ; Указатель текста
USER_CODE_ADDR  equ 0x0000  ; Адрес пользовательского кода в слоте 0
SYS_CODE_ADDR   equ 0x3800  ; Адрес системного кода в слоте 3

; Syscall коды
SYS_TEST_MMU    equ 0x00    ; Тест MMU в супервизоре
SYS_SWITCH_USER equ 0x01    ; Переключение в пользовательский режим
SYS_PRINT_CHAR  equ 0x02    ; Печать символа
SYS_EXIT        equ 0xFF    ; Выход из теста

    org 0xC000  ; Начало в слоте 3, страница 0 (физический 0xC00000)

; ============ ИНИЦИАЛИЗАЦИЯ ============
start:
    di
    ; Устанавливаем Native Mode + Supervisor Mode
    ld a, 0b00000011  ; bit0=Native, bit1=Supervisor
    out (REG_CONTROL), a
    
    ; Инициализация стека
    ld sp, 0x3F00
    
    ; Очистка буфера отчёта
    ld hl, REPORT_BUF
    ld de, REPORT_BUF + 1
    ld bc, 0x0FFF
    ld (hl), ' '
    ldir
    
    ; Инициализация указателя
    ld hl, REPORT_BUF
    ld (TEXT_PTR), hl
    
    ; Заголовок теста
    ld hl, msg_title
    call print_str
    
    ; ============ ПОДГОТОВКА ПОЛЬЗОВАТЕЛЬСКОГО КОДА ============
    ; Включаем слот 0 для страницы 0 в супервизорном режиме
    ld a, 0x00        ; 0000-3FFF = слот 0 (биты 1-0)
    out (SUPER_SLOT_PORT), a
    
    ; Банк 0 для страницы 0
    xor a
    out (BANK_0_PORT), a
    
    ; Загружаем пользовательский код в слот 0
    ld hl, user_code
    ld de, USER_CODE_ADDR
    ld bc, user_code_end - user_code
    ldir
    
    ; Включаем слот 3 для страницы 0 обратно
    ld a, 0x03        ; 0000-3FFF = слот 3
    out (SUPER_SLOT_PORT), a
    
    ; ============ НАСТРОЙКА ОБРАБОТЧИКОВ ============
    ; Устанавливаем обработчик прерывания
    ld a, 0xC3        ; Код команды JP
    ld (0x0038), a    ; Адрес IM1
    ld hl, interrupt_handler
    ld (0x0039), hl
    
    ; Устанавливаем обработчик NMI
    ld (0x0066), a    ; Код команды JP
    ld hl, nmi_handler
    ld (0x0067), hl
    
    ; ============ ТЕСТ 1: ВЫЗОВ SYSCALL ============
    ld hl, msg_test1
    call print_str
    
    ; Вызываем syscall для теста MMU
    ld a, SYS_TEST_MMU
    ld bc, 0x1234     ; Тестовые данные
    ld de, 0x5678
    ld hl, 0x9ABC
    
    ; Вызов syscall
    call syscall_wrapper
    
    ; Проверяем результат
    cp 0
    jr z, test1_ok
    
    ; Ошибка
    ld hl, msg_failed
    call print_str
    jr test_end
    
test1_ok:
    ld hl, msg_ok
    call print_str
    
    ; ============ ТЕСТ 2: ПЕРЕКЛЮЧЕНИЕ В USER MODE ============
    call newline
    ld hl, msg_test2
    call print_str
    
    ; Устанавливаем пользовательский слот
    ld a, 0x00        ; User slot 0 для страницы 0
    out (USER_SLOT_PORT), a
    
    ; Вызываем syscall для перехода в user mode
    ld a, SYS_SWITCH_USER
    call syscall_wrapper
    
    ; После возврата из супервизора...
    ld hl, msg_back_from_syscall
    call print_str
    
    ; ============ ТЕСТ 3: РАБОТА В USER MODE ============
    ; Теперь мы в user mode, слот 0
    
    ; Проверяем, что мы действительно в user mode
    ; Пытаемся записать в порт супервизора (должно не сработать)
    ld a, 0xFF
    out (SUPER_SLOT_PORT), a
    
    ; Читаем обратно
    in a, (SUPER_SLOT_PORT)
    cp 0x00           ; Должно остаться 0x00
    jr z, user_mode_ok
    
    ; Ошибка - мы всё ещё в супервизоре
    ld hl, msg_not_user_mode
    call print_str
    jr test_end
    
user_mode_ok:
    ; Вызываем syscall из user mode
    ld a, SYS_PRINT_CHAR
    ld c, 'U'         ; Символ для печати
    call syscall_wrapper
    
    ; ============ ВОЗВРАТ В SUPERVISOR MODE ============
    ; Используем NMI для возврата
    call newline
    ld hl, msg_return_to_super
    call print_str
    
    ; Генерируем NMI
    ld a, 0x00
    out (0x00), a     ; Порт, который вызовет NMI
    
    ; Ожидаем обработки NMI
    halt
    ; Продолжение после NMI
    
    ; ============ ТЕСТ 4: ВЕРИФИКАЦИЯ ============
    call newline
    ld hl, msg_test4
    call print_str
    
    ; Проверяем, что вернулись в супервизор
    ld a, 0x55
    out (SUPER_SLOT_PORT), a
    in a, (SUPER_SLOT_PORT)
    cp 0x55
    jr z, super_mode_ok
    
    ld hl, msg_not_super_mode
    call print_str
    jr test_end
    
super_mode_ok:
    ld hl, msg_ok
    call print_str
    
    ; ============ ЗАВЕРШЕНИЕ ============
test_end:
    call newline
    ld hl, msg_complete
    call print_str
    
    ; Выход
    ld a, SYS_EXIT
    call syscall_wrapper
    
    ; Бесконечный цикл на всякий случай
    di
    halt

; ============ ОБРАБОТЧИК SYSCALL (SUPERVISOR) ============
; Этот код выполняется в супервизорном режиме
syscall_handler:
    ; Сохраняем все регистры
    ex af, af'
    exx
    
    ; A' содержит код syscall
    ld a, 'a'
    
    ; Диспетчеризация syscall
    cp SYS_TEST_MMU
    jp z, sys_test_mmu
    cp SYS_SWITCH_USER
    jp z, sys_switch_user
    cp SYS_PRINT_CHAR
    jp z, sys_print_char
    cp SYS_EXIT
    jp z, sys_exit
    
    ; Неизвестный syscall
    ld a, 0xFF        ; Код ошибки
    jp syscall_return

sys_test_mmu:
    ; Тестирование MMU в супервизорном режиме
    ; BC, DE, HL содержат параметры
    
    ; 1. Проверяем, что мы в супервизоре
    ld a, 0xAA
    out (SUPER_SLOT_PORT), a
    in a, (SUPER_SLOT_PORT)
    cp 0xAA
    jr nz, test_mmu_fail
    
    ; 2. Тестируем банки
    ld a, 0x01
    out (BANK_0_PORT), a
    ld a, 0x55
    ld (0x1000), a
    
    xor a
    out (BANK_0_PORT), a
    ld a, (0x1000)
    cp 0x55
    jr z, test_mmu_fail  ; Должно быть другое значение!
    
    ; Успех
    ld a, 0x00
    jp syscall_return

test_mmu_fail:
    ld a, 0x01
    jp syscall_return

sys_switch_user:
    ; Переключение в user mode
    ; Выход из супервизорного режима
    
    ; 1. Включаем слот 0 для страницы 0 в пользовательском режиме
    ld a, 0x00
    out (USER_SLOT_PORT), a
    
    ; 2. Выходим из супервизорного режима
    ld a, 0b00000001  ; Native=1, Supervisor=0
    out (REG_CONTROL), a
    
    ; 3. Возвращаемся в вызывающий код
    ld a, 0x00        ; Успех
    jp syscall_return

sys_print_char:
    ; Печать символа из user mode
    ; C содержит символ
    
    ; Сохраняем символ в буфер
    push hl
    ld hl, (TEXT_PTR)
    ld (hl), c
    inc hl
    ld (TEXT_PTR), hl
    pop hl
    
    ld a, 0x00        ; Успех
    jp syscall_return

sys_exit:
    ; Выход из теста
    di
    halt

syscall_return:
    ; Восстанавливаем регистры
    exx
    ex af, af'
    ret

; ============ ОБРАБОТЧИК ПРЕРЫВАНИЙ ============
interrupt_handler:
    ; Просто возвращаемся
    ei
    reti

nmi_handler:
    ; Обработчик NMI - возврат в супервизор
    
    ; Включаем супервизорный режим
    ld a, 0b00000011
    out (REG_CONTROL), a
    
    ; Восстанавливаем супервизорный слот
    ld a, 0x03
    out (SUPER_SLOT_PORT), a
    
    ; Возврат
    retn

; ============ WRAPPER ДЛЯ SYSCALL ============
syscall_wrapper:
    ; Обёртка для вызова syscall
    ; A = код syscall
    out (REG_SYSCALL), a
    ret

; ============ ПОЛЬЗОВАТЕЛЬСКИЙ КОД ============
user_code:
    ; Этот код выполняется в слоте 0, user mode
    
    ; Печать приветствия
    ld hl, user_msg
user_print_loop:
    ld a, (hl)
    or a
    jr z, user_done
    
    ; Вызов syscall для печати
    ld c, a
    ld a, SYS_PRINT_CHAR
    call syscall_wrapper
    
    inc hl
    jr user_print_loop

user_done:
    ; Возврат через RET
    ret

user_msg: db "Hello from User Mode!", 0
user_code_end:

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
msg_title:              db "SYSCALL/MMU Test v1.0", 0x0D, 0x0A, 0
msg_test1:              db "Test 1: Syscall MMU test... ", 0
msg_test2:              db "Test 2: Switch to User Mode... ", 0
msg_test4:              db "Test 4: Verify Supervisor return... ", 0
msg_ok:                 db "OK", 0
msg_failed:             db "FAILED", 0
msg_back_from_syscall:  db "Back from syscall", 0x0D, 0x0A, 0
msg_not_user_mode:      db "ERROR: Not in User Mode!", 0
msg_return_to_super:    db "Returning to Supervisor via NMI...", 0x0D, 0x0A, 0
msg_not_super_mode:     db "ERROR: Not in Supervisor Mode!", 0
msg_complete:           db "Test complete.", 0

; ============ ДАННЫЕ ============
    ds 0x1000 - $, 0
    dw REPORT_BUF
    
    ds 0x3FFE - $, 0
    dw 0x55AA