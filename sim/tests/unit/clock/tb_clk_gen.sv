`timescale 1ns / 1ps
module tb_clk_gen (
    input wire clk25,
    input wire rst,
    output wire clk_sys,      // Теперь это выходной порт
    output wire clk_sdram,    // Теперь это выходной порт  
    output wire clk_hdmi,     // Теперь это выходной порт
    output wire locked,       // Теперь это выходной порт
    output wire ce_4m,
    output wire ce_8m, 
    output wire ce_16m,
    output wire ce_7_16m
);

    // Instantiate the module
    clk_gen DUT (
        .clk25(clk25),
        .rst(rst),
        .clk_sys(clk_sys),
        .clk_sdram(clk_sdram),
        .clk_hdmi(clk_hdmi),
        .locked(locked),
        .ce_4m(ce_4m),
        .ce_8m(ce_8m),
        .ce_16m(ce_16m),
        .ce_7_16m(ce_7_16m)
    );

endmodule