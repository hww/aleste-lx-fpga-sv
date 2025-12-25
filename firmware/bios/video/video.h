#ifndef VIDEO_H
#define VIDEO_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// ==================== КОНСТАНТЫ ====================

// Коды ошибок
#define VIDEO_NO_ERROR          0x00
#define VIDEO_NOT_INITIALIZED   0x01
#define VIDEO_INVALID_MODE      0x02
#define VIDEO_INVALID_COLOR     0x03
#define VIDEO_INVALID_COORD     0x04
#define VIDEO_HARDWARE_ERROR    0x05
#define VIDEO_BUFFER_OVERFLOW   0x06

// Видеорежимы
#define VIDEO_MODE_TEXT_80x25   0   // Текстовый режим 80x25
#define VIDEO_MODE_640x200_1BPP 1   // 640x200, 1 бит на пиксель
#define VIDEO_MODE_320x200_4BPP 2   // 320x200, 4 бита на пиксель (16 цветов)
#define VIDEO_MODE_160x200_16C  3   // 160x200, 16 цветов (CPC Mode 0)
#define VIDEO_MODE_320x200_2BPP 4   // 320x200, 2 бита на пиксель (4 цвета)
#define VIDEO_MODE_640x200_4BPP 5   // 640x200, 4 бита на пиксель
#define VIDEO_MODE_320x200_16C  6   // 320x200, 16 цветов (32KB)
#define VIDEO_MODE_160x200_256C 7   // 160x200, 256 цветов

// Типы видео драйверов
#define VIDEO_DRIVER_NONE       0
#define VIDEO_DRIVER_CRTC6845   1   // Aleste LX, CPC
#define VIDEO_DRIVER_V9938      2   // MSX2
#define VIDEO_DRIVER_VDP2       3   // Sega Genesis
#define VIDEO_DRIVER_TMS9928    4   // MSX1, ColecoVision
#define VIDEO_DRIVER_ULA_PLUS   5   // ZX Spectrum 128K
#define VIDEO_DRIVER_EF9365     6   // Thomson MO/TO

// Режимы палитры
#define PALETTE_MODE_12BIT      0   // 12-bit native RGB
#define PALETTE_MODE_CPC        1   // CPC legacy conversion
#define PALETTE_MODE_MSX        2   // MSX compatible
#define PALETTE_MODE_YJK        3   // YJK advanced

// Цвета CPC (0-27)
#define CPC_BLACK           0
#define CPC_BLUE            1
#define CPC_BRIGHT_BLUE     2
#define CPC_PURPLE          3
#define CPC_GREEN           4
#define CPC_CYAN            5
#define CPC_BRIGHT_GREEN    6
#define CPC_BRIGHT_CYAN     7
#define CPC_RED             8
#define CPC_VIOLET          9
#define CPC_MAGENTA         10
#define CPC_BRIGHT_MAGENTA  11
#define CPC_YELLOW          12
#define CPC_WHITE           13
#define CPC_PASTEL_BLUE     14
#define CPC_BRIGHT_WHITE    15
#define CPC_DARK_RED        16
#define CPC_DARK_VIOLET     17
#define CPC_DARK_GREEN      18
#define CPC_DARK_CYAN       19
#define CPC_ORANGE          20
#define CPC_PINK            21
#define CPC_PASTEL_GREEN    22
#define CPC_PASTEL_CYAN     23
#define CPC_BRIGHT_RED      24
#define CPC_BRIGHT_VIOLET   25
#define CPC_BRIGHT_YELLOW   26
#define CPC_BRIGHT_PINK     27

// Флаги видеорежима
#define VIDEO_FLAG_INTERLACED   0x01
#define VIDEO_FLAG_HW_SPRITES   0x02
#define VIDEO_FLAG_HW_SCROLL    0x04
#define VIDEO_FLAG_HW_BLIT      0x08
#define VIDEO_FLAG_CPC_COMPAT   0x80

// ==================== СТРУКТУРЫ ====================

// Информация о видеорежиме
typedef struct {
    uint16_t width;         // Ширина в пикселях
    uint16_t height;        // Высота в пикселях
    uint8_t  depth;         // Битов на пиксель (1,2,4,8)
    uint16_t pitch;         // Байт на строку
    uint16_t vram_size;     // Размер VRAM для этого режима
    uint8_t  palette_size;  // Размер палитры
    uint8_t  flags;         // Флаги режима
} video_mode_info_t;

// Информация о драйвере
typedef struct {
    uint8_t  driver_type;   // Тип драйвера
    uint8_t  max_modes;     // Максимальное количество режимов
    uint16_t max_width;     // Максимальная ширина
    uint16_t max_height;    // Максимальная высота
    uint8_t  max_colors;    // Максимальное количество цветов
    uint8_t  capabilities;  // Возможности (битовая маска)
} video_driver_info_t;

// Цвет в 12-bit формате (RRRRGGGGBBBB)
typedef struct {
    uint16_t color;         // 12-bit цвет
} rgb12_t;

// Координаты
typedef struct {
    uint16_t x;
    uint16_t y;
} point_t;

// Прямоугольник
typedef struct {
    uint16_t x;
    uint16_t y;
    uint16_t width;
    uint16_t height;
} rect_t;

// ==================== ОСНОВНЫЕ ФУНКЦИИ ====================

// Инициализация видео системы
uint8_t sys_video_init(void);

// Управление видеорежимами
uint8_t sys_video_set_mode(uint8_t mode);
uint8_t sys_video_get_mode(void);
void    sys_video_clear_screen(void);
void    sys_video_wait_vsync(void);

// Информация
uint8_t sys_video_get_info(video_mode_info_t* info);
uint8_t sys_video_get_capabilities(video_driver_info_t* info);
uint8_t sys_video_detect_hardware(void);
uint8_t sys_video_get_driver_type(void);

// ==================== ГРАФИЧЕСКИЕ ФУНКЦИИ ====================

// Работа с пикселями
void sys_video_draw_pixel(uint16_t x, uint16_t y, uint8_t color);
uint8_t sys_video_get_pixel(uint16_t x, uint16_t y);

// Графические примитивы
void sys_video_draw_line(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint8_t color);
void sys_video_draw_rect(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint8_t color);
void sys_video_draw_circle(uint16_t x, uint16_t y, uint8_t radius, uint8_t color);

// Блочные операции
void sys_video_fill_rect(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint8_t color);
void sys_video_copy_rect(uint16_t src_x, uint16_t src_y, 
                        uint16_t dst_x, uint16_t dst_y, 
                        uint16_t w, uint16_t h);
void sys_video_scroll_up(uint8_t lines);
void sys_video_scroll_down(uint8_t lines);

// ==================== ТЕКСТОВЫЕ ФУНКЦИИ ====================

// Низкоуровневый текст
void sys_video_put_char(uint16_t x, uint16_t y, char c, uint8_t color);
void sys_video_put_string(uint16_t x, uint16_t y, const char* str, uint8_t color);

// Управление курсором
void sys_video_set_cursor(uint16_t x, uint16_t y);
void sys_video_get_cursor(uint16_t* x, uint16_t* y);

// Цвета текста
void sys_video_set_colors(uint8_t fg_color, uint8_t bg_color);
void sys_video_get_colors(uint8_t* fg_color, uint8_t* bg_color);

// ==================== ФУНКЦИИ КОНСОЛИ ====================

// Высокоуровневая консоль (автоматический перенос строк, прокрутка)
uint8_t sys_console_init(void);
void sys_console_put_char(char c);
void sys_console_put_string(const char* str);
void sys_console_clear(void);
void sys_console_set_pos(uint8_t x, uint8_t y);
void sys_console_get_pos(uint8_t* x, uint8_t* y);

// Обработка escape-последовательностей
void sys_console_process_escape(const char* sequence);

// ==================== ФУНКЦИИ ПАЛИТРЫ ====================

// Управление палитрой
uint8_t sys_palette_init(void);
uint8_t sys_palette_set_mode(uint8_t mode);

// Работа с цветами
void sys_palette_set_color(uint8_t index, rgb12_t color);
rgb12_t sys_palette_get_color(uint8_t index);

// Специальные цвета
void sys_palette_set_border(rgb12_t color);
void sys_palette_set_colors(uint8_t fg_color, uint8_t bg_color);

// Утилиты для работы с цветами
rgb12_t sys_color_8bit_to_12bit(uint8_t color_8bit);
uint8_t sys_color_12bit_to_cpc(rgb12_t color_12bit);

// ==================== УТИЛИТЫ ====================

// Преобразование координат
uint32_t sys_video_calc_address(uint16_t x, uint16_t y);
void sys_video_convert_to_pixels(uint8_t char_x, uint8_t char_y, 
                                uint16_t* pixel_x, uint16_t* pixel_y);

// Работа со шрифтами
void sys_video_set_font(const uint8_t* font_data);
void sys_video_load_font(uint8_t font_id);

// Проверка поддержки функций
uint8_t sys_video_supports_hw_sprites(void);
uint8_t sys_video_supports_hw_blit(void);
uint8_t sys_video_supports_cpc_mode(void);

// ==================== МАКРОСЫ ДЛЯ УДОБСТВА ====================

// Быстрый доступ к функциям (для встраиваемого кода)
#define VIDEO_INIT()            sys_video_init()
#define VIDEO_SET_MODE(m)       sys_video_set_mode(m)
#define VIDEO_CLEAR()           sys_video_clear_screen()
#define VIDEO_PUT_CHAR(x,y,c)   sys_video_put_char(x,y,c,15)
#define VIDEO_PUT_STR(x,y,s)    sys_video_put_string(x,y,s,15)

// Макросы для консоли
#define CONSOLE_INIT()          sys_console_init()
#define CONSOLE_PUT_CHAR(c)     sys_console_put_char(c)
#define CONSOLE_PUT_STR(s)      sys_console_put_string(s)
#define CONSOLE_CLEAR()         sys_console_clear()
#define CONSOLE_SET_POS(x,y)    sys_console_set_pos(x,y)

// Цветовые макросы
#define SET_COLORS(fg,bg)       sys_video_set_colors(fg,bg)
#define SET_PALETTE_MODE(m)     sys_palette_set_mode(m)
#define SET_BORDER_COLOR(c)     sys_palette_set_border(c)

// Проверка ошибок
#define VIDEO_CHECK_ERROR(result) \
    if ((result) != VIDEO_NO_ERROR) { \
        /* Обработка ошибки */ \
    }

// ==================== ПРИМЕРЫ ИСПОЛЬЗОВАНИЯ ====================

/*
Пример 1: Инициализация и рисование
-----------------------------------
video_init();
video_set_mode(VIDEO_MODE_320x200_4BPP);
video_clear_screen();

// Нарисовать линию
video_draw_line(10, 10, 100, 100, CPC_WHITE);

// Вывести текст
video_put_string(5, 5, "Hello, Aleste!", CPC_BRIGHT_GREEN);

Пример 2: Работа с консолью
---------------------------
console_init();
console_put_string("System ready.\n");
console_put_string("Loading module...\n");

Пример 3: Работа с палитрой
---------------------------
palette_set_mode(PALETTE_MODE_CPC);
rgb12_t color = {0x0FFF}; // Белый
palette_set_color(CPC_WHITE, color);
palette_set_border(color);

Пример 4: Анимация
------------------
while (1) {
    // Очистить старую позицию
    video_draw_pixel(old_x, old_y, CPC_BLACK);
    
    // Нарисовать в новой позиции
    video_draw_pixel(new_x, new_y, CPC_WHITE);
    
    // Ожидание VBLANK
    video_wait_vsync();
}
*/

#ifdef __cplusplus
}
#endif

#endif // VIDEO_H