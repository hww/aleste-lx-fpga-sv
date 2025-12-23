; JUMP_TABLE.ASM - Исправленная версия
SECTION code_user
;ORG 0xFD00

; ==================== ВИДЕО ДРАЙВЕР ====================
PUBLIC _sys_scr_clear_screen, _sys_scr_put_char, _sys_scr_ont_data, _sys_scr_clear_screen, _sys_scr_init_video
EXTERN _scr_clear_screen
EXTERN _scr_put_char
EXTERN _scr_clear_screen
EXTERN _scr_init_video

EXTERN _scr_font_data

; ==================== MMU ДРАЙВЕР ====================
PUBLIC _sys_mmu_get_current_slot, _sys_mmu_set_bank_for_page, _sys_mmu_get_bank_for_page
PUBLIC _sys_banks_for_current_slot, _sys_mmu_set_bank_for_slot_page, _sys_mmu_get_bank_for_slot_page
PUBLIC _sys_mmu_save_full_state, _sys_mmu_restore_full_state, _sys_mmu_map_bank_to_address
PUBLIC _sys_mmu_get_bank_for_address, _sys_mmu_copy_cross_slot

EXTERN _mmu_get_current_slot
EXTERN _mmu_set_bank_for_page
EXTERN _mmu_get_bank_for_page
EXTERN _mmu_set_all_banks_for_current_slot
EXTERN _mmu_set_bank_for_slot_page
EXTERN _mmu_get_bank_for_slot_page
EXTERN _mmu_save_full_state
EXTERN _mmu_restore_full_state
EXTERN _mmu_map_bank_to_address
EXTERN _mmu_get_bank_for_address
EXTERN _mmu_copy_cross_slot


; ==================== ТАБЛИЦА ПЕРЕХОДОВ ====================

; Видео драйвер
_sys_scr_init_video:
    jp _scr_init_video

_sys_scr_clear_screen:   
    jp _scr_clear_screen

_sys_scr_put_char:        
    jp _scr_put_char

; MMU драйвер
_sys_mmu_get_current_slot:    
    jp _mmu_get_current_slot

_sys_mmu_set_bank_for_page:   
    jp _mmu_set_bank_for_page

_sys_mmu_get_bank_for_page:  
    jp _mmu_get_bank_for_page

_sys_banks_for_current_slot:  
    jp _mmu_set_all_banks_for_current_slot

_sys_mmu_set_bank_for_slot_page: 
    jp _mmu_set_bank_for_slot_page

_sys_mmu_get_bank_for_slot_page: 
    jp _mmu_get_bank_for_slot_page

_sys_mmu_save_full_state:    
    jp _mmu_save_full_state

_sys_mmu_restore_full_state:  
    jp _mmu_restore_full_state

_sys_mmu_map_bank_to_address: 
    jp _mmu_map_bank_to_address

_sys_mmu_get_bank_for_address: 
    jp _mmu_get_bank_for_address

_sys_mmu_copy_cross_slot:     
    jp _mmu_copy_cross_slot

; ==================== КОНАСТАНТЫ ====================

_sys_scr_ont_data:
    dw _scr_font_data

; Заполняем до 0xFD40 (оставляем место для будущих функций)
defs 0xFD40 - $, 0xFF