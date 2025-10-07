#include <iostream>
#include <cstdint>
#include <vector>
#include <cassert>

class ColorPalette {
public:
    ColorPalette() {
        reset();
    }

    void reset() {
        palette_index = 0;
        control_reg = 0;
        palette_ram.assign(256, 0);
        legacy_mode = false;
    }

    // Wishbone bus access
    uint8_t wishbone_access(uint8_t tag, uint16_t address, uint8_t data, bool write, bool strobe, bool cycle) {
        if (!strobe || !cycle) return 0;

        uint8_t result = 0;
        
        // Legacy CPC access
        if (tag == 0b11 && legacy_mode && address == 0xBC00) {
            if (write) {
                handle_legacy_write(data);
            }
            return 0; // Legacy read always returns 0
        }
        
        // Native access (TAG=01, base=0x0100)
        if (tag == 0b01 && (address & 0xFF00) == 0x0100) {
            uint8_t reg_addr = address & 0x1F;
            
            if (write) {
                handle_native_write(reg_addr, data);
            } else {
                result = handle_native_read(reg_addr);
            }
        }
        
        return result;
    }

    // Color lookup for pixel pipeline
    uint16_t get_pixel_color(uint8_t pixel_index) {
        uint8_t palette_mode = (control_reg >> 4) & 0b11;
        
        switch (palette_mode) {
            case 0: return cpc_to_rgb(pixel_index & 0x0F);
            case 1: return ex_to_rgb(pixel_index);
            case 2: return palette_ram[pixel_index];
            case 3: return pixel_index; // Direct 12-bit
            default: return 0;
        }
    }

    // Control outputs
    uint8_t get_bpp_mode() { return control_reg & 0b11; }
    bool get_tetrad_mode() { return (control_reg >> 2) & 1; }
    bool get_cpc_override() { return (control_reg >> 3) & 1; }

private:
    uint8_t palette_index;
    uint8_t control_reg;
    std::vector<uint16_t> palette_ram;
    bool legacy_mode;

    void handle_legacy_write(uint8_t data) {
        uint8_t reg_type = (data >> 6) & 0b11;
        
        if (reg_type == 0b00) {
            // Palette index
            palette_index = data & 0x0F;
        } else if (reg_type == 0b01) {
            // Palette data
            palette_ram[palette_index] = cpc_to_rgb(data);
        }
    }

    void handle_native_write(uint8_t reg_addr, uint8_t data) {
        switch (reg_addr) {
            case 0x00: palette_index = data; break;
            case 0x01: 
                palette_ram[palette_index] = (palette_ram[palette_index] & 0x0F00) | data;
                if (control_reg & 0x40) palette_index++; // auto-increment
                break;
            case 0x02:
                palette_ram[palette_index] = (palette_ram[palette_index] & 0x00FF) | ((data & 0x0F) << 8);
                if ((control_reg & 0x40) && ((control_reg & 0x30) == 0x30)) {
                    palette_index++; // auto-increment for 12-bit mode
                }
                break;
            case 0x03: control_reg = data; break;
        }
    }

    uint8_t handle_native_read(uint8_t reg_addr) {
        switch (reg_addr) {
            case 0x00: return palette_index;
            case 0x01: return palette_ram[palette_index] & 0xFF;
            case 0x02: return (palette_ram[palette_index] >> 8) & 0x0F;
            case 0x03: return control_reg;
            default: return 0;
        }
    }

    uint16_t cpc_to_rgb(uint8_t cpc_color) {
        // CPC to 12-bit RGB conversion (simplified)
        uint8_t r = ((cpc_color >> 0) & 0b11) * 0x55;
        uint8_t g = ((cpc_color >> 2) & 0b11) * 0x55;
        uint8_t b = ((cpc_color >> 4) & 0b11) * 0x55;
        return (r << 8) | (g << 4) | b;
    }

    uint16_t ex_to_rgb(uint8_t ex_color) {
        // EX mode: 2 bits per component scaled to 4 bits
        uint8_t r = ((ex_color >> 4) & 0b11) * 0x55;
        uint8_t g = ((ex_color >> 2) & 0b11) * 0x55;
        uint8_t b = ((ex_color >> 0) & 0b11) * 0x55;
        return (r << 8) | (g << 4) | b;
    }
};

// Test suite
class ColorPaletteTest {
public:
    void run_all_tests() {
        test_native_registers();
        test_legacy_mode();
        test_color_modes();
        test_auto_increment();
        std::cout << "All tests passed!" << std::endl;
    }

private:
    void test_native_registers() {
        ColorPalette palette;
        
        // Test index register
        palette.wishbone_access(0b01, 0x0100, 0x42, true, true, true);
        uint8_t idx = palette.wishbone_access(0b01, 0x0100, 0, false, true, true);
        assert(idx == 0x42);
        
        // Test control register
        palette.wishbone_access(0b01, 0x0103, 0b00110110, true, true, true);
        uint8_t ctrl = palette.wishbone_access(0b01, 0x0103, 0, false, true, true);
        assert(ctrl == 0b00110110);
        
        std::cout << "Native registers test: PASSED" << std::endl;
    }

    void test_legacy_mode() {
        ColorPalette palette;
        
        // Test legacy index write
        palette.wishbone_access(0b11, 0xBC00, 0b00000101, true, true, true); // Set index to 5
        
        // Test legacy color write
        palette.wishbone_access(0b11, 0xBC00, 0b01010011, true, true, true); // Write color data
        
        // Legacy read should return 0
        uint8_t read_val = palette.wishbone_access(0b11, 0xBC00, 0, false, true, true);
        assert(read_val == 0);
        
        std::cout << "Legacy mode test: PASSED" << std::endl;
    }

    void test_color_modes() {
        ColorPalette palette;
        
        // Test CPC mode
        palette.wishbone_access(0b01, 0x0103, 0b00000000, true, true, true); // CPC mode
        uint16_t color = palette.get_pixel_color(0x05);
        assert(color != 0);
        
        // Test EX mode
        palette.wishbone_access(0b01, 0x0103, 0b00010000, true, true, true); // EX mode
        color = palette.get_pixel_color(0x2A); // 10 10 10
        assert(color == 0xAAA);
        
        // Test Native 8-bit mode
        palette.wishbone_access(0b01, 0x0100, 0x80, true, true, true); // Set index
        palette.wishbone_access(0b01, 0x0101, 0x34, true, true, true); // Write low
        palette.wishbone_access(0b01, 0x0102, 0x05, true, true, true); // Write high
        palette.wishbone_access(0b01, 0x0103, 0b00100000, true, true, true); // Native8 mode
        color = palette.get_pixel_color(0x80);
        assert(color == 0x534);
        
        std::cout << "Color modes test: PASSED" << std::endl;
    }

    void test_auto_increment() {
        ColorPalette palette;
        
        // Enable auto-increment
        palette.wishbone_access(0b01, 0x0103, 0b01000000, true, true, true);
        
        // Write to index
        palette.wishbone_access(0b01, 0x0100, 0x10, true, true, true);
        
        // Write data - should auto-increment
        palette.wishbone_access(0b01, 0x0101, 0xAA, true, true, true);
        
        // Check index incremented
        uint8_t idx = palette.wishbone_access(0b01, 0x0100, 0, false, true, true);
        assert(idx == 0x11);
        
        std::cout << "Auto-increment test: PASSED" << std::endl;
    }
};

// Main test runner
int main() {
    ColorPaletteTest tester;
    tester.run_all_tests();
    return 0;
}
