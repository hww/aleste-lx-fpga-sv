#ifndef WB_TEST_BASE_H
#define WB_TEST_BASE_H

#include <verilated.h>
#include <verilated_vcd_c.h>

class WbTestBase {
protected:
    vluint64_t& main_time;
    VerilatedVcdC* tfp;
    
    // Timing constants
    static constexpr vluint64_t SETUP_TIME = 1;
    static constexpr vluint64_t CLK_HALF_PERIOD = 5;
    static constexpr vluint64_t CLK_REST_TIME = CLK_HALF_PERIOD - SETUP_TIME;
    
public:
    WbTestBase(vluint64_t& time_var, VerilatedVcdC* trace_ptr = nullptr)
        : main_time(time_var), tfp(trace_ptr) {}
    
    virtual ~WbTestBase() = default;
    
    void eval(int delta) {
        if (tfp) tfp->dump(main_time);
        main_time += delta;
    }
    
    void clock_tick() {
        eval(CLK_HALF_PERIOD);
        eval(CLK_HALF_PERIOD);
    }
    
    void wait_cycles(int cycles) {
        for (int i = 0; i < cycles; i++) {
            clock_tick();
        }
    }
};

#endif