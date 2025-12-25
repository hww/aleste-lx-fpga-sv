; nvs_fs.asm
; Файловая система поверх драйвера
; Структура записи:
; [тип:1][длина ключа:1][ключ...][длина данных:1][данные...]

    .module NVS_FS
    .area _CODE

; Константы
KEY_MAX_LEN:    .equ 15
BLOB_MAX_SIZE:  .equ 64

; Типы данных
TYPE_I32:       .equ 0x01
TYPE_BLOB:      .equ 0x02
TYPE_STR:       .equ 0x03
TYPE_DELETED:   .equ 0xFF

; --- Поиск записи по ключу ---
; Вход: HL - указатель на ключ (строка, null-terminated)
; Выход: HL - адрес записи или 0 если не найден
;         A - длина ключа
__find_entry:
    push bc
    push de
    
    ; Сохраняем ключ
    push hl
    
    ; Начинаем поиск с начала NVS
    ld hl, #0x0000
    
.find_loop:
    ; Читаем тип записи
    call __nvs_read_byte
    cp #TYPE_DELETED
    jr z, .skip_entry
    
    ; Читаем длину ключа
    inc hl
    call __nvs_read_byte
    ld b, a      ; B = длина ключа
    
    ; Восстанавливаем ключ для сравнения
    pop de
    push de
    
    ; Сравниваем ключи
    push hl
    inc hl       ; Пропускаем байт длины ключа
    
.compare_loop:
    ; Читаем символ из NVS
    call __nvs_read_byte
    ; Сравниваем с ключом
    ex de, hl
    cp (hl)
    ex de, hl
    jr nz, .not_match
    
    inc de
    djnz .compare_loop
    
    ; Ключи совпали!
    pop hl
    dec hl       ; Возвращаемся к началу записи
    pop de       ; Чистим стек
    pop de
    pop bc
    ret
    
.not_match:
    pop hl       ; Восстанавливаем позицию
    
.skip_entry:
    ; Переходим к следующей записи
    ; TODO: Рассчитать размер записи и пропустить
    ; Пока простой вариант - ищем до конца
    inc hl
    ld a, h
    cp #NVS_SIZE >> 8
    jr c, .find_loop
    
    ; Не нашли
    pop de
    pop de
    pop bc
    ld hl, #0x0000
    ret

; --- Получить int32 ---
; Вход: HL - ключ
;       DE - значение по умолчанию
; Выход: DEHL - значение
__nvs_get_i32:
    push de      ; Сохраняем значение по умолчанию
    
    call __find_entry
    ld a, h
    or l
    jr z, .not_found
    
    ; Нашли запись, читаем данные
    inc hl       ; Пропускаем тип
    inc hl       ; Пропускаем длину ключа
    ; TODO: Пропустить сам ключ
    ; TODO: Прочитать длину данных
    inc hl       ; Пропускаем длину данных
    
    ; Читаем 4 байта
    call __nvs_read_byte  ; Младший байт
    ld e, a
    inc hl
    call __nvs_read_byte
    ld d, a
    inc hl
    call __nvs_read_byte
    ld h, (hl)   ; Старший байт уже в HL
    ld l, a
    
    pop af       ; Чистим стек
    ret
    
.not_found:
    ; Возвращаем значение по умолчанию
    pop hl       ; HL = младшая часть
    ex de, hl    ; DEHL = значение
    ret

; --- Установить int32 ---
; Вход: HL - ключ
;       DE - значение
;       BC - старшая часть значения (если нужно)
__nvs_set_i32:
    ; TODO: Найти свободное место
    ; TODO: Записать тип, ключ, данные
    ; TODO: Обновить существующую запись если нужно
    ret

; --- Получить blob ---
; Вход: HL - ключ
;       DE - буфер
;        A - максимальный размер
; Выход: A - реальный размер
__nvs_get_blob:
    ; TODO: Реализовать
    ret

; --- Установить blob ---
; Вход: HL - ключ
;       DE - данные
;        A - размер
__nvs_set_blob:
    ; TODO: Реализовать
    ret