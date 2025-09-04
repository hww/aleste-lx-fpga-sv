#include <cstdint>
#include <iostream>
#include <stdexcept>

// ==================== БАЗИС: АППАРАТНЫЕ РЕГИСТРЫ MMU (MSX-СТИЛЬ) ====================
struct HardwareRegisters {
    // Регистры банков для каждого из 4х слотов (0-3)
    uint8_t slot_bank[4][4]; // [slot][page] 
    
    // РЕГИСТРЫ ВЫБОРА СЛОТА ДЛЯ КАЖДОЙ СТРАНИЦЫ (MSX-стиль)
    union {
        struct {
            uint8_t page0_slot : 2; // Слот для страницы 0x0000-0x3FFF
            uint8_t page1_slot : 2; // Слот для страницы 0x4000-0x7FFF  
            uint8_t page2_slot : 2; // Слот для страницы 0x8000-0xBFFF
            uint8_t page3_slot : 2; // Слот для страницы 0xC000-0xFFFF
        };
        uint8_t value;
    } slot_select_reg;
    
    // Регистр управления системой
    union {
        struct {
            uint8_t mode : 1;      // 0=Legacy, 1=Native
            uint8_t io_access_mode : 2; // Режим доступа к IO
            uint8_t reserved : 5;
        };
        uint8_t value;
    } control_reg;
    
    // Регистр выбора страницы для 8-битного доступа
    uint8_t io_page_select;
};

// ==================== НАДСТРОЙКА: ВИРТУАЛЬНЫЕ РЕГИСТРЫ ====================
enum class CPCPort : uint16_t {
    GATE_ARRAY  = 0x7F00,
    CRTC_INDEX  = 0xBC00,
    CRTC_DATA   = 0xBD00,
    ROM_SELECT  = 0xDF00,
    PPI_PORT_A  = 0xF400,
    PPI_CTRL    = 0xF700
};

enum class LXPort : uint16_t {
    // РЕГИСТРЫ ВЫБОРА СЛОТА ДЛЯ СТРАНИЦ (заменяют единый SLOT_SELECT)
    PAGE0_SLOT_SELECT = 0xD800, // Выбор слота для страницы 0
    PAGE1_SLOT_SELECT = 0xD900, // Выбор слота для страницы 1
    PAGE2_SLOT_SELECT = 0xDA00, // Выбор слота для страницы 2  
    PAGE3_SLOT_SELECT = 0xDB00, // Выбор слота для страницы 3
    
    MMIO_CTRL       = 0xF000, // Master Control Register
    IO_PAGE_SELECT  = 0xF100, // 8-bit Page Select
    MMIO_PAGE_SEL   = 0xFD00, // CPC-style page select
    MMIO_DATA       = 0xFE00  // CPC-style data access
};

// ==================== КЛАСС MMU ====================
class AlesteLX_MMU {
private:
    HardwareRegisters hw_regs_;
    
    // Внутренние состояния
    uint8_t cpc_style_mmio_page_;
    bool mmio_access_enabled_;
    
public:
    AlesteLX_MMU() {
        // Инициализация регистров
        hw_regs_.control_reg.value = 0; // Legacy mode по умолчанию
        hw_regs_.slot_select_reg.value = 0; // Все страницы используют слот 0
        hw_regs_.io_page_select = 0;
        cpc_style_mmio_page_ = 0;
        mmio_access_enabled_ = false;
        
        // Инициализация банков
        for(int slot = 0; slot < 4; ++slot) {
            for(int page = 0; page < 4; ++page) {
                hw_regs_.slot_bank[slot][page] = slot; // Простая инициализация
            }
        }
    }
    
    // ОСНОВНАЯ ФУНКЦИЯ ТРАНСЛЯЦИИ АДРЕСА
    uint32_t translate_address(uint16_t virt_addr, bool is_io_access, bool is_write) {
        if (is_io_access) {
            return translate_io_access(virt_addr, is_write);
        } else {
            return translate_memory_access(virt_addr);
        }
    }
    
    // Функция обработки записи в порты (виртуальные и реальные)
    void handle_io_write(uint16_t port, uint8_t data) {
        // 1. Проверка на порты выбора слота для страниц (MSX-стиль)
        if (handle_slot_selection_ports(port, data)) {
            return;
        }
        
        // 2. Проверка на другие порты управления MMU
        if (port == static_cast<uint16_t>(LXPort::MMIO_CTRL)) {
            hw_regs_.control_reg.value = data;
            mmio_access_enabled_ = (data & 0x80) != 0;
            return;
        }
        
        if (port == static_cast<uint16_t>(LXPort::IO_PAGE_SELECT)) {
            hw_regs_.io_page_select = data;
            return;
        }
        
        if (port == static_cast<uint16_t>(LXPort::MMIO_PAGE_SEL)) {
            cpc_style_mmio_page_ = data;
            return;
        }
        
        // 3. Обработка виртуальных портов CPC
        if (handle_cpc_virtual_ports(port, data)) {
            return;
        }
        
        // 4. Реальный порт - передаем на шину
        std::cout << "IO Write to physical port: 0x" << std::hex << port 
                  << ", data: 0x" << static_cast<int>(data) << std::endl;
    }
    
private:
    // ОБРАБОТКА ПОРТОВ ВЫБОРА СЛОТА ДЛЯ СТРАНИЦ
    bool handle_slot_selection_ports(uint16_t port, uint8_t data) {
        switch (port & 0xFF00) {
            case 0xD800: // PAGE0_SLOT_SELECT
                hw_regs_.slot_select_reg.page0_slot = data & 0x03;
                return true;
                
            case 0xD900: // PAGE1_SLOT_SELECT  
                hw_regs_.slot_select_reg.page1_slot = data & 0x03;
                return true;
                
            case 0xDA00: // PAGE2_SLOT_SELECT
                hw_regs_.slot_select_reg.page2_slot = data & 0x03;
                return true;
                
            case 0xDB00: // PAGE3_SLOT_SELECT
                hw_regs_.slot_select_reg.page3_slot = data & 0x03;
                return true;
                
            default:
                return false;
        }
    }
    
    // ПОЛУЧЕНИЕ СЛОТА ДЛЯ ВИРТУАЛЬНОГО АДРЕСА
    uint8_t get_slot_for_address(uint16_t virt_addr) {
        if (virt_addr < 0x4000) {
            return hw_regs_.slot_select_reg.page0_slot;
        } else if (virt_addr < 0x8000) {
            return hw_regs_.slot_select_reg.page1_slot;
        } else if (virt_addr < 0xC000) {
            return hw_regs_.slot_select_reg.page2_slot;
        } else {
            return hw_regs_.slot_select_reg.page3_slot;
        }
    }
    
    // ТРАНСЛЯЦИЯ ДОСТУПА К ПАМЯТИ
    uint32_t translate_memory_access(uint16_t virt_addr) {
        if (hw_regs_.control_reg.mode == 0) { // Legacy Mode
            return translate_legacy_mode(virt_addr);
        } else { // Native Mode
            return translate_native_mode(virt_addr);
        }
    }
    
    uint32_t translate_legacy_mode(uint16_t virt_addr) {
        // В Legacy mode игнорируем регистры выбора слота
        // Всегда используем слот 0, но учитываем банки
        uint8_t bank = 0;
        uint16_t offset = virt_addr;
        
        if (virt_addr < 0x4000) {
            bank = hw_regs_.slot_bank[0][0];
        } else if (virt_addr < 0x8000) {
            bank = hw_regs_.slot_bank[0][1];
            offset = virt_addr - 0x4000;
        } else if (virt_addr < 0xC000) {
            bank = hw_regs_.slot_bank[0][2];
            offset = virt_addr - 0x8000;
        } else {
            bank = hw_regs_.slot_bank[0][3];
            offset = virt_addr - 0xC000;
        }
        
        return (bank << 16) | offset;
    }
    
    uint32_t translate_native_mode(uint16_t virt_addr) {
        // Определяем слот для этой страницы
        uint8_t slot = get_slot_for_address(virt_addr);
        uint8_t bank = 0;
        uint16_t offset = virt_addr;
        
        // Определяем банк внутри слота
        if (virt_addr < 0x4000) {
            bank = hw_regs_.slot_bank[slot][0];
        } else if (virt_addr < 0x8000) {
            bank = hw_regs_.slot_bank[slot][1];
            offset = virt_addr - 0x4000;
        } else if (virt_addr < 0xC000) {
            bank = hw_regs_.slot_bank[slot][2];
            offset = virt_addr - 0x8000;
        } else {
            // MMIO область - особый случай
            if (virt_addr >= 0xC000) { // Убрана проверка верхней границы
                return translate_mmio_access(virt_addr);
            }
            bank = hw_regs_.slot_bank[slot][3];
            offset = virt_addr - 0xC000;
        }
        
        return (slot << 22) | (bank << 16) | offset;
    }
    
    // ТРАНСЛЯЦИЯ ДОСТУПА К IO
    uint32_t translate_io_access(uint16_t port, bool is_write) {
        // Проверка на порты управления MMU
        if (is_write && (port == static_cast<uint16_t>(LXPort::PAGE0_SLOT_SELECT) ||
            port == static_cast<uint16_t>(LXPort::PAGE1_SLOT_SELECT) ||
            port == static_cast<uint16_t>(LXPort::PAGE2_SLOT_SELECT) ||
            port == static_cast<uint16_t>(LXPort::PAGE3_SLOT_SELECT) ||
            port == static_cast<uint16_t>(LXPort::MMIO_CTRL) ||
            port == static_cast<uint16_t>(LXPort::IO_PAGE_SELECT) ||
            port == static_cast<uint16_t>(LXPort::MMIO_PAGE_SEL))) {
            // Эти порты обрабатываются handle_io_write, не идут на шину
            throw std::runtime_error("MMU control port accessed in translate_io_access");
        }
        
        // Трансляция виртуальных портов в физические
        if ((port & 0xFF80) == 0x0000) { // Проверка диапазона 0x00-0x7F
            // 8-битное окно доступа
            return translate_8bit_io_window(port);
        }
        
        if (port == static_cast<uint16_t>(LXPort::MMIO_DATA)) {
            // CPC-style доступ к MMIO
            return translate_cpc_style_mmio();
        }
        
        // Стандартные порты CPC/EX
        return 0xFF0000 | port; // Проецируем в пространство LX IO
    }
    
    uint32_t translate_8bit_io_window(uint16_t port) {
        // Берем младшие 7 бит порта как смещение
        uint8_t offset = port & 0x7F;
        // Берем выбранную страницу из регистра
        uint8_t page = hw_regs_.io_page_select;
        
        // Формируем физический адрес в MMIO пространстве
        return 0xFF0000 | (page << 8) | offset;
    }
    
    uint32_t translate_cpc_style_mmio() {
        return 0xFF0000 | (cpc_style_mmio_page_ << 8);
    }
    
    uint32_t translate_mmio_access(uint16_t virt_addr) {
        // Проецирование C000-FFFF -> FF0000-FFFFFF
        return 0xFF0000 | (virt_addr - 0xC000);
    }
    
    // ОБРАБОТКА ВИРТУАЛЬНЫХ ПОРТОВ CPC
    bool handle_cpc_virtual_ports(uint16_t port, uint8_t data) {
        switch (port & 0xFF00) { // Декодируем по старшему байту
            case 0x7F00: // Gate Array
                handle_gate_array_write(data);
                return true;
                
            case 0xBC00: // CRTC Index
            case 0xBD00: // CRTC Data
                // Эмуляция CRTC...
                return true;
                
            case 0xDF00: // ROM Select
                // Используем слот из регистра выбора для страницы 3
                {
                    uint8_t slot = hw_regs_.slot_select_reg.page3_slot;
                    hw_regs_.slot_bank[slot][3] = data;
                }
                return true;
                
            default:
                return false;
        }
    }
    
    void handle_gate_array_write(uint8_t data) {
        // Реализация эмуляции Gate Array
        uint8_t reg_type = (data >> 6) & 0x03;
        
        switch (reg_type) {
            case 0: // Palette index
                // Обработка выбора индекса палитры
                break;
            case 1: // Palette data
                // Обработка данных палитры
                break;
            case 2: // Mode control
                // Обработка управления режимом
                break;
            case 3: // RAM banking
                handle_ram_banking(data);
                break;
        }
    }
    
    void handle_ram_banking(uint8_t data) {
        // Сложная логика эмуляции банкования памяти CPC
        // В зависимости от режима (Legacy/Native) и MAPMOD
        uint8_t bank_config = data & 0x3F;
        
        if (hw_regs_.control_reg.mode == 0) {
            // Legacy mode: эмуляция поведения CPC
            configure_cpc_ram_banks(bank_config);
        } else {
            // Native mode: использование extended mapping
            // configure_extended_ram_banks(bank_config);
        }
    }
    
    void configure_cpc_ram_banks(uint8_t config) {
        // Упрощенная эмуляция банкования CPC
        hw_regs_.slot_bank[0][0] = 0; // Банк 0 всегда 0
        hw_regs_.slot_bank[0][1] = 1; // Банк 1 всегда 1
        hw_regs_.slot_bank[0][2] = config & 0x03; // Банк 2
        hw_regs_.slot_bank[0][3] = (config >> 2) & 0x03; // Банк 3
    }
};

// ==================== ТЕСТИРОВАНИЕ ====================
int main() {
    AlesteLX_MMU mmu;
    
    try {
        std::cout << "=== Testing MSX-style slot selection ===" << std::endl;
        
        // Устанавливаем разные слоты для разных страниц
        mmu.handle_io_write(0xD800, 0x00); // Страница 0 -> слот 0
        mmu.handle_io_write(0xD900, 0x01); // Страница 1 -> слот 1  
        mmu.handle_io_write(0xDA00, 0x02); // Страница 2 -> слот 2
        mmu.handle_io_write(0xDB00, 0x03); // Страница 3 -> слот 3
        
        // Включаем Native mode
        mmu.handle_io_write(0xF000, 0x81);
        
        // Тестируем трансляцию для разных страниц
        uint32_t addr;
        
        addr = mmu.translate_address(0x1000, false, false); // Страница 0
        std::cout << "Page 0 (slot 0): 0x1000 -> 0x" << std::hex << addr << std::endl;
        
        addr = mmu.translate_address(0x5000, false, false); // Страница 1  
        std::cout << "Page 1 (slot 1): 0x5000 -> 0x" << std::hex << addr << std::endl;
        
        addr = mmu.translate_address(0x9000, false, false); // Страница 2
        std::cout << "Page 2 (slot 2): 0x9000 -> 0x" << std::hex << addr << std::endl;
        
        addr = mmu.translate_address(0xD000, false, false); // Страница 3
        std::cout << "Page 3 (slot 3): 0xD000 -> 0x" << std::hex << addr << std::endl;
                  
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    
    return 0;
}