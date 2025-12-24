; ============================================================================
; VIDEO DRIVER - Объединенная версия со всеми графическими режимами
; ============================================================================
module video_driver

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

PUBLIC _scr_init_video, _scr_clear_screen, _scr_put_char
PUBLIC _scr_put_string, _scr_set_cursor, _scr_get_cursor
PUBLIC _scr_scroll_up, _scr_set_color, _scr_get_color
PUBLIC _scr_draw_pixel, _scr_draw_line, _scr_draw_rect
PUBLIC _scr_set_video_mode, _scr_get_video_mode
EXTERN _scr_font_data

; =============== ТАБЛИЦЫ ГРАФИЧЕСКИХ РЕЖИМОВ ===============

; Структура записи режима: [регистр, значение, маска]
MODE_ENTRY_SIZE equ 3

; =================== CPC РЕЖИМЫ ======================   

; CPC Mode 2 (640x200, 2 colors)
cpc_mode2_table:
    ; CRTC базовые регистры
    db 0x00, 63, 0xFF    ; R0: HTOTAL
    db 0x01, 40, 0xFF    ; R1: HDISPLAY  
    db 0x02, 46, 0xFF    ; R2: HSYNCPOS
    db 0x03, 142, 0xFF   ; R3: HSYNCWIDTH
    db 0x04, 38, 0x7F    ; R4: VTOTAL
    db 0x05, 0, 0x1F     ; R5: VADJUST
    db 0x06, 25, 0x7F    ; R6: VDISPLAY
    db 0x07, 30, 0x7F    ; R7: VSYNCPOS
    db 0x08, 0, 0x33     ; R8: INTERLACE
    db 0x09, 7, 0x1F     ; R9: MAXSCAN
    db 0x0C, 0, 0x3F     ; R12: START_ADDR_H
    db 0x0D, 0, 0xFF     ; R13: START_ADDR_L
    ; Расширенные регистры
    db 0x12, 0b00000000, 0b00110011  ; R18: VIDEO_CONTROL (1bpp, CPC palette)
    db 0x14, 0b00000000, 0b00110111  ; R20: ADDR_MODE (CPC 16KB)
    db 0x15, 0b00000000, 0b00000011  ; R21: PIXEL_CTRL (2 bytes per 16clk)
cpc_mode2_size equ ($ - cpc_mode2_table) / MODE_ENTRY_SIZE

; CPC Mode 1 (320x200, 4 colors)
cpc_mode1_table:
    ; CRTC базовые регистры (такие же как mode2)
    db 0x00, 63, 0xFF,   0x01, 40, 0xFF,   0x02, 46, 0xFF
    db 0x03, 142, 0xFF,  0x04, 38, 0x7F,   0x05, 0, 0x1F
    db 0x06, 25, 0x7F,   0x07, 30, 0x7F,   0x08, 0, 0x33
    db 0x09, 7, 0x1F,    0x0C, 0, 0x3F,    0x0D, 0, 0xFF
    ; Расширенные регистры
    db 0x12, 0b00000001, 0b00110011  ; R18: 2bpp
    db 0x14, 0b00000000, 0b00110111  ; R20: CPC 16KB
    db 0x15, 0b00000000, 0b00000011  ; R21: 2 bytes
cpc_mode1_size equ ($ - cpc_mode1_table) / MODE_ENTRY_SIZE

; CPC Mode 0 (160x200, 16 colors)
cpc_mode0_table:
    ; CRTC базовые регистры
    db 0x00, 63, 0xFF,   0x01, 40, 0xFF,   0x02, 46, 0xFF
    db 0x03, 142, 0xFF,  0x04, 38, 0x7F,   0x05, 0, 0x1F
    db 0x06, 25, 0x7F,   0x07, 30, 0x7F,   0x08, 0, 0x33
    db 0x09, 7, 0x1F,    0x0C, 0, 0x3F,    0x0D, 0, 0xFF
    ; Расширенные регистры
    db 0x12, 0b00000010, 0b00110011  ; R18: 4bpp
    db 0x14, 0b00000000, 0b00110111  ; R20: CPC 16KB
    db 0x15, 0b00000000, 0b00000011  ; R21: 2 bytes
cpc_mode0_size equ ($ - cpc_mode0_table) / MODE_ENTRY_SIZE

; =================== 16KB РЕЖИМЫ ======================

; 16k1b: LX 320x200 4 colors
mode_16k1b_table:
    ; CRTC базовые регистры
    db 0x00, 63, 0xFF,   0x01, 40, 0xFF,   0x02, 46, 0xFF
    db 0x03, 142, 0xFF,  0x04, 38, 0x7F,   0x05, 0, 0x1F
    db 0x06, 25, 0x7F,   0x07, 30, 0x7F,   0x08, 0, 0x33
    db 0x09, 7, 0x1F,    0x0C, 0, 0x3F,    0x0D, 0, 0xFF
    ; Расширенные регистры
    db 0x12, 0b00010000, 0b00110011  ; R18: 1bpp, Linear RGB
    db 0x14, 0b00000001, 0b00110111  ; R20: EX 32KB mode (для 16KB)
    db 0x15, 0b00000000, 0b00000011  ; R21: 2 bytes
mode_16k1b_size equ ($ - mode_16k1b_table) / MODE_ENTRY_SIZE

; 16k2b: LX 640x200 2 colors (текущий режим)
mode_16k2b_table:
    ; CRTC базовые регистры
    db 0x00, 63, 0xFF,   0x01, 40, 0xFF,   0x02, 46, 0xFF
    db 0x03, 142, 0xFF,  0x04, 38, 0x7F,   0x05, 0, 0x1F
    db 0x06, 25, 0x7F,   0x07, 30, 0x7F,   0x08, 0, 0x33
    db 0x09, 7, 0x1F,    0x0C, 0, 0x3F,    0x0D, 0, 0xFF
    ; Расширенные регистры
    db 0x12, 0b00010001, 0b00110011  ; R18: 2bpp, Linear RGB
    db 0x14, 0b00000001, 0b00110111  ; R20: EX 32KB
    db 0x15, 0b00000000, 0b00000011  ; R21: 2 bytes
mode_16k2b_size equ ($ - mode_16k2b_table) / MODE_ENTRY_SIZE

; 16k4b: LX 160x200 16 colors
mode_16k4b_table:
    ; CRTC базовые регистры
    db 0x00, 63, 0xFF,   0x01, 40, 0xFF,   0x02, 46, 0xFF
    db 0x03, 142, 0xFF,  0x04, 38, 0x7F,   0x05, 0, 0x1F
    db 0x06, 25, 0x7F,   0x07, 30, 0x7F,   0x08, 0, 0x33
    db 0x09, 7, 0x1F,    0x0C, 0, 0x3F,    0x0D, 0, 0xFF
    ; Расширенные регистры
    db 0x12, 0b00010010, 0b00110011  ; R18: 4bpp, Linear RGB
    db 0x14, 0b00000001, 0b00110111  ; R20: EX 32KB
    db 0x15, 0b00000000, 0b00000011  ; R21: 2 bytes
mode_16k4b_size equ ($ - mode_16k4b_table) / MODE_ENTRY_SIZE

; =================== 32KB РЕЖИМЫ ======================

; 32k2b: LX 640x200 4 colors
mode_32k2b_table:
    ; CRTC базовые регистры
    db 0x00, 63, 0xFF,   0x01, 40, 0xFF,   0x02, 46, 0xFF
    db 0x03, 142, 0xFF,  0x04, 38, 0x7F,   0x05, 0, 0x1F
    db 0x06, 25, 0x7F,   0x07, 30, 0x7F,   0x08, 0, 0x33
    db 0x09, 7, 0x1F,    0x0C, 0, 0x3F,    0x0D, 0, 0xFF
    ; Расширенные регистры
    db 0x12, 0b00010001, 0b00110011  ; R18: 2bpp, Linear RGB
    db 0x14, 0b00000011, 0b00000111  ; R20: LX 32KB
    db 0x15, 0b00000001, 0b00000011  ; R21: 4 bytes
mode_32k2b_size equ ($ - mode_32k2b_table) / MODE_ENTRY_SIZE

; 32k4b: LX 320x200 16 colors
mode_32k4b_table:
    ; CRTC базовые регистры
    db 0x00, 63, 0xFF,   0x01, 40, 0xFF,   0x02, 46, 0xFF
    db 0x03, 142, 0xFF,  0x04, 38, 0x7F,   0x05, 0, 0x1F
    db 0x06, 25, 0x7F,   0x07, 30, 0x7F,   0x08, 0, 0x33
    db 0x09, 7, 0x1F,    0x0C, 0, 0x3F,    0x0D, 0, 0xFF
    ; Расширенные регистры
    db 0x12, 0b00010010, 0b00110011  ; R18: 4bpp, Linear RGB
    db 0x14, 0b00000011, 0b00110111  ; R20: LX 32KB
    db 0x15, 0b00000001, 0b00000011  ; R21: 4 bytes
mode_32k4b_size equ ($ - mode_32k4b_table) / MODE_ENTRY_SIZE

; 32k8b: LX 160x200 256 colors
mode_32k8b_table:
    ; CRTC базовые регистры
    db 0x00, 63, 0xFF,   0x01, 40, 0xFF,   0x02, 46, 0xFF
    db 0x03, 142, 0xFF,  0x04, 38, 0x7F,   0x05, 0, 0x1F
    db 0x06, 25, 0x7F,   0x07, 30, 0x7F,   0x08, 0, 0x33
    db 0x09, 7, 0x1F,    0x0C, 0, 0x3F,    0x0D, 0, 0xFF
    ; Расширенные регистры
    db 0x12, 0b00010011, 0b00110011  ; R18: 8bpp, Linear RGB
    db 0x14, 0b00000011, 0b00110111  ; R20: LX 32KB
    db 0x15, 0b00000001, 0b00000011  ; R21: 4 bytes
mode_32k8b_size equ ($ - mode_32k8b_table) / MODE_ENTRY_SIZE

; =================== 64KB РЕЖИМЫ ======================

; 64k4b: LX 640x200 16 colors
mode_64k4b_table:
    ; CRTC базовые регистры
    db 0x00, 63, 0xFF,   0x01, 40, 0xFF,   0x02, 46, 0xFF
    db 0x03, 142, 0xFF,  0x04, 38, 0x7F,   0x05, 0, 0x1F
    db 0x06, 25, 0x7F,   0x07, 30, 0x7F,   0x08, 0, 0x33
    db 0x09, 7, 0x1F,    0x0C, 0, 0x3F,    0x0D, 0, 0xFF
    ; Расширенные регистры
    db 0x12, 0b00010010, 0b00110011  ; R18: 4bpp, Linear RGB
    db 0x14, 0b00000111, 0b00000111  ; R20: LX 64KB
    db 0x15, 0b00000010, 0b00000011  ; R21: 8 bytes
mode_64k4b_size equ ($ - mode_64k4b_table) / MODE_ENTRY_SIZE

; 64k8b: LX 320x200 256 colors
mode_64k8b_table:
    ; CRTC базовые регистры
    db 0x00, 63, 0xFF,   0x01, 40, 0xFF,   0x02, 46, 0xFF
    db 0x03, 142, 0xFF,  0x04, 38, 0x7F,   0x05, 0, 0x1F
    db 0x06, 25, 0x7F,   0x07, 30, 0x7F,   0x08, 0, 0x33
    db 0x09, 7, 0x1F,    0x0C, 0, 0x3F,    0x0D, 0, 0xFF
    ; Расширенные регистры
    db 0x12, 0b00010011, 0b00110011  ; R18: 8bpp, Linear RGB
    db 0x14, 0b00000111, 0b00110111  ; R20: LX 64KB
    db 0x15, 0b00000010, 0b00000011  ; R21: 8 bytes
mode_64k8b_size equ ($ - mode_64k8b_table) / MODE_ENTRY_SIZE

; Таблица указателей на режимы
video_mode_table:
    dw cpc_mode2_table, cpc_mode2_size  ; Mode 0: CPC Mode 2
    dw cpc_mode1_table, cpc_mode1_size  ; Mode 1: CPC Mode 1  
    dw cpc_mode0_table, cpc_mode0_size  ; Mode 2: CPC Mode 0
    dw mode_16k1b_table, mode_16k1b_size ; Mode 3: 16k1b
    dw mode_16k2b_table, mode_16k2b_size ; Mode 4: 16k2b (текущий)
    dw mode_16k4b_table, mode_16k4b_size ; Mode 5: 16k4b
    dw mode_32k2b_table, mode_32k2b_size ; Mode 6: 32k2b
    dw mode_32k4b_table, mode_32k4b_size ; Mode 7: 32k4b
    dw mode_32k8b_table, mode_32k8b_size ; Mode 8: 32k8b
    dw mode_64k4b_table, mode_64k4b_size ; Mode 9: 64k4b
    dw mode_64k8b_table, mode_64k8b_size ; Mode 10: 64k8b
VIDEO_MODES_COUNT equ ($ - video_mode_table) / 4

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

; =============== ОСНОВНЫЕ ФУНКЦИИ ВИДЕО ===============

; ----------------------------------------------------------------------------
; scr_init_video - Инициализация видео в режиме 16k2b (по умолчанию)
; ----------------------------------------------------------------------------
_scr_init_video:
scr_init_video:
    ; 1. Настроить карту памяти для VRAM
    CALL setup_memory_map
    
    ; 2. Установить режим 16k2b (режим 4)
    LD A, 4
    CALL scr_set_video_mode
    
    ; 3. Настроить палитру (страница 4 MMIO)
    LD A, 4
    OUT (MMIO_PAGE), A
    
    ; Черный (0) и белый (1) цвета
    LD A, 0
    OUT (0x00), A        ; Индекс 0
    XOR A
    OUT (0x01), A        ; Черный
    OUT (0x02), A
    
    LD A, 1
    OUT (0x00), A        ; Индекс 1  
    LD A, 0xFF
    OUT (0x01), A        ; Белый
    OUT (0x02), A
    
    ; 4. Очистить экран
    CALL scr_clear_screen
    
    ; 5. Установить курсор в начало
    XOR A
    LD (cursor_x), A
    LD (cursor_y), A
    
    RET

; ----------------------------------------------------------------------------
; scr_set_video_mode - Установить графический режим
; Вход: A = номер режима (0-10)
; Выход: A = код ошибки (0=успех)
; ----------------------------------------------------------------------------
_scr_set_video_mode:
scr_set_video_mode:
    PUSH HL
    PUSH DE
    PUSH BC
    
    ; Проверить допустимость номера режима
    CP VIDEO_MODES_COUNT
    JR C, mode_valid_
    
    ; Неверный режим
    LD A, 0xFF
    JR mode_done_
    
mode_valid_:
    ; Сохранить номер режима
    LD (current_video_mode), A
    
    ; Вычислить указатель в таблице: A * 4
    LD L, A
    LD H, 0
    ADD HL, HL
    ADD HL, HL
    LD DE, video_mode_table
    ADD HL, DE
    
    ; HL указывает на [таблица, размер]
    LD E, (HL)
    INC HL
    LD D, (HL)          ; DE = адрес таблицы настроек
    INC HL
    LD C, (HL)
    INC HL  
    LD B, (HL)          ; BC = размер таблицы
    
    ; Установить страницу MMIO для CRTC (страница 3)
    LD A, 3
    OUT (MMIO_PAGE), A
    
    ; Применить настройки из таблицы
    EX DE, HL           ; HL = таблица настроек
    LD D, C             ; D = счетчик настроек
    
apply_mode_loop_:
    LD C, 0x20          ; CRTC индексный регистр
    
    ; Читаем регистр
    LD A, (HL)
    OUT (C), A          ; Установить индекс
    INC HL
    
    ; Применить маску и значение
    INC C               ; C = 0x21 (регистр данных)
    LD A, (HL)          ; A = новое значение
    INC HL
    LD E, (HL)          ; E = маска
    INC HL
    
    ; Прочитать текущее значение
    PUSH HL
    DEC C               ; Вернуться к индексному регистру
    LD A, (HL)          ; Еще раз читаем индекс (уже в HL)
    OUT (C), A
    INC C               ; Перейти к данным
    IN A, (C)           ; Прочитать текущее значение
    
    ; Применить маску: A = (A & ~маска) | (значение & маска)
    LD B, A             ; Сохранить текущее
    LD A, E             ; Маска
    CPL                 ; Инвертировать маску
    AND B               ; A = текущее & ~маска
    LD B, A             ; Сохранить
    LD A, (HL)          ; Значение (HL указывает на значение после инкремента)
    AND E               ; A = значение & маска
    OR B                ; A = (текущее & ~маска) | (значение & маска)
    
    ; Записать новое значение
    OUT (C), A
    POP HL
    
    ; Следующая настройка
    DEC D
    JR NZ, apply_mode_loop_
    
    ; Успех
    XOR A
    
mode_done_:
    POP BC
    POP DE
    POP HL
    RET

; ----------------------------------------------------------------------------
; scr_get_video_mode - Получить текущий графический режим
; Выход: A = номер текущего режима
; ----------------------------------------------------------------------------
_scr_get_video_mode:
scr_get_video_mode:
    LD A, (current_video_mode)
    RET

; ----------------------------------------------------------------------------
; scr_put_char - Вывод символа на экран
; Вход: A = код символа, D = X (0-79), E = Y (0-24)
; ----------------------------------------------------------------------------
_scr_put_char:
scr_put_char:
    PUSH HL
    PUSH DE
    PUSH BC
    PUSH AF
    
    ; Сохранить символ
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
    ADD HL, DE      ; HL = адрес в VRAM
    
    PUSH HL         ; Сохранить адрес в VRAM
    
    ; Вычислить адрес в шрифте: font_data + код*8
    LD A, (char_code)
    LD L, A
    LD H, 0
    ADD HL, HL      ; *2
    ADD HL, HL      ; *4
    ADD HL, HL      ; *8
    
    LD BC, _scr_font_data
    ADD HL, BC      ; HL = адрес в шрифте
    
    POP DE          ; DE = адрес в VRAM
    
    ; Скопировать 8 байт
    LD B, 8
copy_loop:
    LD A, (HL)      ; Байт из шрифта
    LD (DE), A      ; В VRAM
    INC HL
    
    ; Следующая строка в VRAM: +80 байт
    PUSH HL
    LD HL, 80
    ADD HL, DE
    EX DE, HL       ; DE = новая строка
    POP HL
    
    DJNZ copy_loop
    
    POP AF
    POP BC
    POP DE
    POP HL
    RET

; ----------------------------------------------------------------------------
; scr_clear_screen - Очистка экрана
; ----------------------------------------------------------------------------
_scr_clear_screen:
scr_clear_screen:
    ; Заполнить VRAM нулями
    LD HL, VRAM_BASE
    LD DE, VRAM_BASE + 1
    LD BC, 16000 - 1      ; 200*80 = 16000 байт
    LD (HL), 0
    LDIR
    RET

; =============== ДОПОЛНИТЕЛЬНЫЕ ФУНКЦИИ (заглушки) ===============

; ----------------------------------------------------------------------------
; scr_put_string - Вывод строки на экран (реализовано)
; Вход: HL = указатель на строку (ASCIIZ)
; Выход: Нет
; ----------------------------------------------------------------------------
_scr_put_string:
scr_put_string:
    PUSH AF
    PUSH HL
    PUSH DE
    
    ; Получить текущую позицию курсора
    LD A, (cursor_x)
    LD D, A
    LD A, (cursor_y)
    LD E, A
    
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
    LD A, D
    CP SCREEN_WIDTH
    JR C, ps_loop
    
    ; Перенос строки
    LD D, 0
    INC E
    LD A, E
    CP SCREEN_HEIGHT
    JR C, ps_loop
    
    ; Прокрутка если нужно
    CALL scr_scroll_up
    DEC E
    
    JR ps_loop
    
ps_done:
    ; Сохранить новую позицию курсора
    LD A, D
    LD (cursor_x), A
    LD A, E
    LD (cursor_y), A
    
    POP DE
    POP HL
    POP AF
    RET

; ----------------------------------------------------------------------------
; scr_set_cursor - Установка позиции курсора (заглушка)
; Вход: B = X координата (0-79)
;       C = Y координата (0-24)
; Выход: Нет
; ----------------------------------------------------------------------------
_scr_set_cursor:
scr_set_cursor:
    LD A, B
    LD (cursor_x), A
    LD A, C
    LD (cursor_y), A
    RET

; ----------------------------------------------------------------------------
; scr_get_cursor - Получение позиции курсора (работает)
; Выход: B = X координата
;        C = Y координата
; ----------------------------------------------------------------------------
_scr_get_cursor:
scr_get_cursor:
    LD A, (cursor_x)
    LD B, A
    LD A, (cursor_y)
    LD C, A
    RET

; ----------------------------------------------------------------------------
; scr_scroll_up - Прокрутка экрана вверх на одну строку (заглушка)
; Вход: Нет
; Выход: Нет
; ----------------------------------------------------------------------------
_scr_scroll_up:
scr_scroll_up:
    PUSH HL
    PUSH DE
    PUSH BC
    
    ; Копируем строки 1-24 в 0-23
    LD HL, VRAM_BASE + 80  ; Начало второй строки
    LD DE, VRAM_BASE       ; Начало первой строки
    LD BC, 24 * 80         ; 24 строки по 80 байт
    
scroll_copy_:
    LD A, (HL)
    LD (DE), A
    INC HL
    INC DE
    DEC BC
    LD A, B
    OR C
    JR NZ, scroll_copy_
    
    ; Очищаем последнюю строку
    LD HL, VRAM_BASE + 24 * 80
    LD DE, VRAM_BASE + 24 * 80 + 1
    LD BC, 79
    LD (HL), 0
    LDIR
    
    POP BC
    POP DE
    POP HL
    RET

; ----------------------------------------------------------------------------
; scr_set_color - Установка цвета текста и фона (заглушка)
; Вход: B = цвет текста (0-15)
;       C = цвет фона (0-15)
; Выход: Нет
; ----------------------------------------------------------------------------
_scr_set_color:
scr_set_color:
    LD A, B
    LD (text_color), A
    LD A, C
    LD (bg_color), A
    RET

; ----------------------------------------------------------------------------
; scr_get_color - Получение текущих цветов (заглушка)
; Выход: B = цвет текста
;        C = цвет фона
; ----------------------------------------------------------------------------
_scr_get_color:
scr_get_color:
    LD A, (text_color)
    LD B, A
    LD A, (bg_color)
    LD C, A
    RET

; ----------------------------------------------------------------------------
; scr_draw_pixel - Рисование пикселя (заглушка)
; Вход: B = X координата
;       C = Y координата
;       D = цвет (0-255)
; Выход: Нет
; ----------------------------------------------------------------------------
_scr_draw_pixel:
scr_draw_pixel:
    ; TODO: Реализовать рисование пикселя
    RET

; ----------------------------------------------------------------------------
; scr_draw_line - Рисование линии (заглушка)
; Вход: B = X1
;       C = Y1
;       D = X2
;       E = Y2
;       H = цвет
; Выход: Нет
; ----------------------------------------------------------------------------
_scr_draw_line:
scr_draw_line:
    ; TODO: Реализовать алгоритм Брезенхэма
    RET

; ----------------------------------------------------------------------------
; scr_draw_rect - Рисование прямоугольника (заглушка)
; Вход: B = X
;       C = Y
;       D = ширина
;       E = высота
;       H = цвет
;       L = заливка (0=рамка, 1=заполненный)
; Выход: Нет
; ----------------------------------------------------------------------------
_scr_draw_rect:
scr_draw_rect:
    ; TODO: Реализовать рисование прямоугольника
    RET

; =============== ДАННЫЕ ===============
cursor_x:       db 0
cursor_y:       db 0  
char_code:      db 0
text_color:     db 7    ; Белый по умолчанию
bg_color:       db 0    ; Черный по умолчанию
current_video_mode: db 4 ; 16k2b по умолчанию