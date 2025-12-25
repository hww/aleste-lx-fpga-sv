#ifndef MMU_API_H
#define MMU_API_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// ==================== КОНСТАНТЫ ====================

// Коды ошибок
#define MMU_NO_ERROR         0x00
#define MMU_INVALID_SLOT     0x01
#define MMU_INVALID_PAGE     0x02
#define MMU_INVALID_BANK     0x03
#define MMU_ACCESS_DENIED    0x04
#define MMU_READ_ERROR       0x05
#define MMU_WRITE_ERROR      0x06
#define MMU_CALL_ERROR       0x07

// Режимы работы
#define MMU_MODE_USER        0x00
#define MMU_MODE_SUPERVISOR  0x80

// Макросы для удобства
#define MMU_SLOT(num, is_supervisor) ((num) | ((is_supervisor) ? 0x80 : 0x00))
#define MMU_IS_SUPERVISOR(slot) (((slot) & 0x80) != 0)
#define MMU_SLOT_NUM(slot) ((slot) & 0x7F)

// Страницы памяти
#define MMU_PAGE_0           0  // 0000-3FFF
#define MMU_PAGE_1           1  // 4000-7FFF
#define MMU_PAGE_2           2  // 8000-BFFF
#define MMU_PAGE_3           3  // C000-FFFF

// Размер страницы
#define MMU_PAGE_SIZE        0x4000  // 16KB

// ==================== СТРУКТУРЫ ====================

// Контекст MMU (40 байт)
typedef struct {
    uint8_t  current_slot;
    uint8_t  page0_bank;
    uint8_t  page1_bank;
    uint8_t  page2_bank;
    uint8_t  page3_bank;
    uint8_t  global_ctrl;
    uint8_t  super_slot;
    uint8_t  user_slot;
    uint8_t  reserved[32];  // Для расширения
} mmu_context_t;

// Информация о слот/банк
typedef struct {
    uint8_t slot;
    uint8_t page;
    uint8_t bank;
} mmu_mapping_t;

// Параметры для копирования между слотами
typedef struct {
    uint8_t  src_slot;
    uint8_t  src_bank;
    uint8_t  dst_slot;
    uint8_t  dst_bank;
    uint32_t size;
    void*    src_buffer;
    void*    dst_buffer;
} mmu_copy_params_t;

// ==================== ОСНОВНЫЕ ФУНКЦИИ ====================

// Инициализация
uint8_t sys_mmu_init(void);

// Управление слотами
uint8_t sys_mmu_get_slot(void);
void sys_mmu_set_slot(uint8_t slot);

// Управление страницами и банками
void sys_mmu_set_page(uint8_t bank, uint8_t page);
uint8_t sys_mmu_get_page(uint8_t page);

// Чтение/запись между слотами
uint8_t sys_mmu_read(uint8_t slot, uint16_t address);
void sys_mmu_write(uint8_t slot, uint16_t address, uint8_t value);

// Вызов кода в другом слоте
void sys_mmu_call(uint8_t slot, void (*func)(void));
void sys_mmu_jump(uint8_t slot, void* address);

// Сохранение/восстановление состояния
void sys_mmu_save_state(uint8_t* buffer);
void sys_mmu_restore_state(const uint8_t* buffer);

// Быстрое отображение
void sys_mmu_map(uint8_t bank, uint16_t address);
uint8_t sys_mmu_get_mapped(uint16_t address);

// ==================== РАСШИРЕННЫЕ ФУНКЦИИ ====================

// Окна
void sys_mmu_setup_window(uint8_t slot, uint8_t page);

// Контекст
void sys_mmu_get_context(mmu_context_t* context);
void sys_mmu_set_context(const mmu_context_t* context);

// Супервизорный режим
void sys_mmu_enable_supervisor(void);
void sys_mmu_disable_supervisor(void);
uint8_t sys_mmu_is_supervisor(void);

// Пакетные операции
void sys_mmu_set_all_banks(const uint8_t banks[4]);
void sys_mmu_set_bank_for_slot_page(uint8_t slot, uint8_t page, uint8_t bank);
uint8_t sys_mmu_get_bank_for_slot_page(uint8_t slot, uint8_t page);

// Копирование между слотами
uint8_t sys_mmu_copy_cross_slot(const mmu_copy_params_t* params);

// ==================== УТИЛИТЫ И МАКРОСЫ ====================

// Преобразование адреса в страницу
static inline uint8_t mmu_addr_to_page(uint16_t address) {
    return (address >> 14) & 3;
}

// Получение смещения в странице
static inline uint16_t mmu_page_offset(uint16_t address) {
    return address & 0x3FFF;
}

// Создание логического адреса
static inline uint32_t mmu_make_address(uint8_t page, uint16_t offset) {
    return (page * MMU_PAGE_SIZE) + offset;
}

// Проверка доступности банка
uint8_t sys_mmu_is_bank_available(uint8_t bank);

// Получение информации о банке
void sys_mmu_get_bank_info(uint8_t bank, void* info);

// ==================== СТАРЫЕ ИМЕНА ДЛЯ СОВМЕСТИМОСТИ ====================

// Устаревшие, но поддерживаемые имена
static inline uint8_t sys_mmu_get_current_slot(void) {
    return sys_mmu_get_slot();
}

static inline void sys_mmu_set_bank_for_page(uint8_t bank, uint8_t page) {
    sys_mmu_set_page(bank, page);
}

static inline uint8_t sys_mmu_get_bank_for_page(uint8_t page) {
    return sys_mmu_get_page(page);
}

static inline void sys_mmu_save_full_state(void* buffer) {
    sys_mmu_save_state((uint8_t*)buffer);
}

static inline void sys_mmu_restore_full_state(const void* buffer) {
    sys_mmu_restore_state((const uint8_t*)buffer);
}

static inline void sys_mmu_map_bank_to_address(uint8_t bank, uint16_t address) {
    sys_mmu_map(bank, address);
}

static inline uint8_t sys_mmu_get_bank_for_address(uint16_t address) {
    return sys_mmu_get_mapped(address);
}

// ==================== ПРИМЕРЫ ИСПОЛЬЗОВАНИЯ ====================

/*
Пример 1: Чтение из другого слота
uint8_t data = sys_mmu_read(MMU_SLOT(1, 0), 0x4000);

Пример 2: Вызов функции в другом слоте
sys_mmu_call(MMU_SLOT(2, 0), some_function);

Пример 3: Отображение банка
sys_mmu_map(0x10, 0x8000);  // Банк 0x10 в страницу 2

Пример 4: Работа с супервизорным режимом
sys_mmu_enable_supervisor();
sys_mmu_set_slot(MMU_SLOT(0, 1));  // Слот 0 в супервизорном режиме
// ... критические операции ...
sys_mmu_disable_supervisor();
*/

#ifdef __cplusplus
}
#endif

#endif // MMU_API_H