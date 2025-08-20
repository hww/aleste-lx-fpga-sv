`timescale 1ns / 1ps
module tb_sdram_controller;

    reg clk_sys = 0;
    reg rst = 1;
    reg locked = 0;
    // Добавьте здесь сигналы интерфейса SDRAM

    // Instantiate the controller
    sdram_controller DUT (
        .clk_sys(clk_sys),
        .rst(rst),
        .locked(locked)
        // ... подключите остальные порты ...
    );

    // Generate system clock
    always #5.2 clk_sys = ~clk_sys; // ~96 MHz

    initial begin
        $dumpfile("tb_sdram.vcd");
        $dumpvars(0, tb_sdram_controller);
        #100 locked = 1; // PLL locked
        #50 rst = 0;     // Release reset
        #10000;          // Run simulation
        $finish;
    end

endmodule
