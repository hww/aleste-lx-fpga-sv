; ============================================================================
; VIDEO MEMORY MANAGER - Управление банками памяти и VRAM
; ============================================================================
module video_mem

; =============== КОНСТАНТЫ ===============
GLOBAL_CTRL   equ 0xF0
SUPER_SLOT    equ 0xF9
USER_SLOT     equ 0xFB
BANK_0        equ 0xFC
BANK_1        equ 0xFD
BANK_2        equ 0xFE
BANK_3        equ 0xFF


; Публичные константы
PUBLIC VRAM_BASE, SCREEN_WIDTH, SCREEN_HEIGHT

VRAM_BASE equ 0x4000  

SCREEN_WIDTH  equ 80
SCREEN_HEIGHT equ 25

; Данные
PUBLIC current_vram_base
current_vram_base: dw VRAM_BASE

; =============== ПУБЛИЧНЫЕ ФУНКЦИИ ===============
PUBLIC mem_setup_vram, mem_set_bank, mem_get_bank
PUBLIC mem_map_address, mem_calc_vram_addr

; ----------------------------------------------------------------------------
; mem_setup_vram - Настроить VRAM в слотах 1 и 2
; ----------------------------------------------------------------------------
mem_setup_vram:
    ; Слот 0: RAM (0000-3FFF) = страница 0
    LD A, 0x00
    OUT (BANK_0), A
    
    ; Слот 1: VRAM низ (4000-7FFF) = страница 0xCF
    LD A, 0xCF
    OUT (BANK_1), A
    
    ; Слот 2: VRAM верх (8000-BFFF) = страница 0xD0
    LD A, 0xD0
    OUT (BANK_2), A
    
    ; Слот 3: ROM (C000-FFFF) = страница 0xCE
    LD A, 0xCE
    OUT (BANK_3), A
    
    RET

; ----------------------------------------------------------------------------
; mem_set_bank - Установить банк для слота
; Вход: A = номер слота (0-3)
;       B = номер банка (0-255)
; ----------------------------------------------------------------------------
mem_set_bank:
    PUSH AF
    LD C, BANK_0
    ADD A, C
    LD C, A
    LD A, B
    OUT (C), A
    POP AF
    RET

; ----------------------------------------------------------------------------
; mem_get_bank - Получить текущий банк слота
; Вход: A = номер слота (0-3)
; Выход: A = номер банка
; ----------------------------------------------------------------------------
mem_get_bank:
    LD C, BANK_0
    ADD A, C
    LD C, A
    IN A, (C)
    RET

; ----------------------------------------------------------------------------
; mem_calc_vram_addr - Вычислить адрес в VRAM
; Вход: B = X (0-79), C = Y (0-24)
;       D = bytes_per_pixel (1,2,4,8)
; Выход: HL = адрес в VRAM
; ----------------------------------------------------------------------------
mem_calc_vram_addr:
    ; HL = Y * SCREEN_WIDTH * bytes_per_pixel
    LD H, 0
    LD L, C
    LD A, 80
    CALL mul_hl_a    ; HL = Y * 80
    
    ; Умножить на bytes_per_pixel
    LD A, D
    DEC A
    JR Z, @done_mult  ; Если 1, пропускаем
@mult_loop:
    ADD HL, HL       ; Умножаем на 2
    DEC A
    JR NZ, @mult_loop
    
@done_mult:
    ; + X * bytes_per_pixel
    LD A, B
    LD E, A
    LD D, 0
    LD A, (bytes_per_pixel)
    DEC A
    JR Z, @add_x
@x_mult_loop:
    SLA E
    RL D
    DEC A
    JR NZ, .x_mult_loop
    
@add_x:
    ADD HL, DE
    
    ; + VRAM_BASE
    LD DE, (current_vram_base)
    ADD HL, DE
    RET