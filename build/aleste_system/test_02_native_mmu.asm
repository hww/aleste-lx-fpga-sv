; test_mmu_regs_minimal.asm
; Тест только регистров MMU (порты D7, D9, DB-DF)
; Проверяем: можем ли читать/писать регистры
; Предполагаем: после сброса мы в Supervisor Native Mode

REG_CONTROL     equ 0xF0
SUPER_SLOT_PORT equ 0xFA
USER_SLOT_PORT  equ 0xFB
BANK_0_PORT     equ 0xFC
BANK_1_PORT     equ 0xFD
BANK_2_PORT     equ 0xFE
BANK_3_PORT     equ 0xFF

RESULT_BUF      equ 0x1000  ; Результаты здесь

    org 0x0000  ; Slot 3, Page 0

start:
    di
    ld sp, 0x3F00
    
    ; ========= ТЕСТ 1: GLOBAL_CTRL (D7) =========
    ; Читаем текущее значение
    in a, (REG_CONTROL)
    ld hl, RESULT_BUF
    ld (hl), a          ; Сохраняем прочитанное
    inc hl
    
    ; Пробуем записать
    ld a, 0x03          ; native=1, supervisor=1
    out (REG_CONTROL), a
    
    ; Читаем обратно
    in a, (REG_CONTROL)
    ld (hl), a          ; Сохраняем
    inc hl
    
    ; ========= ТЕСТ 2: SUPER_SLOT (D9) =========
    ; Записываем разные значения
    ld b, 4             ; 4 значения (0,1,2,3)
    ld c, SUPER_SLOT_PORT
    
test_super_slot:
    ld a, b
    dec a               ; A = 3,2,1,0
    add a,a
    add a,a
    or a,0x03           ; Сохраняем супер слот с адреса 0
    out (c), a          ; Записываем
    
    in a, (c)           ; Читаем обратно
    ld (hl), a          ; Сохраняем
    inc hl
    
    djnz test_super_slot
    
   ; ========= ТЕСТ 3: USER_SLOT (D9) =========
    ; Записываем разные значения
    ld b, 4             ; 4 значения (0,1,2,3)
    ld c, USER_SLOT_PORT
    
test_user_slot:
    ld a, b
    dec a               ; A = 3,2,1,0
    out (c), a          ; Записываем
    
    in a, (c)           ; Читаем обратно
    ld (hl), a          ; Сохраняем
    inc hl
    
    djnz test_user_slot

    ; ========= ТЕСТ 4: BANK регистры (DC-DF) =========
    ; Пишем и читаем обратно
    ld b, 4             ; 4 регистра
    ld c, BANK_1_PORT
    
test_bank_regs:
    ld a, b
    dec a               ; A = 3,2,1,0

    out (c), a          ; Записываем
    
    in a, (c)           ; Читаем обратно
    ld (hl), a          ; Сохраняем
    inc hl
    
    inc c               ; Следующий порт
    djnz test_bank_regs
    
    ; ========= ФИНАЛ =========
    ; Включаем визуальный признак успеха
    ld hl, RESULT_BUF + 0x10
    ld (hl), 0xAA       ; Признак выполнения
    inc hl
    ld (hl), 0x55
    
    ; Бесконечный цикл
    di
    halt
    jr $

    ; Заполняем до 16K (опционально)
    ds 0x4000 - $, 0xFF