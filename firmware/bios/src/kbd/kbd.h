#ifndef KBD_API_H
#define KBD_API_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// ==================== КОНСТАНТЫ ====================

// Коды ошибок
#define KBD_NO_ERROR           0x00
#define KBD_NOT_INITIALIZED    0x01
#define KBD_BUFFER_OVERFLOW    0x02
#define KBD_HARDWARE_ERROR     0x03

// Коды специальных клавиш
#define KBD_KEY_NONE           0xFF
#define KBD_KEY_F1             0x01
#define KBD_KEY_F2             0x02
#define KBD_KEY_F3             0x03
#define KBD_KEY_F4             0x04
#define KBD_KEY_F5             0x05
#define KBD_KEY_F6             0x06
#define KBD_KEY_F7             0x07
#define KBD_KEY_F8             0x08
#define KBD_KEY_F9             0x09
#define KBD_KEY_F10            0x0A
#define KBD_KEY_F11            0x0B
#define KBD_KEY_F12            0x0C
#define KBD_KEY_UP             0x50
#define KBD_KEY_DOWN           0x51
#define KBD_KEY_LEFT           0x52
#define KBD_KEY_RIGHT          0x53
#define KBD_KEY_HOME           0x47
#define KBD_KEY_END            0x4F
#define KBD_KEY_PGUP           0x49
#define KBD_KEY_PGDN           0x51
#define KBD_KEY_INSERT         0x45
#define KBD_KEY_DELETE         0x46
#define KBD_KEY_ENTER          0x0D
#define KBD_KEY_ESC            0x1B
#define KBD_KEY_TAB            0x09
#define KBD_KEY_BACKSPACE      0x08
#define KBD_KEY_SPACE          0x20

// Модификаторы
#define KBD_MOD_SHIFT          0x01
#define KBD_MOD_CTRL           0x02
#define KBD_MOD_ALT            0x04
#define KBD_MOD_CAPS           0x08
#define KBD_MOD_NUM            0x10
#define KBD_MOD_SCROLL         0x20

// ==================== ФУНКЦИИ ====================

// Инициализация
void sys_kbd_init(void);

// Основные функции ввода
uint8_t sys_kbd_get_key(void);
uint8_t sys_kbd_check_key(uint8_t scancode);
uint8_t sys_kbd_wait_key(void);

// Управление автоповтором
void sys_kbd_set_repeat(uint16_t delay_ms, uint16_t rate_ms);

// Состояние модификаторов
uint8_t sys_kbd_get_shift_state(void);
uint8_t sys_kbd_is_shift_pressed(void);
uint8_t sys_kbd_is_ctrl_pressed(void);
uint8_t sys_kbd_is_alt_pressed(void);

// Управление буфером
void sys_kbd_clear_buffer(void);

// Вспомогательные функции
char sys_kbd_scancode_to_ascii(uint8_t scancode);
uint8_t sys_kbd_ascii_to_scancode(char ascii);

// Расширенные функции
uint8_t sys_kbd_get_key_with_mods(uint8_t* scancode, uint8_t* modifiers);
uint8_t sys_kbd_wait_key_with_mods(uint8_t* scancode, uint8_t* modifiers);
void sys_kbd_set_leds(uint8_t caps, uint8_t num, uint8_t scroll);

// ==================== СТРУКТУРЫ ====================

// Структура для расширенного ввода
typedef struct {
    uint8_t scancode;      // Код клавиши
    uint8_t modifiers;     // Состояние модификаторов
    uint8_t ascii;         // ASCII символ (если есть)
    uint8_t is_pressed;    // 1=нажата, 0=отпущена
} kbd_event_t;

// Структура конфигурации
typedef struct {
    uint16_t repeat_delay; // Задержка автоповтора
    uint16_t repeat_rate;  // Скорость автоповтора
    uint8_t  buffer_size;  // Размер буфера
    uint8_t  led_state;    // Состояние индикаторов
} kbd_config_t;

// Функции работы со структурой
void sys_kbd_get_config(kbd_config_t* config);
void sys_kbd_set_config(const kbd_config_t* config);
uint8_t sys_kbd_read_event(kbd_event_t* event);

#ifdef __cplusplus
}
#endif

#endif // KBD_API_H