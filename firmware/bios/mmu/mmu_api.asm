; ============================================================================
; MMU API JUMP TABLE
; Располагается в банке 0x26
; ============================================================================
SECTION BANK_26_MMU_API
org 0xFF00

; ---- ПУБЛИЧНЫЕ СИМВОЛЫ ----
PUBLIC _sys_mmu_init, _sys_mmu_get_slot, _sys_mmu_set_slot
PUBLIC _sys_mmu_set_page, _sys_mmu_get_page, _sys_mmu_read, _sys_mmu_write
PUBLIC _sys_mmu_call, _sys_mmu_jump, _sys_mmu_save_state, _sys_mmu_restore_state
PUBLIC _sys_mmu_map, _sys_mmu_get_mapped, _sys_mmu_setup_window, _sys_mmu_get_context
PUBLIC _sys_mmu_set_context, _sys_mmu_enable_supervisor, _sys_mmu_disable_supervisor
PUBLIC _sys_mmu_is_supervisor, _sys_mmu_set_all_banks, _sys_mmu_set_bank_slot_page
PUBLIC _sys_mmu_get_bank_slot_page, _sys_mmu_copy_cross_slot

; ---- СТАРЫЕ ИМЕНА ДЛЯ СОВМЕСТИМОСТИ ----
PUBLIC _sys_mmu_get_current_slot, _sys_mmu_set_bank_for_page, _sys_mmu_get_bank_for_page
PUBLIC _sys_mmu_set_all_banks_for_current_slot, _sys_mmu_set_bank_for_slot_page
PUBLIC _sys_mmu_get_bank_for_slot_page, _sys_mmu_save_full_state, _sys_mmu_restore_full_state
PUBLIC _sys_mmu_map_bank_to_address, _sys_mmu_get_bank_for_address, _sys_mmu_copy_cross_slot

; ---- ВНЕШНИЕ ССЫЛКИ ----
EXTERN _mmu_init, _mmu_get_slot, _mmu_set_slot, _mmu_set_page, _mmu_get_page
EXTERN _mmu_read, _mmu_write, _mmu_call, _mmu_jump, _mmu_save_state, _mmu_restore_state
EXTERN _mmu_map, _mmu_get_mapped, _mmu_setup_window, _mmu_get_context, _mmu_set_context
EXTERN _mmu_enable_supervisor, _mmu_disable_supervisor, _mmu_is_supervisor
EXTERN _mmu_set_all_banks_for_current_slot, _mmu_set_bank_for_slot_page
EXTERN _mmu_get_bank_for_slot_page, _mmu_copy_cross_slot

; ==================== ТАБЛИЦА ПЕРЕХОДОВ ====================

; ---- ОСНОВНЫЕ ФУНКЦИИ ----
_sys_mmu_init:               jp _mmu_init
_sys_mmu_get_slot:           jp _mmu_get_slot
_sys_mmu_set_slot:           jp _mmu_set_slot
_sys_mmu_set_page:           jp _mmu_set_page
_sys_mmu_get_page:           jp _mmu_get_page
_sys_mmu_read:               jp _mmu_read
_sys_mmu_write:              jp _mmu_write
_sys_mmu_call:               jp _mmu_call
_sys_mmu_jump:               jp _mmu_jump
_sys_mmu_save_state:         jp _mmu_save_state
_sys_mmu_restore_state:      jp _mmu_restore_state
_sys_mmu_map:                jp _mmu_map
_sys_mmu_get_mapped:         jp _mmu_get_mapped

; ---- РАСШИРЕННЫЕ ФУНКЦИИ ----
_sys_mmu_setup_window:       jp _mmu_setup_window
_sys_mmu_get_context:        jp _mmu_get_context
_sys_mmu_set_context:        jp _mmu_set_context
_sys_mmu_enable_supervisor:  jp _mmu_enable_supervisor
_sys_mmu_disable_supervisor: jp _mmu_disable_supervisor
_sys_mmu_is_supervisor:      jp _mmu_is_supervisor
_sys_mmu_set_all_banks:      jp _mmu_set_all_banks_for_current_slot
_sys_mmu_set_bank_slot_page: jp _mmu_set_bank_for_slot_page
_sys_mmu_get_bank_slot_page: jp _mmu_get_bank_for_slot_page
_sys_mmu_copy_cross_slot:    jp _mmu_copy_cross_slot

; ---- СТАРЫЕ ИМЕНА ----
_sys_mmu_get_current_slot:       jp _mmu_get_slot
_sys_mmu_set_bank_for_page:      jp _mmu_set_page
_sys_mmu_get_bank_for_page:      jp _mmu_get_page
_sys_mmu_set_all_banks_for_current_slot: jp _mmu_set_all_banks_for_current_slot
_sys_mmu_set_bank_for_slot_page: jp _mmu_set_bank_for_slot_page
_sys_mmu_get_bank_for_slot_page: jp _mmu_get_bank_for_slot_page
_sys_mmu_save_full_state:        jp _mmu_save_state
_sys_mmu_restore_full_state:     jp _mmu_restore_state
_sys_mmu_map_bank_to_address:    jp _mmu_map
_sys_mmu_get_bank_for_address:   jp _mmu_get_mapped
_sys_mmu_copy_cross_slot:        jp _mmu_copy_cross_slot

; ==================== ДАННЫЕ И КОНСТАНТЫ ====================

; Таблица преобразования адресов в страницы
addr_to_page_table:
    db 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0   ; 0000-3FFF -> page 0
    db 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1   ; 4000-7FFF -> page 1
    db 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2   ; 8000-BFFF -> page 2
    db 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3   ; C000-FFFF -> page 3

; Таблица портов страниц
page_port_table:
    db 0xFC, 0xFD, 0xFE, 0xFF

; Макросы для удобства
MACRO_MMU_SLOT: 
    ; Макрос для создания макроса слота
    ret

; Заполнение до конца страницы
    ds 0xFFFF - $, 0xFF