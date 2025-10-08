#include <iostream>
#include <cstdint>
#include <vector>
#include <cassert>
#include <fstream>
#include <string>
#include <iomanip>

class ColorPalette {
public:
    ColorPalette() {
        reset();
        // Open FST log file
        log_file.open("color_palette.fst", std::ios::binary);
        log_header();
    }

    ~ColorPalette() {
        if (log_file.is_open()) {
            log_file.close();
        }
    }

    void reset() {
        palette_index = 0;
        control_reg = 0;
        palette_ram.assign(256, 0);
        legacy_mode = false;
        log_event("🔁 RESET");
    }

    // Wishbone bus access
    uint8_t wishbone_access(uint8_t tag, uint16_t address, uint8_t data, bool write, bool strobe, bool cycle) {
        if (!strobe || !cycle) {
            log_error("🚫 No strobe/cycle", address, data);
            return 0;
        }

        uint8_t result = 0;
        std::string operation = write ? "WRITE" : "READ";
        
        // Legacy CPC access
        if (tag == 0b11 && legacy_mode && address == 0xBC00) {
            log_event("🎮 LEGACY " + operation + " @ 0xBC00 = 0x" + to_hex(data));
            if (write) {
                handle_legacy_write(data);
            }
            return 0; // Legacy read always returns 0
        }
        
        // Native access (TAG=01, base=0x0100)
        if (tag == 0b01 && (address & 0xFF00) == 0x0100) {
            uint8_t reg_addr = address & 0x1F;
            
            if (!validate_register(reg_addr)) {
                log_error("❌ Invalid register", reg_addr, data);
                return 0;
            }

            log_event("💻 NATIVE " + operation + " reg[0x" + to_hex(reg_addr) + "] = 0x" + to_hex(data));
            
            if (write) {
                handle_native_write(reg_addr, data);
            } else {
                result = handle_native_read(reg_addr);
                log_event("📤 READ RESULT = 0x" + to_hex(result));
            }
        } else {
            log_error("🚫 Invalid access", address, data);
        }
        
        return result;
    }

    // Color lookup for pixel pipeline
    uint16_t get_pixel_color(uint8_t pixel_index) {
        uint8_t palette_mode = (control_reg >> 4) & 0b11;
        uint16_t color = 0;
        
        switch (palette_mode) {
            case 0: 
                color = cpc_to_rgb(pixel_index & 0x0F);
                log_pixel("🎨 CPC", pixel_index, color);
                break;
            case 1: 
                color = ex_to_rgb(pixel_index);
                log_pixel("🌈 EX", pixel_index, color);
                break;
            case 2: 
                color = palette_ram[pixel_index];
                log_pixel("💾 NATIVE8", pixel_index, color);
                break;
            case 3: 
                color = pixel_index; // Direct 12-bit
                log_pixel("🔧 DIRECT12", pixel_index, color);
                break;
            default: 
                log_error("❓ Unknown palette mode", palette_mode, 0);
                color = 0;
        }
        
        return color;
    }

    // Control outputs
    uint8_t get_bpp_mode() { 
        uint8_t mode = control_reg & 0b11;
        log_event("📊 BPP Mode = " + std::to_string(mode));
        return mode; 
    }
    
    bool get_tetrad_mode() { 
        bool mode = (control_reg >> 2) & 1;
        log_event("🔲 Tetrad Mode = " + std::to_string(mode));
        return mode; 
    }
    
    bool get_cpc_override() { 
        bool override = (control_reg >> 3) & 1;
        log_event("🔄 CPC Override = " + std::to_string(override));
        return override; 
    }

    void set_legacy_mode(bool enable) { 
        legacy_mode = enable; 
        log_event(enable ? "🕹️ Legacy Mode ENABLED" : "💻 Legacy Mode DISABLED");
    }

    bool validate_configuration() {
        uint8_t palette_mode = (control_reg >> 4) & 0b11;
        uint8_t bpp = control_reg & 0b11;
        bool valid = true;

        if (palette_mode == 0 && bpp > 1) {
            log_error("⚡ CPC mode requires 1-2 BPP", bpp, palette_mode);
            valid = false;
        }
        if (palette_mode == 3 && bpp != 3) {
            log_error("⚡ 12-bit direct requires 8BPP", bpp, palette_mode);
            valid = false;
        }

        if (valid) {
            log_event("✅ Configuration VALID: mode=" + std::to_string(palette_mode) + " bpp=" + std::to_string(bpp));
        }
        
        return valid;
    }

    void debug_info() {
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

    // Logging utilities
    void log_header() {
        log_file << "FST Color Palette Log\n";
        log_file << "=====================\n";
    }

    void log_event(const std::string& message) {
        static int counter = 0;
        if (counter++ < 1000) { // Limit log size
            log_file << "✅ " << message << "\n";
        }
    }

    void log_error(const std::string& message, uint16_t addr, uint8_t data) {
        static int error_count = 0;
        if (error_count++ < 100) { // Limit errors
            log_file << "❌ " << message << " [addr=0x" << to_hex(addr) 
                     << " data=0x" << to_hex(data) << "]\n";
        }
    }

    void log_pixel(const std::string& mode, uint8_t idx, uint16_t color) {
        static int pixel_count = 0;
        if (pixel_count++ < 500) { // Limit pixel logs
            log_file << "🎯 " << mode << " pixel[" << to_hex(idx) << "] = 0x" 
                     << to_hex(color, 3) << "\n";
        }
    }

    std::string to_hex(uint32_t value, int width = 2) {
        char buffer[16];
        snprintf(buffer, sizeof(buffer), "%0*X", width, value);
        return std::string(buffer);
    }

    bool validate_register(uint8_t reg_addr) {
        return reg_addr <= 0x03;
    }

    void handle_legacy_write(uint8_t data) {
        uint8_t reg_type = (data >> 6) & 0b11;
        
        if (reg_type == 0b00) {
            palette_index = data & 0x0F;
            log_event("📝 Legacy Index = 0x" + to_hex(palette_index));
        } else if (reg_type == 0b01) {
            palette_ram[palette_index] = cpc_to_rgb(data);
            log_event("🎨 Legacy Color[" + to_hex(palette_index) + "] = 0x" + to_hex(palette_ram[palette_index], 3));
        } else {
            log_error("🚫 Unknown legacy command", reg_type, data);
        }
    }

    void handle_native_write(uint8_t reg_addr, uint8_t data) {
        switch (reg_addr) {
            case 0x00: 
                palette_index = data; 
                log_event("📝 Index = 0x" + to_hex(palette_index));
                break;
            case 0x01: 
                palette_ram[palette_index] = (palette_ram[palette_index] & 0x0F00) | data;
                log_event("💾 Palette[" + to_hex(palette_index) + "] low = 0x" + to_hex(data));
                if (control_reg & 0x40) {
                    palette_index++;
                    log_event("⬆️ Auto-increment Index = 0x" + to_hex(palette_index));
                }
                break;
            case 0x02:
                palette_ram[palette_index] = (palette_ram[palette_index] & 0x00FF) | ((data & 0x0F) << 8);
                log_event("💾 Palette[" + to_hex(palette_index) + "] high = 0x" + to_hex(data & 0x0F));
                if ((control_reg & 0x40) && ((control_reg & 0x30) == 0x30)) {
                    palette_index++;
                    log_event("⬆️ Auto-increment (12-bit) Index = 0x" + to_hex(palette_index));
                }
                break;
            case 0x03: 
                control_reg = data; 
                log_event("🎛️ Control = 0x" + to_hex(control_reg));
                validate_configuration();
                break;
        }
    }

    uint8_t handle_native_read(uint8_t reg_addr) {
        uint8_t result = 0;
        switch (reg_addr) {
            case 0x00: result = palette_index; break;
            case 0x01: result = palette_ram[palette_index] & 0xFF; break;
            case 0x02: result = (palette_ram[palette_index] >> 8) & 0x0F; break;
            case 0x03: result = control_reg; break;
        }
        return result;
    }

    uint16_t cpc_to_rgb(uint8_t cpc_color) {
        uint8_t r = ((cpc_color & 0x01) ? 0x80 : 0x00) | ((cpc_color & 0x02) ? 0x08 : 0x00);
        uint8_t g = ((cpc_color & 0x04) ? 0x80 : 0x00) | ((cpc_color & 0x08) ? 0x08 : 0x00);
        uint8_t b = ((cpc_color & 0x10) ? 0x80 : 0x00) | ((cpc_color & 0x20) ? 0x08 : 0x00);
        return (r << 4) | (g << 0) | (b >> 4);
    }

    uint16_t ex_to_rgb(uint8_t ex_color) {
        uint8_t r = ((ex_color >> 4) & 0b11) * 0x55;
        uint8_t g = ((ex_color >> 2) & 0b11) * 0x55;
        uint8_t b = ((ex_color >> 0) & 0b11) * 0x55;
        return (r << 8) | (g << 4) | b;
    }
};

// Enhanced Test suite
class ColorPaletteTest {
private:
    int tests_passed = 0;
    int tests_failed = 0;

    void check(bool condition, const std::string& test_name, 
               const std::string& expected = "", const std::string& actual = "") {
        if (condition) {
            std::cout << "✅ " << test_name << " PASSED\n";
            tests_passed++;
        } else {
            std::cout << "❌ " << test_name << " FAILED\n";
            if (!expected.empty() && !actual.empty()) {
                std::cout << "   Expected: " << expected << "\n";
                std::cout << "   Actual: " << actual << "\n";
            }
            tests_failed++;
        }
    }

    template<typename T>
    std::string to_hex_str(T value, int width = 2) {
        std::stringstream ss;
        ss << "0x" << std::hex << std::setw(width) << std::setfill('0') << static_cast<int>(value);
        return ss.str();
    }

public:
    void run_all_tests() {
        std::cout << "🧪 Starting Color Palette Tests...\n\n";
        
        test_native_registers();
        test_legacy_mode();
        test_color_modes();
        test_auto_increment();
        test_edge_cases();
        test_configuration_validation();
        
        std::cout << "\n📊 TEST SUMMARY:\n";
        std::cout << "✅ Passed: " << tests_passed << "\n";
        std::cout << "❌ Failed: " << tests_failed << "\n";
        
        if (tests_failed == 0) {
            std::cout << "🎉 All tests passed!\n";
        } else {
            std::cout << "💥 Some tests failed!\n";
        }
    }

private:
    void test_native_registers() {
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

    void test_legacy_mode() {
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

    void test_color_modes() {
        std::cout << "\n🎨 Testing Color Modes...\n";
        ColorPalette palette;
        
        // Test 1: CPC mode produces colors
        palette.wishbone_access(0b01, 0x0103, 0b00000000, true, true, true);
        uint16_t cpc_color = palette.get_pixel_color(0x05);
        check(cpc_color != 0, "CPC mode produces non-zero colors",
              "non-zero", to_hex_str(cpc_color, 3));
        
        // Test 2: EX mode produces colors  
        palette.wishbone_access(0b01, 0x0103, 0b00010000, true, true, true);
        uint16_t ex_color = palette.get_pixel_color(0x2A);
        check(ex_color != 0, "EX mode produces non-zero colors",
              "non-zero", to_hex_str(ex_color, 3));
        
        // Test 3: Native 8-bit mode works
        palette.wishbone_access(0b01, 0x0100, 0x80, true, true, true);
        palette.wishbone_access(0b01, 0x0101, 0x34, true, true, true);
        palette.wishbone_access(0b01, 0x0102, 0x05, true, true, true);
        palette.wishbone_access(0b01, 0x0103, 0b00100000, true, true, true);
        uint16_t native_color = palette.get_pixel_color(0x80);
        check(native_color != 0, "Native 8-bit mode works",
              "non-zero", to_hex_str(native_color, 3));
    }

    void test_auto_increment() {
        std::cout << "\n⬆️ Testing Auto-Increment...\n";
        ColorPalette palette;
        
        // Enable auto-increment
        palette.wishbone_access(0b01, 0x0103, 0b01000000, true, true, true);
        palette.wishbone_access(0b01, 0x0100, 0x10, true, true, true);
        
        // Write data - should auto-increment
        palette.wishbone_access(0b01, 0x0101, 0xAA, true, true, true);
        
        // Check if index changed
        uint8_t idx = palette.wishbone_access(0b01, 0x0100, 0, false, true, true);
        check(idx == 0x11, "Auto-increment works",
              to_hex_str(0x11), to_hex_str(idx));
    }

    void test_edge_cases() {
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

    void test_configuration_validation() {
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
};

int main() {
    ColorPaletteTest tester;
    tester.run_all_tests();
    return 0;
}