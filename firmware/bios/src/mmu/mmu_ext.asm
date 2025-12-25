; ============================================================================
; MMU EXTENDED FUNCTIONS
; ============================================================================
module mmu_extended

EXTERN _mmu_get_slot, _mmu_set_page, _mmu_get_page
EXTERN _mmu_save_state, _mmu_restore_state
EXTERN _mmu_map, _mmu_get_mapped

; ---- ДАННЫЕ ----
SECTION MMU_EXT_DATA

; Структура контекста MMU (40 байт)
mmu_context:        ds 40

; ---- КОНСТАНТЫ ----
MMU_WINDOW_SIZE     equ 0x4000  ; 16KB окно

; ==================== РАСШИРЕННЫЕ ФУНКЦИИ ====================

SECTION MMU_EXT_CODE

; ----------------------------------------------------------------------------
; mmu_setup_window - Настройка окна для работы с другим слотом
; Вход: A = целевой слот (0-3, бит 7=супервизор)
;       B = страница для окна (0-3)
; Выход: A = 0 (успех)
; ----------------------------------------------------------------------------
PUBLIC _mmu_setup_window
_mmu_setup_window:
mmu_setup_window_:
    push bc
    push de
    push hl
    
    ; Сохраняем текущий слот
    call _mmu_get_slot
    push af
    
    ; Переключаемся в целевой слот
    call _mmu_set_slot
    
    ; Сохраняем текущий банк страницы
    call _mmu_get_page
    push af
    
    ; Устанавливаем специальный банк для окна
    ld a, b
    add a, 0x80      ; Банки окна начинаются с 0x80
    call _mmu_set_page
    
    ; Восстанавливаем оригинальный банк
    pop af
    call _mmu_set_page
    
    ; Восстанавливаем оригинальный слот
    pop af
    call _mmu_set_slot
    
    xor a  ; Успех
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; mmu_get_context - Получить текущий контекст MMU
; Вход: HL = указатель на буфер (40 байт)
; Выход: Буфер заполнен контекстом
; ----------------------------------------------------------------------------
PUBLIC _mmu_get_context
_mmu_get_context:
mmu_get_context_:
    push af
    push bc
    push de
    push hl
    
    ld de, hl
    
    ; Сохраняем текущий слот
    call _mmu_get_slot
    ld (de), a
    inc de
    
    ; Сохраняем банки страниц
    ld b, 0
    call _mmu_get_page
    ld (de), a
    inc de
    
    ld b, 1
    call _mmu_get_page
    ld (de), a
    inc de
    
    ld b, 2
    call _mmu_get_page
    ld (de), a
    inc de
    
    ld b, 3
    call _mmu_get_page
    ld (de), a
    inc de
    
    ; Сохраняем глобальные регистры
    in a, (0xF0)    ; GLOBAL_CTRL
    ld (de), a
    inc de
    
    in a, (0xF9)    ; SUPER_SLOT_PORT
    ld (de), a
    inc de
    
    in a, (0xFB)    ; USER_SLOT_PORT
    ld (de), a
    
    pop hl
    pop de
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; mmu_set_context - Установить контекст MMU
; Вход: HL = указатель на сохраненный контекст
; ----------------------------------------------------------------------------
PUBLIC _mmu_set_context
_mmu_set_context:
mmu_set_context_:
    push af
    push bc
    push de
    push hl
    
    ld de, hl
    
    ; Восстанавливаем слот
    ld a, (de)
    call _mmu_set_slot
    inc de
    
    ; Восстанавливаем банки страниц
    ld b, 0
    ld a, (de)
    call _mmu_set_page
    inc de
    
    ld b, 1
    ld a, (de)
    call _mmu_set_page
    inc de
    
    ld b, 2
    ld a, (de)
    call _mmu_set_page
    inc de
    
    ld b, 3
    ld a, (de)
    call _mmu_set_page
    inc de
    
    ; Восстанавливаем глобальные регистры
    ld a, (de)
    out (0xF0), a   ; GLOBAL_CTRL
    inc de
    
    ld a, (de)
    out (0xF9), a   ; SUPER_SLOT_PORT
    inc de
    
    ld a, (de)
    out (0xFB), a   ; USER_SLOT_PORT
    
    pop hl
    pop de
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; mmu_set_all_banks_for_current_slot - Установить все банки
; Вход: HL = указатель на массив из 4 байт
; ----------------------------------------------------------------------------
PUBLIC _mmu_set_all_banks_for_current_slot
_mmu_set_all_banks_for_current_slot:
mmu_set_all_banks_:
    push af
    push bc
    push hl
    
    ld b, 0
@loop:
    ld a, (hl)
    call _mmu_set_page
    inc hl
    inc b
    ld a, b
    cp 4
    jr nz, @loop
    
    pop hl
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; mmu_set_bank_for_slot_page - Установить банк для слота и страницы
; Вход: A = слот, B = страница, C = банк
; ----------------------------------------------------------------------------
PUBLIC _mmu_set_bank_for_slot_page
_mmu_set_bank_for_slot_page:
mmu_set_bank_slot_page_:
    push af
    push bc
    push de
    push hl
    
    ; Сохраняем параметры
    ld e, a          ; E = слот
    ld d, b          ; D = страница
    ld b, c          ; B = банк (временно)
    
    ; Сохраняем текущий слот
    call _mmu_get_slot
    push af
    
    ; Переключаемся в целевой слот
    ld a, e
    call _mmu_set_slot
    
    ; Устанавливаем банк
    ld a, b
    ld b, d
    call _mmu_set_page
    
    ; Восстанавливаем оригинальный слот
    pop af
    call _mmu_set_slot
    
    pop hl
    pop de
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; mmu_get_bank_for_slot_page - Получить банк для слота и страницы
; Вход: A = слот, B = страница
; Выход: A = банк
; ----------------------------------------------------------------------------
PUBLIC _mmu_get_bank_for_slot_page
_mmu_get_bank_for_slot_page:
mmu_get_bank_slot_page_:
    push bc
    push de
    push hl
    
    ; Сохраняем параметры
    ld e, a          ; E = слот
    
    ; Сохраняем текущий слот
    call _mmu_get_slot
    push af
    
    ; Переключаемся в целевой слот
    ld a, e
    call _mmu_set_slot
    
    ; Получаем банк
    call _mmu_get_page
    
    ; Восстанавливаем оригинальный слот
    pop bc
    ld a, b
    call _mmu_set_slot
    
    pop hl
    pop de
    pop bc
    ret

; ----------------------------------------------------------------------------
; mmu_copy_cross_slot - Копировать между слотами
; Вход: A = слот источника, B = банк источника
;       C = слот приемника, D = банк приемника
;       HL = размер
; ----------------------------------------------------------------------------
PUBLIC _mmu_copy_cross_slot
_mmu_copy_cross_slot:
mmu_copy_cross_slot_:
    push af
    push bc
    push de
    push hl
    push ix
    push iy
    
    ; Сохраняем параметры
    ld ixh, a       ; IXH = слот источника
    ld ixl, b       ; IXL = банк источника
    ld iyh, c       ; IYH = слот приемника
    ld iyl, d       ; IYL = банк приемника
    
    ; Сохраняем текущий слот
    call _mmu_get_slot
    push af
    
    ; Настраиваем источник
    ld a, ixh
    call _mmu_set_slot
    ld a, ixl
    ld b, 0
    call _mmu_set_page
    
    ; Копируем в буфер
    ld de, copy_buffer
    ld bc, hl
    ldir
    
    ; Настраиваем приемник
    ld a, iyh
    call _mmu_set_slot
    ld a, iyl
    ld b, 0
    call _mmu_set_page
    
    ; Копируем из буфера
    ld hl, copy_buffer
    ld bc, hl
    ldir
    
    ; Восстанавливаем оригинальный слот
    pop af
    call _mmu_set_slot
    
    pop iy
    pop ix
    pop hl
    pop de
    pop bc
    pop af
    ret

; ----------------------------------------------------------------------------
; mmu_enable_supervisor - Включить режим супервизора
; ----------------------------------------------------------------------------
PUBLIC _mmu_enable_supervisor
_mmu_enable_supervisor:
mmu_enable_supervisor_:
    push af
    in a, (0xF0)
    set 0, a
    out (0xF0), a
    pop af
    ret

; ----------------------------------------------------------------------------
; mmu_disable_supervisor - Выключить режим супервизора
; ----------------------------------------------------------------------------
PUBLIC _mmu_disable_supervisor
_mmu_disable_supervisor:
mmu_disable_supervisor_:
    push af
    in a, (0xF0)
    res 0, a
    out (0xF0), a
    pop af
    ret

; ----------------------------------------------------------------------------
; mmu_is_supervisor - Проверить режим супервизора
; Выход: A = 0 (пользователь), 1 (супервизор)
; ----------------------------------------------------------------------------
PUBLIC _mmu_is_supervisor
_mmu_is_supervisor:
mmu_is_supervisor_:
    push bc
    in a, (0xF0)
    and 1
    pop bc
    ret

; ==================== ДАННЫЕ ====================

SECTION MMU_EXT_BUFFER

; Буфер для копирования между слотами
copy_buffer:        ds 4096  ; 4KB буфер

; ----------------------------------------------------------------------------
; Старые имена для совместимости
; ----------------------------------------------------------------------------
PUBLIC _mmu_get_current_slot
_mmu_get_current_slot:
    jp _mmu_get_slot

PUBLIC _mmu_set_bank_for_page
_mmu_set_bank_for_page:
    jp _mmu_set_page

PUBLIC _mmu_get_bank_for_page
_mmu_get_bank_for_page:
    jp _mmu_get_page

PUBLIC _mmu_save_full_state
_mmu_save_full_state:
    jp _mmu_save_state

PUBLIC _mmu_restore_full_state
_mmu_restore_full_state:
    jp _mmu_restore_state

PUBLIC _mmu_map_bank_to_address
_mmu_map_bank_to_address:
    jp _mmu_map

PUBLIC _mmu_get_bank_for_address
_mmu_get_bank_for_address:
    jp _mmu_get_mapped