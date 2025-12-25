; nvs_drv.asm
; Драйвер для работы с NVS памятью
; TODO: Реализовать работу с реальной flash/eeprom

    .module NVS_DRV
    .area _CODE

; Константы
NVS_START:      .equ 0xF000  ; Начальный адрес NVS в памяти
NVS_SIZE:       .equ 0x0800  ; 2KB NVS памяти
NVS_END:        .equ NVS_START + NVS_SIZE

; --- Инициализация драйвера ---
__nvs_init:
    ; TODO: Инициализировать аппаратную часть
    ; - Проверить наличие EEPROM/flash
    ; - Проверить целостность данных
    ; - Инициализировать внутренние структуры
    ret

; --- Чтение байта ---
; Вход: HL - адрес в NVS (0-2047)
; Выход: A - прочитанный байт
__nvs_read_byte:
    ; TODO: Реализовать чтение из физической памяти
    ; Сейчас эмуляция в RAM
    ld de, #NVS_START
    add hl, de
    ld a, (hl)
    ret

; --- Запись байта ---
; Вход: HL - адрес в NVS (0-2047)
;        A - данные для записи
__nvs_write_byte:
    ; TODO: Реализовать запись в физическую память
    ; Сейчас эмуляция в RAM
    push hl
    ld de, #NVS_START
    add hl, de
    ld (hl), a
    pop hl
    ret

; --- Чтение блока ---
; Вход: HL - буфер назначения
;       DE - адрес в NVS
;       BC - размер блока
__nvs_read_block:
    ; TODO: Оптимизировать для быстрого копирования
    push de
    push hl
    push bc
    
    ; Преобразуем адрес NVS в абсолютный
    ld hl, #NVS_START
    add hl, de
    ex de, hl  ; DE = абсолютный адрес
    
    pop bc     ; BC = размер
    pop hl     ; HL = буфер назначения
    
    ldir       ; Копируем блок
    
    pop de
    ret

; --- Запись блока ---
; Вход: HL - адрес в NVS
;       DE - буфер источника
;       BC - размер блока
__nvs_write_block:
    ; TODO: Добавить проверку на запись (wear leveling, если нужно)
    push hl
    push de
    push bc
    
    ; Преобразуем адрес NVS в абсолютный
    ld a, h
    ld h, #NVS_START >> 8
    add a, h
    ld h, a
    
    ex de, hl  ; HL = источник, DE = назначение
    
    ldir       ; Копируем блок
    
    pop bc
    pop de
    pop hl
    ret

; --- Фиксация изменений ---
__nvs_commit:
    ; TODO: Синхронизировать с физической памятью
    ; Для RAM ничего не делаем
    ; Для EEPROM/flash - записать кэш
    ret

; --- Полная очистка ---
__nvs_erase_all:
    ; TODO: Стереть всю физическую память
    ld hl, #NVS_START
    ld de, #NVS_START + 1
    ld bc, #NVS_SIZE - 1
    ld (hl), #0xFF  ; Или 0x00 в зависимости от типа памяти
    ldir
    ret