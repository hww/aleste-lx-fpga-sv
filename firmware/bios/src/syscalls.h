/* syscalls.h - Заголовок для таблицы вызовов */
#ifndef __SYSCALLS_H__
#define __SYSCALLS_H__

/* ==================== ТИПЫ ФУНКЦИЙ ==================== */

/* Видео драйвер */
typedef void (*clear_screen_t)(void);
typedef void (*put_char_t)(char c, unsigned char x, unsigned char y);
typedef void (*init_video_t)(void);

/* MMU драйвер - КОРРЕКТНЫЕ сигнатуры из mmu_api.asm */
typedef unsigned char (*mmu_get_current_slot_t)(void);
typedef void (*mmu_set_bank_for_page_t)(unsigned char bank, unsigned char page);
typedef unsigned char (*mmu_get_bank_for_page_t)(unsigned char page);
typedef void (*mmu_set_all_banks_for_current_slot_t)(unsigned char* banks_array);

typedef void (*mmu_set_bank_for_slot_page_t)(unsigned char slot, unsigned char page, unsigned char bank);
typedef unsigned char (*mmu_get_bank_for_slot_page_t)(unsigned char slot, unsigned char page);
typedef void (*mmu_save_full_state_t)(unsigned char* buffer);
typedef void (*mmu_restore_full_state_t)(unsigned char* buffer);

typedef void (*mmu_map_bank_to_address_t)(unsigned char bank, unsigned int address);
typedef unsigned char (*mmu_get_bank_for_address_t)(unsigned int address);
typedef void (*mmu_copy_cross_slot_t)(unsigned char src_slot, unsigned char src_bank, 
                                      unsigned char dst_slot, unsigned char dst_bank, 
                                      unsigned int size);

/* ==================== КОНСТАНТЫ ==================== */

/* Флаги для mmu_get_current_slot */
#define MMU_SUPERVISOR_FLAG  0x80
#define MMU_SLOT_MASK        0x03

/* Размеры буферов */
#define MMU_FULL_STATE_SIZE  16

/* ==================== ВНЕШНИЕ ОБЪЯВЛЕНИЯ ==================== */

/* Видео функции (адреса из jump_table.asm) */
extern init_video_t sys_init_video;           /* 0xFD00 */
extern clear_screen_t sys_clear_screen;       /* 0xFD03 */
extern put_char_t sys_put_char;               /* 0xFD06 */

/* MMU функции (адреса из jump_table.asm) */
extern mmu_get_current_slot_t sys_mmu_get_current_slot;               /* 0xFD09 */
extern mmu_set_bank_for_page_t sys_mmu_set_bank_for_page;             /* 0xFD0C */
extern mmu_get_bank_for_page_t sys_mmu_get_bank_for_page;             /* 0xFD0F */
extern mmu_set_all_banks_for_current_slot_t sys_banks_for_current_slot; /* 0xFD12 */
extern mmu_set_bank_for_slot_page_t sys_mmu_set_bank_for_slot_page;   /* 0xFD15 */
extern mmu_get_bank_for_slot_page_t sys_mmu_get_bank_for_slot_page;   /* 0xFD18 */
extern mmu_save_full_state_t sys_mmu_save_full_state;                 /* 0xFD1B */
extern mmu_restore_full_state_t sys_mmu_restore_full_state;           /* 0xFD1E */
extern mmu_map_bank_to_address_t sys_mmu_map_bank_to_address;         /* 0xFD21 */
extern mmu_get_bank_for_address_t sys_mmu_get_bank_for_address;       /* 0xFD24 */
extern mmu_copy_cross_slot_t sys_mmu_copy_cross_slot;                 /* 0xFD27 */

/* Константы */
extern unsigned char* sys_font_data;             /* 0xFD2A (dw _font_data) */

/* ==================== УТИЛИТНЫЕ МАКРОСЫ ==================== */

/* Получить только номер слота (0-3) */
#define mmu_get_slot_number() (sys_mmu_get_current_slot() & MMU_SLOT_MASK)

/* Проверить, находимся ли в супервизорном режиме */
#define mmu_is_supervisor() ((sys_mmu_get_current_slot() & MMU_SUPERVISOR_FLAG) != 0)

/* Получить страницу по адресу (0-3) */
#define mmu_get_page_from_address(addr) (((addr) >> 14) & 0x03)

/* ==================== ПРОСТОЙ ИНТЕРФЕЙС ==================== */

/* Старые имена (для обратной совместимости) */
#define clear_screen() sys_clear_screen()
#define put_char(c, x, y) sys_put_char(c, x, y)
#define init_video() sys_init_video()

/* Упрощенные вызовы MMU */
#define mmu_set_page_bank(page, bank) sys_mmu_set_bank_for_page(bank, page)
#define mmu_get_page_bank(page) sys_mmu_get_bank_for_page(page)
#define mmu_map_bank_to_addr(bank, addr) sys_mmu_map_bank_to_address(bank, addr)

#endif /* __SYSCALLS_H__ */