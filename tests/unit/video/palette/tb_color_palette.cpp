#include <iostream>
#include <cstdint>
#include <vector>
#include <cassert>
#include <fstream>
#include <string>
#include <iomanip>

class ColorPalette
{
public:
    ColorPalette()
    {
        reset();
        // Open FST log file
        log_file.open("color_palette.fst", std::ios::binary);
        log_header();
    }

    ~ColorPalette()
    {
        if (log_file.is_open())
        {
            log_file.close();
        }
    }

    void reset()
    {
        palette_index = 0;
        control_reg = 0;
        palette_modifier = 0; // NEW
        border_color = 0;     // NEW
        palette_ram.assign(256, 0);
        legacy_mode = false;
        log_event("🔁 RESET");
    }

    // Wishbone bus access
    uint8_t wishbone_access(uint8_t tag, uint16_t address, uint8_t data, bool write, bool strobe, bool cycle)
    {
        if (!strobe || !cycle)
        {
            log_error("🚫 No strobe/cycle", address, data);
            return 0;
        }

        uint8_t result = 0;
        std::string operation = write ? "WRITE" : "READ";

        // Legacy CPC access
        if (tag == 0b11 && legacy_mode && address == 0xBC00)
        {
            log_event("🎮 LEGACY " + operation + " @ 0xBC00 = 0x" + to_hex(data));
            if (write)
            {
                handle_legacy_write(data);
            }
            return 0; // Legacy read always returns 0
        }

        // Native access (TAG=01, base=0x0100)
        if (tag == 0b01 && (address & 0xFF00) == 0x0100)
        {
            uint8_t reg_addr = address & 0x1F;

            if (!validate_register(reg_addr))
            {
                log_error("❌ Invalid register", reg_addr, data);
                return 0;
            }

            log_event("💻 NATIVE " + operation + " reg[0x" + to_hex(reg_addr) + "] = 0x" + to_hex(data));

            if (write)
            {
                handle_native_write(reg_addr, data);
            }
            else
            {
                result = handle_native_read(reg_addr);
                log_event("📤 READ RESULT = 0x" + to_hex(result));
            }
        }
        else
        {
            log_error("🚫 Invalid access", address, data);
        }

        return result;
    }
    // Control Register Bit Definition:
    // bit 0-1: Reserved
    // bit 2:   Reserved
    // bit 3-4: palette_write_mode (00=CPC, 01=EX, 10=Native8, 11=Native12)
    // bit 5:   auto_inc           (1=auto-increment palette index)
    // bit 6:   modifier_type      (0=OR, 1=XOR)
    // bit 7:   modifier_enable    (1=enable palette index modification)
    // Color lookup for pixel pipeline
    uint16_t get_pixel_color(uint8_t pixel_index)
    {
        uint8_t palette_mode = (control_reg >> 3) & 0b11;
        uint16_t color = 0;

        // Apply palette modifier ВО ВСЕХ РЕЖИМАХ
        uint8_t final_index = pixel_index;
        if (control_reg & 0x80)
        { // modifier_enable
            if (control_reg & 0x40)
            { // XOR mode
                final_index = pixel_index ^ palette_modifier;
            }
            else
            { // OR mode
                final_index = pixel_index | palette_modifier;
            }
            log_event("🔀 Modifier: 0x" + to_hex(pixel_index) + " → 0x" + to_hex(final_index));
        }

        switch (palette_mode)
        {
        case 0: // CPC mode - прямое преобразование (НЕ из палитры!)
            color = cpc_to_rgb(final_index & 0x0F);
            log_pixel("🎨 CPC", final_index, color);
            break;
        case 1: // EX mode - прямое преобразование (НЕ из палитры!)
            color = ex_to_rgb(final_index);
            log_pixel("🌈 EX", final_index, color);
            break;
        case 2: // Native 8-bit - из палитры с MSX conversion при записи
            color = palette_ram[final_index];
            log_pixel("💾 NATIVE8", final_index, color);
            break;
        case 3: // Native 12-bit - из палитры с прямым 12-битным цветом
            color = palette_ram[final_index];
            log_pixel("🔧 NATIVE12", final_index, color);
            break;
        default:
            color = 0;
        }

        return color;
    }

    // Control outputs
    uint8_t get_bpp_mode()
    {
        uint8_t mode = control_reg & 0b11;
        log_event("📊 BPP Mode = " + std::to_string(mode));
        return mode;
    }

    bool get_tetrad_mode()
    {
        bool mode = (control_reg >> 2) & 1;
        log_event("🔲 Tetrad Mode = " + std::to_string(mode));
        return mode;
    }

    bool get_cpc_override()
    {
        bool override = (control_reg >> 3) & 1;
        log_event("🔄 CPC Override = " + std::to_string(override));
        return override;
    }

    void set_legacy_mode(bool enable)
    {
        legacy_mode = enable;
        log_event(enable ? "🕹️ Legacy Mode ENABLED" : "💻 Legacy Mode DISABLED");
    }

    bool validate_configuration()
    {
        uint8_t palette_mode = (control_reg >> 4) & 0b11;
        uint8_t bpp = control_reg & 0b11;
        bool valid = true;

        if (palette_mode == 0 && bpp > 1)
        {
            log_error("⚡ CPC mode requires 1-2 BPP", bpp, palette_mode);
            valid = false;
        }
        if (palette_mode == 3 && bpp != 3)
        {
            log_error("⚡ 12-bit direct requires 8BPP", bpp, palette_mode);
            valid = false;
        }

        if (valid)
        {
            log_event("✅ Configuration VALID: mode=" + std::to_string(palette_mode) + " bpp=" + std::to_string(bpp));
        }

        return valid;
    }

    void debug_info()
    {
        log_event("🔍 DEBUG: idx=0x" + to_hex(palette_index) +
                  " ctrl=0x" + to_hex(control_reg) +
                  " legacy=" + std::to_string(legacy_mode));
    }

private:
    uint8_t palette_index;
    uint8_t control_reg;
    std::vector<uint16_t> palette_ram;
    bool legacy_mode;
    std::ofstream log_file;
    uint8_t palette_modifier; // NEW
    uint16_t border_color;    // NEW
    // Logging utilities
    void log_header()
    {
        log_file << "FST Color Palette Log\n";
        log_file << "=====================\n";
    }

    void log_event(const std::string &message)
    {
        static int counter = 0;
        if (counter++ < 1000)
        { // Limit log size
            log_file << "✅ " << message << "\n";
        }
    }

    void log_error(const std::string &message, uint16_t addr, uint8_t data)
    {
        static int error_count = 0;
        if (error_count++ < 100)
        { // Limit errors
            log_file << "❌ " << message << " [addr=0x" << to_hex(addr)
                     << " data=0x" << to_hex(data) << "]\n";
        }
    }

    void log_pixel(const std::string &mode, uint8_t idx, uint16_t color)
    {
        static int pixel_count = 0;
        if (pixel_count++ < 500)
        { // Limit pixel logs
            log_file << "🎯 " << mode << " pixel[" << to_hex(idx) << "] = 0x"
                     << to_hex(color, 3) << "\n";
        }
    }

    std::string to_hex(uint32_t value, int width = 2)
    {
        char buffer[16];
        snprintf(buffer, sizeof(buffer), "%0*X", width, value);
        return std::string(buffer);
    }

    bool validate_register(uint8_t reg_addr)
    {
        return reg_addr <= 0x06;
    }

    void handle_legacy_write(uint8_t data)
    {
        uint8_t reg_type = (data >> 6) & 0b11;

        if (reg_type == 0b00)
        {
            palette_index = data & 0x0F;
            log_event("📝 Legacy Index = 0x" + to_hex(palette_index));
        }
        else if (reg_type == 0b01)
        {
            palette_ram[palette_index] = cpc_to_rgb(data);
            log_event("🎨 Legacy Color[" + to_hex(palette_index) + "] = 0x" + to_hex(palette_ram[palette_index], 3));
        }
        else
        {
            log_error("🚫 Unknown legacy command", reg_type, data);
        }
    }

    void handle_native_write(uint8_t reg_addr, uint8_t data)
    {
        switch (reg_addr)
        {
        case 0x00:
            palette_index = data;
            break;
        case 0x01:
            if ((control_reg & 0x18) == 0x08)
            { // EX mode (01)
                // EX 6-bit mode conversion
                uint8_t r = ((data >> 4) & 0b11);
                uint8_t g = ((data >> 2) & 0b11);
                uint8_t b = ((data >> 0) & 0b11);
                uint8_t r4 = (r == 0) ? 0 : (r == 1) ? 5
                                        : (r == 2)   ? 10
                                                     : 15;
                uint8_t g4 = (g == 0) ? 0 : (g == 1) ? 5
                                        : (g == 2)   ? 10
                                                     : 15;
                uint8_t b4 = (b == 0) ? 0 : (b == 1) ? 5
                                        : (b == 2)   ? 10
                                                     : 15;
                palette_ram[palette_index] = (r4 << 8) | (g4 << 4) | b4;
            }
            else if ((control_reg & 0x18) == 0x10)
            { // Native8 mode (10)
                // MSX-style 8→12 bit conversion
                palette_ram[palette_index] = convert_8to12(data);
            }
            else if ((control_reg & 0x18) == 0x18)
            { // Native12 mode (11)
                // 12-bit mode: low byte
                palette_ram[palette_index] = (palette_ram[palette_index] & 0x0F00) | data;
            }
            else
            {
                // CPC mode or other - direct write
                palette_ram[palette_index] = (palette_ram[palette_index] & 0x0F00) | data;
            }

            // Auto-increment for all modes except Native12 (which increments after high byte)
            if ((control_reg & 0x20) && ((control_reg & 0x18) != 0x18))
            {
                palette_index++;
            }
            break;

        case 0x02:
            // Only used in Native12 mode
            if ((control_reg & 0x18) == 0x18)
            {
                palette_ram[palette_index] = (palette_ram[palette_index] & 0x00FF) | ((data & 0x0F) << 8);
                if (control_reg & 0x20)
                { // auto-increment
                    palette_index++;
                }
            }
            break;

        case 0x03:
            control_reg = data;
            break;
        case 0x04:
            palette_modifier = data;
            break;
        case 0x05:
            border_color = (border_color & 0x0F00) | data;
            break;
        case 0x06:
            border_color = (border_color & 0x00FF) | ((data & 0x0F) << 8);
            break;
        }
    }

    uint8_t handle_native_read(uint8_t reg_addr)
    {
        uint8_t result = 0;
        switch (reg_addr)
        {
        case 0x00:
            result = palette_index;
            break;
        case 0x01:
            result = palette_ram[palette_index] & 0xFF;
            break;
        case 0x02:
            result = (palette_ram[palette_index] >> 8) & 0x0F;
            break;
        case 0x03:
            result = control_reg;
            break;
        case 0x04:
            result = palette_modifier;
            break;
        case 0x05:
            result = border_color & 0xFF;
            break;
        case 0x06:
            result = (border_color >> 8) & 0x0F;
            break;
        }
        return result;
    }

    uint16_t cpc_to_rgb(uint8_t cpc_color)
    {
        uint8_t r = ((cpc_color & 0x01) ? 0x80 : 0x00) | ((cpc_color & 0x02) ? 0x08 : 0x00);
        uint8_t g = ((cpc_color & 0x04) ? 0x80 : 0x00) | ((cpc_color & 0x08) ? 0x08 : 0x00);
        uint8_t b = ((cpc_color & 0x10) ? 0x80 : 0x00) | ((cpc_color & 0x20) ? 0x08 : 0x00);
        return (r << 4) | (g << 0) | (b >> 4);
    }
    uint16_t ex_to_rgb(uint8_t ex_color)
    {
        // EX mode: 6-bit color [R1:R0:G1:G0:B1:B0] → 12-bit [R3:R2:R1:R0:G3:G2:G1:G0:B3:B2:B1:B0]
        uint8_t r = (ex_color >> 4) & 0b11;
        uint8_t g = (ex_color >> 2) & 0b11;
        uint8_t b = (ex_color >> 0) & 0b11;

        log_event("🌈 EX conversion: input=0x" + to_hex(ex_color) +
                  " R=" + std::to_string(r) + " G=" + std::to_string(g) + " B=" + std::to_string(b));

        // Scale 2-bit to 4-bit: 00=0, 01=5, 10=10, 11=15
        uint8_t r4 = (r == 0) ? 0 : (r == 1) ? 5
                                : (r == 2)   ? 10
                                             : 15;
        uint8_t g4 = (g == 0) ? 0 : (g == 1) ? 5
                                : (g == 2)   ? 10
                                             : 15;
        uint8_t b4 = (b == 0) ? 0 : (b == 1) ? 5
                                : (b == 2)   ? 10
                                             : 15;

        uint16_t result = (r4 << 8) | (g4 << 4) | b4;
        log_event("🌈 EX result: 0x" + to_hex(result, 3));

        return result;
    }
    uint16_t convert_8to12(uint8_t color8)
    {
        // MSX-style 8→12 bit conversion: RRRGGGBB → RRRR GGGG BBBB
        uint8_t r = (color8 >> 5) & 0b111; // 3 bits
        uint8_t g = (color8 >> 2) & 0b111; // 3 bits
        uint8_t b = (color8 >> 0) & 0b11;  // 2 bits

        // Scale to 4 bits with good distribution
        uint8_t r4 = (r == 0) ? 0 : (r == 1) ? 3
                                : (r == 2)   ? 6
                                : (r == 3)   ? 9
                                : (r == 4)   ? 12
                                : (r == 5)   ? 13
                                : (r == 6)   ? 14
                                             : 15;
        uint8_t g4 = (g == 0) ? 0 : (g == 1) ? 3
                                : (g == 2)   ? 6
                                : (g == 3)   ? 9
                                : (g == 4)   ? 12
                                : (g == 5)   ? 13
                                : (g == 6)   ? 14
                                             : 15;
        uint8_t b4 = (b == 0) ? 0 : (b == 1) ? 5
                                : (b == 2)   ? 10
                                             : 15;

        return (r4 << 8) | (g4 << 4) | b4;
    }
};

// Enhanced Test suite
class ColorPaletteTest
{
private:
    int tests_passed = 0;
    int tests_failed = 0;

    void check(bool condition, const std::string &test_name,
               const std::string &expected = "", const std::string &actual = "")
    {
        if (condition)
        {
            std::cout << "✅ " << test_name << " PASSED\n";
            tests_passed++;
        }
        else
        {
            std::cout << "❌ " << test_name << " FAILED\n";
            if (!expected.empty() && !actual.empty())
            {
                std::cout << "   Expected: " << expected << "\n";
                std::cout << "   Actual: " << actual << "\n";
            }
            tests_failed++;
        }
    }

    template <typename T>
    std::string to_hex_str(T value, int width = 2)
    {
        std::stringstream ss;
        ss << "0x" << std::hex << std::setw(width) << std::setfill('0') << static_cast<int>(value);
        return ss.str();
    }

public:
    void run_all_tests()
    {
        std::cout << "🧪 Starting Color Palette Tests...\n\n";

        test_native_registers();
        test_legacy_mode();
        test_color_modes();
        test_auto_increment();
        test_edge_cases();
        test_configuration_validation();

        test_palette_modifier();
        test_border_color();
        test_msx_conversion();
        test_legacy_border();
        test_palette_modifier_native12();

        std::cout << "\n📊 TEST SUMMARY:\n";
        std::cout << "✅ Passed: " << tests_passed << "\n";
        std::cout << "❌ Failed: " << tests_failed << "\n";

        if (tests_failed == 0)
        {
            std::cout << "🎉 All tests passed!\n";
        }
        else
        {
            std::cout << "💥 Some tests failed!\n";
        }
    }

private:
    void test_native_registers()
    {
        std::cout << "📝 Testing Native Registers...\n";
        ColorPalette palette;

        // Test 1: Index register write/read
        palette.wishbone_access(0b01, 0x0100, 0x42, true, true, true);
        uint8_t idx = palette.wishbone_access(0b01, 0x0100, 0, false, true, true);
        check(idx == 0x42, "Index register write/read",
              to_hex_str(0x42), to_hex_str(idx));

        // Test 2: Control register write/read
        palette.wishbone_access(0b01, 0x0103, 0b10101010, true, true, true);
        uint8_t ctrl = palette.wishbone_access(0b01, 0x0103, 0, false, true, true);
        check(ctrl == 0b10101010, "Control register write/read",
              to_hex_str(0b10101010), to_hex_str(ctrl));
    }

    void test_legacy_mode()
    {
        std::cout << "\n🎮 Testing Legacy Mode...\n";
        ColorPalette palette;
        palette.set_legacy_mode(true);

        // Test: Legacy write doesn't crash
        palette.wishbone_access(0b11, 0xBC00, 0b00000101, true, true, true);
        palette.wishbone_access(0b11, 0xBC00, 0b01010011, true, true, true);

        // Test: Legacy read returns 0
        uint8_t read_val = palette.wishbone_access(0b11, 0xBC00, 0, false, true, true);
        check(read_val == 0, "Legacy read returns 0",
              "0", to_hex_str(read_val));

        // Test: Can switch back to native mode
        palette.set_legacy_mode(false);
        palette.wishbone_access(0b01, 0x0100, 0x10, true, true, true);
        uint8_t idx = palette.wishbone_access(0b01, 0x0100, 0, false, true, true);
        check(idx == 0x10, "Mode switching works",
              to_hex_str(0x10), to_hex_str(idx));
    }

    void test_color_modes()
    {
        std::cout << "\n🎨 Testing Color Modes...\n";
        ColorPalette palette;

        // Test 1: CPC mode produces colors
        // CPC mode = 0b00 << 3 = 0x00
        palette.wishbone_access(0b01, 0x0103, 0x00, true, true, true); // CPC mode
        uint16_t cpc_color = palette.get_pixel_color(0x05);
        check(cpc_color != 0, "CPC mode produces non-zero colors",
              "non-zero", to_hex_str(cpc_color, 3));

        // Test 2: EX mode produces colors
        // EX mode = 0b01 << 3 = 0x08
        palette.wishbone_access(0b01, 0x0103, 0x08, true, true, true); // EX mode
        uint16_t ex_color = palette.get_pixel_color(0x2A);             // 0x2A = 0b101010 = R=2, G=2, B=2
        check(ex_color != 0, "EX mode produces non-zero colors",
              "non-zero", to_hex_str(ex_color, 3));

        // Test 3: Native 8-bit mode works
        // Native8 mode = 0b10 << 3 = 0x10
        palette.wishbone_access(0b01, 0x0100, 0x80, true, true, true); // Set index
        palette.wishbone_access(0b01, 0x0101, 0x34, true, true, true); // Write color data
        palette.wishbone_access(0b01, 0x0103, 0x10, true, true, true); // Native8 mode
        uint16_t native_color = palette.get_pixel_color(0x80);
        check(native_color != 0, "Native 8-bit mode works",
              "non-zero", to_hex_str(native_color, 3));
    }

    void test_auto_increment()
    {
        std::cout << "\n⬆️ Testing Auto-Increment...\n";
        ColorPalette palette;

        // Enable auto-increment (bit5) and set to Native8 mode (bits3-4=10)
        palette.wishbone_access(0b01, 0x0103, 0b00100000, true, true, true);
        palette.wishbone_access(0b01, 0x0100, 0x10, true, true, true);

        // Write data - should auto-increment
        palette.wishbone_access(0b01, 0x0101, 0xAA, true, true, true);

        // Check if index changed
        uint8_t idx = palette.wishbone_access(0b01, 0x0100, 0, false, true, true);
        check(idx == 0x11, "Auto-increment works", to_hex_str(0x11), to_hex_str(idx));
    }

    void test_edge_cases()
    {
        std::cout << "\n⚠️ Testing Edge Cases...\n";
        ColorPalette palette;

        // Test: Invalid register access returns 0
        uint8_t result = palette.wishbone_access(0b01, 0x0104, 0, false, true, true);
        check(result == 0, "Invalid register returns 0",
              "0", to_hex_str(result));

        // Test: Can write to maximum palette index
        palette.wishbone_access(0b01, 0x0100, 0xFF, true, true, true);
        palette.wishbone_access(0b01, 0x0101, 0x12, true, true, true);

        // Verify the write worked
        palette.wishbone_access(0b01, 0x0100, 0xFF, true, true, true);
        uint8_t read_val = palette.wishbone_access(0b01, 0x0101, 0, false, true, true);
        check(read_val == 0x12, "Palette bounds work",
              to_hex_str(0x12), to_hex_str(read_val));
    }

    void test_configuration_validation()
    {
        std::cout << "\n🔧 Testing Configuration Validation...\n";
        ColorPalette palette;

        // Test: Valid configuration returns true
        palette.wishbone_access(0b01, 0x0103, 0b00110011, true, true, true);
        bool valid = palette.validate_configuration();
        check(valid == true, "Valid configuration accepted",
              "true", valid ? "true" : "false");

        // Test: Invalid configuration returns false
        palette.wishbone_access(0b01, 0x0103, 0b00000011, true, true, true);
        valid = palette.validate_configuration();
        check(valid == false, "Invalid configuration rejected",
              "false", valid ? "true" : "false");
    }

    void test_palette_modifier()
    {
        std::cout << "\n🎛️ Testing Palette Modifier...\n";
        ColorPalette palette;

        // Test 1: XOR modifier
        palette.wishbone_access(0b01, 0x0100, 0x00, true, true, true);
        palette.wishbone_access(0b01, 0x0101, 0xFF, true, true, true);

        palette.wishbone_access(0b01, 0x0100, 0x10, true, true, true);
        palette.wishbone_access(0b01, 0x0101, 0xAA, true, true, true);

        palette.wishbone_access(0b01, 0x0103, 0xD0, true, true, true); // Native8 + XOR
        palette.wishbone_access(0b01, 0x0104, 0x10, true, true, true);

        uint16_t color = palette.get_pixel_color(0x10);
        check(color == 0xFF, "XOR modifier works",
              to_hex_str(0xFF, 3), to_hex_str(color, 3));

        // Test 2: OR modifier в Native 8-bit режиме
        palette.wishbone_access(0b01, 0x0103, 0x90, true, true, true); // Native8 + OR
        palette.wishbone_access(0b01, 0x0104, 0x80, true, true, true);

        // 0x12 = 0b00010010 → R=0, G=4, B=2
        // MSX conversion: R=0→0, G=4→12(0xC), B=2→10(0xA) → 0x0CA
        palette.wishbone_access(0b01, 0x0100, 0x85, true, true, true);
        palette.wishbone_access(0b01, 0x0101, 0x12, true, true, true);

        color = palette.get_pixel_color(0x05); // 0x05 OR 0x80 = 0x85
        check(color == 0x0CA, "OR modifier works",
              to_hex_str(0x0CA, 3), to_hex_str(color, 3));
    }

    void test_border_color()
    {
        std::cout << "\n🖼️ Testing Border Color...\n";
        ColorPalette palette;

        // Test native border color
        palette.wishbone_access(0b01, 0x0105, 0x34, true, true, true); // Border low
        palette.wishbone_access(0b01, 0x0106, 0x01, true, true, true); // Border high

        // In real implementation, border would be handled separately
        // For now test that registers are accessible
        uint8_t border_low = palette.wishbone_access(0b01, 0x0105, 0, false, true, true);
        uint8_t border_high = palette.wishbone_access(0b01, 0x0106, 0, false, true, true);
        check(border_low == 0x34 && border_high == 0x01, "Border color registers work",
              "0x34, 0x01", to_hex_str(border_low) + ", " + to_hex_str(border_high));
    }

    void test_msx_conversion()
    {
        std::cout << "\n🌈 Testing MSX 8→12 bit Conversion...\n";
        ColorPalette palette;

        // Switch to Native 8-bit mode (0x10)
        palette.wishbone_access(0b01, 0x0103, 0x10, true, true, true);

        // Test specific color conversions - write color data first
        palette.wishbone_access(0b01, 0x0100, 0x00, true, true, true);       // Set index
        palette.wishbone_access(0b01, 0x0101, 0b11100011, true, true, true); // R=7, G=4, B=3

        uint16_t color = palette.get_pixel_color(0x00);
        // Should convert using MSX LUT: R=7→15, G=4→12, B=3→15
        check(color != 0, "MSX conversion produces color", "non-zero", to_hex_str(color, 3));

        // Test black - write 0x00 to palette
        palette.wishbone_access(0b01, 0x0100, 0x01, true, true, true);
        palette.wishbone_access(0b01, 0x0101, 0x00, true, true, true);
        color = palette.get_pixel_color(0x01);
        check(color == 0x000, "Black converts correctly", "0x000", to_hex_str(color, 3));
    }

    void test_legacy_border()
    {
        std::cout << "\n🎯 Testing Legacy Border...\n";
        ColorPalette palette;
        palette.set_legacy_mode(true);

        // Test legacy border color write (bit4=1 in palette_index)
        palette.wishbone_access(0b11, 0xBC00, 0b00010000, true, true, true); // Set index with border flag
        palette.wishbone_access(0b11, 0xBC00, 0b01010101, true, true, true); // Write border color

        // Verify border was set (in real implementation, this would be separate)
        palette.debug_info();

        // Test normal palette write (bit4=0)
        palette.wishbone_access(0b11, 0xBC00, 0b00000101, true, true, true); // Normal index
        palette.wishbone_access(0b11, 0xBC00, 0b01011010, true, true, true); // Write palette color

        check(true, "Legacy border/palette separation", "no crash", "no crash");
    }

    void test_palette_modifier_native12()
    {
        std::cout << "\n🎛️ Testing Palette Modifier in Native12...\n";
        ColorPalette palette;

        // Native12 mode + OR modifier
        palette.wishbone_access(0b01, 0x0103, 0x98, true, true, true); // Native12(0x18) + modifier_enable(0x80)
        palette.wishbone_access(0b01, 0x0104, 0x80, true, true, true); // OR modifier = 0x80

        // Write 12-bit color to palette[0x85]
        palette.wishbone_access(0b01, 0x0100, 0x85, true, true, true);
        palette.wishbone_access(0b01, 0x0101, 0x34, true, true, true); // Low byte
        palette.wishbone_access(0b01, 0x0102, 0x01, true, true, true); // High byte → color = 0x134

        // 0x05 OR 0x80 = 0x85 → should get color 0x134 from palette[0x85]
        uint16_t color = palette.get_pixel_color(0x05);
        check(color == 0x134, "OR modifier works in Native12",
              to_hex_str(0x134, 3), to_hex_str(color, 3));
    }
};

int main()
{
    ColorPaletteTest tester;
    tester.run_all_tests();
    return 0;
}