#ifndef MMU_NATIVE_H
#define MMU_NATIVE_H

#include <cstdint>

// =============================================================================
// MMU Register Addresses (Z80 IO Ports)
// =============================================================================

namespace MMURegisterAddress {
    // Основные регистры управления
    constexpr uint16_t MMIO_PAGE      = 0x00D3; // Регистр страницы MMIO
    constexpr uint16_t SYSCALL        = 0x00D4; // SysCall регистр (триггер)
    constexpr uint16_t CONTROL        = 0x00D7; // Регистр управления
    constexpr uint16_t SUPER_SLOT     = 0x00D9; // Регистр слота супервизора
    constexpr uint16_t USER_SLOT      = 0x00DB; // Регистр пользовательского слота
    
    // Банковые регистры для текущего слота
    constexpr uint16_t BANK_0         = 0x00DC; // Банк 0 (для текущего слота)
    constexpr uint16_t BANK_1         = 0x00DD; // Банк 1 (для текущего слота)
    constexpr uint16_t BANK_2         = 0x00DE; // Банк 2 (для текущего слота)
    constexpr uint16_t BANK_3         = 0x00DF; // Банк 3 (для текущего слота)
    
    // Расширенные банковые регистры (прямой доступ)
    constexpr uint16_t BANK_4         = 0x00E0; // Банк 0 (Slot 0, Bank 0)
    constexpr uint16_t BANK_5         = 0x00E1; // Банк 1 (Slot 0, Bank 1)
    constexpr uint16_t BANK_6         = 0x00E2; // Банк 2 (Slot 0, Bank 2)
    constexpr uint16_t BANK_7         = 0x00E3; // Банк 3 (Slot 0, Bank 3)
    constexpr uint16_t BANK_8         = 0x00E4; // Банк 4 (Slot 1, Bank 0)
    constexpr uint16_t BANK_9         = 0x00E5; // Банк 5 (Slot 1, Bank 1)
    constexpr uint16_t BANK_10        = 0x00E6; // Банк 6 (Slot 1, Bank 2)
    constexpr uint16_t BANK_11        = 0x00E7; // Банк 7 (Slot 1, Bank 3)
    constexpr uint16_t BANK_12        = 0x00E8; // Банк 8 (Slot 2, Bank 0)
    constexpr uint16_t BANK_13        = 0x00E9; // Банк 9 (Slot 2, Bank 1)
    constexpr uint16_t BANK_14        = 0x00EA; // Банк 10 (Slot 2, Bank 2)
    constexpr uint16_t BANK_15        = 0x00EB; // Банк 11 (Slot 2, Bank 3)
    constexpr uint16_t BANK_16        = 0x00EC; // Банк 12 (Slot 3, Bank 0)
    constexpr uint16_t BANK_17        = 0x00ED; // Банк 13 (Slot 3, Bank 1)
    constexpr uint16_t BANK_18        = 0x00EE; // Банк 14 (Slot 3, Bank 2)
    constexpr uint16_t BANK_19        = 0x00EF; // Банк 15 (Slot 3, Bank 3)
    
    // Legacy SysCall (для обратной совместимости)
    constexpr uint16_t SYSCALL_LEGACY = 0xD400; // Legacy SysCall порт
};

// =============================================================================
// Control Register Bits
// =============================================================================

namespace ControlRegister {
    // Functional bits
    constexpr uint8_t NATIVE_MODE        = 0b00000001; // Бит 0: 1=Нативный режим, 0=Legacy режим
    constexpr uint8_t SUPERVISOR_MODE    = 0b00000010; // Бит 1: 1=Режим супервизора
    constexpr uint8_t SUPERVISOR_HOOK    = 0b00000100; // Бит 2: 1=Включить аппаратный захват
    
    // Reserved bit
    constexpr uint8_t RESERVED_3         = 0b00001000; // Бит 3: Зарезервировано
    
    // Security bits
    constexpr uint8_t MMIO_USERLOCK      = 0b00010000; // Бит 4: 1=Блокировать доступ к MMIO в user mode
    
    // Reserved bits
    constexpr uint8_t RESERVED_5         = 0b00100000; // Бит 5: Зарезервировано
    constexpr uint8_t RESERVED_6         = 0b01000000; // Бит 6: Зарезервировано
    constexpr uint8_t RESERVED_7         = 0b10000000; // Бит 7: Зарезервировано
    
    // Default value после сброса
    constexpr uint8_t DEFAULT            = 0b00010011; // native=1, supervisor=1, mmio_lock=1
    
    // Useful masks
    constexpr uint8_t FUNCTIONAL_MASK    = 0b00000111; // Маска функциональных битов
    constexpr uint8_t SECURITY_MASK      = 0b00010000; // Маска битов безопасности
};

// =============================================================================
// Wishbone Address Ranges
// =============================================================================

namespace WishboneAreas {
    constexpr uint32_t MMIO_BASE      = 0xFF0000;   // Базовый адрес MMIO
    constexpr uint32_t MMIO_END       = 0xFFFFFF;   // Конец MMIO области
    
    // Legacy MMIO (для эмуляции CPC)
    constexpr uint32_t LEGACY_MMIO_BASE = 0xFF4000; // Legacy устройства
    constexpr uint32_t LEGACY_MMIO_END  = 0xFFFFFF;
    
    // Современные устройства Aleste LX
    constexpr uint32_t MODERN_MMIO_BASE = 0xFF0000; // Современные устройства
    constexpr uint32_t MODERN_MMIO_END  = 0xFF3FFF;
};

// =============================================================================
// Helper Functions
// =============================================================================

namespace mmu_utils {
    
    // Проверка битов управления
    inline bool is_native_mode(uint8_t control_reg) {
        return control_reg & ControlRegister::NATIVE_MODE;
    }
    
    inline bool is_supervisor_mode(uint8_t control_reg) {
        return control_reg & ControlRegister::SUPERVISOR_MODE;
    }
    
    inline bool is_mmio_locked(uint8_t control_reg) {
        return control_reg & ControlRegister::MMIO_USERLOCK;
    }
    
    inline bool is_supervisor_hook_enabled(uint8_t control_reg) {
        return control_reg & ControlRegister::SUPERVISOR_HOOK;
    }
    
    // Вычисление физического адреса
    inline uint32_t calculate_physical_address(uint8_t slot, uint8_t bank, uint16_t offset) {
        // Формат: {slot[1:0], bank[7:0], offset[13:0]}
        return ((slot & 0x03) << 22) | ((bank & 0xFF) << 14) | (offset & 0x3FFF);
    }
    
    // Проверка, является ли порт регистром MMU
    inline bool is_mmu_register_port(uint16_t port) {
        return (port >= 0x00D0 && port <= 0x00EF);
    }
    
    // Проверка, заблокирован ли доступ к порту
    inline bool is_port_locked(bool supervisor_mode, bool mmio_userlock, uint16_t port) {
        // В supervisor mode всё разрешено
        if (supervisor_mode) return false;
        
        // В user mode проверяем mmio_userlock
        if (mmio_userlock) {
            // При mmio_userlock=1 блокируем:
            // - порты 00-BF (MMIO окно)
            // - порты D3, D7, D9, DB-DF (регистры MMU)
            if (port <= 0x00BF) return true;
            if (port == 0x00D3 || port == 0x00D7 || port == 0x00D9 || port == 0x00DB) return true;
            if (port >= 0x00DC && port <= 0x00DF) return true;
        }
        
        return false;
    }
}

#endif // MMU_NATIVE_H