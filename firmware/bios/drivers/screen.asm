; =============== КОНСТАНТЫ (исправленные) ===============
MMIO_PAGE     equ 0xF1
GLOBAL_CTRL   equ 0xF0
SUPER_SLOT    equ 0xF9
USER_SLOT     equ 0xFB
BANK_0        equ 0xFC
BANK_1        equ 0xFD
BANK_2        equ 0xFE
BANK_3        equ 0xFF

; Выбор конфигурации
USE_STACK_3F00 equ 1      ; 1=стек 0x3F00, VRAM в слоте 2
                          ; 0=стек 0xFF00, VRAM в слоте 1

; Адреса VRAM (логические)
IF USE_STACK_3F00
    VRAM_BASE equ 0x8000  ; VRAM в слоте 2
    STACK     equ 0x3F00
ELSE
    VRAM_BASE equ 0x4000  ; VRAM в слоте 1  
    STACK     equ 0xFF00
ENDIF

; Размеры экрана
SCREEN_WIDTH  equ 80      ; 640/8 = 80 байт на строку
SCREEN_HEIGHT equ 25      ; 200/8 = 25 строк

PUBLIC _scr_clear_screen
PUBLIC _scr_put_char
EXTERN _scr_font_data
PUBLIC _scr_clear_screen
PUBLIC _scr_init_video

; =============== НАСТРОЙКА ПАМЯТИ ===============
setup_memory_map:
    ; Слот 0: RAM (0000-3FFF) = физическая страница 0
    LD A, 0x00
    OUT (BANK_0), A
    
    ; Слот 1: VRAM низ (4000-7FFF) = физическая страница 0xCF
    LD A, 0xCF
    OUT (BANK_1), A
    
    ; Слот 2: VRAM верх (8000-BFFF) = физическая страница 0xD0
    LD A, 0xD0
    OUT (BANK_2), A
    
    ; Слот 3: ROM со шрифтом (C000-FFFF) = физическая страница 0xCE
    LD A, 0xCE
    OUT (BANK_3), A
    
    RET

; =============== ИНИЦИАЛИЗАЦИЯ ВИДЕО ===============
_scr_init_video:
scr_init_video:
    ; 1. Настроить CRTC (страница 3 MMIO)
    LD A, 3
    OUT (MMIO_PAGE), A
    
    ; Стандартные регистры CRTC
    LD HL, crtc_regs
    LD B, 16
    LD C, 0x20           ; CRTC индекс
crtc_loop:
    LD A, (HL)
    OUT (C), A           ; Установить индекс
    INC C                ; C = 0x21 (данные)
    INC HL
    LD A, (HL)
    OUT (C), A           ; Записать значение
    DEC C                ; Вернуть C = 0x20
    INC HL
    DJNZ crtc_loop
    
    ; 2. Расширенные регистры для 16k2b (640x200 монохром)
    ; VIDEO_CONTROL: bpp_mode=00 (1bpp), linear_pixel=1, use_cpc_modes=0
    LD A, 0x12           ; VIDEO_CONTROL
    OUT (0x20), A
    LD A, %00010001      ; [4]=linear_pixel=1, [5]=use_cpc_modes=0
    OUT (0x21), A
    
    ; ADDR_MODE: linear_mode=1, addr_mode=100 (Linear)
    LD A, 0x14           ; ADDR_MODE
    OUT (0x20), A
    LD A, %00010001      ; [0]=linear_mode=1, [4:5]=100 (Linear)
    OUT (0x21), A
    
    ; HIGH_ADDRESS: VRAM на 0xCF0000
    LD A, 0x13           ; HIGH_ADDRESS
    OUT (0x20), A
    LD A, 0xCF
    OUT (0x21), A
    
    ; 3. Настроить палитру (страница 4)
    LD A, 4
    OUT (MMIO_PAGE), A
    
    ; Черный (0) и белый (1)
    LD A, 0
    OUT (0x00), A        ; Индекс 0
    LD A, 0
    OUT (0x01), A        ; Черный
    OUT (0x02), A
    
    LD A, 1
    OUT (0x00), A        ; Индекс 1  
    LD A, 0xFF
    OUT (0x01), A        ; Белый
    OUT (0x02), A
    
    RET

crtc_regs:
    db 0x00, 63    ; HTOTAL
    db 0x01, 40    ; HDISPLAY
    db 0x02, 46    ; HSYNCPOS
    db 0x03, 142   ; HSYNCWIDTH
    db 0x04, 38    ; VTOTAL
    db 0x05, 0     ; VADJUST
    db 0x06, 25    ; VDISPLAY
    db 0x07, 30    ; VSYNCPOS
    db 0x08, 0     ; INTERLACE
    db 0x09, 7     ; MAXSCAN
    db 0x0C, 0     ; START_ADDR_H
    db 0x0D, 0     ; START_ADDR_L
    db 0x0A, 0     ; CURSOR START
    db 0x0B, 0     ; CURSOR END
    db 0x0E, 0     ; CURSOR ADDR H
    db 0x0F, 0     ; CURSOR ADDR L

; =============== ВЫВОД СИМВОЛА (исправленный) ===============
; A = код символа, D = X (0-79), E = Y (0-24)
_scr_put_char:
scr_put_char:
    PUSH HL
    PUSH DE
    PUSH BC
    PUSH AF
    
    ; Сохранить координаты
    LD A, D
    LD (cursor_x), A
    LD A, E
    LD (cursor_y), A
    LD (char_code), A
    
    ; Вычислить адрес в VRAM: VRAM_BASE + Y*80 + X
    ; Y * 80
    LD H, 0
    LD L, E
    ADD HL, HL      ; *2
    ADD HL, HL      ; *4  
    ADD HL, HL      ; *8
    ADD HL, HL      ; *16
    PUSH HL         ; сохранить Y*16
    
    ADD HL, HL      ; *32
    ADD HL, HL      ; *64
    POP DE          ; DE = Y*16
    ADD HL, DE      ; HL = Y*80
    
    ; + X
    LD E, D
    LD D, 0
    ADD HL, DE      ; HL = Y*80 + X
    
    ; + VRAM_BASE
    LD DE, VRAM_BASE
    ADD HL, DE      ; HL = конечный адрес
    
    ; Адрес символа в шрифте: FONT_BASE + код*8
    LD A, (char_code)
    LD E, A
    LD D, 0
    SLA E
    RL D            ; *2
    SLA E
    RL D            ; *4
    SLA E
    RL D            ; *8
    
    LD BC, _scr_font_data    ; Шрифт в слоте 3
    ADD HL, BC      ; BC = адрес в шрифте
    
    ; Скопировать 8 байт
    LD B, 8
    EX DE, HL       ; DE = адрес в шрифте, HL = адрес в VRAM
    
copy_loop:
    LD A, (DE)
    LD (HL), A
    INC DE
    
    ; Следующая строка: +80 байт
    LD A, H
    ADD A, 80
    LD H, A
    
    DJNZ copy_loop
    
    POP AF
    POP BC
    POP DE
    POP HL
    RET

; =============== ОСТАЛЬНЫЕ ФУНКЦИИ ===============
_scr_clear_screen:
scr_clear_screen:
    ; Заполнить VRAM нулями
    LD HL, VRAM_BASE
    LD DE, VRAM_BASE + 1
    LD BC, 16000 - 1      ; 200*80 = 16000 байт
    LD (HL), 0
    LDIR
    RET
_scr_print_string:
scr_print_string:
    ; HL = строка, D = X, E = Y
    PUSH AF
ps_loop:
    LD A, (HL)
    AND A
    JR Z, ps_done
    
    PUSH HL
    PUSH DE
    CALL scr_put_char
    POP DE
    POP HL
    
    INC HL
    INC D                 ; Следующий X
    JR ps_loop
    
ps_done:
    POP AF
    RET

; =============== ДАННЫЕ ===============
cursor_x:   db 0
cursor_y:   db 0  
char_code:  db 0

