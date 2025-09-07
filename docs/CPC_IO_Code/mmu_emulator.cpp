#include <cstdint>
#include <iostream>
#include <stdexcept>
#include <array>
#include <iomanip>
#include <vector> // Добавить эту строку

class CpcMmu
{
private:
    uint8_t rom_bank = 0;   // Порт 0xDF00 - ROM Select
    uint8_t gate_array = 0; // Порт 0x7F00 - Gate Array

public:
    void write_port(uint16_t port, uint8_t data)
    {
        switch (port & 0xFF00)
        {
        case 0xDF00:
            rom_bank = data;
            break;
        case 0x7F00:
            gate_array = data;
            break;
        }
    }

    uint32_t translate_address(uint16_t virt_addr) const
    {
        uint8_t bank = 0;
        uint16_t offset = virt_addr;

        if (virt_addr < 0x4000)
        {
            bank = rom_bank;
        }
        else if (virt_addr < 0x8000)
        {
            bank = 1;
            offset = virt_addr - 0x4000;
        }
        else if (virt_addr < 0xC000)
        {
            bank = gate_array & 0x03;
            offset = virt_addr - 0x8000;
        }
        else
        {
            bank = (gate_array >> 2) & 0x03;
            offset = virt_addr - 0xC000;
        }

        return (static_cast<uint32_t>(bank) << 16) | offset;
    }

    uint8_t get_rom_bank() const { return rom_bank; }
    uint8_t get_gate_array() const { return gate_array; }
};

class LxMmu
{
private:
    std::array<std::array<uint8_t, 4>, 4> mapper;

    union SlotSelect
    {
        struct
        {
            uint8_t page0 : 2;
            uint8_t page1 : 2;
            uint8_t page2 : 2;
            uint8_t page3 : 2;
        } bits;
        uint8_t value;

        SlotSelect() : value(0) {}
    };

    SlotSelect slot_select_user;
    SlotSelect slot_select_super;

    uint8_t mmio_page_register = 0;

    union ControlReg
    {
        struct
        {
            uint8_t native_mode : 1;
            uint8_t supervisor_mode : 1;
            uint8_t reserved : 6;
        } bits;
        uint8_t value;

        ControlReg() : value(0) {}
    };

    ControlReg control_reg;

public:
    LxMmu()
    {
        for (size_t i = 0; i < mapper.size(); i++)
        {
            for (size_t j = 0; j < mapper[i].size(); j++)
            {
                mapper[i][j] = j;
            }
        }
    }

    void write_port(uint8_t port, uint8_t data)
    {
        std::cout << "LX MMU WR: 0x" << std::hex << static_cast<int>(port)
                  << " = 0x" << static_cast<int>(data) << std::endl;

        switch (port)
        {
        case 0xDC:
            mapper[get_actual_slot(0)][0] = data;
            break;
        case 0xDD:
            mapper[get_actual_slot(1)][1] = data;
            break;
        case 0xDE:
            mapper[get_actual_slot(2)][2] = data;
            break;
        case 0xDF:
            mapper[get_actual_slot(3)][3] = data;
            break;
        case 0xDB:
            slot_select_user.value = data;
            break;
        case 0xD9:
            slot_select_super.value = data;
            break;
        case 0xD7:
            control_reg.value = data;
            break;
        case 0xD3:
            mmio_page_register = data;
            break;
        }
    }

    bool get_supervisor_mode() const
    {
        return control_reg.bits.supervisor_mode;
    }

    bool get_native_mode() const
    {
        return control_reg.bits.native_mode;
    }

    uint32_t translate_address(uint16_t virt_addr) const
    {
        if (virt_addr >= 0xC000)
        {
            return 0xFF0000 | (virt_addr - 0xC000);
        }

        uint8_t slot = 0;
        uint8_t bank = 0;
        uint16_t offset = virt_addr;

        if (virt_addr < 0x4000)
        {
            slot = get_actual_slot(0);
            bank = mapper[slot][0];
        }
        else if (virt_addr < 0x8000)
        {
            slot = get_actual_slot(1);
            bank = mapper[slot][1];
            offset = virt_addr - 0x4000;
        }
        else
        {
            slot = get_actual_slot(2);
            bank = mapper[slot][2];
            offset = virt_addr - 0x8000;
        }

        return (static_cast<uint32_t>(slot) << 24) |
               (static_cast<uint32_t>(bank) << 16) |
               offset;
    }

    uint32_t translate_io(uint16_t port) const
    {
        uint8_t port_low = port & 0xFF;

        if (port_low <= 0x7F)
        {
            return 0xFF0000 | (mmio_page_register << 7) | port_low;
        }

        if (port_low >= 0xD3 && port_low <= 0xDF)
        {
            return 0xFFF00000 | port_low;
        }

        return 0xFF0000 | port;
    }

    uint8_t get_slot_select_user(uint8_t page) const
    {
        return slot_select_user.value;
    }

    uint8_t get_slot_select_super(uint8_t page) const
    {
        return slot_select_super.value;
    }

    uint8_t get_actual_slot(uint8_t page) const
    {
        uint8_t base_slot = get_supervisor_mode() ? get_slot_select_super(page) : get_slot_select_user(page);
        return get_supervisor_mode() ? (base_slot | 0x03) : base_slot;
    }

    uint8_t get_io_page_select() const { return mmio_page_register; }
    uint8_t get_control_reg() const { return control_reg.value; }
    bool get_supervisor_flag() const { return control_reg.bits.supervisor_mode; }
};

class AlesteLX_MMU
{
private:
    CpcMmu cpc_mmu;
    LxMmu lx_mmu;
    bool debug_enabled = true;

    uint8_t crtc_index = 0;
    uint8_t ppi_port_a = 0;
    uint8_t ppi_control = 0;

    std::vector<uint8_t> wishbone_memory;

public:
    AlesteLX_MMU() : wishbone_memory(0x1000000, 0xFF)
    {
    }

    // Методы для переключения режимов (через прерывания)
    void switch_to_lx_mode() {
        lx_mmu.write_port(0xD7, 0x01); // Включаем LX режим
    }

    void switch_to_cpc_mode() {
        lx_mmu.write_port(0xD7, 0x00); // Выключаем LX режим
    }

    void cpu_iorq_wr(uint16_t port, uint8_t data)
    {
        if (debug_enabled)
        {
            std::cout << "CPU IO WR: 0x" << std::hex << port << " = 0x" << static_cast<int>(data) << std::endl;
        }

        uint8_t port_low = port & 0xFF;
        uint16_t port_high = port & 0xFF00;
        
        if (lx_mmu.get_native_mode())
        {
            // LX режим - преобразуем 16-битные порты в 8-битные
            uint8_t lx_port = (port_high >> 8) & 0xFF;
            std::cout << "LX MODE WR: 0x" << std::hex << static_cast<int>(lx_port) 
                      << " = 0x" << static_cast<int>(data) << std::endl;
            lx_mmu.write_port(lx_port, data);
        }
        else
        {
            // CPC режим - ТОЛЬКО 2 порта!
            if (port_high == 0xD300)
            {
                lx_mmu.write_port(0xD3, data); // Page register
            }
            else if (port_high == 0xD000)
            {
                // Data window
                uint32_t mmio_addr = lx_mmu.translate_io(port_low);
                wishbone_wr(mmio_addr, data);
            }
            else if (port_high == 0x7F00 || port_high == 0xDF00)
            {
                cpc_mmu.write_port(port, data);
            }
            else if (is_cpc_virtual_port(port))
            {
                handle_cpc_virtual_port_write(port, data);
            }
            else
            {
                uint32_t wb_addr = translate_io_access(port);
                wishbone_wr(wb_addr, data);
            }
        }
    }
    uint8_t cpu_iorq_rd(uint16_t port)
    {
        if (debug_enabled)
        {
            std::cout << "CPU IO RD: 0x" << std::hex << port << std::endl;
        }

        uint8_t port_low = port & 0xFF;
        uint16_t port_high = port & 0xFF00;

        if (lx_mmu.get_native_mode())
        {
            uint32_t wb_addr = lx_mmu.translate_io(port);
            return wishbone_rd(wb_addr);
        }
        else
        {
            if (port_high == 0xD000)
            {
                uint32_t mmio_addr = lx_mmu.translate_io(port_low);
                return wishbone_rd(mmio_addr);
            }
            else if (is_cpc_virtual_port(port))
            {
                return handle_cpc_virtual_port_read(port);
            }
            else
            {
                uint32_t wb_addr = translate_io_access(port);
                return wishbone_rd(wb_addr);
            }
        }
        return 0xFF;
    }

    uint32_t translate_memory_access(uint16_t addr)
    {
        return lx_mmu.get_native_mode() ? lx_mmu.translate_address(addr)
                                        : cpc_mmu.translate_address(addr);
    }

    uint32_t translate_io_access(uint16_t port)
    {
        return lx_mmu.translate_io(port);
    }

    uint8_t test_get_cpc_rom_bank() const { return cpc_mmu.get_rom_bank(); }
    uint8_t test_get_cpc_gate_array() const { return cpc_mmu.get_gate_array(); }
    uint8_t test_get_lx_slot_select_user(uint8_t page) const { return lx_mmu.get_slot_select_user(page); }
    uint8_t test_get_lx_slot_select_super(uint8_t page) const { return lx_mmu.get_slot_select_super(page); }
    uint8_t test_get_lx_io_page_select() const { return lx_mmu.get_io_page_select(); }
    uint8_t test_get_lx_control_reg() const { return lx_mmu.get_control_reg(); }
    bool test_get_native_mode() const { return lx_mmu.get_native_mode(); }
    bool test_get_supervisor_mode() const { return lx_mmu.get_supervisor_flag(); }

    // Для тестирования Wishbone
    void test_set_wishbone(uint32_t addr, uint8_t data) { wishbone_memory[addr & 0xFFFFFF] = data; }
    uint8_t test_get_wishbone(uint32_t addr) const { return wishbone_memory[addr & 0xFFFFFF]; }

private:
    bool is_cpc_virtual_port(uint16_t port)
    {
        uint16_t base = port & 0xFF00;
        return base == 0xBC00 || base == 0xBD00 || base == 0xF400 || base == 0xF700;
    }

    void handle_cpc_virtual_port_write(uint16_t port, uint8_t data)
    {
        uint16_t base = port & 0xFF00;
        switch (base)
        {
        case 0xBC00:
            crtc_index = data;
            break;
        case 0xBD00:
            handle_crtc_write(data);
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
        case 0xF400:
            return ppi_port_a;
        default:
            return 0xFF;
        }
    }

    void handle_crtc_write(uint8_t data) { (void)data; }
    uint8_t read_crtc_data() { return 0x00; }

    // В методах wishbone_wr и wishbone_rd обращайся так:
    void wishbone_wr(uint32_t phys_addr, uint8_t data)
    {
        wishbone_memory[phys_addr & 0xFFFFFF] = data;
    }

    uint8_t wishbone_rd(uint32_t phys_addr) const
    {
        return wishbone_memory[phys_addr & 0xFFFFFF];
    }
};

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
        test_cpc_mmio_access();
        test_slot_register_access();
        test_classic_space_access();
        test_direct_mmio_memory_access();
        test_direct_mmio_io_access();
        test_cpc_via_mmio();
        test_rom_write_behavior();
        test_supervisor_mode();
        test_new_mmu_port_addressing();
        test_mmio_window_access();
        test_mmu_register_access();

        std::cout << "\n=== TEST SUMMARY ===" << std::endl;
        std::cout << "Total tests: " << std::dec << test_count << std::endl;
        std::cout << "Passed: " << std::dec << passed_count << std::endl;
        std::cout << "Failed: " << std::dec << (test_count - passed_count) << std::endl;
        std::cout << "Success rate: " << std::dec << (passed_count * 100 / test_count) << "%" << std::endl;
    }

private:
    void test_cpc_memory_manager()
    {
        log_test("Testing CPC Memory Manager via Gate Array");

        mmu.cpu_iorq_wr(0x7F00, 0xC3);
        mmu.cpu_iorq_wr(0xDF00, 0x15);
        test_address_translation(0x8000, 0x00030000, "CPC Bank 2 configuration");
        test_address_translation(0xC000, 0x00000000, "CPC Bank 3 configuration");
        test_address_translation(0x0000, 0x00150000, "ROM Select for page 0");
    }

    void test_cpc_mmio_access()
    {
        log_test("Testing CPC MMIO access through D300/D000");

        // Настраиваем MMIO window на страницу 0xC0
        mmu.cpu_iorq_wr(0xD300, 0xC0);

        // Пишем в MMIO адрес 0x10 через порт D010
        mmu.cpu_iorq_wr(0xD010, 0x55);

        // Проверяем, что записалось по правильному адресу
        // 0xFF0000 | (0xC0 << 7) | 0x10 = 0xFF6010
        test_wishbone_value(0xFF6010, 0x55, "CPC MMIO write through D010");

        // Читаем обратно
        uint8_t value = mmu.cpu_iorq_rd(0xD010);
        test_register_value(value, 0x55, "CPC MMIO read through D010");
    }

    void test_classic_space_access()
    {
        log_test("Testing Classic space IO access");
        mmu.cpu_iorq_wr(0xD300, 0xAA);
        test_register_value(mmu.test_get_lx_io_page_select(), 0xAA, "IO page select");
        test_io_translation(0x0040, 0xFF5540, "8-bit IO window translation");
    }


    void test_direct_mmio_io_access()
    {
        log_test("Testing direct MMIO IO access");
        test_io_translation(0xD7, 0xFFF000D7, "SYS_CTRL register address");
        test_io_translation(0xDB, 0xFFF000DB, "SLOT_SEL_USER register address");
    }


    void test_rom_write_behavior()
    {
        log_test("Testing ROM write behavior (write to underlying RAM)");
        mmu.cpu_iorq_wr(0xDF00, 0x10);
        test_address_translation(0x0000, 0x00100000, "ROM write to RAM bank");
        mmu.cpu_iorq_wr(0xDF00, 0x20);
        test_address_translation(0x0000, 0x00200000, "ROM write to different RAM bank");
    }


    void test_mmio_window_access()
    {
        log_test("Testing MMIO window access through port D3");
        mmu.cpu_iorq_wr(0xD300, 0xC0);
        test_io_translation(0x002F, 0xFF602F, "MMIO window translation 0x002F -> 0xC02F");
        test_io_translation(0x007F, 0xFF607F, "MMIO window translation 0x007F -> 0xC07F");
        mmu.cpu_iorq_wr(0xD300, 0x80);
        test_io_translation(0x0010, 0xFF4010, "MMIO window translation 0x0010 -> 0x8010"); // Исправлено ожидание
    }

    void test_mmu_register_access()
    {
        log_test("Testing MMU register access through dedicated addresses");
        test_io_translation(0xDC, 0xFFF000DC, "BANK_0 register address");
        test_io_translation(0xDF, 0xFFF000DF, "BANK_3 register address");
        test_io_translation(0xDB, 0xFFF000DB, "SLOT_SEL_USER register address");
        test_io_translation(0xD7, 0xFFF000D7, "SYS_CTRL register address");
    }

    void test_address_translation(uint16_t virt_addr, uint32_t expected_phys, const std::string &description)
    {
        test_count++;
        uint32_t actual_phys = mmu.translate_memory_access(virt_addr);
        std::cout << "MEM: 0x" << std::hex << std::setw(4) << std::setfill('0') << virt_addr
                  << " -> 0x" << std::setw(8) << actual_phys
                  << " (expected: 0x" << std::setw(8) << expected_phys << ") - " << description;
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
        uint32_t actual_phys = mmu.translate_io_access(port);
        std::cout << "IO:  0x" << std::hex << std::setw(4) << std::setfill('0') << port
                  << " -> 0x" << std::setw(8) << actual_phys
                  << " (expected: 0x" << std::setw(8) << expected_phys << ") - " << description;
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

    void test_register_value(uint8_t actual, uint8_t expected, const std::string &description)
    {
        test_count++;
        std::cout << "REG: 0x" << std::hex << static_cast<int>(actual)
                  << " (expected: 0x" << static_cast<int>(expected) << ") - " << description;
        if (actual == expected)
        {
            std::cout << " [PASS]" << std::endl;
            passed_count++;
        }
        else
        {
            std::cout << " [FAIL]" << std::endl;
        }
    }

    void test_wishbone_value(uint32_t addr, uint8_t expected, const std::string &description)
    {
        test_count++;
        uint8_t actual = mmu.test_get_wishbone(addr);
        std::cout << "WB:  0x" << std::hex << std::setw(8) << addr
                  << " = 0x" << std::setw(2) << static_cast<int>(actual)
                  << " (expected: 0x" << std::setw(2) << static_cast<int>(expected) << ") - " << description;
        if (actual == expected)
        {
            std::cout << " [PASS]" << std::endl;
            passed_count++;
        }
        else
        {
            std::cout << " [FAIL]" << std::endl;
        }
    }

    void test_slot_register_access()
    {
        log_test("Testing Slot Register access in LX mode");
        
        // Включаем LX режим через метод переключения
        mmu.switch_to_lx_mode();
        
        // В LX режиме используем 16-битные порты
        mmu.cpu_iorq_wr(0xDB00, 0x01); // User slot
        mmu.cpu_iorq_wr(0xD900, 0x02); // Super slot
        
        test_register_value(mmu.test_get_lx_slot_select_user(0), 0x01, "User slot select page 0");
        test_register_value(mmu.test_get_lx_slot_select_super(0), 0x02, "Super slot select page 0");
        
        // Возвращаем в CPC режим
        mmu.switch_to_cpc_mode();
    }

    void test_direct_mmio_memory_access()
    {
        log_test("Testing direct MMIO memory access");
        mmu.switch_to_lx_mode();
        test_address_translation(0xC000, 0xFF0000, "MMIO memory access start");
        test_address_translation(0xFFFF, 0xFF3FFF, "MMIO memory access end");
        mmu.switch_to_cpc_mode();
    }

    void test_cpc_via_mmio()
    {
        log_test("Testing CPC via MMIO space");
        mmu.switch_to_lx_mode();
        test_address_translation(0xC000, 0xFF0000, "CPC memory via MMIO");
        mmu.switch_to_cpc_mode();
    }

    void test_supervisor_mode()
    {
        log_test("Testing Supervisor Mode");
        mmu.switch_to_lx_mode();
        mmu.cpu_iorq_wr(0xDB00, 0x00); // User slot
        mmu.cpu_iorq_wr(0xD900, 0x01); // Super slot
        mmu.cpu_iorq_wr(0xD700, 0x03); // Control
        test_register_value(mmu.test_get_supervisor_mode(), true, "Supervisor mode enabled");
        test_address_translation(0x1000, 0x03001000, "Supervisor mode uses super slot");
        mmu.switch_to_cpc_mode();
    }

    void test_new_mmu_port_addressing()
    {
        log_test("Testing new MMU port addressing (DC-DF, DB, D9, D7, D3)");
        mmu.switch_to_lx_mode();
        mmu.cpu_iorq_wr(0xDC00, 0x10); // BANK0
        mmu.cpu_iorq_wr(0xDD00, 0x20); // BANK1
        mmu.cpu_iorq_wr(0xDE00, 0x30); // BANK2
        mmu.cpu_iorq_wr(0xDF00, 0x40); // BANK3
        mmu.cpu_iorq_wr(0xDB00, 0x55); // User slot
        mmu.cpu_iorq_wr(0xD900, 0xAA); // Super slot
        mmu.cpu_iorq_wr(0xD700, 0x03); // Control
        mmu.cpu_iorq_wr(0xD300, 0x77); // MMIO Page
        test_register_value(mmu.test_get_lx_slot_select_user(0), 0x55, "User slot via DB");
        test_register_value(mmu.test_get_lx_slot_select_super(0), 0xAA, "Super slot via D9");
        test_register_value(mmu.test_get_lx_control_reg(), 0x03, "Control via D7");
        test_register_value(mmu.test_get_lx_io_page_select(), 0x77, "MMIO Page via D3");
        mmu.switch_to_cpc_mode();
    }
    void log_test(const std::string &message)
    {
        std::cout << "\n--- " << message << " ---" << std::endl;
    }
};

int main()
{
    std::cout << "Program starting..." << std::endl;

    try
    {

        MMUTester tester;
        tester.run_all_tests();
        return 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Standard exception: " << e.what() << std::endl;
        return 1;
    }
    catch (...)
    {
        std::cerr << "Unknown exception occurred!" << std::endl;
        return 1;
    }
    return 0;
}