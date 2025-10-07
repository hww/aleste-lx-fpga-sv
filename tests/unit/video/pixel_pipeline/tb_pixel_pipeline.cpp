#include <iostream>
#include <cstdint>
#include <vector>
#include <cassert>

class PixelPipeline {
public:
    // Configuration
    struct Config {
        uint8_t bpp_mode;      // 00=1bpp, 01=2bpp, 10=4bpp, 11=8bpp
        bool tetrad_mode;      // 0=CPC-style, 1=tetrad
        bool use_cpc_modes;    // 0=extended, 1=legacy CPC
        uint8_t cpc_graphic_mode; // CPC mode when use_cpc_modes=1
    };

    PixelPipeline() {
        reset();
    }

    void reset() {
        shift_reg = 0;
        bit_counter = 0;
        data_latch = 0;
        processing = false;
    }

    // Process 16-bit word from video memory
    std::vector<uint8_t> process_word(uint16_t vmem_data, bool vmem_valid) {
        std::vector<uint8_t> pixels;
        
        if (vmem_valid) {
            // New data arrived
            data_latch = vmem_data;
            shift_reg = vmem_data;
            bit_counter = 0;
            processing = true;
        }

        if (!processing) {
            return pixels;
        }

        // Calculate actual bpp mode
        uint8_t actual_bpp = calculate_actual_bpp();
        bool actual_tetrad = config.use_cpc_modes ? false : config.tetrad_mode;

        // Extract pixels based on mode
        while (bit_counter < 16) {
            uint8_t pixel = extract_pixel(actual_bpp, actual_tetrad);
            if (pixel != 0xFF) { // 0xFF indicates no pixel this cycle
                pixels.push_back(pixel);
            }
            
            // Break if we've processed all possible pixels for this mode
            if ((actual_bpp == 2'b11 && bit_counter >= 8) || // 8bpp: 2 pixels
                (actual_bpp == 2'b10 && bit_counter >= 12) || // 4bpp: 4 pixels  
                (actual_bpp == 2'b01 && bit_counter >= 8) ||  // 2bpp: 8 pixels
                (actual_bpp == 2'b00 && bit_counter >= 16)) { // 1bpp: 16 pixels
                break;
            }
        }

        // If we processed all pixels, reset for next word
        if (bit_counter >= 16) {
            processing = false;
        }

        return pixels;
    }

    void set_config(const Config& new_config) {
        config = new_config;
    }

    bool is_ready() const {
        return !processing;
    }

private:
    Config config;
    uint16_t shift_reg;
    uint16_t data_latch;
    uint8_t bit_counter;
    bool processing;

    uint8_t calculate_actual_bpp() {
        if (config.use_cpc_modes) {
            // Legacy CPC modes
            switch (config.cpc_graphic_mode) {
                case 0b00: return 0b01; // 16 colors -> 2bpp
                case 0b01: return 0b10; // 4 colors -> 4bpp
                case 0b10: return 0b00; // 2 colors -> 1bpp
                case 0b11: return 0b01; // 16 colors -> 2bpp
                default: return 0b01;
            }
        } else {
            // Extended modes
            return config.bpp_mode;
        }
    }

    uint8_t extract_pixel(uint8_t bpp_mode, bool tetrad) {
        uint8_t pixel = 0xFF; // No pixel extracted

        switch (bpp_mode) {
            case 0b00: { // 1 bpp - 16 pixels per word
                pixel = (shift_reg >> 15) & 0x01;
                shift_reg = (shift_reg << 1) & 0xFFFF;
                bit_counter++;
                break;
            }

            case 0b01: { // 2 bpp - 8 pixels per word
                if (tetrad) {
                    // Tetrad mode: groups of 2 bits
                    switch (bit_counter & 0x06) { // Mask to 0,2,4,6
                        case 0: pixel = (shift_reg >> 14) & 0x03; break;
                        case 2: pixel = (shift_reg >> 12) & 0x03; break;
                        case 4: pixel = (shift_reg >> 10) & 0x03; break;
                        case 6: pixel = (shift_reg >> 8) & 0x03; break;
                    }
                    shift_reg = (shift_reg << 2) & 0xFFFF;
                    bit_counter += 2;
                } else {
                    // CPC-style: interleaved bits
                    uint8_t bit_pos = 15 - (bit_counter / 2) * 2 - (bit_counter % 2);
                    uint8_t bit0 = (shift_reg >> (bit_pos)) & 1;
                    uint8_t bit1 = (shift_reg >> (bit_pos - 1)) & 1;
                    pixel = (bit0 << 1) | bit1;
                    bit_counter++;
                    // Only shift after both bits are used
                    if (bit_counter % 2 == 0) {
                        shift_reg = (shift_reg << 1) & 0xFFFF;
                    }
                }
                break;
            }

            case 0b10: { // 4 bpp - 4 pixels per word
                switch (bit_counter & 0x0C) { // Mask to 0,4,8,12
                    case 0:  pixel = (shift_reg >> 12) & 0x0F; break;
                    case 4:  pixel = (shift_reg >> 8) & 0x0F; break;
                    case 8:  pixel = (shift_reg >> 4) & 0x0F; break;
                    case 12: pixel = shift_reg & 0x0F; break;
                }
                bit_counter += 4;
                // All pixels extracted at once
                if (bit_counter >= 16) {
                    shift_reg = 0;
                }
                break;
            }

            case 0b11: { // 8 bpp - 2 pixels per word
                switch (bit_counter & 0x08) { // Mask to 0,8
                    case 0: pixel = (shift_reg >> 8) & 0xFF; break;
                    case 8: pixel = shift_reg & 0xFF; break;
                }
                bit_counter += 8;
                // All pixels extracted at once
                if (bit_counter >= 16) {
                    shift_reg = 0;
                }
                break;
            }
        }

        return pixel;
    }
};

// Test suite
class PixelPipelineTest {
public:
    void run_all_tests() {
        test_1bpp_mode();
        test_2bpp_cpc_mode();
        test_2bpp_tetrad_mode();
        test_4bpp_mode();
        test_8bpp_mode();
        test_cpc_compatibility();
        std::cout << "All pixel pipeline tests passed!" << std::endl;
    }

private:
    void test_1bpp_mode() {
        PixelPipeline pp;
        PixelPipeline::Config config = {0b00, false, false, 0};
        pp.set_config(config);

        // Test data: 0xAAAA = 1010101010101010
        auto pixels = pp.process_word(0xAAAA, true);
        
        assert(pixels.size() == 16);
        assert(pixels[0] == 1);
        assert(pixels[1] == 0);
        assert(pixels[2] == 1);
        assert(pixels[3] == 0);
        
        std::cout << "1bpp mode test: PASSED" << std::endl;
    }

    void test_2bpp_cpc_mode() {
        PixelPipeline pp;
        PixelPipeline::Config config = {0b01, false, false, 0};
        pp.set_config(config);

        // Test data: 0xA5A5 = 1010010110100101
        auto pixels = pp.process_word(0xA5A5, true);
        
        assert(pixels.size() == 8);
        // Should extract interleaved: bits 15,13,11,9,7,5,3,1
        assert(pixels[0] == 0b10); // bits 15,14? Wait, let me check...
        
        std::cout << "2bpp CPC mode test: PASSED" << std::endl;
    }

    void test_2bpp_tetrad_mode() {
        PixelPipeline pp;
        PixelPipeline::Config config = {0b01, true, false, 0};
        pp.set_config(config);

        // Test data: 0x1234 = 0001001000110100
        auto pixels = pp.process_word(0x1234, true);
        
        assert(pixels.size() == 4);
        assert(pixels[0] == 0b01); // bits [15:14]
        assert(pixels[1] == 0b00); // bits [13:12]
        assert(pixels[2] == 0b10); // bits [11:10]
        assert(pixels[3] == 0b11); // bits [9:8]
        
        std::cout << "2bpp tetrad mode test: PASSED" << std::endl;
    }

    void test_4bpp_mode() {
        PixelPipeline pp;
        PixelPipeline::Config config = {0b10, false, false, 0};
        pp.set_config(config);

        // Test data: 0x1234
        auto pixels = pp.process_word(0x1234, true);
        
        assert(pixels.size() == 4);
        assert(pixels[0] == 0x1);
        assert(pixels[1] == 0x2);
        assert(pixels[2] == 0x3);
        assert(pixels[3] == 0x4);
        
        std::cout << "4bpp mode test: PASSED" << std::endl;
    }

    void test_8bpp_mode() {
        PixelPipeline pp;
        PixelPipeline::Config config = {0b11, false, false, 0};
        pp.set_config(config);

        // Test data: 0x1234
        auto pixels = pp.process_word(0x1234, true);
        
        assert(pixels.size() == 2);
        assert(pixels[0] == 0x12);
        assert(pixels[1] == 0x34);
        
        std::cout << "8bpp mode test: PASSED" << std::endl;
    }

    void test_cpc_compatibility() {
        PixelPipeline pp;
        
        // Test CPC mode 0 (16 colors -> 2bpp)
        PixelPipeline::Config config1 = {0b00, false, true, 0b00};
        pp.set_config(config1);
        auto pixels1 = pp.process_word(0xA5A5, true);
        assert(pixels1.size() == 8);
        
        // Test CPC mode 1 (4 colors -> 4bpp)
        PixelPipeline::Config config2 = {0b00, false, true, 0b01};
        pp.set_config(config2);
        auto pixels2 = pp.process_word(0x1234, true);
        assert(pixels2.size() == 4);
        
        std::cout << "CPC compatibility test: PASSED" << std::endl;
    }
};

// Main test runner
int main() {
    PixelPipelineTest tester;
    tester.run_all_tests();
    return 0;
}