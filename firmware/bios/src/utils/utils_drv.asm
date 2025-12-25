; ============================================================================
; UTILITY FUNCTIONS
; Реальные реализации основных утилит
; ============================================================================
module utils_driver

; ---- ДАННЫЕ УТИЛИТ ----
SECTION UTILS_DATA

; Для генератора случайных чисел
rand_seed:          dw 0x1234

; Для преобразований строк
itoa_buffer:        ds 12     ; Буфер для itoa (максимум 11 цифр + 0)

; Для математических функций
math_temp:          ds 4      ; Временное хранилище

; ==================== ФУНКЦИИ РАБОТЫ С ПАМЯТЬЮ ====================

SECTION UTILS_CODE

; ----------------------------------------------------------------------------
; memcpy - Копирование памяти
; Вход: HL = источник, DE = приемник, BC = количество байт
; ----------------------------------------------------------------------------
PUBLIC _memcpy
_memcpy:
memcpy_:
    ld a, b
    or c
    ret z
    
    push hl
    push de
    push bc
    
    ldir
    
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; memset - Заполнение памяти значением
; Вход: HL = указатель, A = значение, BC = количество байт
; ----------------------------------------------------------------------------
PUBLIC _memset
_memset:
memset_:
    ld d, a
    
    ld a, b
    or c
    ret z
    
    push hl
    push de
    push bc
    
    ld (hl), d
    dec bc
    ld a, b
    or c
    jr z, @done
    
    ld e, l
    ld d, h
    inc de
    ldir
    
@done:
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; memmove - Копирование с перекрытием
; Вход: HL = источник, DE = приемник, BC = количество байт
; ----------------------------------------------------------------------------
PUBLIC _memmove
_memmove:
memmove_:
    push hl
    push de
    push bc
    
    ; Проверяем направление копирования
    or a            ; Сбрасываем carry
    sbc hl, de
    add hl, de
    jr c, @forward_copy  ; Если HL < DE, копируем вперед
    
    ; Копируем назад (источник > приемник)
    add hl, bc
    dec hl          ; HL указывает на последний байт источника
    ex de, hl
    add hl, bc
    dec hl          ; DE указывает на последний байт приемника
    lddr
    jr @done
    
@forward_copy:
    ; Копируем вперед
    ldir
    
@done:
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; memcmp - Сравнение памяти
; Вход: HL = блок 1, DE = блок 2, BC = количество байт
; Выход: A = 0 если равны, Z флаг установлен если равны
; ----------------------------------------------------------------------------
PUBLIC _memcmp
_memcmp:
memcmp_:
    push hl
    push de
    push bc
    
    ld a, b
    or c
    jr z, @equal
    
@loop:
    ld a, (de)      ; Байте из второго блока
    cp (hl)         ; Сравниваем с байтом из первого блока
    jr nz, @different
    
    inc de
    inc hl
    dec bc
    ld a, b
    or c
    jr nz, @loop
    
@equal:
    xor a           ; A=0, Z=1
    jr @done
    
@different:
    ; A содержит block2[i], (HL) содержит block1[i]
    ; Нужно вычислить разницу
    ld b, a         ; Сохраняем block2[i] в B
    ld a, (hl)      ; Загружаем block1[i]
    sub b           ; A = block1[i] - block2[i]
    ; Или если нужно block2[i] - block1[i]:
    ; sub (hl)     ; ОШИБКА! Правильно: ld c, a; ld a, b; sub c
    
@done:
    pop bc
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; memchr - Поиск символа в памяти
; Вход: HL = указатель, A = символ, BC = количество байт
; Выход: HL = найденный адрес или 0
; ----------------------------------------------------------------------------
PUBLIC _memchr
_memchr:
memchr_:
    push bc
    push de
    
    ld e, a
    
    ld a, b
    or c
    jr z, @not_found
    
@loop:
    ld a, (hl)
    cp e
    jr z, @found
    
    cpi
    jp pe, @loop
    
@not_found:
    ld hl, 0
    jr @done
    
@found:
    dec hl
    
@done:
    pop de
    pop bc
    ret

; ==================== ФУНКЦИИ РАБОТЫ СО СТРОКАМИ ====================

; ----------------------------------------------------------------------------
; strcpy - Копирование строки
; Вход: HL = источник (ASCIIZ), DE = приемник
; ----------------------------------------------------------------------------
PUBLIC _strcpy
_strcpy:
strcpy_:
    push hl
    push af
    
@loop:
    ld a, (hl)
    ld (de), a
    or a
    jr z, @done
    
    inc hl
    inc de
    jr @loop
    
@done:
    pop af
    pop hl
    ret

; ----------------------------------------------------------------------------
; strncpy - Копирование строки с ограничением длины
; Вход: HL = источник, DE = приемник, BC = максимальная длина
; ----------------------------------------------------------------------------
PUBLIC _strncpy
_strncpy:
strncpy_:
    push hl
    push de
    push bc
    
    ld a, b
    or c
    jr z, @done
    
@loop:
    ld a, (hl)
    ld (de), a
    or a
    jr z, @fill_zero
    
    inc hl
    inc de
    dec bc
    ld a, b
    or c
    jr nz, @loop
    
@done:
    pop bc
    pop de
    pop hl
    ret
    
@fill_zero:
    ; Заполняем оставшееся пространство нулями
    inc de
    dec bc
    ld a, b
    or c
    jr z, @done
    
    xor a
@fill_loop:
    ld (de), a
    inc de
    dec bc
    ld a, b
    or c
    jr nz, @fill_loop
    
    jr @done

; ----------------------------------------------------------------------------
; strlen - Длина строки
; Вход: HL = строка (ASCIIZ)
; Выход: BC = длина
; ----------------------------------------------------------------------------
PUBLIC _strlen
_strlen:
strlen_:
    push hl
    ld bc, 0
    
@loop:
    ld a, (hl)
    or a
    jr z, @done
    
    inc hl
    inc bc
    jr @loop
    
@done:
    pop hl
    ret

; ----------------------------------------------------------------------------
; strcmp - Сравнение строк
; Вход: HL = строка 1, DE = строка 2
; Выход: A = 0 если равны
; ----------------------------------------------------------------------------
PUBLIC _strcmp
_strcmp:
strcmp_:
    push hl
    push de
    
@loop:
    ld a, (de)      ; Загружаем из второй строки
    ld b, a         ; Сохраняем в B
    ld a, (hl)      ; Загружаем из первой строки
    cp b            ; Сравниваем
    jr nz, @different
    
    or a            ; Проверяем на 0 (конец строки)
    jr z, @equal
    
    inc hl
    inc de
    jr @loop
    
@equal:
    xor a           ; A=0, Z=1
    jr @done
    
@different:
    ; A содержит str1[i], B содержит str2[i]
    sub b           ; A = str1[i] - str2[i]
    
@done:
    pop de
    pop hl
    ret
; ----------------------------------------------------------------------------
; strncmp - Сравнение строк с ограничением длины
; Вход: HL = строка 1, DE = строка 2, BC = максимальная длина
; ----------------------------------------------------------------------------
PUBLIC _strncmp
_strncmp:
strncmp_:
    push hl
    push de
    
    ld a, b
    or c
    jr z, @equal
    
    ; Сохраняем оригинальный B
    push bc
    ld a, b
    ld (save_b), a
    
@loop:
    ld a, (de)      ; Загружаем из второй строки
    ld b, a         ; Сохраняем в B
    ld a, (hl)      ; Загружаем из первой строки
    cp b            ; Сравниваем
    jr nz, @different
    
    or a            ; Проверяем на 0 (конец строки)
    jr z, @equal
    
    inc hl
    inc de
    dec bc          ; Уменьшаем счетчик
    ld a, b
    or c
    jr nz, @loop
    
@equal:
    pop bc          ; Восстанавливаем оригинальный BC
    xor a           ; A=0, Z=1
    jr @done
    
@different:
    ; A содержит str1[i], B содержит str2[i]
    sub b           ; A = str1[i] - str2[i]
    pop bc          ; Восстанавливаем оригинальный BC
    
@done:
    pop de
    pop hl
    ret

save_b: db 0
; ----------------------------------------------------------------------------
; strchr - Поиск символа в строке
; Вход: HL = строка, A = символ
; Выход: HL = адрес символа или 0
; ----------------------------------------------------------------------------
PUBLIC _strchr
_strchr:
strchr_:
    push bc
    ld c, a
    
@loop:
    ld a, (hl)
    or a
    jr z, @not_found
    
    cp c
    jr z, @found
    
    inc hl
    jr @loop
    
@not_found:
    ld hl, 0
    jr @done
    
@found:
    ; HL уже содержит адрес
    
@done:
    pop bc
    ret

; ----------------------------------------------------------------------------
; strstr - Поиск подстроки
; Вход: HL = строка, DE = подстрока
; Выход: HL = адрес подстроки или 0
; ----------------------------------------------------------------------------
PUBLIC _strstr
_strstr:
strstr_:
    push bc
    push de
    push hl
    
    ; Сохраняем начало строки
    push hl
    
    ; Получаем длину подстроки
    ex de, hl
    call strlen_
    ld a, b
    or c
    jr z, @found_empty  ; Пустая подстрока всегда находится
    
    ; Сохраняем длину подстроки
    push bc
    
    ; Восстанавливаем указатели
    pop bc
    pop hl
    push hl
    
@search_loop:
    ; Сохраняем текущую позицию в строке
    push hl
    push de
    
    ; Сравниваем первые символы
    ld a, (de)
    cp (hl)
    jr nz, @next_position
    
    ; Сравниваем остальные символы
    inc hl
    inc de
    dec bc
    ld a, b
    or c
    jr z, @found  ; Вся подстрока совпала
    
@compare_loop:
    ld a, (de)
    cp (hl)
    jr nz, @next_position
    
    inc hl
    inc de
    dec bc
    ld a, b
    or c
    jr nz, @compare_loop
    
    ; Найдено
@found:
    pop de  ; Очищаем стек
    pop de
    pop hl  ; Восстанавливаем начало строки
    pop hl  ; Восстанавливаем текущую позицию
    pop bc
    ret
    
@next_position:
    pop de
    pop hl
    
    ; Проверяем конец строки
    ld a, (hl)
    or a
    jr z, @not_found
    
    inc hl
    jr @search_loop
    
@not_found:
    pop hl  ; Очищаем стек
    ld hl, 0
    pop bc
    ret
    
@found_empty:
    pop hl
    pop bc
    ret

; ==================== МАТЕМАТИЧЕСКИЕ ФУНКЦИИ ====================

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
    ld de, 0x6C07  ; Простое число
    add hl, de
    ld (rand_seed), hl
    
    pop bc
    pop de
    ret

; ----------------------------------------------------------------------------
; srand - Установка seed для генератора
; Вход: HL = seed
; ----------------------------------------------------------------------------
PUBLIC _srand
_srand:
srand_:
    ld (rand_seed), hl
    ret

; ----------------------------------------------------------------------------
; rand_range - Случайное число в диапазоне
; Вход: HL = максимум (не включая)
; Выход: HL = случайное число [0, HL-1]
; ----------------------------------------------------------------------------
PUBLIC _rand_range
_rand_range:
rand_range_:
    push de
    push bc
    
    call _rand
    
    ; HL = rand(), DE = максимум
    ; Вычисляем HL % DE
    ex de, hl
    call divide_hl_de
    ex de, hl  ; Результат в HL
    
    pop bc
    pop de
    ret

; ----------------------------------------------------------------------------
; atoi - Конвертация строки в число
; Вход: HL = строка (десятичная)
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
@skip_spaces:
    ld a, (hl)
    cp ' '
    jr nz, @check_sign
    inc hl
    jr @skip_spaces
    
@check_sign:
    cp '-'
    jr nz, @check_plus
    inc b             ; Устанавливаем флаг отрицательности
    inc hl
    jr @digit_loop
    
@check_plus:
    cp '+'
    jr nz, @digit_loop
    inc hl
    
@digit_loop:
    ld a, (hl)
    sub '0'
    jr c, @done       ; Если < '0'
    cp 10
    jr nc, @done      ; Если >= 10
    
    ; DE = DE * 10 + A
    push hl
    ld hl, de
    add hl, hl        ; *2
    add hl, hl        ; *4
    add hl, de        ; *5
    add hl, hl        ; *10
    ld c, a
    ld b, 0
    add hl, bc        ; +цифра
    ld d, h
    ld e, l
    pop hl
    
    inc hl
    jr @digit_loop
    
@done:
    ld h, d
    ld l, e
    
    ; Применяем знак
    ld a, b
    or a
    jr z, @positive
    
    ; Отрицательное число
    xor a
    sub l
    ld l, a
    sbc a, a
    sub h
    ld h, a
    
@positive:
    or a              ; Сбрасываем carry (успех)
    
    pop bc
    pop de
    ret

; ----------------------------------------------------------------------------
; itoa - Конвертация числа в строку
; Вход: HL = число, DE = буфер (минимум 7 байт)
; ----------------------------------------------------------------------------
PUBLIC _itoa
_itoa:
itoa_:
    push hl
    push bc
    push de
    push ix
    
    ; DE = буфер
    ; HL = число
    
    ; Проверяем на ноль
    ld a, h
    or l
    jr nz, @not_zero
    
    ; "0"
    ld a, '0'
    ld (de), a
    inc de
    xor a
    ld (de), a
    jr @done
    
@not_zero:
    ; Сохраняем начало буфера
    push de
    
    ; Проверяем знак
    bit 7, h
    jr z, @positive
    
    ; Минус
    ld a, '-'
    ld (de), a
    inc de
    
    ; HL = -HL
    xor a
    sub l
    ld l, a
    sbc a, a
    sub h
    ld h, a
    
@positive:
    ; HL теперь положительное
    ; Делим на 10 и сохраняем цифры в стек
    ld ix, 0        ; Счетчик цифр
    
@div_loop:
    ; Делим HL на 10
    ld de, 10
    call divide_hl_de  ; HL = частное, A = остаток
    
    ; Сохраняем цифру
    add a, '0'
    push af
    inc ix
    
    ; Проверяем HL == 0
    ld a, h
    or l
    jr nz, @div_loop
    
    ; Извлекаем цифры
    pop de          ; Восстанавливаем DE (указатель буфера)
    
@pop_loop:
    pop af
    ld (de), a
    inc de
    dec ix
    ld a, ixh
    or ixl
    jr nz, @pop_loop
    
    ; Завершаем строку
    xor a
    ld (de), a
    
    pop hl          ; Очищаем стек
    
@done:
    pop ix
    pop de
    pop bc
    pop hl
    ret

    
@div:
    or a
    sbc hl, de
    jr c, @end
    inc bc
    jr @div
    
@end:
    add hl, de
    push bc
    pop hl          ; HL = частное
    ld a, e         ; A = остаток (DE=10, E=10)
    pop bc
    ret

; ----------------------------------------------------------------------------
; divide_hl_de - Деление HL на DE
; Вход: HL = делимое, DE = делитель
; Выход: HL = частное, DE = остаток
; ----------------------------------------------------------------------------
divide_hl_de:
    push bc
    push af
    
    ld bc, 0
    
@div_loop:
    ; Вычитаем DE из HL
    or a            ; Сбрасываем carry
    sbc hl, de
    jr c, @done     ; Если результат отрицательный
    
    ; Увеличиваем частное
    inc bc
    jr @div_loop

@done:
    ; Восстанавливаем HL (добавляем DE обратно)
    add hl, de
    
    ; Возвращаем частное в BC, остаток в HL
    push bc
    pop hl          ; Частное в HL
    ex de, hl       ; Остаток в DE, частное в DE
    
    pop af
    pop bc
    ret

; ==================== БИТОВЫЕ ОПЕРАЦИИ ====================

; ----------------------------------------------------------------------------
; bit_set - Установить бит
; Вход: HL = указатель, A = номер бита (0-7)
; ----------------------------------------------------------------------------
PUBLIC _bit_set
_bit_set:
bit_set_:
    push hl
    push bc
    
    ld c, a
    and 7
    ld b, a
    inc b
    
    ; Вычисляем байт
    ld a, c
    srl a
    srl a
    srl a
    add a, l
    ld l, a
    jr nc, @no_carry
    inc h
@no_carry:
    
    ; Устанавливаем бит
    ld a, 1
@bit_loop:
    rlca
    djnz @bit_loop
    
    or (hl)
    ld (hl), a
    
    pop bc
    pop hl
    ret

; ----------------------------------------------------------------------------
; bit_clear - Сбросить бит
; Вход: HL = указатель, A = номер бита
; ----------------------------------------------------------------------------
PUBLIC _bit_clear
_bit_clear:
bit_clear_:
    push hl
    push bc
    
    ld c, a
    and 7
    ld b, a
    inc b
    
    ; Вычисляем байт
    ld a, c
    srl a
    srl a
    srl a
    add a, l
    ld l, a
    jr nc, @no_carry
    inc h
@no_carry:
    
    ; Сбрасываем бит
    ld a, 1
@bit_loop:
    rlca
    djnz @bit_loop
    
    cpl
    and (hl)
    ld (hl), a
    
    pop bc
    pop hl
    ret

; ----------------------------------------------------------------------------
; bit_test - Проверить бит
; Вход: HL = указатель, A = номер бита
; Выход: A = 0/1, Z флаг установлен если бит сброшен
; ----------------------------------------------------------------------------
PUBLIC _bit_test
_bit_test:
bit_test_:
    push hl
    push bc
    
    ld c, a
    and 7
    ld b, a
    inc b
    
    ; Вычисляем байт
    ld a, c
    srl a
    srl a
    srl a
    add a, l
    ld l, a
    jr nc, @no_carry
    inc h
@no_carry:
    
    ; Проверяем бит
    ld a, 1
@bit_loop:
    rlca
    djnz @bit_loop
    
    and (hl)
    jr z, @clear
    
    ld a, 1
    jr @done
    
@clear:
    xor a
    
@done:
    pop bc
    pop hl
    ret

; ==================== ПРОЧИЕ УТИЛИТЫ ====================

; ----------------------------------------------------------------------------
; swap_bytes - Обменять байты в HL
; Вход: HL = значение
; Выход: HL = перевернутое значение
; ----------------------------------------------------------------------------
PUBLIC _swap_bytes
_swap_bytes:
swap_bytes_:
    ld a, h
    ld h, l
    ld l, a
    ret

; ----------------------------------------------------------------------------
; bcd_to_bin - Преобразовать BCD в бинарное
; Вход: A = BCD число
; Выход: A = бинарное число
; ----------------------------------------------------------------------------
PUBLIC _bcd_to_bin
_bcd_to_bin:
bcd_to_bin_:
    push bc
    
    ld b, a
    and 0xF0
    rrca
    rrca
    rrca
    rrca
    ld c, a
    add a, c
    add a, c
    add a, c
    add a, c
    add a, c
    ld c, a
    ld a, b
    and 0x0F
    add a, c
    
    pop bc
    ret

; ----------------------------------------------------------------------------
; bin_to_bcd - Преобразовать бинарное в BCD
; Вход: A = бинарное число (0-99)
; Выход: A = BCD число
; ----------------------------------------------------------------------------
PUBLIC _bin_to_bcd
_bin_to_bcd:
bin_to_bcd_:
    push bc
    
    ld b, 10
    ld c, 0
    
@div_loop:
    sub b
    jr c, @done
    inc c
    jr @div_loop
    
@done:
    add a, b
    sla c
    sla c
    sla c
    sla c
    or c
    
    pop bc
    ret