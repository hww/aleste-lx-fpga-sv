#include <cstdint>



// Регистр управления MMU (Control Register)
namespace ControlRegister{
    constexpr uint8_t ZERO               = 0b00000000; // Бит 0: 1=Нативный режим, 0=Legacy режим
    // Functional bits
    constexpr uint8_t NATIVE_MODE        = 0b00000001; // Бит 0: 1=Нативный режим, 0=Legacy режим
    constexpr uint8_t SUPERVISOR_MODE    = 0b00000010; // Бит 1: 1=Режим супервизора
    constexpr uint8_t SUPERVISOR_HOOK    = 0b00000100; // Бит 2: 1=Включить аппаратный захват по адресам 0038h/0066h
    
    // Reserved bit;
    constexpr uint8_t RESERVED_3         = 0b00001000; // Бит 3: Зарезервировано

    // Security bits
    constexpr uint8_t MMIO_USERLOCK      = 0b00010000; // Бит 4: 0=Разрешить прямой доступ к MMIO, 1=Заблокировать
    
    // Reserved bits
    constexpr uint8_t RESERVED_5         = 0b00100000; // Бит 5: Зарезервировано
    constexpr uint8_t RESERVED_6         = 0b01000000; // Бит 6: Зарезервировано
    constexpr uint8_t RESERVED_7         = 0b10000000; // Бит 7: Зарезервировано
    
    // Default value (по умолчанию)
    constexpr uint8_t DEFAULT            = 0b00010010; // native_mode=0, supervisor_mode=1, mmio_userlock=1
    
    // Useful masks
    constexpr uint8_t FUNCTIONAL_MASK    = 0b00000111; // Маска функциональных битов
    constexpr uint8_t SECURITY_MASK      = 0b00010000; // Маска битов безопасности
    constexpr uint8_t RESERVED_MASK      = 0b11101000; // Маска зарезервированных битов
};

// Вспомогательные функции для работы с регистром
namespace control {

// Проверка битов
constexpr bool is_native_mode(uint8_t reg) {
    return reg & static_cast<uint8_t>(ControlRegister::NATIVE_MODE);
}

constexpr bool is_supervisor_mode(uint8_t reg) {
    return reg & static_cast<uint8_t>(ControlRegister::SUPERVISOR_MODE);
}

constexpr bool is_supervisor_hook_enabled(uint8_t reg) {
    return reg & static_cast<uint8_t>(ControlRegister::SUPERVISOR_HOOK);
}

constexpr bool is_mmio_locked(uint8_t reg) {
    return reg & static_cast<uint8_t>(ControlRegister::MMIO_USERLOCK);
}

// Установка битов
constexpr uint8_t set_native_mode(uint8_t reg, bool enabled) {
    return enabled ? (reg | static_cast<uint8_t>(ControlRegister::NATIVE_MODE))
                  : (reg & ~static_cast<uint8_t>(ControlRegister::NATIVE_MODE));
}

constexpr uint8_t set_supervisor_mode(uint8_t reg, bool enabled) {
    return enabled ? (reg | static_cast<uint8_t>(ControlRegister::SUPERVISOR_MODE))
                  : (reg & ~static_cast<uint8_t>(ControlRegister::SUPERVISOR_MODE));
}

constexpr uint8_t set_supervisor_hook(uint8_t reg, bool enabled) {
    return enabled ? (reg | static_cast<uint8_t>(ControlRegister::SUPERVISOR_HOOK))
                  : (reg & ~static_cast<uint8_t>(ControlRegister::SUPERVISOR_HOOK));
}

constexpr uint8_t set_mmio_lock(uint8_t reg, bool locked) {
    return locked ? (reg | static_cast<uint8_t>(ControlRegister::MMIO_USERLOCK))
                 : (reg & ~static_cast<uint8_t>(ControlRegister::MMIO_USERLOCK));
}

} // namespace control

// Адреса регистров MMU
namespace MMURegisterAddress  {
    constexpr uint16_t CONTROL        = 0x00D7; // Регистр управления
    constexpr uint16_t MMIO_PAGE      = 0x00D3; // Регистр страницы MMIO
    constexpr uint16_t SUPER_SLOT     = 0x00D9; // Регистр слота супервизора
    constexpr uint16_t USER_SLOT      = 0x00DB; // Регистр пользовательского слота
    constexpr uint16_t BANK_0         = 0x00DC; // Банк 0
    constexpr uint16_t BANK_1         = 0x00DD; // Банк 1
    constexpr uint16_t BANK_2         = 0x00DE; // Банк 2
    constexpr uint16_t BANK_3         = 0x00DF; // Банк 3
    constexpr uint16_t BANK_4         = 0x00E0; // Банк 4
    constexpr uint16_t BANK_5         = 0x00E1; // Банк 5
    constexpr uint16_t BANK_6         = 0x00E2; // Банк 6
    constexpr uint16_t BANK_7         = 0x00E3; // Банк 7
    constexpr uint16_t BANK_8         = 0x00E4; // Банк 8
    constexpr uint16_t BANK_9         = 0x00E5; // Банк 9
    constexpr uint16_t BANK_10        = 0x00E6; // Банк 10
    constexpr uint16_t BANK_11        = 0x00E7; // Банк 11
    constexpr uint16_t BANK_12        = 0x00E8; // Банк 12
    constexpr uint16_t BANK_13        = 0x00E9; // Банк 13
    constexpr uint16_t BANK_14        = 0x00EA; // Банк 14
    constexpr uint16_t BANK_15        = 0x00EB; // Банк 15
    constexpr uint16_t SYSCALL        = 0x00D4;  // SysCall регистр
};

namespace WishboneAreas  {
    constexpr uint32_t MMIO_BASE      = 0xFF0000;   // Базовый адрес MMIO
    constexpr uint32_t MMIO_END       = 0xFFFFFF;   // Конец MMIO области
    constexpr uint32_t MMIO_LO_BASE   = 0xFF0000;   // Базовый адрес MMIO
    constexpr uint32_t MMIO_LO_END    = 0xFF7FFF;   // Конец MMIO области
    constexpr uint32_t MMIO_HI_BASE   = 0xFF8000;   // Базовый адрес MMIO
    constexpr uint32_t MMIO_HI_END    = 0xFFFFFF;   // Конец MMIO области
    constexpr uint32_t MMU_REGS_BASE  = 0xFF00D0;   // Базовый адрес регистров MMU
    constexpr uint32_t MMU_REGS_END   = 0xFF00FF;   // Конец регистров MMU
}

// Wishbone адреса
namespace WishboneAddress  {


    constexpr uint32_t MMIO_PAGE      = 0xFF00D3; // Регистр страницы MMIO
    constexpr uint32_t CONTROL        = 0xFF00D7; // Регистр управления
    constexpr uint32_t SUPER_SLOT     = 0xFF00D9; // Регистр слота супервизора
    constexpr uint32_t USER_SLOT      = 0xFF00DB; // Регистр пользовательского слота
    constexpr uint32_t BANK_0         = 0xFF00DC; // Банк 0
    constexpr uint32_t BANK_1         = 0xFF00DD; // Банк 1
    constexpr uint32_t BANK_2         = 0xFF00DE; // Банк 2
    constexpr uint32_t BANK_3         = 0xFF00DF; // Банк 3
    constexpr uint32_t BANK_4         = 0xFF00E0; // Банк 4
    constexpr uint32_t BANK_5         = 0xFF00E1; // Банк 5
    constexpr uint32_t BANK_6         = 0xFF00E2; // Банк 6
    constexpr uint32_t BANK_7         = 0xFF00E3; // Банк 7
    constexpr uint32_t BANK_8         = 0xFF00E4; // Банк 8
    constexpr uint32_t BANK_9         = 0xFF00E5; // Банк 9
    constexpr uint32_t BANK_10        = 0xFF00E6; // Банк 10
    constexpr uint32_t BANK_11        = 0xFF00E7; // Банк 11
    constexpr uint32_t BANK_12        = 0xFF00E8; // Банк 12
    constexpr uint32_t BANK_13        = 0xFF00E9; // Банк 13
    constexpr uint32_t BANK_14        = 0xFF00EA; // Банк 14
    constexpr uint32_t BANK_15        = 0xFF00EB; // Банк 15
    constexpr uint32_t SYSCALL_REG    = 0xFF00D4;  // SysCall регистр

    constexpr uint32_t SYSCALL_LEG    = 0xFFD400;   // SysCall регистр для legacy

};
