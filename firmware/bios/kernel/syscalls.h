#ifndef SYS_API_H
#define SYS_API_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// ----- КОНСТАНТЫ -----
#define SYS_API_VERSION 0x0200

// Коды ошибок
enum {
    SYS_NO_ERROR = 0x00,
    SYS_INVALID_PARAMETER = 0x01,
    SYS_OUT_OF_MEMORY = 0x02,
    SYS_DEVICE_ERROR = 0x03,
    SYS_FILE_NOT_FOUND = 0x04,
    SYS_ACCESS_DENIED = 0x05,
    SYS_DISK_FULL = 0x06,
    SYS_TIMEOUT = 0x07,
    SYS_NOT_IMPLEMENTED = 0x08,
    SYS_BUSY = 0x09,
    SYS_INVALID_SLOT = 0x0A,
    SYS_INVALID_BANK = 0x0B,
    SYS_INVALID_ADDRESS = 0x0C,
    SYS_UNKNOWN_ERROR = 0xFF
};

// ----- ВИДЕО ДРАЙВЕР -----
void sys_scr_init_video(void);
void sys_scr_clear_screen(void);
void sys_scr_put_char(char c, uint8_t x, uint8_t y);
void sys_scr_put_string(const char* str);
void sys_scr_set_cursor(uint8_t x, uint8_t y);
void sys_scr_get_cursor(uint8_t* x, uint8_t* y);
void sys_scr_scroll_up(void);
void sys_scr_set_color(uint8_t fg, uint8_t bg);
void sys_scr_get_color(uint8_t* fg, uint8_t* bg);
void sys_scr_draw_pixel(uint16_t x, uint16_t y, uint8_t color);
void sys_scr_draw_line(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint8_t color);
void sys_scr_draw_rect(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint8_t color);

// ----- MMU ДРАЙВЕР (БАЗОВЫЕ) -----
uint8_t sys_mmu_get_slot(void);
void sys_mmu_set_slot(uint8_t slot);
void sys_mmu_set_page(uint8_t bank, uint8_t page);
uint8_t sys_mmu_get_page(uint8_t page);

// ----- MMU ДРАЙВЕР (LEGACY-СОВМЕСТИМЫЕ) -----
uint8_t sys_mmu_read(uint8_t slot, uint16_t address);
void sys_mmu_write(uint8_t slot, uint16_t address, uint8_t value);
void sys_mmu_call(uint8_t slot, void (*func)(void));
void sys_mmu_jump(uint8_t slot, void* address);

// ----- MMU ДРАЙВЕР (РАСШИРЕННЫЕ) -----
void sys_mmu_save_state(uint8_t* buffer);
void sys_mmu_restore_state(const uint8_t* buffer);
void sys_mmu_map(uint8_t bank, uint16_t address);
uint8_t sys_mmu_get_mapped(uint16_t address);
void sys_mmu_setup_window(uint8_t slot, uint8_t page);
void sys_mmu_get_context(void* context);
void sys_mmu_set_context(const void* context);

// ----- MMU ДРАЙВЕР (СТАРЫЕ ИМЕНА ДЛЯ СОВМЕСТИМОСТИ) -----
uint8_t sys_mmu_get_current_slot(void);
void sys_mmu_set_bank_for_page(uint8_t bank, uint8_t page);
uint8_t sys_mmu_get_bank_for_page(uint8_t page);
void sys_mmu_set_all_banks_for_current_slot(const uint8_t* banks);
void sys_mmu_set_bank_for_slot_page(uint8_t slot, uint8_t page, uint8_t bank);
uint8_t sys_mmu_get_bank_for_slot_page(uint8_t slot, uint8_t page);
void sys_mmu_save_full_state(void* buffer);
void sys_mmu_restore_full_state(const void* buffer);
void sys_mmu_map_bank_to_address(uint8_t bank, uint16_t address);
uint8_t sys_mmu_get_bank_for_address(uint16_t address);
void sys_mmu_copy_cross_slot(uint8_t src_slot, uint8_t src_bank, 
                            uint8_t dst_slot, uint8_t dst_bank, 
                            uint16_t size);

// ----- МАКРОСЫ ДЛЯ УДОБСТВА -----
#define MMU_SLOT(num, is_supervisor) ((num) | ((is_supervisor) ? 0x80 : 0x00))
#define MMU_IS_SUPERVISOR(slot) (((slot) & 0x80) != 0)
#define MMU_SLOT_NUM(slot) ((slot) & 0x7F)

// ----- ДИСКОВЫЕ ОПЕРАЦИИ -----
uint8_t sys_disk_read(uint8_t drive, uint32_t lba, uint8_t* buffer, uint16_t count);
uint8_t sys_disk_write(uint8_t drive, uint32_t lba, const uint8_t* buffer, uint16_t count);
uint8_t sys_disk_get_status(uint8_t drive);
void sys_disk_get_info(uint8_t drive, void* info);
uint8_t sys_disk_format(uint8_t drive);
uint8_t sys_disk_seek(uint8_t drive, uint32_t lba);

// ----- ПРЕРЫВАНИЯ И ТАЙМЕРЫ -----
void sys_int_enable(void);
void sys_int_disable(void);
void sys_int_set_handler(uint8_t int_num, void (*handler)(void));
void sys_timer_start(uint8_t timer, uint32_t period_ms);
void sys_timer_stop(uint8_t timer);
uint32_t sys_timer_get_count(uint8_t timer);
uint32_t sys_get_tick_count(void);
void sys_delay_ms(uint32_t ms);

// ----- КЛАВИАТУРА -----
uint8_t sys_kbd_get_key(void);
uint8_t sys_kbd_check_key(uint8_t keycode);
uint8_t sys_kbd_wait_key(void);
void sys_kbd_set_repeat(uint16_t delay, uint16_t rate);
uint8_t sys_kbd_get_shift_state(void);

// ----- СИСТЕМНАЯ ИНФОРМАЦИЯ -----
uint16_t sys_get_version(void);
void sys_get_memory_info(void* info);
void sys_get_cpu_info(void* info);
void sys_get_time(uint8_t* hour, uint8_t* minute, uint8_t* second);
void sys_set_time(uint8_t hour, uint8_t minute, uint8_t second);
void sys_reboot(void);
void sys_shutdown(void);

// ----- УТИЛИТЫ -----
extern const uint8_t* sys_scr_font_data;
extern const uint16_t sys_api_version;
extern const uint8_t* sys_error_codes;

#ifdef __cplusplus
}
#endif

#endif // SYS_API_H