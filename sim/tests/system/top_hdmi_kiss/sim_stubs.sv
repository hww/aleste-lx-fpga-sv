// =============================================================================
// Simulation Stubs for FPGA Primitives
// =============================================================================

// Заглушка для sys_pll
module sys_pll (
    input  logic clk_25mhz,
    input  logic rst,
    output logic clk_96m, 
    output logic locked
);
    assign clk_96m = clk_25mhz;
    assign locked = 1'b1;
endmodule

// Заглушка для video_pll  
module video_pll (
    input  logic clk_96m,
    input  logic rst,
    output logic clk_27mhz,
    output logic clk_270mhz,
    output logic locked
);
    assign clk_27mhz = clk_96m;
    assign clk_270mhz = clk_96m;
    assign locked = 1'b1;
endmodule

// Заглушка для ecp5_pll
module ecp5_pll (
    input  wire CLKI,
    input  wire RST,
    output wire CLKOP, 
    output wire CLKOS,
    output wire LOCK
);
    assign CLKOP = CLKI;
    assign CLKOS = CLKI;
    assign LOCK = 1'b1;
endmodule

// Заглушка для ODDRX1F
module ODDRX1F (
    output logic Q,
    input  logic D0,
    input  logic D1,
    input  logic SCLK, 
    input  logic RST
);
    assign Q = D0;
endmodule

// Заглушка для ddr_output
module ddr_output (
    input  logic video_clk,
    input  logic video_clk_10x,
    input  logic rst_n,
    input  logic [9:0] tmds_red,
    input  logic [9:0] tmds_green,
    input  logic [9:0] tmds_blue,
    output logic [2:0] tmds_data_p,
    output logic [2:0] tmds_data_n, 
    output logic tmds_clock_p,
    output logic tmds_clock_n
);
    assign tmds_data_p = 3'b000;
    assign tmds_data_n = 3'b111;
    assign tmds_clock_p = 1'b0;
    assign tmds_clock_n = 1'b1;
endmodule
