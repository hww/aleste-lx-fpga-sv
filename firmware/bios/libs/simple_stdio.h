#ifndef SIMPLE_STDIO_H
#define SIMPLE_STDIO_H

#include <stdint.h>

// ==================== КОНФИГУРАЦИЯ ====================
#define USE_OUTPUT_BUFFER  1    // 1 - с буфером, 0 - без
#define BUFFER_SIZE       64    // Размер буфера (16, 32, 64, 128)
#define USE_VARARGS       1     // 1 - поддержка переменных аргументов
#define USE_DIRECT_ASM    1     // 1 - использовать ASM для критичных функций

// ==================== БАЗОВЫЕ ФУНКЦИИ ====================

// Должны быть реализованы пользователем (внешние зависимости)
extern void _putchar_raw(char c);          // Вывод одного символа
extern void _puts_raw(const char *s);      // Вывод строки (оптимизированный ASM)

// ==================== ФИКСИРОВАННЫЕ ФОРМАТЫ (1) ====================
// Максимальная скорость, минимум кода

// Вывод десятичного числа (быстрая версия)
void put_dec(int16_t value);

// Вывод hex (быстрая версия)
void put_hex(uint16_t value);

// Вывод hex с префиксом "0x"
void put_hex_prefix(uint16_t value);

// Вывод двоичного числа (8/16 бит)
void put_bin8(uint8_t value);
void put_bin16(uint16_t value);

// Вывод с меткой (фиксированный формат)
void print_label_dec(const char *label, int16_t value);
void print_label_hex(const char *label, uint16_t value);

// ==================== БУФЕРИЗАЦИЯ (3) ====================
#if USE_OUTPUT_BUFFER

// Инициализация буфера
void stdio_init(void);

// Принудительный сброс буфера
void flush(void);

// Быстрый вывод в буфер (внутренние функции)
void _buf_char(char c);
void _buf_str(const char *s);

// Обертки для пользователя
#define putchar(c)   _buf_char(c)
#define puts(s)      _buf_str(s)

#else
// Без буфера - прямой вывод
#define putchar(c)   _putchar_raw(c)
#define puts(s)      _puts_raw(s)
#define flush()      // ничего
#define stdio_init() // ничего
#endif

// ==================== ФОРМАТНЫЙ ВЫВОД (2) ====================
#if USE_VARARGS

// Основной форматтер (подмножество printf)
// Поддерживает: %d %i %u %x %X %c %s %%
void printf(const char *fmt, ...);

// Вывод с автоматическим flush
void printf_flush(const char *fmt, ...);

// Вывод в буфер без автоматического flush
void sprintf_buf(char *buf, const char *fmt, ...);

#else
// Если varargs отключены - используем макросы
#define printf(fmt, ...) // nothing
#endif

// ==================== УТИЛИТЫ ====================

// Быстрый вывод строки (через ASM если включено)
void fast_puts(const char *s);

// Вывод CRLF
void newline(void);

// Разделитель
void separator(void);

// Дамп памяти
void mem_dump(const uint8_t *data, uint16_t len, uint8_t per_line);

#endif // SIMPLE_STDIO_H