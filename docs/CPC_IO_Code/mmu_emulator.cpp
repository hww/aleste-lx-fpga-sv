#include <cstdint>
#include <iostream>
#include <stdexcept>
#include <array>

class AlesteLX_MMU
{
private:
    // ==================== РЕГИСТРЫ MMU ====================
    uint8_t slot_select_page0 = 0;
    uint8_t slot_select_page1 = 0;
    uint8_t slot_select_page2 = 0;
    uint8_t slot_select_page3 = 0;

    uint8_t control_reg = 0;
    uint8_t io_page_select = 0;
    uint8_t cpc_mmio_page = 0;

    std::array<std::array<uint8_t, 4>, 4> slot_bank = {{{{0, 1, 2, 3}},
                                                        {{0, 1, 2, 3}},
                                                        {{0, 1, 2, 3}},
                                                        {{0, 1, 2, 3}}}};

    // Состояние виртуальных устройств
    uint8_t crtc_index = 0;
    uint8_t gate_array_value = 0;
    uint8_t ppi_port_a = 0;
    uint8_t ppi_control = 0;

    bool debug_enabled = true;

public:
    AlesteLX_MMU()
    {
        // Убедитесь, что банки инициализированы правильно
        for (int slot = 0; slot < 4; ++slot)
        {
            for (int page = 0; page < 4; ++page)
            {
                slot_bank[slot][page] = page; // Или slot*4 + page
            }
        }
    }
    // ==================== ОСНОВНЫЕ ФУНКЦИИ ПРОЦЕССОРА ====================
    void cpu_mreq_wr(uint16_t addr, uint8_t data)
    {
        if (debug_enabled)
        {
            std::cout << "CPU MEM WR: 0x" << std::hex << addr << " = 0x" << static_cast<int>(data) << std::endl;
        }
        uint32_t phys_addr = translate_memory_access(addr);
        wishbone_wr(phys_addr, data);
    }

    uint8_t cpu_mreq_rd(uint16_t addr)
    {
        if (debug_enabled)
        {
            std::cout << "CPU MEM RD: 0x" << std::hex << addr << std::endl;
        }
        uint32_t phys_addr = translate_memory_access(addr);
        return wishbone_rd(phys_addr);
    }

    void cpu_iorq_wr(uint16_t port, uint8_t data)
    {
        if (debug_enabled)
        {
            std::cout << "CPU IO WR: 0x" << std::hex << port << " = 0x" << static_cast<int>(data) << std::endl;
        }

        uint32_t wb_addr = translate_io_access(port);

        if (is_cpc_virtual_port(port))
        {
            handle_cpc_virtual_port_write(port, data);
        }
        else
        {
            wishbone_wr(wb_addr, data);
        }
    }

    uint8_t cpu_iorq_rd(uint16_t port)
    {
        if (debug_enabled)
        {
            std::cout << "CPU IO RD: 0x" << std::hex << port << std::endl;
        }

        uint32_t wb_addr = translate_io_access(port);

        if (is_cpc_virtual_port(port))
        {
            return handle_cpc_virtual_port_read(port);
        }
        else
        {
            return wishbone_rd(wb_addr);
        }
    }

    // ==================== ПУБЛИЧНЫЕ ФУНКЦИИ ДЛЯ ТЕСТИРОВАНИЯ ====================
    uint32_t test_translate_memory_access(uint16_t addr)
    {
        return translate_memory_access(addr);
    }

    uint32_t test_translate_io_access(uint16_t port)
    {
        return translate_io_access(port);
    }

private:
    // ==================== ТРАНСЛЯЦИЯ ПАМЯТИ ====================
    uint32_t translate_memory_access(uint16_t virt_addr)
    {
        if (get_native_mode() == 0)
        { // Legacy Mode
            return translate_legacy_mode(virt_addr);
        }
        else
        { // Native Mode
            return translate_native_mode(virt_addr);
        }
    }

    uint32_t translate_legacy_mode(uint16_t virt_addr)
    {
        uint8_t bank = 0;
        uint16_t offset = virt_addr;

        if (virt_addr < 0x4000)
        {
            bank = slot_bank[0][0];
        }
        else if (virt_addr < 0x8000)
        {
            bank = slot_bank[0][1];
            offset = virt_addr - 0x4000;
        }
        else if (virt_addr < 0xC000)
        {
            bank = slot_bank[0][2];
            offset = virt_addr - 0x8000;
        }
        else
        {
            bank = slot_bank[0][3];
            offset = virt_addr - 0xC000;
        }

        return (static_cast<uint32_t>(bank) << 16) | offset;
    }

    uint32_t translate_native_mode(uint16_t virt_addr)
    {
        uint8_t slot = 0;
        uint8_t bank = 0;
        uint16_t offset = virt_addr;

        if (virt_addr < 0x4000)
        {
            slot = get_slot_for_page(0);
            bank = slot_bank[slot][0];
        }
        else if (virt_addr < 0x8000)
        {
            slot = get_slot_for_page(1);
            bank = slot_bank[slot][1];
            offset = virt_addr - 0x4000; // 0x5000 -> 0x1000
        }
        else if (virt_addr < 0xC000)
        {
            slot = get_slot_for_page(2);
            bank = slot_bank[slot][2];
            offset = virt_addr - 0x8000; // 0x9000 -> 0x1000
        }
        else
        {
            return 0xFF0000 | (virt_addr - 0xC000);
        }
        uint32_t result = (static_cast<uint32_t>(slot) << 24) |
                          (static_cast<uint32_t>(bank) << 16) |
                          offset;

        if (debug_enabled)
        {
            std::cout << "Native translate: 0x" << std::hex << virt_addr
                      << " -> slot=" << static_cast<int>(slot)
                      << ", bank=0x" << static_cast<int>(bank)
                      << ", offset=0x" << offset
                      << ", result=0x" << result << std::endl;
        }

        return result;
    }

    // ==================== ТРАНСЛЯЦИЯ IO ПОРТОВ ====================
    uint32_t translate_io_access(uint16_t port)
    {
        // Порты управления MMU мапятся в MMIO пространство LX
        if (is_mmu_control_port(port))
        {
            return 0xFFF00000 | port;
        }

        // 8-битное окно доступа (00-7F)
        if ((port & 0xFF80) == 0x0000)
        {
            return translate_8bit_io_window(port);
        }

        // CPC-style MMIO доступ (FE00)
        if (port == 0xFE00)
        {
            return translate_cpc_mmio_access();
        }

        // Стандартные порты
        return 0xFF0000 | port;
    }

    uint32_t translate_8bit_io_window(uint16_t port)
    {
        uint8_t offset = port & 0x7F;
        // Правильное вычисление: [IO_PAGE:8][offset:7] в пространстве 0xFF0000
        return 0xFF0000 | (get_io_page_select() << 7) | offset;
    }

    uint32_t translate_cpc_mmio_access()
    {
        return 0xFF0000 | (get_cpc_mmio_page() << 8);
    }

    // ==================== КЛАССИФИКАЦИЯ ПОРТОВ ====================
    bool is_mmu_control_port(uint16_t port)
    {
        return (port >= 0xD800 && port <= 0xDBFF) || // Порты выбора слота
               port == 0xF000 ||                     // MMIO_CTRL
               port == 0xF100 ||                     // IO_PAGE_SELECT
               port == 0xFD00;                       // MMIO_PAGE_SEL
    }

    bool is_cpc_virtual_port(uint16_t port)
    {
        uint16_t base = port & 0xFF00;
        return base == 0x7F00 || // Gate Array
               base == 0xBC00 || // CRTC Index
               base == 0xBD00 || // CRTC Data
               base == 0xDF00 || // ROM Select
               base == 0xF400 || // PPI Port A
               base == 0xF700;   // PPI Control
    }

    // ==================== ОБРАБОТКА ВИРТУАЛЬНЫХ ПОРТОВ CPC ====================
    void handle_cpc_virtual_port_write(uint16_t port, uint8_t data)
    {
        uint16_t base = port & 0xFF00;

        switch (base)
        {
        case 0x7F00:
            handle_gate_array_write(data);
            break;
        case 0xBC00:
            crtc_index = data;
            break;
        case 0xBD00:
            handle_crtc_write(data);
            break;
        case 0xDF00:
            handle_rom_select(data);
            break;
        case 0xF400:
            ppi_port_a = data;
            break;
        case 0xF700:
            ppi_control = data;
            break;
        }
    }

    uint8_t handle_cpc_virtual_port_read(uint16_t port)
    {
        uint16_t base = port & 0xFF00;

        switch (base)
        {
        case 0xBC00:
            return crtc_index;
        case 0xBD00:
            return read_crtc_data();
        case 0x7F00:
            return read_gate_array();
        case 0xF400:
            return ppi_port_a;
        default:
            return 0xFF;
        }
    }

    void handle_gate_array_write(uint8_t data)
    {
        gate_array_value = data;
        uint8_t reg_type = (data >> 6) & 0x03;

        if (reg_type == 3)
        { // RAM banking
            handle_ram_banking(data);
        }
    }

    uint8_t read_gate_array()
    {
        return gate_array_value;
    }

    void handle_ram_banking(uint8_t data)
    {
        uint8_t bank_config = data & 0x3F;

        if (get_native_mode() == 0)
        {
            // Legacy mode: CPC compatibility
            // Банк 2: биты 0-1, Банк 3: биты 2-3
            slot_bank[0][2] = bank_config & 0x03;
            slot_bank[0][3] = (bank_config >> 2) & 0x03;
        }
    }

    void handle_crtc_write(uint8_t data)
    {
        // Эмуляция CRTC - заглушка
        (void)data; // Подавляем warning о неиспользуемом параметре
    }

    uint8_t read_crtc_data()
    {
        // Эмуляция CRTC - заглушка
        return 0x00;
    }

    void handle_rom_select(uint8_t data)
    {
        // ROM Select: записываем значение как есть (маска 0x1F для 32 банков)
        slot_bank[0][0] = data; // Просто присваиваем значение

        if (debug_enabled)
        {
            std::cout << "ROM Select: data=0x" << std::hex << static_cast<int>(data)
                      << ", bank[0][0]=0x" << static_cast<int>(slot_bank[0][0]) << std::endl;
        }
    }
    // ==================== WISHBONE ИНТЕРФЕЙС ====================
    void wishbone_wr(uint32_t phys_addr, uint8_t data)
    {
        if (is_mmio_lx_space(phys_addr))
        {
            mmio_lx_wr(phys_addr, data);
        }
        else if (is_mmio_cpc_space(phys_addr))
        {
            mmio_cpc_wr(phys_addr, data);
        }
        else
        {
            emulate_memory_write(phys_addr, data);
        }
    }

    uint8_t wishbone_rd(uint32_t phys_addr)
    {
        if (is_mmio_lx_space(phys_addr))
        {
            return mmio_lx_rd(phys_addr);
        }
        else if (is_mmio_cpc_space(phys_addr))
        {
            return mmio_cpc_rd(phys_addr);
        }
        else
        {
            return emulate_memory_read(phys_addr);
        }
    }

    bool is_mmio_lx_space(uint32_t addr)
    {
        return (addr & 0xFFF00000) == 0xFFF00000;
    }

    bool is_mmio_cpc_space(uint32_t addr)
    {
        return (addr & 0xFF000000) == 0xFF000000;
    }

    // ==================== MMIO УСТРОЙСТВА ====================
    void mmio_lx_wr(uint32_t addr, uint8_t data)
    {
        uint16_t offset = addr & 0xFFFF;

        if (offset >= 0xD800 && offset <= 0xDBFF)
        {
            mmio_mmu_wr(offset, data);
        }
        else
        {
            switch (offset)
            {
            case 0xF000:
                control_reg = data;
                break;
            case 0xF100:
                io_page_select = data;
                break;
            case 0xFD00:
                cpc_mmio_page = data;
                break;
            }
        }
    }

    uint8_t mmio_lx_rd(uint32_t addr)
    {
        uint16_t offset = addr & 0xFFFF;

        if (offset >= 0xD800 && offset <= 0xDBFF)
        {
            return mmio_mmu_rd(offset);
        }
        else
        {
            switch (offset)
            {
            case 0xF000:
                return control_reg;
            case 0xF100:
                return io_page_select;
            case 0xFD00:
                return cpc_mmio_page;
            default:
                return 0xFF;
            }
        }
    }

    void mmio_cpc_wr(uint32_t addr, uint8_t data)
    {
        mmio_cpc_mmu_wr(addr & 0xFFFF, data);
    }

    uint8_t mmio_cpc_rd(uint32_t addr)
    {
        return mmio_cpc_mmu_rd(addr & 0xFFFF);
    }

    // ==================== РЕГИСТРЫ MMU ====================
    void mmio_mmu_wr(uint16_t offset, uint8_t data)
    {
        switch (offset)
        {
        case 0xD800:
            slot_select_page0 = data & 0x03;
            break;
        case 0xD900:
            slot_select_page1 = data & 0x03;
            break;
        case 0xDA00:
            slot_select_page2 = data & 0x03;
            break;
        case 0xDB00:
            slot_select_page3 = data & 0x03;
            break;
        }
    }

    uint8_t mmio_mmu_rd(uint16_t offset)
    {
        switch (offset)
        {
        case 0xD800:
            return slot_select_page0;
        case 0xD900:
            return slot_select_page1;
        case 0xDA00:
            return slot_select_page2;
        case 0xDB00:
            return slot_select_page3;
        default:
            return 0xFF;
        }
    }

    void mmio_cpc_mmu_wr(uint16_t offset, uint8_t data)
    {
        // Эмуляция записи в банки памяти CPC
        uint8_t page = offset >> 14; // 0-3
        uint8_t slot = get_slot_for_page(page);
        slot_bank[slot][page] = data;
    }

    uint8_t mmio_cpc_mmu_rd(uint16_t offset)
    {
        // Эмуляция чтения банков памяти CPC
        uint8_t page = offset >> 14; // 0-3
        uint8_t slot = get_slot_for_page(page);
        return slot_bank[slot][page];
    }

    // ==================== ВСПОМОГАТЕЛЬНЫЕ ФУНКЦИИ ====================
    uint8_t get_slot_for_page(uint8_t page)
    {
        switch (page)
        {
        case 0:
            return slot_select_page0 & 0x03;
        case 1:
            return slot_select_page1 & 0x03;
        case 2:
            return slot_select_page2 & 0x03;
        case 3:
            return slot_select_page3 & 0x03;
        default:
            return 0;
        }
    }

    uint8_t get_io_page_select() { return io_page_select; }
    uint8_t get_cpc_mmio_page() { return cpc_mmio_page; }
    uint8_t get_native_mode() { return control_reg & 0x01; }

    void emulate_memory_write(uint32_t addr, uint8_t data)
    {
        // Заглушка для эмуляции записи в память
        if (debug_enabled)
        {
            std::cout << "WB WR: 0x" << std::hex << addr << " = 0x" << static_cast<int>(data) << std::endl;
        }
    }

    uint8_t emulate_memory_read(uint32_t addr)
    {
        // Заглушка для эмуляции чтения из памяти
        if (debug_enabled)
        {
            std::cout << "WB RD: 0x" << std::hex << addr << std::endl;
        }
        return 0xFF;
    }
};

#include <cstdint>
#include <iostream>
#include <string>
#include <iomanip>

class MMUTester
{
private:
    AlesteLX_MMU mmu;
    int test_count = 0;
    int passed_count = 0;

public:
    void run_all_tests()
    {
        std::cout << "=== STARTING MMU COMPREHENSIVE TESTS ===\n"
                  << std::endl;

        test_cpc_memory_manager();
        test_slot_register_access();
        test_classic_space_access();
        test_direct_mmio_memory_access();
        test_direct_mmio_io_access();
        test_cpc_via_mmio();
        test_rom_write_behavior();

        std::cout << "\n=== TEST SUMMARY ===" << std::endl;
        std::cout << "Total tests: " << test_count << std::endl;
        std::cout << "Passed: " << passed_count << std::endl;
        std::cout << "Failed: " << (test_count - passed_count) << std::endl;
        std::cout << "Success rate: " << (passed_count * 100 / test_count) << "%" << std::endl;
    }

private:
    void test_cpc_memory_manager()
    {
        log_test("Testing CPC Memory Manager via Gate Array");

        // Test RAM banking in Legacy mode
        mmu.cpu_iorq_wr(0xF000, 0x00); // Legacy mode
        mmu.cpu_iorq_wr(0x7F00, 0xC3); // Gate Array: RAM banking config (bank2=3, bank3=0)

        // Verify bank configuration
        test_address_translation(0x8000, 0x00030000, "CPC Bank 2 configuration");
        test_address_translation(0xC000, 0x00000000, "CPC Bank 3 configuration");

        // Test ROM select
        mmu.cpu_iorq_wr(0xDF00, 0x15); // ROM Select
        test_address_translation(0x0000, 0x00150000, "ROM Select for page 0");
    }

    void test_slot_register_access()
    {
        log_test("Testing Slot Register access via Classic space");

        mmu.cpu_iorq_wr(0xD800, 0x01); // Page 0 -> Slot 1
        mmu.cpu_iorq_wr(0xD900, 0x02); // Page 1 -> Slot 2
        mmu.cpu_iorq_wr(0xDA00, 0x03); // Page 2 -> Slot 3
        mmu.cpu_iorq_wr(0xDB00, 0x00); // Page 3 -> Slot 0
        mmu.cpu_iorq_wr(0xF000, 0x01); // Native mode

        // Банки инициализированы как: slot0: [0,1,2,3], slot1: [0,1,2,3], etc.
        // 0x5000 = страница 1, offset = 0x5000 - 0x4000 = 0x1000
        test_address_translation(0x1000, 0x01001000, "Slot 1 for page 0");
        test_address_translation(0x5000, 0x02011000, "Slot 2 for page 1"); // slot2, bank1, offset 0x1000
        test_address_translation(0x9000, 0x03021000, "Slot 3 for page 2"); // slot3, bank2, offset 0x1000
    }

    void test_classic_space_access()
    {
        log_test("Testing Classic space IO access");

        // Configure 8-bit window
        mmu.cpu_iorq_wr(0xF100, 0xAA); // IO Page Select

        test_io_translation(0x0040, 0xFF5540, "8-bit IO window translation");
        test_io_translation(0x007F, 0xFF557F, "8-bit IO window boundary"); // 0xAA << 7 = 0x5500 + 0x7F = 0x557F
    }
    void test_direct_mmio_memory_access()
    {
        log_test("Testing direct MMIO memory access");

        // Native mode with MMIO access
        test_address_translation(0xC000, 0xFF0000, "MMIO memory access start");
        test_address_translation(0xFFFF, 0xFF3FFF, "MMIO memory access end");
    }

    void test_direct_mmio_io_access()
    {
        log_test("Testing direct MMIO IO access");

        // Test CPC-style MMIO
        mmu.cpu_iorq_wr(0xFD00, 0xBB); // CPC MMIO Page
        test_io_translation(0xFE00, 0xFFBB00, "CPC-style MMIO access");

        // Test control registers
        test_io_translation(0xF000, 0xFFF0F000, "MMIO Control register");
        test_io_translation(0xD800, 0xFFF0D800, "MMIO Slot register");
    }

    void test_cpc_via_mmio()
    {
        log_test("Testing CPC via MMIO space");

        // Write to CPC memory through MMIO
        mmu.cpu_iorq_wr(0xF000, 0x01); // Native mode

        // This would be handled by wishbone_wr -> mmio_cpc_wr
        // For testing, we check address translation
        test_address_translation(0xC000, 0xFF0000, "CPC memory via MMIO");
    }

    void test_rom_write_behavior()
    {
        log_test("Testing ROM write behavior (write to underlying RAM)");

        mmu.cpu_iorq_wr(0xF000, 0x00); // Legacy mode
        mmu.cpu_iorq_wr(0xDF00, 0x10); // ROM Select to bank 0x10
        test_address_translation(0x0000, 0x00100000, "ROM write to RAM bank");

        mmu.cpu_iorq_wr(0xDF00, 0x20); // ROM Select to bank 0x20
        test_address_translation(0x0000, 0x00200000, "ROM write to different RAM bank");
    }

    void test_address_translation(uint16_t virt_addr, uint32_t expected_phys, const std::string &description)
    {
        test_count++;
        uint32_t actual_phys = mmu.test_translate_memory_access(virt_addr);

        std::cout << "MEM: 0x" << std::hex << std::setw(4) << std::setfill('0') << virt_addr
                  << " -> 0x" << std::setw(8) << actual_phys
                  << " (expected: 0x" << std::setw(8) << expected_phys << ") - "
                  << description;

        if (actual_phys == expected_phys)
        {
            std::cout << " [PASS]" << std::endl;
            passed_count++;
        }
        else
        {
            std::cout << " [FAIL]" << std::endl;
        }
    }

    void test_io_translation(uint16_t port, uint32_t expected_phys, const std::string &description)
    {
        test_count++;
        uint32_t actual_phys = mmu.test_translate_io_access(port);

        std::cout << "IO:  0x" << std::hex << std::setw(4) << std::setfill('0') << port
                  << " -> 0x" << std::setw(8) << actual_phys
                  << " (expected: 0x" << std::setw(8) << expected_phys << ") - "
                  << description;

        if (actual_phys == expected_phys)
        {
            std::cout << " [PASS]" << std::endl;
            passed_count++;
        }
        else
        {
            std::cout << " [FAIL]" << std::endl;
        }
    }

    void log_test(const std::string &message)
    {
        std::cout << "\n--- " << message << " ---" << std::endl;
    }
};

// ==================== ТЕСТИРОВАНИЕ ====================
int main()
{
    AlesteLX_MMU mmu;

    std::cout << "=== Testing MMU Architecture ===" << std::endl;

    // Тест записи в порты выбора слота
    mmu.cpu_iorq_wr(0xD800, 0x01); // Page 0 -> Slot 1
    mmu.cpu_iorq_wr(0xD900, 0x02); // Page 1 -> Slot 2
    mmu.cpu_iorq_wr(0xDA00, 0x03); // Page 2 -> Slot 3

    // Тест управления режимами
    mmu.cpu_iorq_wr(0xF000, 0x01); // Native mode
    mmu.cpu_iorq_wr(0xF100, 0x55); // IO Page Select
    mmu.cpu_iorq_wr(0xFD00, 0xAA); // CPC MMIO Page

    // Тест виртуальных портов CPC
    mmu.cpu_iorq_wr(0xDF00, 0x10); // ROM Select
    mmu.cpu_iorq_wr(0x7F00, 0xC0); // Gate Array

    // Тест трансляции памяти
    uint32_t addr = mmu.test_translate_memory_access(0x1000);
    std::cout << "Translate 0x1000 -> 0x" << std::hex << addr << std::endl;

    // Тест трансляции IO
    addr = mmu.test_translate_io_access(0x0040);
    std::cout << "Translate IO 0x0040 -> 0x" << std::hex << addr << std::endl;

    std::cout << "=== Test Complete ===" << std::endl;

    MMUTester tester;
    tester.run_all_tests();

    return 0;
}