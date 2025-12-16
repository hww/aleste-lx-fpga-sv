#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vwb_z80_pic_tb.h"
#include "wb_pic_utils.h"
#include <iostream>
#include <cassert>

int test_reset(WbPicTestUtils& utils);
int test_mask_registers(WbPicTestUtils& utils);
int test_irq_detection(WbPicTestUtils& utils);
int test_int_request(WbPicTestUtils& utils);
int test_irq_priority(WbPicTestUtils& utils);

int main(int argc, char **argv)
{
    // Initialize Verilator
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    vluint64_t main_time = 0;
    VerilatedVcdC *tfp = new VerilatedVcdC;

    // Create instance
    Vwb_z80_pic_tb *top = new Vwb_z80_pic_tb;

    // Initialize signals
    top->wb_clk_i = 0;
    top->wb_rst_i = 1;
    top->wb_adr_i = 0;
    top->wb_dat_i = 0;
    top->wb_we_i = 0;
    top->wb_stb_i = 0;
    top->wb_cyc_i = 0;
    top->wb_cs_i = 0;
    top->irq_i = 0;
    top->int_ack_i = 0;

    // Create test utils
    WbPicTestUtils utils(top, main_time, tfp);

    // Start tracing
    top->trace(tfp, 99);
    tfp->open("wb_z80_pic_tb.vcd");

    printf("=== Starting Z80 PIC Test ===\n");

    int test_failed = 0;

    try
    {
        // Run individual tests
        test_failed |= test_reset(utils);
        if (test_failed) goto cleanup;
        
        test_failed |= test_mask_registers(utils);
        if (test_failed) goto cleanup;
        
        test_failed |= test_irq_detection(utils);
        if (test_failed) goto cleanup;
        
        test_failed |= test_int_request(utils);
        if (test_failed) goto cleanup;
        
        test_failed |= test_irq_priority(utils);
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
int test_reset(WbPicTestUtils& utils)
{
    printf("Test 1: Reset and register access\n");
    utils.reset_assert();
    utils.wait_cycles(2);
    utils.reset_deassert();
    utils.wait_cycles(2);

    // Check default values after reset
    uint8_t val;
    int test_failed = 0;

    val = utils.read_reg(0xFC0020);
    if (val != 0x00)
    {
        printf("FAIL: Mask register low should be 0x00, got 0x%02X\n", val);
        test_failed = 1;
    }

    val = utils.read_reg(0xFC0021);
    if (val != 0x00)
    {
        printf("FAIL: Mask register high should be 0x00, got 0x%02X\n", val);
        test_failed = 1;
    }

    val = utils.read_reg(0xFC0022);
    if (val != 0xFF)
    {
        printf("FAIL: Vector register should be 0xFF, got 0x%02X\n", val);
        test_failed = 1;
    }

    val = utils.read_reg(0xFC0023);
    if (val != 0x00)
    {
        printf("FAIL: Status register low should be 0x00, got 0x%02X\n", val);
        test_failed = 1;
    }

    val = utils.read_reg(0xFC0024);
    if (val != 0x00)
    {
        printf("FAIL: Status register high should be 0x00, got 0x%02X\n", val);
        test_failed = 1;
    }

    val = utils.read_reg(0xFC0025);
    if (val != 0x00)
    {
        printf("FAIL: Pending register low should be 0x00, got 0x%02X\n", val);
        test_failed = 1;
    }

    val = utils.read_reg(0xFC0026);
    if (val != 0x00)
    {
        printf("FAIL: Pending register high should be 0x00, got 0x%02X\n", val);
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
int test_mask_registers(WbPicTestUtils& utils)
{
    printf("Test 2: Mask register operations\n");
    int test_failed = 0;
    uint8_t val;

    utils.write_reg(0xFC0020, 0x55); // Mask register low
    utils.write_reg(0xFC0021, 0xAA); // Mask register high

    val = utils.read_reg(0xFC0020);
    if (val != 0x55)
    {
        printf("FAIL: Mask low write/read failed - expected 0x55, got 0x%02X\n", val);
        test_failed = 1;
    }

    val = utils.read_reg(0xFC0021);
    if (val != 0xAA)
    {
        printf("FAIL: Mask high write/read failed - expected 0xAA, got 0x%02X\n", val);
        test_failed = 1;
    }

    utils.write_reg(0xFC0020, 0x11); // Mask register low
    utils.write_reg(0xFC0021, 0x22); // Mask register high

    val = utils.read_reg(0xFC0020);
    if (val != 0x11)
    {
        printf("FAIL: Mask low write/read failed - expected 0x11, got 0x%02X\n", val);
        test_failed = 1;
    }

    val = utils.read_reg(0xFC0021);
    if (val != 0x22)
    {
        printf("FAIL: Mask high write/read failed - expected 0x22, got 0x%02X\n", val);
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

// Test 3: IRQ detection
int test_irq_detection(WbPicTestUtils& utils)
{
    printf("Test 3: IRQ detection\n");
    int test_failed = 0;
    uint8_t val;

    utils.set_irq(0x0001);
    utils.wait_cycles(2);

    val = utils.read_reg(0xFC0023);
    if (val != 0x01)
    {
        printf("FAIL: Status low should show IRQ0 (0x01), got 0x%02X\n", val);
        test_failed = 1;
    }

    val = utils.read_reg(0xFC0024);
    if (val != 0x00)
    {
        printf("FAIL: Status high should be 0x00, got 0x%02X\n", val);
        test_failed = 1;
    }

    utils.set_irq(0x0301);
    utils.wait_cycles(2);

    val = utils.read_reg(0xFC0023);
    if (val != 0x01)
    {
        printf("FAIL: Status low should show IRQ0 (0x01), got 0x%02X\n", val);
        test_failed = 1;
    }

    val = utils.read_reg(0xFC0024);
    if (val != 0x03)
    {
        printf("FAIL: Status high should show IRQ8-9 (0x03), got 0x%02X\n", val);
        test_failed = 1;
    }

    if (test_failed)
    {
        printf("IRQ detection test FAILED!\n");
    }
    else
    {
        printf("IRQ detection test passed!\n");
    }
    
    return test_failed;
}

// Test 4: INT request generation
int test_int_request(WbPicTestUtils& utils)
{
    printf("Test 4: INT request generation\n");
    int test_failed = 0;

    // Очищаем все pending прерывания - устанавливаем все биты в 1
    utils.write_reg(0xFC0027, 0xFF); // Clear all low pending (все биты = 1)
    utils.write_reg(0xFC0028, 0xFF); // Clear all high pending (все биты = 1)
    utils.wait_cycles(2);

    utils.write_reg(0xFC0020, 0x01); // Mask low - разрешить только IRQ0
    utils.write_reg(0xFC0021, 0x00); // Mask high - запретить все высокие IRQ
    utils.set_irq(0x0001);           // Только IRQ0
    utils.wait_cycles(3);

    printf("INT state before ack: %d\n", utils.int_requested());
    printf("Pending reg before ack: 0x%02X 0x%02X\n",
           utils.read_reg(0xFC0025), utils.read_reg(0xFC0026));

    if (!utils.int_requested())
    {
        printf("FAIL: INT should be asserted\n");
        test_failed = 1;
        return test_failed;
    }

    utils.int_ack();
    utils.wait_cycles(2);

    printf("INT state after ack: %d\n", utils.int_requested());
    printf("Pending reg after ack: 0x%02X 0x%02X\n",
           utils.read_reg(0xFC0025), utils.read_reg(0xFC0026));

    // Очищаем IRQ0 - устанавливаем бит 0 в 1, остальные в 0
    utils.write_reg(0xFC0027, 0x01); // Clear IRQ0: 0x01 = 00000001 (бит 0 = 1)
    utils.wait_cycles(2);

    printf("INT state after clear IRQ0: %d\n", utils.int_requested());
    printf("Pending reg after clear IRQ0: 0x%02X 0x%02X\n",
           utils.read_reg(0xFC0025), utils.read_reg(0xFC0026));

    // Теперь INT должен сняться, так как pending прерываний нет
    if (utils.int_requested())
    {
        printf("FAIL: INT should be deasserted after clearing pending IRQ\n");
        printf("Debug: highest_irq_o = %d\n", utils.get_highest_irq());
        test_failed = 1;
    }

    if (test_failed)
    {
        printf("INT request test FAILED!\n");
    }
    else
    {
        printf("INT request test passed!\n");
    }
    
    return test_failed;
}

// Test 5: High IRQ priority
int test_irq_priority(WbPicTestUtils& utils)
{
    printf("Test 5: High IRQ priority\n");
    int test_failed = 0;

    // Очищаем все pending прерывания
    utils.write_reg(0xFC0027, 0xFF);
    utils.write_reg(0xFC0028, 0xFF);
    utils.wait_cycles(2);

    utils.write_reg(0xFC0020, 0xFF); // Mask low
    utils.write_reg(0xFC0021, 0xFF); // Mask high
    utils.set_irq(0x8001);           // IRQ0 и IRQ15
    utils.wait_cycles(3);

    printf("INT state: %d\n", utils.int_requested());
    printf("Pending reg: 0x%02X 0x%02X\n",
           utils.read_reg(0xFC0025), utils.read_reg(0xFC0026));

    if (!utils.int_requested())
    {
        printf("FAIL: INT should be asserted\n");
        test_failed = 1;
        return test_failed;
    }

    // Check that highest IRQ is bit 15
    uint8_t highest_irq = utils.get_highest_irq();
    if (highest_irq != 15)
    {
        printf("FAIL: Highest IRQ should be 15, got %d\n", highest_irq);
        test_failed = 1;
        return test_failed;
    }

    utils.int_ack();
    utils.wait_cycles(2);

    // Очищаем IRQ15 (бит 7 в high регистре)
    utils.write_reg(0xFC0028, 0x80); // Clear IRQ15 in pending high
    utils.wait_cycles(2);

    printf("INT state after clearing IRQ15: %d\n", utils.int_requested());

    // Теперь highest должен быть IRQ0
    highest_irq = utils.get_highest_irq();
    printf("Highest IRQ after clearing IRQ15: %d\n", highest_irq);

    // INT должен оставаться активным потому что есть IRQ0
    if (!utils.int_requested())
    {
        printf("FAIL: INT should remain asserted for IRQ0\n");
        test_failed = 1;
    }

    if (test_failed)
    {
        printf("High IRQ priority test FAILED!\n");
    }
    else
    {
        printf("High IRQ priority test passed!\n");
    }
    
    return test_failed;
}