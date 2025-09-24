#include "graphic_accelerator_utils.cpp"
#include <iostream>
#include <cassert>

class SimpleRegisterTest : public GraphicAcceleratorTest {
public:
    void run() {
        std::cout << "Starting simple register access test..." << std::endl;
        
        reset();
        
        // Test basic register writes and reads
        test_control_register();
        test_status_register();
        test_configuration_registers();
        
        std::cout << "Simple register access test completed successfully!" << std::endl;
    }
    
    void test_control_register() {
        std::cout << "Testing control register..." << std::endl;
        
        // Write to control register (assume address 0x0)
        uint32_t control_value = 0x00000001; // Start bit
        wb_write(0x00000000, control_value);
        
        // Read back
        uint32_t read_value = wb_read(0x00000000);
        assert(read_value == control_value);
        
        std::cout << "Control register test passed" << std::endl;
    }
    
    void test_status_register() {
        std::cout << "Testing status register..." << std::endl;
        
        // Read status register (assume address 0x4)
        uint32_t status = wb_read(0x00000004);
        std::cout << "Status register: 0x" << std::hex << status << std::endl;
        
        // Should be idle after reset
        assert((status & 0x1) == 0); // IDLE bit should be set
        
        std::cout << "Status register test passed" << std::endl;
    }
    
    void test_configuration_registers() {
        std::cout << "Testing configuration registers..." << std::endl;
        
        // Test various configuration registers
        const uint32_t test_values[] = {
            0x12345678, 0xABCDEF01, 0xDEADBEEF, 0xCAFEBABE
        };
        
        for (int i = 0; i < 4; i++) {
            uint32_t addr = 0x10 + i * 4; // Assume config registers start at 0x10
            wb_write(addr, test_values[i]);
            
            uint32_t read_value = wb_read(addr);
            assert(read_value == test_values[i]);
            
            std::cout << "Register 0x" << std::hex << addr 
                      << " = 0x" << read_value << " - OK" << std::endl;
        }
        
        std::cout << "Configuration registers test passed" << std::endl;
    }
};

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    SimpleRegisterTest test;
    test.run();
    
    std::cout << "All tests passed!" << std::endl;
    return 0;
}