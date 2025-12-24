; ============================================================================
; UNIVERSAL MEMORY MANAGEMENT API
; Версия 2.0 - Гибрид классического и современного подходов
; Экспорт для C с подчеркиваниями
; ============================================================================

; ----------------------------------------------------------------------------
; РАЗДЕЛ 1: ОПРЕДЕЛЕНИЯ И КОНСТАНТЫ
; ----------------------------------------------------------------------------

; Режимы работы (биты в специальном регистре)
API_MODE_LEGACY      equ 0    ; Совместимость с MSX API
API_MODE_NATIVE      equ 1    ; Нативный режим Aleste LX
API_MODE_SUPERVISOR  equ 7    ; Супервизорный режим

; Структура контекста вызова
ctx_slot          equ 0    ; Текущий слот (1 byte)
ctx_page0_bank    equ 1    ; Банк страницы 0 (1 byte)  
ctx_page1_bank    equ 2    ; Банк страницы 1 (1 byte)
ctx_page2_bank    equ 3    ; Банк страницы 2 (1 byte)
ctx_page3_bank    equ 4    ; Банк страницы 3 (1 byte)
ctx_registers     equ 5    ; AF, BC, DE, HL, IX, IY (12 bytes)
ctx_size          equ 17   ; Всего размер контекста

; Порты Native Mode
GLOBAL_CTRL     equ 0xF0    ; Главный регистр управления
SUPER_SLOT_PORT equ 0xF9    ; Активный слот для супервизора
USER_SLOT_PORT  equ 0xFB    ; Активный слот для пользователя
BANK_PAGE0_PORT equ 0xFC    ; Банк для страницы 0 (0000-3FFF) текущего слота
BANK_PAGE1_PORT equ 0xFD    ; Банк для страницы 1 (4000-7FFF) текущего слота
BANK_PAGE2_PORT equ 0xFE    ; Банк для страницы 2 (8000-BFFF) текущего слота
BANK_PAGE3_PORT equ 0xFF    ; Банк для страницы 3 (C000-FFFF) текущего слота

; Маски для GLOBAL_CTRL
SUPERVISOR_BIT  equ 0       ; Бит 0: supervisor_mode

; ----------------------------------------------------------------------------
; РАЗДЕЛ 2: БАЗОВОЕ УПРАВЛЕНИЕ ПАМЯТЬЮ
; ----------------------------------------------------------------------------

; mmu_get_slot - Получить текущий активный слот
; Вход: Нет
; Выход: A = текущий слот (0-3), бит 7=супервизор
; Сохраняет: Все, кроме AF
PUBLIC _mmu_get_slot
_mmu_get_slot:
mmu_get_slot:
    push bc
    in a, (GLOBAL_CTRL)
    bit SUPERVISOR_BIT, a
    jr z, @user_mode
    ; Супервизор
    in a, (SUPER_SLOT_PORT)
    or 0x80
    jr @done
@user_mode:
    ; Пользователь
    in a, (USER_SLOT_PORT)
    and 0x7F
@done:
    pop bc
    ret

; mmu_set_slot - Установить активный слот
; Вход: A = слот (0-3, бит 7=супервизор)
; Выход: Нет
; Сохраняет: Все
PUBLIC _mmu_set_slot
_mmu_set_slot:
mmu_set_slot:
    push af
    bit 7, a
    jr nz, @supervisor
    ; Пользовательский
    and 0x7F
    out (USER_SLOT_PORT), a
    jr @done
@supervisor:
    and 0x7F
    out (SUPER_SLOT_PORT), a
@done:
    pop af
    ret

; mmu_set_page - Установить банк для страницы текущего слота
; Вход: A = номер банка (0-255)
;       B = номер страницы (0-3)
; Выход: Нет
; Сохраняет: Все
PUBLIC _mmu_set_page
_mmu_set_page:
mmu_set_page:
    push bc
    push af
    ; Вычисляем порт
    ld c, BANK_PAGE0_PORT
    ld a, b
    add a, c
    ld c, a
    pop af
    out (c), a
    pop bc
    ret

; mmu_get_page - Получить банк для страницы текущего слота  
; Вход: B = номер страницы (0-3)
; Выход: A = номер банка
; Сохраняет: Все
PUBLIC _mmu_get_page
_mmu_get_page:
mmu_get_page:
    push bc
    ld c, BANK_PAGE0_PORT
    ld a, b
    add a, c
    ld c, a
    in a, (c)
    pop bc
    ret

; ----------------------------------------------------------------------------
; РАЗДЕЛ 3: LEGACY-СОВМЕСТИМЫЕ ФУНКЦИИ (MSX стиль)
; ----------------------------------------------------------------------------

; mmu_read - Чтение байта из удаленного слота (аналог RDSLT)
; Вход: A = целевой слот (0-3, бит 7=супервизор)
;       HL = адрес для чтения
; Выход: A = прочитанный байт
; Сохраняет: BC, DE, HL
PUBLIC _mmu_read
_mmu_read:
mmu_read:
    push bc
    push de
    push hl
    
    ; Сохраняем параметры
    ld (_mmu_param_slot), a
    ld (_mmu_param_addr), hl
    
    ; Сохраняем текущий слот
    call mmu_get_slot
    push af
    
    ; Переключаемся в целевой слот
    ld a, (_mmu_param_slot)
    call mmu_set_slot
    
    ; Определяем страницу по адресу
    ld hl, (_mmu_param_addr)
    ld a, h
    rrca
    rrca
    and 3
    ld b, a
    
    ; Получаем текущий банк этой страницы
    call mmu_get_page
    push af
    
    ; TODO: Здесь должна быть логика определения нужного банка
    ; по слоту и адресу
    ; ld a, (_mmu_param_slot)
    ; call determine_bank_for_slot_addr
    
    ; Читаем байт
    ld hl, (_mmu_param_addr)
    ld a, (hl)
    ld (_mmu_result), a
    
    ; Восстанавливаем оригинальный банк
    pop af
    call mmu_set_page
    
    ; Восстанавливаем оригинальный слот
    pop af
    call mmu_set_slot
    
    ; Возвращаем результат
    ld a, (_mmu_result)
    
    pop hl
    pop de
    pop bc
    ret

; mmu_write - Запись байта в удаленный слот (аналог WRTSLT)
; Вход: A = целевой слот (0-3, бит 7=супервизор)
;       HL = адрес для записи
;       E = байт для записи
; Выход: Нет
; Сохраняет: Все
PUBLIC _mmu_write
_mmu_write:
mmu_write:
    push af
    push bc
    push de
    push hl
    
    ; Сохраняем параметры
    ld (_mmu_param_slot), a
    ld (_mmu_param_addr), hl
    ld a, e
    ld (_mmu_param_value), a
    
    ; Сохраняем текущий слот
    call mmu_get_slot
    push af
    
    ; Переключаемся в целевой слот
    ld a, (_mmu_param_slot)
    call mmu_set_slot
    
    ; Определяем страницу
    ld hl, (_mmu_param_addr)
    ld a, h
    rrca
    rrca
    and 3
    ld b, a
    
    ; Сохраняем текущий банк
    call mmu_get_page
    push af
    
    ; TODO: Устанавливаем нужный банк
    ; ld a, (_mmu_param_slot)
    ; call determine_bank_for_slot_addr
    
    ; Записываем байт
    ld hl, (_mmu_param_addr)
    ld a, (_mmu_param_value)
    ld (hl), a
    
    ; Восстанавливаем банк
    pop af
    call mmu_set_page
    
    ; Восстанавливаем слот
    pop af
    call mmu_set_slot
    
    pop hl
    pop de
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; РАЗДЕЛ 4: ВЫЗОВ КОДА В ДРУГОМ КОНТЕКСТЕ (самая важная часть!)
; ----------------------------------------------------------------------------

; mmu_call - Вызов функции в другом слоте (улучшенный CALSLT)
; Вход: A = целевой слот (0-3, бит 7=супервизор)
;       IX = адрес функции
;       BC, DE, HL = параметры (как в обычном вызове)
; Выход: AF, BC, DE, HL, IX = как вернула функция
; Сохраняет: IY
PUBLIC _mmu_call
_mmu_call:
mmu_call:
    di
    push iy
    
    ; Сохраняем параметры
    ld (_mmu_param_slot), a
    ld (_mmu_param_func), ix
    
    ; Сохраняем контекст вызывающего
    call save_caller_context
    
    ; Переключаемся в целевой слот
    ld a, (_mmu_param_slot)
    call mmu_set_slot
    
    ; Настраиваем параметры для вызова
    ld hl, (_mmu_param_func)  ; HL = адрес функции
    
    ; Вызываем через специальный переходник
    ld iy, @return_point
    jp call_adapter
    
@return_point:
    ; Восстанавливаем контекст вызывающего
    call restore_caller_context
    
    pop iy
    ei
    ret

; mmu_jump - Переход в другой слот (без возврата)
; Вход: A = целевой слот (0-3, бит 7=супервизор)
;       HL = адрес для перехода
; Выход: Нет (переход в другой код)
PUBLIC _mmu_jump
_mmu_jump:
mmu_jump:
    di
    ; Сохраняем параметры
    ld (_mmu_param_slot), a
    
    ; Устанавливаем целевой слот
    call mmu_set_slot
    
    ; Прыгаем!
    jp (hl)

; ----------------------------------------------------------------------------
; РАЗДЕЛ 5: РАСШИРЕННЫЕ ВОЗМОЖНОСТИ
; ----------------------------------------------------------------------------

; mmu_save_state - Сохранить полное состояние MMU
; Вход: HL = указатель на буфер (минимум 20 байт)
; Выход: Нет
; Сохраняет: Все
PUBLIC _mmu_save_state
_mmu_save_state:
mmu_save_state:
    push af
    push bc
    push de
    
    ld de, hl
    
    ; Сохраняем глобальные регистры
    in a, (GLOBAL_CTRL)
    ld (de), a
    inc de
    
    in a, (SUPER_SLOT_PORT)
    ld (de), a
    inc de
    
    in a, (USER_SLOT_PORT)
    ld (de), a
    inc de
    
    ; Сохраняем банки текущего слота
    ld b, 4
    ld c, BANK_PAGE0_PORT
@save_banks:
    in a, (c)
    ld (de), a
    inc de
    inc c
    djnz @save_banks
    
    pop de
    pop bc
    pop af
    ret

; mmu_restore_state - Восстановить полное состояние MMU
; Вход: HL = указатель на сохраненное состояние
; Выход: Нет
; Сохраняет: Все
PUBLIC _mmu_restore_state
_mmu_restore_state:
mmu_restore_state:
    push af
    push bc
    push de
    
    ld de, hl
    
    ; Восстанавливаем глобальные регистры
    ld a, (de)
    out (GLOBAL_CTRL), a
    inc de
    
    ld a, (de)
    out (SUPER_SLOT_PORT), a
    inc de
    
    ld a, (de)
    out (USER_SLOT_PORT), a
    inc de
    
    ; Восстанавливаем банки
    ld b, 4
    ld c, BANK_PAGE0_PORT
@restore_banks:
    ld a, (de)
    out (c), a
    inc de
    inc c
    djnz @restore_banks
    
    pop de
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; РАЗДЕЛ 6: ВСПОМОГАТЕЛЬНЫЕ ФУНКЦИИ (внутренние)
; ----------------------------------------------------------------------------

; save_caller_context - Сохранить контекст вызывающего
; Вход: Нет
; Выход: Контекст сохранен в caller_context
; Сохраняет: Все
save_caller_context:
    push hl
    push de
    ld hl, caller_context + ctx_registers
    
    ; Сохраняем AF (через стек)
    push af
    pop de
    ld (hl), e
    inc hl
    ld (hl), d
    inc hl
    
    ; Сохраняем BC, DE, HL
    ld (hl), c
    inc hl
    ld (hl), b
    inc hl
    
    push de
    pop bc
    ld (hl), c
    inc hl
    ld (hl), b
    inc hl
    
    ld (hl), e
    inc hl
    ld (hl), d
    inc hl
    
    ; Сохраняем IX, IY
    push ix
    pop bc
    ld (hl), c
    inc hl
    ld (hl), b
    inc hl
    
    push iy
    pop bc
    ld (hl), c
    inc hl
    ld (hl), b
    
    ; Сохраняем слот
    call mmu_get_slot
    ld (caller_context + ctx_slot), a
    
    ; Сохраняем банки страниц
    ld b, 0
    call mmu_get_page
    ld (caller_context + ctx_page0_bank), a
    
    ld b, 1
    call mmu_get_page
    ld (caller_context + ctx_page1_bank), a
    
    ld b, 2
    call mmu_get_page
    ld (caller_context + ctx_page2_bank), a
    
    ld b, 3
    call mmu_get_page
    ld (caller_context + ctx_page3_bank), a
    
    pop de
    pop hl
    ret

; restore_caller_context - Восстановить контекст вызывающего
; Вход: Нет  
; Выход: Контекст восстановлен
; Сохраняет: Все, кроме восстанавливаемых регистров
restore_caller_context:
    push hl
    ld hl, caller_context + ctx_registers
    
    ; Восстанавливаем IX, IY
    ld c, (hl)
    inc hl
    ld b, (hl)
    inc hl
    push bc
    pop iy
    
    ld c, (hl)
    inc hl
    ld b, (hl)
    inc hl
    push bc
    pop ix
    
    ; Восстанавливаем HL, DE, BC
    ld e, (hl)
    inc hl
    ld d, (hl)
    inc hl
    push de
    pop hl
    
    ld e, (hl)
    inc hl
    ld d, (hl)
    inc hl
    
    ld c, (hl)
    inc hl
    ld b, (hl)
    inc hl
    
    ; Восстанавливаем AF
    ld e, (hl)
    inc hl
    ld d, (hl)
    push de
    pop af
    
    ; Восстанавливаем банки страниц
    ld a, (caller_context + ctx_page0_bank)
    ld b, 0
    call mmu_set_page
    
    ld a, (caller_context + ctx_page1_bank)
    ld b, 1
    call mmu_set_page
    
    ld a, (caller_context + ctx_page2_bank)
    ld b, 2
    call mmu_set_page
    
    ld a, (caller_context + ctx_page3_bank)
    ld b, 3
    call mmu_set_page
    
    ; Восстанавливаем слот
    ld a, (caller_context + ctx_slot)
    call mmu_set_slot
    
    pop hl
    ret

; call_adapter - Адаптер для вызова с переходом между слотами
; Вход: HL = адрес функции
;       IY = адрес возврата
;       BC, DE, HL = параметры
; Выход: Возврат через IY
call_adapter:
    ; Вызываем целевую функцию
    jp (hl)

; ----------------------------------------------------------------------------
; РАЗДЕЛ 7: ДОПОЛНИТЕЛЬНЫЕ УДОБНЫЕ ФУНКЦИИ
; ----------------------------------------------------------------------------

; mmu_map - Отобразить банк по адресу (синтаксический сахар)
; Вход: A = номер банка
;       HL = логический адрес
; Выход: Нет
PUBLIC _mmu_map
_mmu_map:
mmu_map:
    push bc
    push af
    ; Определяем страницу
    ld a, h
    rrca
    rrca
    and 3
    ld b, a
    pop af
    call mmu_set_page
    pop bc
    ret

; mmu_get_mapped - Получить банк отображенный по адресу
; Вход: HL = логический адрес
; Выход: A = номер банка
PUBLIC _mmu_get_mapped
_mmu_get_mapped:
mmu_get_mapped:
    push bc
    ld a, h
    rrca
    rrca
    and 3
    ld b, a
    call mmu_get_page
    pop bc
    ret

; ----------------------------------------------------------------------------
; ДАННЫЕ API
; ----------------------------------------------------------------------------
_mmu_param_slot:    db 0
_mmu_param_addr:    dw 0
_mmu_param_value:   db 0
_mmu_param_func:    dw 0
_mmu_result:        db 0

caller_context:     ds ctx_size

; ----------------------------------------------------------------------------
; ТАБЛИЦА ЭКСПОРТА ДЛЯ C
; ----------------------------------------------------------------------------

; Базовые:
; _mmu_get_slot     - получить текущий слот
; _mmu_set_slot     - установить слот
; _mmu_set_page     - установить банк для страницы
; _mmu_get_page     - получить банк страницы

; Legacy-совместимые:
; _mmu_read         - чтение из удаленного слота (RDSLT)
; _mmu_write        - запись в удаленный слот (WRTSLT)

; Вызов кода:
; _mmu_call         - вызов функции в другом слоте (CALSLT/CALLF)
; _mmu_jump         - переход в другой слот без возврата

; Расширенные:
; _mmu_save_state   - сохранить состояние MMU
; _mmu_restore_state - восстановить состояние MMU

; Удобные:
; _mmu_map          - отобразить банк по адресу
; _mmu_get_mapped   - получить банк по адресу

		.DEPHASE