#ifndef SYSINFO_API_H
#define SYSINFO_API_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// ==================== КОНСТАНТЫ ====================

// Коды ошибок
#define SYSINFO_NO_ERROR         0x00
#define SYSINFO_INVALID_PARAM    0x01
#define SYSINFO_NOT_AVAILABLE    0x02
#define SYSINFO_HARDWARE_ERROR   0x03
#define SYSINFO_NOT_INITIALIZED  0x04

// Типы перезагрузки
#define REBOOT_SOFT              0x00  // Мягкая перезагрузка
#define REBOOT_HARD              0x01  // Жесткая перезагрузка
#define REBOOT_BOOTLOADER        0x02  // В загрузчик
#define REBOOT_SAFE_MODE         0x03  // В безопасный режим

// Типы выключения
#define SHUTDOWN_NORMAL          0x00  // Нормальное выключение
#define SHUTDOWN_EMERGENCY       0x01  // Аварийное выключение
#define SHUTDOWN_SLEEP           0x02  // Спящий режим
#define SHUTDOWN_HIBERNATE       0x03  // Гибернация

// Типы процессоров
#define CPU_Z80                  0x01
#define CPU_Z180                 0x02
#define CPU_Z280                 0x03
#define CPU_Z380                 0x04
#define CPU_R800                 0x05
#define CPU_EZ80                 0x06
#define CPU_UNKNOWN              0xFF

// Типы памяти
#define MEMORY_UNKNOWN           0x00
#define MEMORY_RAM               0x01
#define MEMORY_ROM               0x02
#define MEMORY_FLASH             0x03
#define MEMORY_EEPROM            0x04
#define MEMORY_SRAM              0x05

// Системные флаги
#define SYS_FLAG_MMU             0x01  // Наличие MMU
#define SYS_FLAG_RTC             0x02  // Наличие RTC
#define SYS_FLAG_DMA             0x04  // Наличие DMA
#define SYS_FLAG_FPU             0x08  // Наличие FPU
#define SYS_FLAG_NETWORK         0x10  // Наличие сети
#define SYS_FLAG_AUDIO           0x20  // Наличие звука
#define SYS_FLAG_VIDEO_ACCEL     0x40  // Наличие видеоускорителя
#define SYS_FLAG_BATTERY         0x80  // Наличие батареи

// Статус системы
#define STATUS_INITIALIZED       0x01  // Система инициализирована
#define STATUS_MMU_ACTIVE        0x02  // MMU активен
#define STATUS_RTC_WORKING       0x04  // RTC работает
#define STATUS_ERRORS_PRESENT    0x08  // Есть ошибки
#define STATUS_SLEEP_MODE        0x10  // Спящий режим
#define STATUS_LOW_BATTERY       0x20  // Низкий заряд батареи
#define STATUS_OVERHEAT          0x40  // Перегрев
#define STATUS_CRITICAL          0x80  // Критическое состояние

// Режимы питания
#define POWER_NORMAL             0x00  // Нормальный режим
#define POWER_SAVE               0x01  // Экономичный режим
#define POWER_SLEEP              0x02  // Спящий режим
#define POWER_OFF                0x03  // Выключен

// ==================== СТРУКТУРЫ ====================

// Структура информации о памяти
typedef struct {
    uint16_t total_pages;      // Всего страниц (16KB каждая)
    uint16_t free_pages;       // Свободных страниц
    uint16_t largest_free_block; // Самый большой свободный блок
    uint8_t  memory_type;      // Тип памяти
    uint8_t  flags;            // Флаги памяти
    uint8_t  reserved[10];     // Зарезервировано
} memory_info_t;

// Структура информации о процессоре
typedef struct {
    uint8_t  cpu_type;         // Тип процессора
    uint16_t cpu_speed;        // Скорость в кГц
    uint8_t  cpu_flags;        // Флаги процессора
    char     cpu_model[8];     // Модель процессора
    char     cpu_vendor[16];   // Производитель
    uint8_t  reserved[6];      // Зарезервировано
} cpu_info_t;

// Структура общей информации о системе
typedef struct {
    uint8_t  system_flags;     // Флаги системы
    uint8_t  boot_device;      // Загрузочное устройство
    uint16_t total_memory;     // Всего памяти (KB)
    uint16_t free_memory;      // Свободной памяти (KB)
    uint8_t  serial_number[6]; // Серийный номер
    char     os_name[16];      // Имя ОС
    char     os_version[8];    // Версия ОС
    char     build_date[8];    // Дата сборки (YYYYMMDD)
    char     build_time[8];    // Время сборки (HHMMSS)
    uint8_t  reserved[8];      // Зарезервировано
} system_info_t;

// Структура информации об устройстве
typedef struct {
    uint8_t  device_type;      // Тип устройства
    uint8_t  device_id;        // ID устройства
    uint8_t  device_flags;     // Флаги устройства
    uint8_t  device_status;    // Статус устройства
    uint16_t base_address;     // Базовый адрес
    uint16_t irq_number;       // Номер прерывания
    char     device_name[8];   // Имя устройства
    char     description[16];  // Описание
} device_info_t;

// Структура времени
typedef struct {
    uint8_t hours;      // 0-23
    uint8_t minutes;    // 0-59
    uint8_t seconds;    // 0-59
    uint8_t hundredths; // 0-99
} time_t;

// Структура даты
typedef struct {
    uint8_t day;        // 1-31
    uint8_t month;      // 1-12
    uint8_t year;       // 0-99 (с 2000 года)
    uint8_t day_of_week;// 0-6 (0=воскресенье)
} date_t;

// Структура температуры
typedef struct {
    int8_t  cpu_temp;   // Температура CPU (°C)
    int8_t  board_temp; // Температура платы (°C)
    int8_t  case_temp;  // Температура корпуса (°C)
    uint8_t flags;      // Флаги (бит 0=перегрев)
} temperature_t;

// Структура батареи
typedef struct {
    uint8_t level;      // Уровень заряда (0-100%)
    uint8_t voltage;    // Напряжение (в десятых вольта)
    uint8_t status;     // Статус (бит 0=заряжается)
    uint8_t health;     // Состояние батареи (0-100%)
} battery_t;

// ==================== ФУНКЦИИ СИСТЕМНОЙ ИНФОРМАЦИИ ====================

// Инициализация
uint8_t sys_sysinfo_init(void);

// Версия системы
uint16_t sys_get_version(void);
void sys_get_version_full(uint8_t* major, uint8_t* minor, uint8_t* build);

// Информация о системе
void sys_get_memory_info(memory_info_t* info);
void sys_get_cpu_info(cpu_info_t* info);
void sys_get_system_info(system_info_t* info);

// Время и дата
void sys_get_time(uint8_t* hours, uint8_t* minutes, uint8_t* seconds);
void sys_get_time_full(time_t* time);
void sys_get_date(uint8_t* day, uint8_t* month, uint8_t* year, uint8_t* day_of_week);
uint8_t sys_set_time(uint8_t hours, uint8_t minutes, uint8_t seconds);
uint8_t sys_set_date(uint8_t day, uint8_t month, uint8_t year, uint8_t day_of_week);

// Управление системой
void sys_reboot(uint8_t reboot_type);
void sys_shutdown(uint8_t shutdown_type);

// Устройства
void sys_get_serial_number(uint8_t serial[6]);
uint8_t sys_get_device_info(uint8_t device_id, device_info_t* info);

// Статус системы
uint8_t sys_get_system_status(void);
uint32_t sys_get_uptime(void);  // В секундах

// Мониторинг
uint8_t sys_get_temperature(temperature_t* temp);
uint8_t sys_get_battery_status(battery_t* battery);
uint8_t sys_set_power_mode(uint8_t power_mode);

// ==================== ДОПОЛНИТЕЛЬНЫЕ ФУНКЦИИ ====================

// Проверка возможностей системы
uint8_t sys_has_mmu(void);
uint8_t sys_has_rtc(void);
uint8_t sys_has_dma(void);
uint8_t sys_has_fpu(void);
uint8_t sys_has_network(void);
uint8_t sys_has_audio(void);

// Информация о производительности
void sys_get_performance_counters(uint32_t* cpu_usage, uint32_t* mem_usage);
void sys_reset_performance_counters(void);

// Системные события
void sys_register_shutdown_handler(void (*handler)(void));
void sys_register_reboot_handler(void (*handler)(void));

// Отладка
void sys_get_last_error(uint8_t* error_code, char* message, uint8_t max_len);
void sys_clear_errors(void);

// ==================== УТИЛИТЫ И МАКРОСЫ ====================

// Макросы для проверки возможностей
#define SYS_HAS_MMU()      (sys_has_mmu())
#define SYS_HAS_RTC()      (sys_has_rtc())
#define SYS_HAS_DMA()      (sys_has_dma())
#define SYS_HAS_FPU()      (sys_has_fpu())
#define SYS_HAS_NETWORK()  (sys_has_network())
#define SYS_HAS_AUDIO()    (sys_has_audio())

// Макросы для проверки состояния
#define SYS_IS_INITIALIZED()   (sys_get_system_status() & STATUS_INITIALIZED)
#define SYS_IS_SLEEPING()      (sys_get_system_status() & STATUS_SLEEP_MODE)
#define SYS_IS_OVERHEATING()   (sys_get_system_status() & STATUS_OVERHEAT)
#define SYS_IS_LOW_BATTERY()   (sys_get_system_status() & STATUS_LOW_BATTERY)

// Вспомогательные функции
static inline uint16_t sys_get_total_memory_kb(void) {
    system_info_t info;
    sys_get_system_info(&info);
    return info.total_memory;
}

static inline uint16_t sys_get_free_memory_kb(void) {
    system_info_t info;
    sys_get_system_info(&info);
    return info.free_memory;
}

static inline float sys_get_memory_usage_percent(void) {
    system_info_t info;
    sys_get_system_info(&info);
    if (info.total_memory == 0) return 0.0f;
    return 100.0f * (1.0f - (float)info.free_memory / (float)info.total_memory);
}

// ==================== ПРИМЕРЫ ИСПОЛЬЗОВАНИЯ ====================

/*
Пример 1: Получение информации о системе
system_info_t sys_info;
sys_get_system_info(&sys_info);
printf("OS: %s %s\n", sys_info.os_name, sys_info.os_version);
printf("Memory: %uKB total, %uKB free\n", 
       sys_info.total_memory, sys_info.free_memory);

Пример 2: Работа со временем
uint8_t h, m, s;
sys_get_time(&h, &m, &s);
printf("Time: %02u:%02u:%02u\n", h, m, s);

Пример 3: Перезагрузка системы
printf("Rebooting system...\n");
sys_reboot(REBOOT_SOFT);

Пример 4: Проверка возможностей
if (SYS_HAS_MMU()) {
    printf("MMU is available\n");
}
if (SYS_IS_LOW_BATTERY()) {
    printf("Warning: Low battery!\n");
}

Пример 5: Мониторинг температуры
temperature_t temp;
if (sys_get_temperature(&temp) == SYSINFO_NO_ERROR) {
    printf("CPU temperature: %d°C\n", temp.cpu_temp);
    if (temp.flags & 0x01) {
        printf("Warning: Overheating!\n");
    }
}
*/

#ifdef __cplusplus
}
#endif

#endif // SYSINFO_API_H