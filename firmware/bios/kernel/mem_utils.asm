; ============================================================================
; UTILITY FUNCTIONS - Реальные реализации
; ============================================================================
.module utils

; ----------------------------------------------------------------------------
; memcpy - Копирование памяти
; Вход: HL = источник
;       DE = приемник
;       BC = количество байт
; Выход: Нет
; ----------------------------------------------------------------------------
PUBLIC _memcpy
_memcpy:
memcpy_:
    ld a, b
    or c
    ret z           ; Если BC=0, ничего не делаем
    
    push hl
    push de
    push bc
    
    ldir            ; Копируем BC байт из HL в DE
    
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; memset - Заполнение памяти значением
; Вход: HL = указатель на память
;       A = значение
;       BC = количество байт
; Выход: Нет
; ----------------------------------------------------------------------------
PUBLIC _memset
_memset:
memset_:
    ld d, a         ; Сохраняем значение в D
    
    ld a, b
    or c
    ret z           ; Если BC=0, ничего не делаем
    
    push hl
    push de
    push bc
    
    ld (hl), d      ; Записываем первое значение
    dec bc
    ld a, b
    or c
    jr z, memset_done_
    
    ld e, l         ; DE = HL + 1
    ld d, h
    inc de
    ldir            ; Копируем оставшиеся
    
memset_done_:
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; memcmp - Сравнение памяти
; Вход: HL = указатель на блок 1
;       DE = указатель на блок 2
;       BC = количество байт для сравнения
; Выход: A = 0 если равны, !=0 если разные
;        Z флаг установлен если равны
; ----------------------------------------------------------------------------
PUBLIC _memcmp
_memcmp:
memcmp_:
    push hl
    push de
    push bc
    
    ld a, b
    or c
    jr z, memcmp_equal_  ; Если BC=0, блоки равны
    
memcmp_loop_:
    ld a, (de)
    cpi                 ; Сравниваем (HL) с A, инкрементируем HL, декрементируем BC
    jr nz, memcmp_different_
    
    inc de
    jp pe, memcmp_loop_ ; Продолжаем пока BC != 0
    
memcmp_equal_:
    xor a               ; Устанавливаем A=0 и Z флаг
    jr memcmp_done_
    
memcmp_different_:
    dec hl              ; Откатываем инкремент от CPI
    ld a, (hl)
    sub (de)           ; A = разница
    
memcmp_done_:
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; strcpy - Копирование строки
; Вход: HL = источник (ASCIIZ)
;       DE = приемник
; Выход: DE указывает на конец строки в приемнике
; ----------------------------------------------------------------------------
PUBLIC _strcpy
_strcpy:
strcpy_:
    push hl
    push af
    
strcpy_loop_:
    ld a, (hl)
    ld (de), a
    or a
    jr z, strcpy_done_
    
    inc hl
    inc de
    jr strcpy_loop_
    
strcpy_done_:
    pop af
    pop hl
    ret

; ----------------------------------------------------------------------------
; strlen - Длина строки
; Вход: HL = указатель на строку (ASCIIZ)
; Выход: BC = длина строки (без нулевого байта)
; ----------------------------------------------------------------------------
PUBLIC _strlen
_strlen:
strlen_:
    push hl
    ld bc, 0
    
strlen_loop_:
    ld a, (hl)
    or a
    jr z, strlen_done_
    
    inc hl
    inc bc
    jr strlen_loop_
    
strlen_done_:
    pop hl
    ret

; ----------------------------------------------------------------------------
; strcmp - Сравнение строк
; Вход: HL = строка 1
;       DE = строка 2
; Выход: A = 0 если равны, <0 если str1 < str2, >0 если str1 > str2
; ----------------------------------------------------------------------------
PUBLIC _strcmp
_strcmp:
strcmp_:
    push hl
    push de
    push bc
    
strcmp_loop_:
    ld a, (de)
    cp (hl)
    jr nz, strcmp_different_
    
    or a
    jr z, strcmp_equal_
    
    inc hl
    inc de
    jr strcmp_loop_
    
strcmp_equal_:
    xor a
    jr strcmp_done_
    
strcmp_different_:
    ld a, (hl)
    sub (de)
    
strcmp_done_:
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; rand - Генератор случайных чисел
; Выход: HL = случайное число
; ----------------------------------------------------------------------------
PUBLIC _rand
_rand:
rand_:
    push de
    push bc
    
    ld hl, (rand_seed)
    ld de, 0x6C07
    add hl, de
    ld (rand_seed), hl
    
    pop bc
    pop de
    ret

; ----------------------------------------------------------------------------
; srand - Установка seed для генератора случайных чисел
; Вход: HL = seed
; Выход: Нет
; ----------------------------------------------------------------------------
PUBLIC _srand
_srand:
srand_:
    ld (rand_seed), hl
    ret

; ----------------------------------------------------------------------------
; atoi - Конвертация строки в число
; Вход: HL = указатель на строку (десятичная)
; Выход: HL = число, CY = 1 если ошибка
; ----------------------------------------------------------------------------
PUBLIC _atoi
_atoi:
atoi_:
    push de
    push bc
    
    ld de, 0          ; Результат
    ld b, 0           ; Флаг отрицательности
    
    ; Пропускаем пробелы
atoi_skip_spaces_:
    ld a, (hl)
    cp ' '
    jr nz, atoi_check_sign_
    inc hl
    jr atoi_skip_spaces_
    
atoi_check_sign_:
    cp '-'
    jr nz, atoi_check_plus_
    inc b             ; Устанавливаем флаг отрицательности
    inc hl
    jr atoi_digit_loop_
    
atoi_check_plus_:
    cp '+'
    jr nz, atoi_digit_loop_
    inc hl
    
atoi_digit_loop_:
    ld a, (hl)
    sub '0'
    jr c, atoi_done_  ; Если < '0'
    cp 10
    jr nc, atoi_done_ ; Если >= 10
    
    ; DE = DE * 10 + A
    push hl
    ld hl, de
    add hl, hl        ; *2
    add hl, hl        ; *4
    add hl, de        ; *5
    add hl, hl        ; *10
    ld e, a
    ld d, 0
    add hl, de        ; +цифра
    ld d, h
    ld e, l
    pop hl
    
    inc hl
    jr atoi_digit_loop_
    
atoi_done_:
    ld h, d
    ld l, e
    
    ; Применяем знак
    ld a, b
    or a
    jr z, atoi_positive_
    
    ; Отрицательное число
    xor a
    sub l
    ld l, a
    sbc a, a
    sub h
    ld h, a
    
atoi_positive_:
    pop bc
    pop de
    ret

; ----------------------------------------------------------------------------
; itoa - Конвертация числа в строку
; Вход: HL = число
;       DE = буфер для строки (минимум 7 байт)
; Выход: DE указывает на строку
; ----------------------------------------------------------------------------
PUBLIC _itoa
_itoa:
itoa_:
    push hl
    push bc
    push de
    
    ld bc, -10000
    call itoa_digit_
    ld bc, -1000
    call itoa_digit_
    ld bc, -100
    call itoa_digit_
    ld bc, -10
    call itoa_digit_
    ld bc, -1
    
itoa_digit_:
    ld a, '0' - 1
    
itoa_div_loop_:
    inc a
    add hl, bc
    jr c, itoa_div_loop_
    
    sbc hl, bc        ; Восстанавливаем остаток
    
    ld (de), a
    inc de
    ret

itoa_done_:
    xor a
    ld (de), a        ; Завершающий ноль
    
    pop de
    pop bc
    pop hl
    ret

; ----------------------------------------------------------------------------
; ДАННЫЕ
; ----------------------------------------------------------------------------
rand_seed:    dw 0x1234