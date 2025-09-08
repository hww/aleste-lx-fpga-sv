#include <cstdint>
#include <iostream>
#include <stdexcept>
#include <array>
#include <iomanip>
#include <vector>
#include <bitset>
#include <functional>

class CpcMmu
{
private:
    uint8_t rom_bank = 0;
    uint8_t gate_array = 0;

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
            // Page 2: бит 2 определяет банк 2 или 4
            bank = (gate_array & 0x04) ? 4 : 2;
            offset = virt_addr - 0x8000;
        }
        else
        {
            // Page 3: биты 1-0 определяют банк 0-3
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
    std::array<std::array<uint8_t, 4>, 4> mapper_slots;

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
            uint8_t supervisor_hook : 1;
            uint8_t reserved : 5;
        } bits;
        uint8_t value;
        ControlReg() : value(0) {}
    };

    ControlReg control_reg;

    std::function<void(uint32_t, uint8_t)> wishbone_write_callback;

public:
    LxMmu()
    {
        for (size_t slot = 0; slot < 4; slot++)
        {
            for (size_t page = 0; page < 4; page++)
            {
                mapper_slots[slot][page] = page; // Инициализация по умолчанию
            }
        }
        slot_select_super.value = 0xFF; // После сброса все страницы супервизора = слот 3
    }

    void set_wishbone_callback(std::function<void(uint32_t, uint8_t)> callback)
    {
        wishbone_write_callback = callback;
    }

    void write_port(uint8_t port, uint8_t data)
    {
        uint32_t wb_addr = 0;
        uint8_t current_slot = get_actual_slot(0); // Получаем текущий слот

        switch (port)
        {
        case 0xDC:
            mapper_slots[current_slot][0] = data;
            wb_addr = 0xFC000C; // BANK_0
            break;
        case 0xDD:
            mapper_slots[current_slot][1] = data;
            wb_addr = 0xFC000D; // BANK_1
            break;
        case 0xDE:
            mapper_slots[current_slot][2] = data;
            wb_addr = 0xFC000E; // BANK_2
            break;
        case 0xDF:
            mapper_slots[current_slot][3] = data;
            wb_addr = 0xFC000F; // BANK_3
            break;
        case 0xDB:
            slot_select_user.value = data;
            wb_addr = 0xFC000B; // SLOT_SEL_USER
            break;
        case 0xD9:
            slot_select_super.value = data;
            wb_addr = 0xFC0009; // SLOT_SEL_SUPER
            break;
        case 0xD7:
            control_reg.value = data;
            wb_addr = 0xFC0007; // CONTROL
            break;
        case 0xD3:
            mmio_page_register = data;
            wb_addr = 0xFC0003; // PAGE
            break;
        }

        // Вызываем callback для записи в Wishbone
        if (wishbone_write_callback && wb_addr != 0)
        {
            wishbone_write_callback(wb_addr, data);
        }
    }

    uint8_t read_port(uint8_t port) const
    {
        uint8_t current_slot = get_actual_slot(0);

        switch (port)
        {
        case 0xDC:
            return mapper_slots[current_slot][0];
        case 0xDD:
            return mapper_slots[current_slot][1];
        case 0xDE:
            return mapper_slots[current_slot][2];
        case 0xDF:
            return mapper_slots[current_slot][3];
        case 0xDB:
            return slot_select_user.value;
        case 0xD9:
            return slot_select_super.value;
        case 0xD7:
            return control_reg.value;
        case 0xD3:
            return mmio_page_register;
        default:
            return 0xFF;
        }
    }

    bool get_supervisor_mode() const { return control_reg.bits.supervisor_mode; }
    bool get_native_mode() const { return control_reg.bits.native_mode; }
    bool get_supervisor_hook() const { return control_reg.bits.supervisor_hook; }

    uint32_t translate_address(uint16_t virt_addr) const
    {
        if (get_supervisor_mode() && virt_addr >= 0xC000)
        {
            return 0xFC0000 | (virt_addr - 0xC000);
        }

        uint8_t page;
        uint16_t offset = virt_addr;

        if (virt_addr < 0x4000)
            page = 0;
        else if (virt_addr < 0x8000)
        {
            page = 1;
            offset -= 0x4000;
        }
        else if (virt_addr < 0xC000)
        {
            page = 2;
            offset -= 0x8000;
        }
        else
        {
            page = 3;
            offset -= 0xC000;
        }

        uint8_t slot = get_actual_slot(page);
        uint8_t bank = mapper_slots[slot][page];

        // Правильная адресация: (slot * 16 + bank) * 0x10000 + offset
        uint32_t physical_bank = (slot * 16) + bank;
        return (physical_bank << 16) | offset;
    }

    uint32_t translate_io(uint16_t port) const
    {
        uint8_t port_high = (port >> 8) & 0xFF;
        uint8_t port_low = port & 0xFF;

        if (get_native_mode())
        {
            if (port_high < 0xC0)
            {
                // В Native режиме используем ТОЛЬКО порты 0x00-0xBF для MMIO
                return 0xFC0000 | (mmio_page_register << 8) | port_low;
            }
            else
            {
                // Порты 0xC0-0xFF идут в Legacy space
                return 0xFF0000 | port;
            }
        }
        else
        {
            // В Legacy режиме только конкретные порты идут в MMIO
            if (port == 0xD300)
            {
                return 0xFC0003; // PAGE register
            }
            else if ((port & 0xFF00) == 0xD000 && port_low <= 0xBF)
            {
                // D000-D0BF используют текущую страницу MMIO
                return 0xFC0000 | (mmio_page_register << 8) | port_low;
            }
            else
            {
                // Все остальные порты идут в Legacy space
                return 0xFF0000 | port;
            }
        }
    }

    uint8_t get_actual_slot(uint8_t page) const
    {
        if (get_supervisor_mode())
        {
            return 3;
        }
        else
        {
            switch (page)
            {
            case 0:
                return slot_select_user.bits.page0;
            case 1:
                return slot_select_user.bits.page1;
            case 2:
                return slot_select_user.bits.page2;
            case 3:
                return slot_select_user.bits.page3;
            default:
                return 0;
            }
        }
    }

    // Методы для тестирования
    uint8_t get_slot_select_user() const { return slot_select_user.value; }
    uint8_t get_slot_select_super() const { return slot_select_super.value; }
    uint8_t get_io_page_select() const { return mmio_page_register; }
    uint8_t get_control_reg() const { return control_reg.value; }
};

class AlesteLX_MMU
{
private:
    CpcMmu cpc_mmu;
    LxMmu lx_mmu;
    bool debug_enabled = true;

    // Эмуляция устройств CPC
    uint8_t crtc_index = 0;
    std::array<uint8_t, 32> crtc_registers = {};
    uint8_t ppi_port_a = 0;
    uint8_t ppi_port_b = 0;
    uint8_t ppi_port_c = 0;
    uint8_t ppi_control = 0;

    std::vector<uint8_t> wishbone_memory;

public:
    AlesteLX_MMU() : wishbone_memory(0x1000000, 0xFF)
    {
        // Устанавливаем callback для LxMmu
        lx_mmu.set_wishbone_callback([this](uint32_t addr, uint8_t data)
                                     { this->wishbone_wr(addr, data); });
    }

    void enter_supervisor_mode()
    {
        lx_mmu.write_port(0xD7, 0x03);
    }

    void exit_supervisor_mode()
    {
        lx_mmu.write_port(0xD7, 0x00);
    }

    void cpu_iorq_wr(uint16_t port, uint8_t data)
    {
        if (debug_enabled)
        {
            std::cout << "CPU IO WR: 0x" << std::hex << port << " = 0x" << static_cast<int>(data) << std::endl;
        }

        if (lx_mmu.get_native_mode())
        {
            handle_native_io_write(port, data);
        }
        else
        {
            handle_legacy_io_write(port, data);
        }
    }

    uint8_t cpu_iorq_rd(uint16_t port)
    {
        if (debug_enabled)
        {
            std::cout << "CPU IO RD: 0x" << std::hex << port << std::endl;
        }

        if (lx_mmu.get_native_mode())
        {
            return handle_native_io_read(port);
        }
        else
        {
            return handle_legacy_io_read(port);
        }
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

    void sync_mmu_to_wishbone(uint32_t wb_addr, uint8_t data)
    {
        wishbone_wr(wb_addr, data);
    }

    // Методы для тестирования
    uint8_t test_get_cpc_rom_bank() const { return cpc_mmu.get_rom_bank(); }
    uint8_t test_get_cpc_gate_array() const { return cpc_mmu.get_gate_array(); }
    uint8_t test_get_lx_slot_select_user(uint8_t page) const { return lx_mmu.get_slot_select_user(); }
    uint8_t test_get_lx_slot_select_super(uint8_t page) const { return lx_mmu.get_slot_select_super(); }
    uint8_t test_get_lx_io_page_select() const { return lx_mmu.get_io_page_select(); }
    uint8_t test_get_lx_control_reg() const { return lx_mmu.get_control_reg(); }
    bool test_get_native_mode() const { return lx_mmu.get_native_mode(); }
    bool test_get_supervisor_mode() const { return lx_mmu.get_supervisor_mode(); }

    void test_set_wishbone(uint32_t addr, uint8_t data)
    {
        wishbone_memory[addr & 0xFFFFFF] = data;
    }
    uint8_t test_get_wishbone(uint32_t addr) const
    {
        return wishbone_memory[addr & 0xFFFFFF];
    }

private:
    void handle_native_io_write(uint16_t port, uint8_t data)
    {
        uint8_t port_high = (port >> 8) & 0xFF;

        if (port_high < 0xC0)
        {
            // MMIO devices - обрабатываем специальные порты MMU
            uint8_t port_low = port & 0xFF;
            lx_mmu.write_port(port_low, data);

            // Также записываем в Wishbone для эмуляции
            uint32_t wb_addr = 0xFC0000 | (lx_mmu.get_io_page_select() << 8) | port_low;
            wishbone_wr(wb_addr, data);
        }
        else
        {
            // Legacy devices - пишем непосредственно в Wishbone
            uint32_t wb_addr = 0xFF0000 | port;
            wishbone_wr(wb_addr, data);
        }
    }

    uint8_t handle_native_io_read(uint16_t port)
    {
        uint8_t port_high = (port >> 8) & 0xFF;

        if (port_high < 0xC0)
        {
            // MMIO devices - читаем из Wishbone
            uint32_t wb_addr = 0xFC0000 | (lx_mmu.get_io_page_select() << 8) | (port & 0xFF);
            return wishbone_rd(wb_addr);
        }
        else
        {
            // Legacy devices - читаем из Wishbone
            uint32_t wb_addr = 0xFF0000 | port;
            return wishbone_rd(wb_addr);
        }
    }

    void handle_legacy_io_write(uint16_t port, uint8_t data)
    {
        uint16_t port_high = port & 0xFF00;
        uint8_t port_low = port & 0xFF;

        if (port_high == 0xD300)
        {
            lx_mmu.write_port(0xD3, data);
            wishbone_wr(0xFC0003, data);
        }
        else if (port_high == 0xD000 && port_low <= 0xBF)
        {
            uint32_t mmio_addr = lx_mmu.translate_io(port);
            wishbone_wr(mmio_addr, data);
        }
        else
        {
            handle_cpc_device_write(port, data);
        }
    }

    uint8_t handle_legacy_io_read(uint16_t port)
    {
        uint16_t port_high = port & 0xFF00;
        uint8_t port_low = port & 0xFF;

        if (port_high == 0xD000 && port_low <= 0xBF)
        {
            uint32_t mmio_addr = lx_mmu.translate_io(port);
            return wishbone_rd(mmio_addr);
        }
        else
        {
            return handle_cpc_device_read(port);
        }
    }

    void handle_cpc_device_write(uint16_t port, uint8_t data)
    {
        uint16_t base = port & 0xFF00;

        switch (base)
        {
        case 0x7F00:
            cpc_mmu.write_port(port, data);
            break;
        case 0xDF00:
            cpc_mmu.write_port(port, data);
            break;
        case 0xBC00:
            crtc_index = data & 0x1F;
            break;
        case 0xBD00:
            if (crtc_index < crtc_registers.size())
            {
                crtc_registers[crtc_index] = data;
            }
            break;
        case 0xF400:
            ppi_port_a = data;
            break;
        case 0xF500:
            ppi_port_b = data;
            break;
        case 0xF600:
            ppi_port_c = data;
            break;
        case 0xF700:
            ppi_control = data;
            break;
        default:
            wishbone_wr(0xFF0000 | port, data);
            break;
        }
    }

    uint8_t handle_cpc_device_read(uint16_t port)
    {
        uint16_t base = port & 0xFF00;

        switch (base)
        {
        case 0xBC00:
            return crtc_index;
        case 0xBD00:
            return (crtc_index < crtc_registers.size()) ? crtc_registers[crtc_index] : 0xFF;
        case 0xF400:
            return ppi_port_a;
        case 0xF500:
            return ppi_port_b;
        case 0xF600:
            return ppi_port_c;
        default:
            return wishbone_rd(0xFF0000 | port);
        }
    }

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

        test_cpc_legacy_ram_banking();
        test_cpc_expanded_ram();
        test_cpc_rom_layouts();

        test_native_direct_mmu_access();
        test_native_mmio_window();
        test_slot_registers();
        test_mapper_per_slot();
        test_supervisor_slot3_access();
        test_mode_transition_effects();
        test_complex_memory_mapping();
        test_edge_cases();
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
        // 0xFC0000 | (0xC0 << 8) | 0x10 = 0xFCC010
        test_wishbone_value(0xFCC010, 0x55, "CPC MMIO write through D010");

        // Читаем обратно
        uint8_t value = mmu.cpu_iorq_rd(0xD010);
        test_register_value(value, 0x55, "CPC MMIO read through D010");
    }

    void test_classic_space_access()
    {
        log_test("Testing Classic space IO access");
        mmu.cpu_iorq_wr(0xD300, 0xAA);
        test_register_value(mmu.test_get_lx_io_page_select(), 0xAA, "IO page select");

        // Тестируем в Native режиме
        mmu.enter_supervisor_mode();
        test_io_translation(0x0040, 0xFCAA40, "8-bit IO window translation");
        mmu.exit_supervisor_mode();
    }

    void test_direct_mmio_io_access()
    {
        log_test("Testing direct MMIO IO access");
        mmu.enter_supervisor_mode();   // Переходим в Native режим
        mmu.cpu_iorq_wr(0x00D3, 0xC0); // Устанавливаем страницу MMIO

        test_io_translation(0x00D7, 0xFCC0D7, "SYS_CTRL register address");
        test_io_translation(0x00DB, 0xFCC0DB, "SLOT_SEL_USER register address");

        mmu.exit_supervisor_mode();
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
        mmu.enter_supervisor_mode();   // Переходим в Native режим
        mmu.cpu_iorq_wr(0x00D3, 0xC0); // Устанавливаем страницу MMIO

        test_io_translation(0x002F, 0xFCC02F, "MMIO window translation 0x002F -> 0xC02F");
        test_io_translation(0x007F, 0xFCC07F, "MMIO window translation 0x007F -> 0xC07F");

        mmu.cpu_iorq_wr(0x00D3, 0x80); // Меняем страницу MMIO
        test_io_translation(0x0010, 0xFC8010, "MMIO window translation 0x0010 -> 0x8010");

        mmu.exit_supervisor_mode();
    }

    void test_mmu_register_access()
    {
        log_test("Testing MMU register access through dedicated addresses");
        mmu.enter_supervisor_mode();   // Переходим в Native режим
        mmu.cpu_iorq_wr(0x00D3, 0xC0); // Устанавливаем страницу MMIO

        test_io_translation(0x00DC, 0xFCC0DC, "BANK_0 register address");
        test_io_translation(0x00DF, 0xFCC0DF, "BANK_3 register address");
        test_io_translation(0x00DB, 0xFCC0DB, "SLOT_SEL_USER register address");
        test_io_translation(0x00D7, 0xFCC0D7, "SYS_CTRL register address");

        mmu.exit_supervisor_mode();
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

        mmu.enter_supervisor_mode(); // Переходим в Native режим

        // В Native режиме используем 8-битные порты
        mmu.cpu_iorq_wr(0x00DB, 0x01); // User slot - порт 0xDB
        mmu.cpu_iorq_wr(0x00D9, 0x02); // Super slot - порт 0xD9

        test_register_value(mmu.test_get_lx_slot_select_user(0), 0x01, "User slot select page 0");
        test_register_value(mmu.test_get_lx_slot_select_super(0), 0x02, "Super slot select page 0");

        mmu.exit_supervisor_mode();
    }

    void test_direct_mmio_memory_access()
    {
        log_test("Testing direct MMIO memory access");
        mmu.enter_supervisor_mode();
        test_address_translation(0xC000, 0xFC0000, "MMIO memory access start"); // Исправлено ожидание
        test_address_translation(0xFFFF, 0xFC3FFF, "MMIO memory access end");   // Исправлено ожидание
        mmu.exit_supervisor_mode();
    }

    void test_cpc_via_mmio()
    {
        log_test("Testing CPC via MMIO space");
        mmu.enter_supervisor_mode();
        test_address_translation(0xC000, 0xFC0000, "CPC memory via MMIO"); // Исправлено ожидание
        mmu.exit_supervisor_mode();
    }

    void test_supervisor_mode()
    {
        log_test("Testing Supervisor Mode");
        mmu.enter_supervisor_mode();
        mmu.cpu_iorq_wr(0xDB00, 0x00); // User slot
        mmu.cpu_iorq_wr(0xD900, 0x01); // Super slot
        mmu.cpu_iorq_wr(0xD700, 0x03); // Control
        test_register_value(mmu.test_get_supervisor_mode(), true, "Supervisor mode enabled");
        test_address_translation(0x1000, 0x03001000, "Supervisor mode uses super slot");
        mmu.exit_supervisor_mode();
    }

    void test_new_mmu_port_addressing()
    {
        log_test("Testing new MMU port addressing (DC-DF, DB, D9, D7, D3)");
        mmu.enter_supervisor_mode(); // Переходим в Native режим

        // В Native режиме используем 8-битные порты
        mmu.cpu_iorq_wr(0x00DC, 0x10); // BANK0 - порт 0xDC
        mmu.cpu_iorq_wr(0x00DD, 0x20); // BANK1 - порт 0xDD
        mmu.cpu_iorq_wr(0x00DE, 0x30); // BANK2 - порт 0xDE
        mmu.cpu_iorq_wr(0x00DF, 0x40); // BANK3 - порт 0xDF
        mmu.cpu_iorq_wr(0x00DB, 0x55); // User slot - порт 0xDB
        mmu.cpu_iorq_wr(0x00D9, 0xAA); // Super slot - порт 0xD9
        mmu.cpu_iorq_wr(0x00D7, 0x03); // Control - порт 0xD7
        mmu.cpu_iorq_wr(0x00D3, 0x77); // MMIO Page - порт 0xD3

        test_register_value(mmu.test_get_lx_slot_select_user(0), 0x55, "User slot via DB");
        test_register_value(mmu.test_get_lx_slot_select_super(0), 0xAA, "Super slot via D9");
        test_register_value(mmu.test_get_lx_control_reg(), 0x03, "Control via D7");
        test_register_value(mmu.test_get_lx_io_page_select(), 0x77, "MMIO Page via D3");

        mmu.exit_supervisor_mode();
    }
    void test_cpc_legacy_ram_banking()
    {
        log_test("Testing CPC Legacy RAM banking");

        // Тестируем различные конфигурации банков памяти
        mmu.cpu_iorq_wr(0x7F00, 0xC0); // Bank 0 в Page 3, Bank 2 в Page 2
        test_address_translation(0xC000, 0x00000000, "Page 3 -> Bank 0");
        test_address_translation(0x8000, 0x00020000, "Page 2 -> Bank 2");

        mmu.cpu_iorq_wr(0x7F00, 0xC5); // Bank 1 в Page 3, Bank 2 в Page 2
        test_address_translation(0xC000, 0x00010000, "Page 3 -> Bank 1");
    }

    void test_cpc_expanded_ram()
    {
        log_test("Testing CPC Expanded RAM (up to 576KB)");

        // Тестируем расширенную память с различными значениями bbb
        mmu.cpu_iorq_wr(0x7F00, 0xC0); // bbb=000 (первый блок)
        test_address_translation(0xC000, 0x00000000, "Block 0, Bank 0");

        mmu.cpu_iorq_wr(0x7F00, 0xE0); // bbb=001 (второй блок)
        test_address_translation(0xC000, 0x00040000, "Block 1, Bank 0");

        mmu.cpu_iorq_wr(0x7F00, 0xE8); // bbb=001, Bank 2 в Page 3
        test_address_translation(0xC000, 0x00060000, "Block 1, Bank 2");
    }

    void test_cpc_rom_layouts()
    {
        log_test("Testing CPC ROM layouts");

        // Тестируем различные банки ROM
        for (int i = 0; i < 16; i++)
        {
            mmu.cpu_iorq_wr(0xDF00, i);
            test_address_translation(0x0000, (i << 16), "ROM bank " + std::to_string(i));
        }
    }

    void test_cpc_upper_rom()
    {
        log_test("Testing CPC Upper ROM banking");

        // Включаем Upper ROM и тестируем
        mmu.cpu_iorq_wr(0x7F00, 0x80); // Включаем Upper ROM
        mmu.cpu_iorq_wr(0xDF00, 0x10); // Выбираем банк 16 для Upper ROM
        test_address_translation(0xC000, 0x00100000, "Upper ROM enabled");

        mmu.cpu_iorq_wr(0x7F00, 0x00); // Выключаем Upper ROM
        test_address_translation(0xC000, 0x00000000, "Upper ROM disabled");
    }

    void test_native_direct_mmu_access()
    {
        log_test("Testing Native direct MMU access");
        mmu.enter_supervisor_mode();

        // Тестируем прямой доступ к регистрам MMU
        for (uint8_t i = 0; i < 4; i++)
        {
            mmu.cpu_iorq_wr(0xDC + i, i * 16); // BANK0-3
            test_register_value(mmu.test_get_wishbone(0xFC000C + i), i * 16,
                                "Direct MMU access BANK" + std::to_string(i));
        }
    }

    void test_native_mmio_window()
    {
        log_test("Testing Native MMIO window with different pages");
        mmu.enter_supervisor_mode();

        // Тестируем разные страницы MMIO
        for (uint8_t page = 0; page < 4; page++)
        {
            mmu.cpu_iorq_wr(0xD3, page);

            // Записываем и читаем через MMIO window
            uint32_t test_addr = 0xFC0000 | (page << 8) | 0x10;
            mmu.test_set_wishbone(test_addr, 0x55 + page);

            uint8_t value = mmu.cpu_iorq_rd(0x0010);
            test_register_value(value, 0x55 + page,
                                "MMIO window page " + std::to_string(page));
        }

        mmu.exit_supervisor_mode();
    }

    void test_slot_registers()
    {
        log_test("Testing Slot registers functionality");
        mmu.enter_supervisor_mode();

        // Тестируем User Slot Register
        for (uint8_t i = 0; i < 4; i++)
        {
            mmu.cpu_iorq_wr(0xDB, i);
            test_register_value(mmu.test_get_lx_slot_select_user(0), i,
                                "User Slot Register value " + std::to_string(i));
        }

        // Тестируем Super Slot Register
        for (uint8_t i = 0; i < 4; i++)
        {
            mmu.cpu_iorq_wr(0xD9, i);
            test_register_value(mmu.test_get_lx_slot_select_super(0), i,
                                "Super Slot Register value " + std::to_string(i));
        }

        mmu.exit_supervisor_mode();
    }

    void test_mapper_per_slot()
    {
        log_test("Testing Mapper for different slots");
        mmu.enter_supervisor_mode();

        // Настраиваем разные банки для разных слотов
        mmu.cpu_iorq_wr(0xDB, 0x01); // User slot 1
        mmu.cpu_iorq_wr(0xDC, 0x10); // BANK0 для slot 1

        mmu.cpu_iorq_wr(0xDB, 0x02); // User slot 2
        mmu.cpu_iorq_wr(0xDC, 0x20); // BANK0 для slot 2

        // Проверяем, что разные слоты имеют разные банки
        mmu.cpu_iorq_wr(0xDB, 0x01);
        test_register_value(mmu.test_get_wishbone(0xFC000C), 0x10, "Slot 1 BANK0");

        mmu.cpu_iorq_wr(0xDB, 0x02);
        test_register_value(mmu.test_get_wishbone(0xFC000C), 0x20, "Slot 2 BANK0");

        mmu.exit_supervisor_mode();
    }

    void test_supervisor_slot3_access()
    {
        log_test("Testing Supervisor mode slot 3 access");

        // Переходим в supervisor mode
        mmu.enter_supervisor_mode();

        // Проверяем, что в supervisor mode всегда используется slot 3
        test_address_translation(0x0000, 0x03000000, "Supervisor slot 3 page 0");
        test_address_translation(0x4000, 0x03010000, "Supervisor slot 3 page 1");
        test_address_translation(0x8000, 0x03020000, "Supervisor slot 3 page 2");
        test_address_translation(0xC000, 0x00FC0000, "Supervisor slot 3 page 3 (MMIO)");

        mmu.exit_supervisor_mode();
    }

    void test_mode_transition_effects()
    {
        log_test("Testing mode transition effects");

        // Настраиваем в user mode
        mmu.cpu_iorq_wr(0xDB00, 0x01); // User slot 1
        mmu.cpu_iorq_wr(0x7F00, 0xC0); // CPC banking

        // Переходим в supervisor mode
        mmu.enter_supervisor_mode();

        // Проверяем, что переключились на native mode и slot 3
        test_register_value(mmu.test_get_native_mode(), true, "Native mode enabled");
        test_register_value(mmu.test_get_supervisor_mode(), true, "Supervisor mode enabled");
        test_address_translation(0x0000, 0x03000000, "Slot 3 active in supervisor");

        // Возвращаемся обратно
        mmu.exit_supervisor_mode();

        // Проверяем восстановление состояния
        test_register_value(mmu.test_get_native_mode(), false, "Native mode disabled");
        test_register_value(mmu.test_get_supervisor_mode(), false, "Supervisor mode disabled");
        test_address_translation(0x0000, 0x00150000, "CPC ROM banking restored");
    }
    void test_complex_memory_mapping()
    {
        log_test("Testing complex memory mapping scenarios");

        // Комплексный тест: смешиваем CPC и Native режимы
        mmu.enter_supervisor_mode();

        // Настраиваем сложную карту памяти
        mmu.cpu_iorq_wr(0xDB, 0x01); // User slot 1
        mmu.cpu_iorq_wr(0xDC, 0x10); // Page 0 -> Bank 16
        mmu.cpu_iorq_wr(0xDD, 0x20); // Page 1 -> Bank 32
        mmu.cpu_iorq_wr(0xDE, 0x30); // Page 2 -> Bank 48
        mmu.cpu_iorq_wr(0xD3, 0x55); // MMIO page

        test_address_translation(0x0000, 0x01100000, "Complex mapping page 0");
        test_address_translation(0x4000, 0x01200000, "Complex mapping page 1");
        test_address_translation(0x8000, 0x01300000, "Complex mapping page 2");
        test_io_translation(0x0010, 0xFC5510, "Complex MMIO translation");

        mmu.exit_supervisor_mode();
    }
    void test_edge_cases()
    {
        log_test("Testing edge cases");

        // Тестируем граничные значения
        mmu.enter_supervisor_mode();

        // Максимальные значения банков
        mmu.cpu_iorq_wr(0xDC, 0xFF);
        test_register_value(mmu.test_get_wishbone(0xFC000C), 0xFF, "Max bank value");

        // Граничные адреса
        test_io_translation(0x0000, 0xFC0000, "MMIO address 0x0000");
        test_io_translation(0x00BF, 0xFC00BF, "MMIO address 0x00BF");
        test_io_translation(0x00C0, 0xFF00C0, "Legacy address 0x00C0");

        mmu.exit_supervisor_mode();
    }
    void log_test(const std::string &message)
    {
        std::cout << "\n--- " << message << " ---" << std::endl;
    }
};

int main()
{
    try
    {
        MMUTester tester;
        tester.run_all_tests();
        return 0;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
        return 1;
    }
}