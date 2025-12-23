; ============================================================================
; mmu_api.asm - Полный API управления MMU для Aleste LX
; Правильная терминология: Слоты × Банки × Страницы
; ============================================================================

; Порты Native Mode
GLOBAL_CTRL     equ 0xF0    ; Главный регистр управления
MMIO_PAGE       equ 0xF1    ; Страница MMIO
SYSCALL_PORT    equ 0xF2    ; Системный вызов
CLOCK_CTRL      equ 0xF3    ; Управление частотой CPU
SUPER_SLOT_PORT equ 0xF9    ; Активный слот для супервизора
USER_SLOT_PORT  equ 0xFB    ; Активный слот для пользователя

; Порты для установки банков в страницы ТЕКУЩЕГО СЛОТА
BANK_PAGE0_PORT equ 0xFC    ; Банк для страницы 0 (0000-3FFF) текущего слота
BANK_PAGE1_PORT equ 0xFD    ; Банк для страницы 1 (4000-7FFF) текущего слота
BANK_PAGE2_PORT equ 0xFE    ; Банк для страницы 2 (8000-BFFF) текущего слота
BANK_PAGE3_PORT equ 0xFF    ; Банк для страницы 3 (C000-FFFF) текущего слота

; Маски для GLOBAL_CTRL
SUPERVISOR_BIT  equ 0       ; Бит 0: supervisor_mode
NATIVE_MODE_BIT equ 1       ; Бит 1: native_mode
TRAP_HOOK_BIT   equ 2       ; Бит 2: supervisor_hook
MMIO_UNLOCK_BIT equ 4       ; Бит 4: mmio_user_unlock

; Константы
SLOT_COUNT      equ 4       ; 4 аппаратных слота
PAGES_PER_SLOT  equ 4       ; 4 страницы на слот (0-3)
BANKS_PER_SLOT  equ 256     ; 256 банков в каждом слоте (0-255)
TOTAL_MMU_REGS  equ 16      ; 16 внутренних регистров MMU (4 слота × 4 страницы)


PUBLIC _mmu_get_current_slot
PUBLIC _mmu_set_bank_for_page
PUBLIC _mmu_get_bank_for_page
PUBLIC _mmu_set_all_banks_for_current_slot
PUBLIC _mmu_set_bank_for_slot_page
PUBLIC _mmu_get_bank_for_slot_page
PUBLIC _mmu_save_full_state
PUBLIC _mmu_restore_full_state
PUBLIC _mmu_map_bank_to_address
PUBLIC _mmu_get_bank_for_address
PUBLIC _mmu_copy_cross_slot

; ============================================================================
; СЕКЦИЯ 1: ОСНОВНОЕ УПРАВЛЕНИЕ MMU
; ============================================================================

; ----------------------------------------------------------------------------
; mmu_get_current_slot - Получить текущий активный слот
; Вход: Нет
; Выход: A = текущий слот (0-3)
;         Бит 7 = 1 если супервизор, 0 если пользователь
; Сохраняет: Все, кроме AF
; ----------------------------------------------------------------------------
_mmu_get_current_slot:
mmu_get_current_slot:
    push bc
    in a, (GLOBAL_CTRL)
    bit SUPERVISOR_BIT, a
    jr z, user_mode
    
    ; Супервизорный режим
    in a, (SUPER_SLOT_PORT)
    or 0x80            ; Устанавливаем бит 7
    jr done
    
user_mode:
    ; Пользовательский режим
    in a, (USER_SLOT_PORT)
    and 0x7F           ; Сбрасываем бит 7
    
done:
    pop bc
    ret

; ----------------------------------------------------------------------------
; mmu_set_bank_for_page - Установить банк для страницы ТЕКУЩЕГО СЛОТА
; Вход: A = номер банка (0-255)
;       B = номер страницы (0-3)
; Выход: Нет
; Сохраняет: BC, DE, HL
; ----------------------------------------------------------------------------
_mmu_set_bank_for_page:
mmu_set_bank_for_page:
    push bc
    push af
    
    ; Вычисляем порт: BANK_PAGE0_PORT + номер_страницы
    ld c, BANK_PAGE0_PORT
    ld a, b
    add a, c
    ld c, a
    
    pop af
    out (c), a          ; Устанавливаем банк
    
    pop bc
    ret

; ----------------------------------------------------------------------------
; mmu_get_bank_for_page - Получить банк для страницы ТЕКУЩЕГО СЛОТА
; Вход: B = номер страницы (0-3)
; Выход: A = номер банка
; Сохраняет: BC, DE, HL
; ----------------------------------------------------------------------------
_mmu_get_bank_for_page:
mmu_get_bank_for_page:
    push bc
    
    ; Вычисляем порт: BANK_PAGE0_PORT + номер_страницы
    ld c, BANK_PAGE0_PORT
    ld a, b
    add a, c
    ld c, a
    
    in a, (c)           ; Читаем банк
    
    pop bc
    ret

; ----------------------------------------------------------------------------
; mmu_set_all_banks_for_current_slot - Установить все 4 банка для текущего слота
; Вход: HL = указатель на массив из 4 байт [bank_page0, bank_page1, bank_page2, bank_page3]
; Выход: Нет
; Сохраняет: Все, кроме AF, BC, HL
; ----------------------------------------------------------------------------
_mmu_set_all_banks_for_current_slot:
mmu_set_all_banks_for_current_slot:
    ld bc, 0x04FC       ; B=4, C=BANK_PAGE0_PORT
    otir
    ret

; ============================================================================
; СЕКЦИЯ 2: РАСШИРЕННЫЕ ОПЕРАЦИИ (работа со всеми слотами)
; ============================================================================

; ----------------------------------------------------------------------------
; mmu_set_bank_for_slot_page - Установить банк для конкретного слота и страницы
; Вход: A = номер слота (0-3)
;       B = номер страницы (0-3)
;       C = номер банка (0-255)
; Выход: Нет
; Сохраняет: DE, HL
; ----------------------------------------------------------------------------
_mmu_set_bank_for_slot_page:
mmu_set_bank_for_slot_page:
    push af
    push bc
    
    ; Сохраняем текущий слот
    call mmu_get_current_slot
    push af
    
    ; Переключаемся в целевой слот
    ld a, b
    call set_slot_temporary
    
    ; Устанавливаем банк для страницы
    ld a, c
    ld b, d            ; B = номер страницы (из входа)
    call mmu_set_bank_for_page
    
    ; Восстанавливаем оригинальный слот
    pop af
    call set_slot_temporary
    
    pop bc
    pop af
    ret

set_slot_temporary:
    ; A = слот (бит 7 = супервизор/пользователь)
    bit 7, a
    jr nz, set_supervisor_slot
    
    ; Пользовательский слот
    and 0x7F
    out (USER_SLOT_PORT), a
    ret
    
set_supervisor_slot:
    ; Супервизорный слот
    and 0x7F
    out (SUPER_SLOT_PORT), a
    ret

; ----------------------------------------------------------------------------
; mmu_get_bank_for_slot_page - Получить банк для конкретного слота и страницы
; Вход: A = номер слота (0-3)
;       B = номер страницы (0-3)
; Выход: A = номер банка
; Сохраняет: DE, HL
; ----------------------------------------------------------------------------
_mmu_get_bank_for_slot_page:
mmu_get_bank_for_slot_page:
    push bc
    
    ; Сохраняем текущий слот
    call mmu_get_current_slot
    push af
    
    ; Переключаемся в целевой слот
    ld a, b
    call set_slot_temporary
    
    ; Получаем банк для страницы
    ld b, d            ; B = номер страницы (из входа)
    call mmu_get_bank_for_page
    ld e, a            ; Сохраняем результат
    
    ; Восстанавливаем оригинальный слот
    pop af
    call set_slot_temporary
    
    ; Возвращаем результат
    ld a, e
    
    pop bc
    ret


; ----------------------------------------------------------------------------
; mmu_save_full_state - Сохранить состояние всего маппера (16 регистров)
; Вход: HL = указатель на буфер (16 байт)
; Выход: Нет
; Сохраняет: Все
; ----------------------------------------------------------------------------
_mmu_save_full_state:
mmu_save_full_state:
    push af
    push bc
    push de
    push hl
    
    ld de, hl          ; DE = указатель на буфер
    
    ; Сохраняем текущий режим и слоты
    in a, (GLOBAL_CTRL)
    ld (de), a
    inc de
    in a, (SUPER_SLOT_PORT)
    ld (de), a
    inc de
    in a, (USER_SLOT_PORT)
    ld (de), a
    inc de
    
    ; Сохраняем банки через MMU_EXT (FF00E0-FF00EF)
    ; TODO: Реализовать доступ через MMIO_WINDOW
    
    pop hl
    pop de
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; mmu_restore_full_state - Восстановить состояние всего маппера
; Вход: HL = указатель на буфер (16 байт)
; Выход: Нет
; Сохраняет: Все
; ----------------------------------------------------------------------------
_mmu_restore_full_state:
mmu_restore_full_state:
    push af
    push bc
    push de
    push hl
    
    ld de, hl          ; DE = указатель на буфер
    
    ; Восстанавливаем GLOBAL_CTRL
    ld a, (de)
    out (GLOBAL_CTRL), a
    inc de
    
    ; Восстанавливаем слоты
    ld a, (de)
    out (SUPER_SLOT_PORT), a
    inc de
    ld a, (de)
    out (USER_SLOT_PORT), a
    inc de
    
    ; Восстанавливаем банки через MMU_EXT
    ; TODO: Реализовать доступ через MMIO_WINDOW
    
    pop hl
    pop de
    pop bc
    pop af
    ret

; ============================================================================
; СЕКЦИЯ 3: УТИЛИТЫ ДЛЯ РАБОТЫ С ПАМЯТЬЮ
; ============================================================================

; ----------------------------------------------------------------------------
; mmu_map_bank_to_address - Отобразить банк по конкретному адресу
; Вход: A = номер банка
;       HL = логический адрес (0000-FFFF)
; Выход: Нет
; Сохраняет: BC, DE
; ----------------------------------------------------------------------------
_mmu_map_bank_to_address:
mmu_map_bank_to_address:
    push af
    push bc
    
    ; Определяем страницу по адресу
    ld a, h
    and 0xC0           ; Берем старшие 2 бита адреса
    rrca
    rrca               ; A = 0,1,2,3 (страница)
    ld b, a
    
    pop af              ; A = номер банка
    call mmu_set_bank_for_page
    
    pop af
    ret

; ----------------------------------------------------------------------------
; mmu_get_bank_for_address - Получить банк отображенный по адресу
; Вход: HL = логический адрес
; Выход: A = номер банка
; Сохраняет: BC, DE
; ----------------------------------------------------------------------------
_mmu_get_bank_for_address:
mmu_get_bank_for_address:
    push bc
    
    ; Определяем страницу по адресу
    ld a, h
    and 0xC0           ; Берем старшие 2 бита адреса
    rrca
    rrca               ; A = 0,1,2,3 (страница)
    ld b, a
    
    call mmu_get_bank_for_page
    
    pop bc
    ret

; ----------------------------------------------------------------------------
; mmu_copy_cross_slot - Копировать между разными слотами
; Вход: A = слот источника
;       B = банк источника
;       C = слот приемника
;       D = банк приемника
;       HL = размер (в байтах)
; Выход: Нет
; Сохраняет: Все
; ----------------------------------------------------------------------------
_mmu_copy_cross_slot:
mmu_copy_cross_slot:
    push af
    push bc
    push de
    push hl
    push ix
    
    ; Сохраняем полное состояние
    ld ix, save_buffer
    call mmu_save_full_state
    
    ; Настраиваем источник
    ld a, b            ; A = слот источника
    call set_source
    
    ; Настраиваем приемник
    ld a, d            ; A = слот приемника
    call set_dest
    
    ; TODO: Реализовать копирование через временные страницы
    
    ; Восстанавливаем состояние
    ld ix, save_buffer
    call mmu_restore_full_state
    
    pop ix
    pop hl
    pop de
    pop bc
    pop af
    ret

set_source:
    ; TODO: Настроить источник в страницу 2
    ret

set_dest:
    ; TODO: Настроить приемник в страницу 3
    ret

save_buffer:   ds 20

; ============================================================================
; МАКРОСЫ С ПРАВИЛЬНОЙ ТЕРМИНОЛОГИЕЙ
; ============================================================================

; Пример макроса для быстрой установки банка
; MACRO SET_BANK_FOR_PAGE bank, page
;     ld a, bank
;     ld b, page
;     call mmu_set_bank_for_page
; ENDM

; MACRO SET_PAGE0_BANK bank
;     ld a, bank
;     out (BANK_PAGE0_PORT), a
; ENDM

; MACRO SET_PAGE1_BANK bank
;     ld a, bank
;     out (BANK_PAGE1_PORT), a
; ENDM

; MACRO SET_PAGE2_BANK bank
;     ld a, bank
;     out (BANK_PAGE2_PORT), a
; ENDM

; MACRO SET_PAGE3_BANK bank
;     ld a, bank
;     out (BANK_PAGE3_PORT), a
; ENDM

; MACRO SWITCH_TO_SLOT slot, is_supervisor
;     ld a, slot
;     IF is_supervisor
;         out (SUPER_SLOT_PORT), a
;     ELSE
;         out (USER_SLOT_PORT), a
;     ENDIF
; ENDM

; ============================================================================
; ЭКСПОРТИРУЕМЫЕ ФУНКЦИИ
; ============================================================================

; Основные функции:
; mmu_get_current_slot
; mmu_set_bank_for_page
; mmu_get_bank_for_page
; mmu_set_all_banks_for_current_slot

; Расширенные функции:
; mmu_set_bank_for_slot_page
; mmu_get_bank_for_slot_page
; mmu_save_full_state
; mmu_restore_full_state

; Утилиты:
; mmu_map_bank_to_address
; mmu_get_bank_for_address
; mmu_copy_cross_slot