#ifndef UTILS_API_H
#define UTILS_API_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// ==================== ФУНКЦИИ РАБОТЫ С ПАМЯТЬЮ ====================

// Копирование памяти
void sys_memcpy(void* dest, const void* src, uint16_t n);
void sys_memmove(void* dest, const void* src, uint16_t n);

// Заполнение памяти
void sys_memset(void* s, uint8_t c, uint16_t n);

// Сравнение памяти
int sys_memcmp(const void* s1, const void* s2, uint16_t n);

// Поиск в памяти
void* sys_memchr(const void* s, uint8_t c, uint16_t n);

// ==================== ФУНКЦИИ РАБОТЫ СО СТРОКАМИ ====================

// Копирование строк
void sys_strcpy(char* dest, const char* src);
void sys_strncpy(char* dest, const char* src, uint16_t n);

// Длина строки
uint16_t sys_strlen(const char* s);

// Сравнение строк
int sys_strcmp(const char* s1, const char* s2);
int sys_strncmp(const char* s1, const char* s2, uint16_t n);

// Поиск в строках
char* sys_strchr(const char* s, uint8_t c);
char* sys_strstr(const char* haystack, const char* needle);

// ==================== МАТЕМАТИЧЕСКИЕ ФУНКЦИИ ====================

// Генерация случайных чисел
uint16_t sys_rand(void);
void sys_srand(uint16_t seed);
uint16_t sys_rand_range(uint16_t max);

// Преобразования чисел и строк
int16_t sys_atoi(const char* s);
void sys_itoa(int16_t n, char* buffer);

// Быстрое умножение/деление
uint16_t sys_mul10(uint8_t n);
uint16_t sys_div10(uint16_t n);
uint8_t sys_mod10(uint16_t n);

// ==================== БИТОВЫЕ ОПЕРАЦИИ ====================

// Работа с битами
void sys_bit_set(void* ptr, uint8_t bit);
void sys_bit_clear(void* ptr, uint8_t bit);
uint8_t sys_bit_test(const void* ptr, uint8_t bit);

// Битовая арифметика
uint16_t sys_swap_bytes(uint16_t value);
uint8_t sys_rotate_left(uint8_t value, uint8_t bits);
uint8_t sys_rotate_right(uint8_t value, uint8_t bits);

// ==================== ПРЕОБРАЗОВАНИЯ ФОРМАТОВ ====================

// BCD преобразования
uint8_t sys_bcd_to_bin(uint8_t bcd);
uint8_t sys_bin_to_bcd(uint8_t bin);

// HEX преобразования
uint8_t sys_hex_to_bin(char hex);
char sys_bin_to_hex(uint8_t bin);

// ==================== УТИЛИТЫ ДЛЯ РАБОТЫ С ВРЕМЕНЕМ ====================

// Задержки на основе циклов
void sys_delay_cycles(uint16_t cycles);

// Быстрые таймеры
void sys_start_timer(void);
uint16_t sys_stop_timer(void);

// ==================== СТАНДАРТНЫЕ ФУНКЦИИ СТАНДАРТНОЙ БИБЛИОТЕКИ C ====================

// Для совместимости с stdlib.h
static inline void* memcpy(void* dest, const void* src, uint16_t n) {
    sys_memcpy(dest, src, n);
    return dest;
}

static inline void* memset(void* s, int c, uint16_t n) {
    sys_memset(s, (uint8_t)c, n);
    return s;
}

static inline int memcmp(const void* s1, const void* s2, uint16_t n) {
    return sys_memcmp(s1, s2, n);
}

static inline void* memchr(const void* s, int c, uint16_t n) {
    return sys_memchr(s, (uint8_t)c, n);
}

static inline char* strcpy(char* dest, const char* src) {
    sys_strcpy(dest, src);
    return dest;
}

static inline char* strncpy(char* dest, const char* src, uint16_t n) {
    sys_strncpy(dest, src, n);
    return dest;
}

static inline uint16_t strlen(const char* s) {
    return sys_strlen(s);
}

static inline int strcmp(const char* s1, const char* s2) {
    return sys_strcmp(s1, s2);
}

static inline int strncmp(const char* s1, const char* s2, uint16_t n) {
    return sys_strncmp(s1, s2, n);
}

static inline char* strchr(const char* s, int c) {
    return sys_strchr(s, (uint8_t)c);
}

// ==================== МАКРОСЫ ДЛЯ УДОБСТВА ====================

// Минимум и максимум
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Абсолютное значение
#define ABS(x) ((x) < 0 ? -(x) : (x))

// Ограничение значения
#define CLAMP(x, min, max) ((x) < (min) ? (min) : ((x) > (max) ? (max) : (x)))

// Проверка на четность
#define IS_EVEN(x) (((x) & 1) == 0)
#define IS_ODD(x) (((x) & 1) == 1)

// Выравнивание
#define ALIGN_UP(x, align) (((x) + (align) - 1) & ~((align) - 1))
#define ALIGN_DOWN(x, align) ((x) & ~((align) - 1))

// ==================== ПРИМЕРЫ ИСПОЛЬЗОВАНИЯ ====================

/*
Пример 1: Работа со строками
char buffer[20];
sys_strcpy(buffer, "Hello");
sys_strcat(buffer, " World!");
uint16_t len = sys_strlen(buffer);  // 12

Пример 2: Преобразования чисел
char str[10];
int16_t num = -123;
sys_itoa(num, str);  // "-123"

Пример 3: Битовые операции
uint8_t flags = 0;
sys_bit_set(&flags, 3);    // Установить бит 3
if (sys_bit_test(&flags, 3)) {
    // Бит 3 установлен
}

Пример 4: Случайные числа
sys_srand(0x1234);
uint16_t rnd = sys_rand_range(100);  // Случайное число 0-99
*/

#ifdef __cplusplus
}
#endif

#endif // UTILS_API_H