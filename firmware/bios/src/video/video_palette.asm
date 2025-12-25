; ============================================================================
; ADVANCED PALETTE CONTROLLER
; Поддержка CPC legacy, 12-bit native, MSX, YJK modes
; ============================================================================
module video_palette

; ---- КОНСТАНТЫ ----

PALETTE_PAGE     equ 2        ; Страница MMIO для палитры

; Регистры палитры (страница 2)
PAL_INDEX        equ 0x00
PAL_DATA_LOW     equ 0x01
PAL_DATA_HIGH    equ 0x02
PAL_BORDER_LOW   equ 0x03
PAL_BORDER_HIGH  equ 0x04
PAL_CONTROL      equ 0x05
PAL_MODIFIER     equ 0x06

; CPC Legacy порт
CPC_PALETTE_PORT equ 0x7F00   ; B=0x7F, C=0x00

; Режимы работы палитры
PAL_MODE_12BIT   equ 0x00     ; 12-bit native RGB
PAL_MODE_CPC     equ 0x01     ; CPC legacy conversion
PAL_MODE_MSX     equ 0x02     ; MSX compatible
PAL_MODE_YJK     equ 0x03     ; YJK advanced

SECTION VIDEO_PALETTE_DATA

; Текущий режим палитры
palette_mode:      db PAL_MODE_CPC
palette_autoinc:   db 0
palette_index:     db 0

; Текущие цвета (12-bit формат)
current_fg_color:  dw 0x0FFF  ; Белый
current_bg_color:  dw 0x0000  ; Чёрный
current_border:    dw 0x0000  ; Чёрный

; LUT для CPC цветов (27 цветов)
cpc_color_lut:
    ; RGB332 to RGB444 conversion
    dw 0x0000  ; 0: чёрный
    dw 0x000F  ; 1: синий
    dw 0x00F0  ; 2: ярко-синий
    dw 0x00FF  ; 3: пурпурный
    dw 0x0F00  ; 4: зелёный
    dw 0x0F0F  ; 5: циан
    dw 0x0FF0  ; 6: ярко-зелёный
    dw 0x0FFF  ; 7: ярко-циан
    dw 0x0008  ; 8: красный
    dw 0x000F  ; 9: фиолетовый
    dw 0x008F  ; 10: пурпурный
    dw 0x00FF  ; 11: ярко-пурпурный
    dw 0x0800  ; 12: жёлтый
    dw 0x080F  ; 13: белый
    dw 0x088F  ; 14: пастельно-синий
    dw 0x08FF  ; 15: ярко-белый
    dw 0x8000  ; 16: тёмно-красный
    dw 0x800F  ; 17: тёмно-фиолетовый
    dw 0x8080  ; 18: тёмно-зелёный
    dw 0x808F  ; 19: тёмно-циан
    dw 0x8800  ; 20: оранжевый
    dw 0x880F  ; 21: розовый
    dw 0x8880  ; 22: пастельно-зелёный
    dw 0x888F  ; 23: пастельно-циан
    dw 0xF000  ; 24: ярко-красный
    dw 0xF00F  ; 25: ярко-фиолетовый
    dw 0xF080  ; 26: ярко-жёлтый
    dw 0xF08F  ; 27: ярко-розовый

SECTION VIDEO_PALETTE_CODE

; ----------------------------------------------------------------------------
; palette_init - Инициализация палитры
; ----------------------------------------------------------------------------
PUBLIC palette_init
palette_init:
    ; По умолчанию CPC legacy режим
    ld a, PAL_MODE_CPC
    ld (palette_mode), a
    ret

; ----------------------------------------------------------------------------
; palette_set_mode - Установить режим палитры
; Вход: A = режим (0-3)
; ----------------------------------------------------------------------------
PUBLIC palette_set_mode
palette_set_mode:
    and 0x03
    ld (palette_mode), a
    
    ; Настраиваем аппаратуру
    call palette_update_hardware
    ret

; ----------------------------------------------------------------------------
; palette_update_hardware - Обновить аппаратные настройки
; ----------------------------------------------------------------------------
palette_update_hardware:
    ld a, PALETTE_PAGE
    out (MMIO_PAGE), a
    
    ; Control register
    ld a, (palette_mode)
    bit 0, a
    jr z, @no_autoinc
    set 5, a  ; auto-increment
@no_autoinc:
    out (PAL_CONTROL), a
    
    ; Border color
    ld hl, (current_border)
    ld a, l
    out (PAL_BORDER_LOW), a
    ld a, h
    out (PAL_BORDER_HIGH), a
    
    ret

; ----------------------------------------------------------------------------
; palette_set_color - Установить цвет в палитре
; Вход: A = индекс (0-255)
;       HL = цвет (12-bit: RRRRGGGGBBBB)
; ----------------------------------------------------------------------------
PUBLIC palette_set_color
palette_set_color:
    push af
    push bc
    push hl
    
    ld c, a  ; сохраняем индекс
    
    ; Выбираем способ установки в зависимости от режима
    ld a, (palette_mode)
    cp PAL_MODE_CPC
    jp z, palette_set_color_cpc
    
    ; Native или MSX/YJK режим
    call palette_set_color_native
    
    pop hl
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; palette_set_color_cpc - Установить цвет в CPC режиме
; ----------------------------------------------------------------------------
palette_set_color_cpc:
    ; C = индекс (0-15), HL = цвет (12-bit)
    
    ; Конвертируем 12-bit в CPC цвет (0-26)
    push hl
    call palette_convert_12bit_to_cpc
    pop hl
    
    ; Устанавливаем через CPC порт
    push bc
    ld b, 0x7F
    ld c, 0x00
    
    ; Установить индекс
    ld a, c  ; индекс из входа
    and 0x0F
    out (c), a
    
    ; Установить значение цвета
    ld a, l  ; CPC цвет (0-26)
    set 6, a ; D7-D6 = 01 (палитра)
    out (c), a
    
    pop bc
    ret

; ----------------------------------------------------------------------------
; palette_set_color_native - Установить цвет в native режиме
; ----------------------------------------------------------------------------
palette_set_color_native:
    ; C = индекс, HL = цвет
    
    ; Активируем страницу палитры
    ld a, PALETTE_PAGE
    out (MMIO_PAGE), a
    
    ; Устанавливаем индекс
    ld a, c
    out (PAL_INDEX), a
    
    ; Устанавливаем цвет
    ld a, l  ; low byte
    out (PAL_DATA_LOW), a
    ld a, h  ; high byte
    out (PAL_DATA_HIGH), a
    
    ; Auto-increment если включен
    ld a, (palette_autoinc)
    or a
    ret z
    
    inc c
    ld a, c
    out (PAL_INDEX), a
    ret

; ----------------------------------------------------------------------------
; palette_set_border - Установить цвет бордюра
; Вход: HL = цвет (12-bit)
; ----------------------------------------------------------------------------
PUBLIC palette_set_border
palette_set_border:
    push af
    push hl
    
    ld (current_border), hl
    
    ld a, (palette_mode)
    cp PAL_MODE_CPC
    jr z, @cpc_border
    
    ; Native border
    ld a, PALETTE_PAGE
    out (MMIO_PAGE), a
    
    ld a, l
    out (PAL_BORDER_LOW), a
    ld a, h
    out (PAL_BORDER_HIGH), a
    
    pop hl
    pop af
    ret

@cpc_border:
    ; CPC border через порт
    push bc
    push hl
    
    ; Конвертируем в CPC цвет
    call palette_convert_12bit_to_cpc
    ld a, l
    
    ; Устанавливаем бордюр
    ld bc, CPC_PALETTE_PORT
    set 7, a  ; D7-D6 = 10 (бордюр)
    out (c), a
    
    pop hl
    pop bc
    pop hl
    pop af
    ret

; ----------------------------------------------------------------------------
; palette_set_colors - Установить цвета текста
; Вход: A = цвет текста, B = цвет фона
; ----------------------------------------------------------------------------
PUBLIC palette_set_colors
palette_set_colors:
    push hl
    
    ; Преобразуем 8-bit цвета в 12-bit
    push af
    ld a, b
    call palette_convert_8bit_to_12bit
    ld (current_bg_color), hl
    pop af
    
    call palette_convert_8bit_to_12bit
    ld (current_fg_color), hl
    
    pop hl
    ret

; ----------------------------------------------------------------------------
; palette_convert_8bit_to_12bit - Конвертация 8-bit в 12-bit RGB
; ----------------------------------------------------------------------------
palette_convert_8bit_to_12bit:
    ; A = 8-bit цвет (RRRGGGBB)
    ; Возврат HL = 12-bit (RRRRGGGGBBBB)
    
    ; Красный: RRR -> RRRR (масштабирование 3→4 бит)
    ld b, a
    and 0xE0  ; RRR00000
    rrca
    rrca
    rrca
    rrca      ; 0000RRR0
    ld l, a
    srl a     ; расширяем до 4 бит
    or l
    and 0x0F
    ld h, a   ; H = RRRR
    
    ; Зелёный: GGG -> GGGG
    ld a, b
    and 0x1C  ; 000GGG00
    rrca
    rrca      ; 00000GGG
    ld l, a
    srl a
    or l
    and 0x0F
    rlca
    rlca
    rlca
    rlca      ; GGGG0000
    or h
    ld h, a   ; H = RRRRGGGG
    
    ; Синий: BB -> BBBB
    ld a, b
    and 0x03  ; 000000BB
    ld l, a
    sla a
    sla a     ; 0000BB00
    or l
    sla a
    sla a     ; 00BBBB00
    or l      ; BBBB
    ld l, a   ; L = BBBB
    
    ret

; ----------------------------------------------------------------------------
; palette_convert_12bit_to_cpc - Конвертация 12-bit в CPC цвет
; ----------------------------------------------------------------------------
palette_convert_12bit_to_cpc:
    ; HL = 12-bit цвет
    ; Возврат L = CPC цвет (0-26)
    
    ; Упрощённая конвертация
    ; В реальности нужно искать ближайший цвет в LUT
    
    push hl
    ld hl, cpc_color_lut
    ld de, 0
    
    ; Поиск ближайшего цвета (упрощённо)
    ld bc, 27  ; количество CPC цветов
    
@search_loop:
    push hl
    ld a, (hl)
    inc hl
    ld h, (hl)
    ld l, a
    
    ; Сравниваем с целевым цветом
    ; ... сложная логика сравнения ...
    
    pop hl
    inc hl
    inc hl
    inc de
    dec bc
    ld a, b
    or c
    jr nz, @search_loop
    
    ; Возвращаем индекс (упрощённо)
    ld l, e
    pop hl
    ret