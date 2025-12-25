; ============================================================================
; UNIVERSAL MEMORY MANAGEMENT API
; Версия 2@0 - Гибрид классического и современного подходов
; ============================================================================

module mmu_core

; ---- КОНСТАНТЫ ----
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
BANK_PAGE0_PORT equ 0xFC    ; Банк для страницы 0 текущего слота
BANK_PAGE1_PORT equ 0xFD    ; Банк для страницы 1 текущего слота
BANK_PAGE2_PORT equ 0xFE    ; Банк для страницы 2 текущего слота
BANK_PAGE3_PORT equ 0xFF    ; Банк для страницы 3 текущего слота

; Маски для GLOBAL_CTRL
SUPERVISOR_BIT  equ 0       ; Бит 0: supervisor_mode

; ---- ДАННЫЕ ДРАЙВЕРА ----
SECTION MMU_DATA

; Временные параметры
mmu_param_slot:     db 0
mmu_param_addr:     dw 0
mmu_param_value:    db 0
mmu_param_func:     dw 0
mmu_result:         db 0

; Контекст для mmu_call
caller_context:     ds ctx_size

; Таблица отображения слотов на банки (8 слотов * 4 страницы)
slot_bank_table:    ds 32    ; [slot][page] -> bank

; ---- МАКРОСЫ ----
MACRO MMU_SELECT_SLOT slot
    bit 7, slot
    jr nz, @supervisor
    ; Пользовательский
    ld a, slot
    and 0x7F
    out (USER_SLOT_PORT), a
    jr @done
@supervisor:
    ld a, slot
    and 0x7F
    out (SUPER_SLOT_PORT), a
@done:
ENDM

MACRO MMU_GET_SLOT
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
ENDM

; ==================== ОСНОВНЫЕ ФУНКЦИИ ====================

SECTION MMU_CODE

; ----------------------------------------------------------------------------
; mmu_init - Инициализация MMU
; Выход: A = 0 (успех)
; ----------------------------------------------------------------------------
PUBLIC _mmu_init
_mmu_init:
mmu_init_:
    push bc
    push hl
    
    ; Инициализируем таблицу отображения
    ld hl, slot_bank_table
    ld bc, 32
    xor a
    call memset_
    
    ; Настраиваем порты по умолчанию
    ; TODO: Настройка аппаратуры
    
    xor a
    pop hl
    pop bc
    ret

; ----------------------------------------------------------------------------
; mmu_get_slot - Получить текущий активный слот
; Выход: A = текущий слот (0-3), бит 7=супервизор
; ----------------------------------------------------------------------------
PUBLIC _mmu_get_slot
_mmu_get_slot:
mmu_get_slot:
    push bc
    MMU_GET_SLOT
    pop bc
    ret

; ----------------------------------------------------------------------------
; mmu_set_slot - Установить активный слот
; Вход: A = слот (0-3, бит 7=супервизор)
; ----------------------------------------------------------------------------
PUBLIC _mmu_set_slot
_mmu_set_slot:
mmu_set_slot:
    push af
    MMU_SELECT_SLOT a
    pop af
    ret

; ----------------------------------------------------------------------------
; mmu_set_page - Установить банк для страницы текущего слота
; Вход: A = номер банка (0-255)
;       B = номер страницы (0-3)
; ----------------------------------------------------------------------------
PUBLIC _mmu_set_page
_mmu_set_page:
mmu_set_page:
    push bc
    push af
    
    ; Обновляем таблицу отображения
    call mmu_update_slot_table
    
    ; Устанавливаем порт
    ld c, BANK_PAGE0_PORT
    ld a, b
    add a, c
    ld c, a
    pop af
    out (c), a
    
    pop bc
    ret

; ----------------------------------------------------------------------------
; mmu_get_page - Получить банк для страницы текущего слота  
; Вход: B = номер страницы (0-3)
; Выход: A = номер банка
; ----------------------------------------------------------------------------
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
; mmu_read - Чтение байта из удаленного слота
; Вход: A = целевой слот (0-3, бит 7=супервизор)
;       HL = адрес для чтения
; Выход: A = прочитанный байт
; ----------------------------------------------------------------------------
PUBLIC _mmu_read
_mmu_read:
mmu_read:
    push bc
    push de
    push hl
    
    ld (mmu_param_slot), a
    ld (mmu_param_addr), hl
    
    ; Сохраняем текущий слот
    call mmu_get_slot
    push af
    
    ; Переключаемся в целевой слот
    ld a, (mmu_param_slot)
    call mmu_set_slot
    
    ; Определяем страницу
    ld hl, (mmu_param_addr)
    call addr_to_page
    ld b, a
    
    ; Сохраняем текущий банк
    call mmu_get_page
    push af
    
    ; Устанавливаем нужный банк (из таблицы)
    call mmu_get_bank_for_slot_addr
    
    ; Читаем байт
    ld hl, (mmu_param_addr)
    ld a, (hl)
    ld (mmu_result), a
    
    ; Восстанавливаем оригинальный банк
    pop af
    call mmu_set_page
    
    ; Восстанавливаем оригинальный слот
    pop af
    call mmu_set_slot
    
    ; Возвращаем результат
    ld a, (mmu_result)
    
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; mmu_write - Запись байта в удаленный слот
; Вход: A = целевой слот (0-3, бит 7=супервизор)
;       HL = адрес для записи
;       E = байт для записи
; ----------------------------------------------------------------------------
PUBLIC _mmu_write
_mmu_write:
mmu_write:
    push af
    push bc
    push de
    push hl
    
    ld (mmu_param_slot), a
    ld (mmu_param_addr), hl
    ld a, e
    ld (mmu_param_value), a
    
    ; Сохраняем текущий слот
    call mmu_get_slot
    push af
    
    ; Переключаемся в целевой слот
    ld a, (mmu_param_slot)
    call mmu_set_slot
    
    ; Определяем страницу
    ld hl, (mmu_param_addr)
    call addr_to_page
    ld b, a
    
    ; Сохраняем текущий банк
    call mmu_get_page
    push af
    
    ; Устанавливаем нужный банк
    call mmu_get_bank_for_slot_addr
    
    ; Записываем байт
    ld hl, (mmu_param_addr)
    ld a, (mmu_param_value)
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

; ==================== ВЫЗОВ КОДА В ДРУГОМ КОНТЕКСТЕ ====================

; ----------------------------------------------------------------------------
; mmu_call - Вызов функции в другом слоте
; Вход: A = целевой слот (0-3, бит 7=супервизор)
;       IX = адрес функции
;       BC, DE, HL = параметры
; Выход: AF, BC, DE, HL, IX = как вернула функция
; ----------------------------------------------------------------------------
PUBLIC _mmu_call
_mmu_call:
mmu_call:
    di
    push iy
    
    ld (mmu_param_slot), a
    ld (mmu_param_func), ix
    
    ; Сохраняем контекст вызывающего
    call save_caller_context
    
    ; Переключаемся в целевой слот
    ld a, (mmu_param_slot)
    call mmu_set_slot
    
    ; Вызываем функцию
    ld hl, (mmu_param_func)
    ld iy, mmu_call_return
    jp call_adapter

mmu_call_return:
    ; Восстанавливаем контекст вызывающего
    call restore_caller_context
    
    pop iy
    ei
    ret

; ----------------------------------------------------------------------------
; mmu_jump - Переход в другой слот (без возврата)
; Вход: A = целевой слот (0-3, бит 7=супервизор)
;       HL = адрес для перехода
; ----------------------------------------------------------------------------
PUBLIC _mmu_jump
_mmu_jump:
divide_hl_de@mmu_jump:
    di
    ld (mmu_param_slot), a
    
    ; Устанавливаем целевой слот
    call mmu_set_slot
    
    ; Прыгаем!
    jp (hl)

; ==================== РАСШИРЕННЫЕ ВОЗМОЖНОСТИ ====================

; ----------------------------------------------------------------------------
; mmu_save_state - Сохранить состояние MMU
; Вход: HL = указатель на буфер (минимум 20 байт)
; ----------------------------------------------------------------------------
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
    
    ; Сохраняем таблицу отображения
    ld hl, slot_bank_table
    ld bc, 32
    ldir
    
    pop de
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; mmu_restore_state - Восстановить состояние MMU
; Вход: HL = указатель на сохраненное состояние
; ----------------------------------------------------------------------------
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
    
    ; Восстанавливаем таблицу отображения
    ld hl, slot_bank_table
    ld bc, 32
    ldir
    
    pop de
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; mmu_map - Отобразить банк по адресу
; Вход: A = номер банка
;       HL = логический адрес
; ----------------------------------------------------------------------------
PUBLIC _mmu_map
_mmu_map:
mmu_map:
    push bc
    push af
    call addr_to_page
    ld b, a
    pop af
    call mmu_set_page
    pop bc
    ret

; ----------------------------------------------------------------------------
; mmu_get_mapped - Получить банк отображенный по адресу
; Вход: HL = логический адрес
; Выход: A = номер банка
; ----------------------------------------------------------------------------
PUBLIC _mmu_get_mapped
_mmu_get_mapped:
mmu_get_mapped:
    push bc
    call addr_to_page
    ld b, a
    call mmu_get_page
    pop bc
    ret

; ==================== ВНУТРЕННИЕ ФУНКЦИИ ====================

; ----------------------------------------------------------------------------
; save_caller_context - Сохранить контекст вызывающего
; ----------------------------------------------------------------------------
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

; ----------------------------------------------------------------------------
; restore_caller_context - Восстановить контекст вызывающего
; ----------------------------------------------------------------------------
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

; ----------------------------------------------------------------------------
; call_adapter - Адаптер для вызова
; ----------------------------------------------------------------------------
call_adapter:
    jp (hl)

; ----------------------------------------------------------------------------
; addr_to_page - Преобразовать адрес в номер страницы
; Вход: HL = адрес
; Выход: A = номер страницы (0-3)
; ----------------------------------------------------------------------------
addr_to_page:
    ld a, h
    rrca
    rrca
    and 3
    ret

; ----------------------------------------------------------------------------
; mmu_update_slot_table - Обновить таблицу отображения
; ----------------------------------------------------------------------------
mmu_update_slot_table:
    push hl
    push bc
    push de
    
    ; Получаем текущий слот
    call mmu_get_slot
    and 0x7F        ; Убираем бит супервизора
    
    ; Вычисляем индекс в таблице
    ld e, a
    ld d, 0
    sla e           ; *2
    sla e           ; *4 (4 страницы на слот)
    ld hl, slot_bank_table
    add hl, de
    
    ; Добавляем смещение страницы
    ld a, b
    add a, l
    ld l, a
    jr nc, @no_carry
    inc h
@no_carry:
    
    ; Сохраняем банк
    ld (hl), a
    
    pop de
    pop bc
    pop hl
    ret

; ----------------------------------------------------------------------------
; mmu_get_bank_for_slot_addr - Получить банк для слота и адреса
; Вход: A = слот, HL = адрес
; Выход: A = банк, B = страница
; ----------------------------------------------------------------------------
mmu_get_bank_for_slot_addr:
    push hl
    push de
    
    ; Определяем страницу
    call addr_to_page
    ld b, a
    
    ; Вычисляем индекс в таблице
    ld e, a
    ld d, 0
    sla e           ; *2
    sla e           ; *4
    ld hl, slot_bank_table
    add hl, de
    
    ; Добавляем смещение страницы
    ld a, b
    add a, l
    ld l, a
    jr nc, @no_carry
    inc h
@no_carry:
    
    ; Читаем банк
    ld a, (hl)
    
    pop de
    pop hl
    ret

; ----------------------------------------------------------------------------
; memset - Внутренняя функция заполнения памяти
; ----------------------------------------------------------------------------
memset_:
    push hl
    push bc
    
    ld d, a
    ld a, b
    or c
    jr z, @done
    
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
    pop hl
    ret