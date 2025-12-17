; test_01_native_mmu.asm - минимальный тест
SUPER_SLOT_PORT equ 0xD9
BANK_0_PORT equ 0xDC

    org 0x0000

start:
    di
    ld sp, 0xFFFF
    
    ; Просто проверяем слот 0, страницу 1
    ld a, 0
    out (SUPER_SLOT_PORT), a
    ld a, 1
    out (BANK_0_PORT), a
    
    ; Проверяем что можем писать
    ld hl, 0x4000
    ld (hl), 0x55
    ld a, (hl)
    cp 0x55
    
    ; Возвращаемся в слот 3 для вывода
    ld a, 3
    out (SUPER_SLOT_PORT), a
    
    ; Результат в буфер
    ld hl, 0xC01000
    jr nz, fail
    
success:
    ld (hl), 'O'
    inc hl
    ld (hl), 'K'
    jr done
    
fail:
    ld (hl), 'F'
    inc hl
    ld (hl), 'A'
    inc hl
    ld (hl), 'I'
    inc hl
    ld (hl), 'L'
    
done:
    halt
    jp done