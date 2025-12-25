#ifndef INT_API_H
#define INT_API_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// ==================== КОНСТАНТЫ ====================

// Коды ошибок прерываний
#define INT_NO_ERROR           0x00
#define INT_NOT_INITIALIZED    0x01
#define INT_INVALID_VECTOR     0x02
#define INT_HANDLER_EXISTS     0x03
#define INT_HANDLER_NOT_FOUND  0x04

// Коды ошибок таймеров
#define TIMER_NO_ERROR         0x00
#define TIMER_NOT_INITIALIZED  0x01
#define TIMER_INVALID_NUM      0x02
#define TIMER_ALREADY_RUNNING  0x03
#define TIMER_NOT_RUNNING      0x04

// Номера прерываний
#define INT_NMI                0x00
#define INT_IRQ0               0x01  // Системный таймер
#define INT_IRQ1               0x02  // Клавиатура
#define INT_IRQ2               0x03  // COM1 / Последовательный порт 1
#define INT_IRQ3               0x04  // COM2 / Последовательный порт 2
#define INT_IRQ4               0x05  // Контроллер диска
#define INT_IRQ5               0x06  // Звуковая карта
#define INT_IRQ6               0x07  // Видеоконтроллер
#define INT_IRQ7               0x08  // Пользовательское / общее
#define INT_MAX                0x08

// Количество таймеров
#define TIMER_COUNT            4
#define TIMER_SYSTEM           0     // Системный таймер
#define TIMER_USER1            1     // Пользовательский таймер 1
#define TIMER_USER2            2     // Пользовательский таймер 2
#define TIMER_USER3            3     // Пользовательский таймер 3

// Приоритеты прерываний
#define INT_PRIORITY_HIGHEST   7
#define INT_PRIORITY_HIGH      6
#define INT_PRIORITY_ABOVE_NORMAL 5
#define INT_PRIORITY_NORMAL    4
#define INT_PRIORITY_BELOW_NORMAL 3
#define INT_PRIORITY_LOW       2
#define INT_PRIORITY_LOWEST    1
#define INT_PRIORITY_IDLE      0

// Флаги состояния
#define INT_STATUS_DISABLED    0x00
#define INT_STATUS_ENABLED     0x01
#define INT_STATUS_NESTED      0x02

// ==================== ТИПЫ ====================

// Тип обработчика прерывания
typedef void (*int_handler_t)(void);

// Тип callback-функции таймера
typedef void (*timer_callback_t)(uint8_t timer_num);

// Структура информации о прерывании
typedef struct {
    uint8_t  vector;          // Номер вектора
    uint16_t handler_addr;    // Адрес обработчика
    uint8_t  priority;        // Приоритет
    uint8_t  enabled;         // Включено ли
    uint16_t call_count;      // Счетчик вызовов
} interrupt_info_t;

// Структура информации о таймере
typedef struct {
    uint8_t  timer_num;       // Номер таймера
    uint8_t  running;         // Запущен ли
    uint32_t counter;         // Текущее значение счетчика
    uint32_t period;          // Период (в тиках)
    uint16_t callback_addr;   // Адрес callback-функции
    uint8_t  mode;            // Режим работы
} timer_info_t;

// ==================== ФУНКЦИИ ПРЕРЫВАНИЙ ====================

// Инициализация системы прерываний
uint8_t sys_int_init(void);

// Управление прерываниями
void sys_int_enable(void);
void sys_int_disable(void);
uint8_t sys_int_get_status(void);

// Управление обработчиками
uint8_t sys_int_set_handler(uint8_t vector, int_handler_t handler);
int_handler_t sys_int_get_handler(uint8_t vector);
uint8_t sys_int_install(uint8_t vector, int_handler_t handler, uint8_t priority);
uint8_t sys_int_remove(uint8_t vector);

// Расширенные функции
uint8_t sys_int_enable_vector(uint8_t vector);
uint8_t sys_int_disable_vector(uint8_t vector);
uint8_t sys_int_get_vector_info(uint8_t vector, interrupt_info_t* info);
uint8_t sys_int_set_priority(uint8_t vector, uint8_t priority);

// ==================== ФУНКЦИИ ТАЙМЕРОВ ====================

// Управление таймерами
uint8_t sys_timer_start(uint8_t timer_num, uint16_t period_ticks);
uint8_t sys_timer_stop(uint8_t timer_num);
uint8_t sys_timer_reset(uint8_t timer_num);
uint8_t sys_timer_pause(uint8_t timer_num);
uint8_t sys_timer_resume(uint8_t timer_num);

// Callback-функции
uint8_t sys_timer_set_callback(uint8_t timer_num, timer_callback_t callback);

// Получение информации
uint32_t sys_timer_get_count(uint8_t timer_num);
uint8_t sys_timer_get_info(uint8_t timer_num, timer_info_t* info);

// Конфигурация
uint8_t sys_timer_set_frequency(uint8_t timer_num, uint16_t frequency_hz);
uint8_t sys_timer_set_mode(uint8_t timer_num, uint8_t mode);

// ==================== ФУНКЦИИ ВРЕМЕНИ ====================

// Системное время
uint32_t sys_get_tick_count(void);          // В тиках
uint32_t sys_get_time_ms(void);            // В миллисекундах
uint32_t sys_get_time_us(void);            // В микросекундах (приблизительно)

// Задержки
void sys_delay_ms(uint16_t milliseconds);
void sys_delay_us(uint16_t microseconds);

// Тайм-ауты
uint8_t sys_timeout_start(uint16_t timeout_ms);
uint8_t sys_timeout_check(uint8_t timeout_id);
void sys_timeout_cancel(uint8_t timeout_id);

// ==================== УТИЛИТЫ ====================

// Критические секции
void sys_enter_critical(void);
void sys_exit_critical(void);

// Процессорные паузы
void sys_cpu_pause(void);
void sys_cpu_halt(void);

// Измерение производительности
void sys_perf_start(uint8_t counter);
uint32_t sys_perf_stop(uint8_t counter);

#ifdef __cplusplus
}
#endif

#endif // INT_API_H