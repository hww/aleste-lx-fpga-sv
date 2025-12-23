/* syscalls.h - Простой заголовок для системных вызовов */
#ifndef _sysCALLS_H__
#define _sysCALLS_H__

/* Видео функции */
extern void sys_scr_init_video(void);          /* 0xFD00 */
extern void sys_scr_init_video(void);          /* 0xFD00 */
extern void sys_scr_clear_screen(void);        /* 0xFD03 */
extern void sys_scr_put_char(char c, unsigned char x, unsigned char y); /* 0xFD06 */

/* MMU функции */
extern unsigned char sys_mmu_get_current_slot(void);                 /* 0xFD09 */
extern void sys_mmu_set_bank_for_page(unsigned char page, unsigned char bank); /* 0xFD0C */
extern unsigned char sys_mmu_get_bank_for_page(unsigned char page); /* 0xFD0F */
extern void sys_banks_for_current_slot(unsigned char* banks_array); /* 0xFD12 */
extern void sys_mmu_set_bank_for_slot_page(unsigned char slot, unsigned char page, unsigned char bank); /* 0xFD15 */
extern unsigned char sys_mmu_get_bank_for_slot_page(unsigned char slot, unsigned char page); /* 0xFD18 */
extern void sys_mmu_save_full_state(unsigned char* buffer);         /* 0xFD1B */
extern void sys_mmu_restore_full_state(unsigned char* buffer);      /* 0xFD1E */
extern void sys_mmu_map_bank_to_address(unsigned char bank, unsigned int address); /* 0xFD21 */
extern unsigned char sys_mmu_get_bank_for_address(unsigned int address); /* 0xFD24 */
extern void sys_mmu_copy_cross_slot(unsigned char src_slot, unsigned char src_bank, 
                                    unsigned char dst_slot, unsigned char dst_bank, 
                                    unsigned int size);               /* 0xFD27 */

/* Данные */
extern const unsigned char* sys_scr_font_data; /* 0xFD2A */

#endif /* _sysCALLS_H__ */