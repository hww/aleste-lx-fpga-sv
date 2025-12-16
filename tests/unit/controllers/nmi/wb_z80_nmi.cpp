#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vwb_z80_nmi_tb.h"
#include "wb_nmi_utils.h"
#include <iostream>
#include <cassert>

int test_reset(WbNmiTestUtils& utils);
int test_mask_registers(WbNmiTestUtils& utils);
int test_nmi_detection(WbNmiTestUtils& utils);
int test_nmi_generation(WbNmiTestUtils& utils);
int test_system_control(WbNmiTestUtils& utils);

int main(int argc, char **argv)
{
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    vluint64_t main_time = 0;
    VerilatedVcdC *tfp = new VerilatedVcdC;

    // Create instance
    Vwb_z80_nmi_tb *top = new Vwb_z80_nmi_tb;

    // Initialize signals
    top->wb_clk_i = 0;
    top->wb_rst_i = 1;
    top->wb_adr_i = 0;
    top->wb_dat_i = 0;
    top->wb_we_i = 0;
    top->wb_stb_i = 0;
    top->wb_cyc_i = 0;
    top->wb_cs_i = 0;
    top->nmi_wishbone_error_i = 0;
    top->nmi_panic_button_i = 0;
    top->nmi_ext_board_error_i = 0;
    top->nmi_debug_trigger_i = 0;

    // Create test utils
    WbNmiTestUtils utils(top, main_time, tfp);

    // Start tracing
    top->trace(tfp, 99);
    tfp->open("wb_z80_nmi_tb.vcd");

    printf("=== Starting NMI Controller Test ===\n");

    int test_failed = 0;

    try
    {
        // Run individual tests
        test_failed |= test_reset(utils);
        if (test_failed) goto cleanup;
        
        test_failed |= test_mask_registers(utils);
        if (test_failed) goto cleanup;
        
        test_failed |= test_nmi_detection(utils);
        if (test_failed) goto cleanup;
        
        test_failed |= test_nmi_generation(utils);
        if (test_failed) goto cleanup;
        
        test_failed |= test_system_control(utils);
        if (test_failed) goto cleanup;

        printf("=== All tests passed! ===\n");
    }
    catch (const std::string &e)
    {
        printf("Exception caught: %s\n", e.c_str());
        test_failed = 1;
    }

cleanup:
    tfp->close();
    delete top;
    delete tfp;

    return test_failed;
}

// Test 1: Reset and basic register access
int test_reset(WbNmiTestUtils& utils)
{
    printf("Test 1: Reset and register access\n");
    utils.reset_assert();
    utils.wait_cycles(2);
    utils.reset_deassert();
    utils.wait_cycles(2);

    // Check default values after reset
    uint8_t val;
    int test_failed = 0;

    val = utils.read_reg(0xFC0030); // STATUS
    if (val != 0x00)
    {
        printf("FAIL: Status register should be 0x00, got 0x%02X\n", val);
        test_failed = 1;
    }

    val = utils.read_reg(0xFC0031); // MASK
    if (val != 0x00)
    {
        printf("FAIL: Mask register should be 0x00, got 0x%02X\n", val);
        test_failed = 1;
    }

    val = utils.read_reg(0xFC0033); // SYSTEM_CTRL
    if (val != 0x01) // bit 0 = system_halt_enable = 1 by default
    {
        printf("FAIL: System control register should be 0x01, got 0x%02X\n", val);
        test_failed = 1;
    }

    if (test_failed)
    {
        printf("Reset test FAILED!\n");
    }
    else
    {
        printf("Reset test passed!\n");
    }
    
    return test_failed;
}

// Test 2: Mask register write/read
// Test 2: Mask register write/read
// Test 2: Mask register write/read
int test_mask_registers(WbNmiTestUtils& utils)
{
    printf("Test 2: Mask register operations\n");
    int test_failed = 0;
    uint8_t val;

    // Test 1: Write 0x55 (01010101) - enable debug_trigger, ext_board_error, wishbone_error
    // Disable panic_button
    utils.write_reg(0xFC0031, 0x55);

    val = utils.read_reg(0xFC0031);
    if (val != 0x05)
    {
        printf("FAIL: Mask write/read failed - expected 0x05, got 0x%02X\n", val);
        test_failed = 1;
    }

    // Test 2: Write 0xAA (10101010) - enable panic_button, debug_trigger
    // Disable ext_board_error, wishbone_error
    utils.write_reg(0xFC0031, 0x0A);

    val = utils.read_reg(0xFC0031);
    if (val != 0x0A)
    {
        printf("FAIL: Mask write/read failed - expected 0x0A, got 0x%02X\n", val);
        test_failed = 1;
    }

    // Test 3: Write 0x0F (00001111) - enable all sources
    utils.write_reg(0xFC0031, 0x0F);

    val = utils.read_reg(0xFC0031);
    if (val != 0x0F)
    {
        printf("FAIL: Mask write/read failed - expected 0x0F, got 0x%02X\n", val);
        test_failed = 1;
    }

    // Test 4: Write 0x00 - disable all sources
    utils.write_reg(0xFC0031, 0x00);

    val = utils.read_reg(0xFC0031);
    if (val != 0x00)
    {
        printf("FAIL: Mask write/read failed - expected 0x00, got 0x%02X\n", val);
        test_failed = 1;
    }

    if (test_failed)
    {
        printf("Mask register test FAILED!\n");
    }
    else
    {
        printf("Mask register test passed!\n");
    }
    
    return test_failed;
}

// Test 3: NMI detection
int test_nmi_detection(WbNmiTestUtils& utils)
{
    printf("Test 3: NMI detection\n");
    int test_failed = 0;
    uint8_t val;

    // Clear any pending NMIs first
    utils.write_reg(0xFC0032, 0x0F);
    utils.wait_cycles(2);

    // Enable all sources in mask for testing
    utils.write_reg(0xFC0031, 0x0F);
    utils.wait_cycles(2);

    // Trigger wishbone error (bit 0)
    utils.set_nmi_sources(0x01);
    utils.wait_cycles(2);

    val = utils.read_reg(0xFC0030); // STATUS
    if ((val & 0x01) == 0)  // Check bit 0 (wishbone error)
    {
        printf("FAIL: Status should show wishbone error (bit 0), got 0x%02X\n", val);
        test_failed = 1;
    }

    // Trigger panic button (bit 1)
    utils.set_nmi_sources(0x02);
    utils.wait_cycles(2);

    val = utils.read_reg(0xFC0030); // STATUS
    if ((val & 0x02) == 0)  // Check bit 1 (panic button)
    {
        printf("FAIL: Status should show panic button (bit 1), got 0x%02X\n", val);
        test_failed = 1;
    }

    if (test_failed)
    {
        printf("NMI detection test FAILED!\n");
    }
    else
    {
        printf("NMI detection test passed!\n");
    }
    
    return test_failed;
}

// Test 4: NMI generation
// Test 4: NMI generation
int test_nmi_generation(WbNmiTestUtils& utils)
{
    printf("Test 4: NMI generation\n");
    int test_failed = 0;

    // First, let's check the current state
    printf("Initial NMI state: %d\n", utils.nmi_requested());
    printf("Initial status: 0x%02X\n", utils.read_reg(0xFC0030));
    printf("Initial mask: 0x%02X\n", utils.read_reg(0xFC0031));

    // Clear any pending NMIs - clear ALL sources
    utils.write_reg(0xFC0032, 0x0F);
    utils.wait_cycles(5);

    printf("After clear - NMI state: %d\n", utils.nmi_requested());
    printf("After clear - status: 0x%02X\n", utils.read_reg(0xFC0030));

    // Enable wishbone error in mask (bit 0 = 1)
    utils.write_reg(0xFC0031, 0x01);
    utils.wait_cycles(2);
    printf("After setting mask - mask: 0x%02X\n", utils.read_reg(0xFC0031));


    // Trigger wishbone error with a PULSE (not level)
    printf("Triggering wishbone error...\n");
    utils.set_nmi_sources(0x01);     // Set wishbone error
    utils.wait_cycles(2);
    utils.set_nmi_sources(0x00);     // Clear after 2 cycles (create pulse)
    utils.wait_cycles(5);
    utils.print_debug_info();

    printf("After trigger - NMI state: %d\n", utils.nmi_requested());
    printf("After trigger - status: 0x%02X\n", utils.read_reg(0xFC0030));
    printf("After trigger - pending should be detected\n");

    // Check if the event was captured in status register
    uint8_t status = utils.read_reg(0xFC0030);
    if ((status & 0x01) == 0) {
        printf("FAIL: Wishbone error not detected in status register, got 0x%02X\n", status);
        test_failed = 1;
    }

    // Now NMI should be asserted if the event is unmasked
    printf("Final check - NMI state: %d\n", utils.nmi_requested());
    
    if (!utils.nmi_requested())
    {
        printf("FAIL: NMI should be asserted. Debug info:\n");
        printf("  Status: 0x%02X\n", utils.read_reg(0xFC0030));
        printf("  Mask: 0x%02X\n", utils.read_reg(0xFC0031));
        printf("  Check if edge detection is working\n");
        test_failed = 1;
        return test_failed;
    }

    // Clear the wishbone error source
    printf("Clearing wishbone error...\n");
    utils.write_reg(0xFC0032, 0x01);
    utils.wait_cycles(5);

    printf("After clear - NMI state: %d\n", utils.nmi_requested());
    printf("After clear - status: 0x%02X\n", utils.read_reg(0xFC0030));

    // NMI should be deasserted
    if (utils.nmi_requested())
    {
        printf("FAIL: NMI should be deasserted after clearing source\n");
        test_failed = 1;
    }

    if (test_failed)
    {
        printf("NMI generation test FAILED!\n");
    }
    else
    {
        printf("NMI generation test passed!\n");
    }
    
    return test_failed;
}

// Test 5: System control
int test_system_control(WbNmiTestUtils& utils)
{
    printf("Test 5: System control\n");
    int test_failed = 0;

    // Disable system halt
    utils.write_reg(0xFC0033, 0x00); // system_halt_enable = 0
    utils.wait_cycles(2);

    // Trigger NMI
    utils.write_reg(0xFC0031, 0x01); // Enable wishbone error
    utils.set_nmi_sources(0x01);
    utils.wait_cycles(3);

    printf("System halt state: %d\n", utils.system_halted());

    if (utils.system_halted())
    {
        printf("FAIL: System should not be halted when halt is disabled\n");
        test_failed = 1;
    }

    // Enable system halt
    utils.write_reg(0xFC0033, 0x01); // system_halt_enable = 1
    utils.wait_cycles(2);

    printf("System halt state after enable: %d\n", utils.system_halted());

    if (!utils.system_halted())
    {
        printf("FAIL: System should be halted when halt is enabled\n");
        test_failed = 1;
    }

    if (test_failed)
    {
        printf("System control test FAILED!\n");
    }
    else
    {
        printf("System control test passed!\n");
    }
    
    return test_failed;
}