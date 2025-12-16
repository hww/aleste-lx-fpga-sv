`timescale 1ns/1ps

module wb_z80_pic_tb (
    // Clock and Reset
    input        wb_clk_i,
    input        wb_rst_i,
    
    // Wishbone Slave Interface
    input  [23:0] wb_adr_i,
    input  [7:0] wb_dat_i,
    output [7:0] wb_dat_o,
    input        wb_we_i,
    input        wb_stb_i,
    input        wb_cyc_i,
    input        wb_cs_i,
    output       wb_ack_o,
    output       wb_sel_o,
    
    // IRQ Input Lines (16-bit)
    input  [15:0] irq_i,
    
    // CPU Interface
    output       int_req_o,
    input        int_ack_i,

    // Debug/Status outputs
    output [3:0] highest_irq_o // Highest priority IRQ for debugging    
);

    // Instantiate DUT
    wb_z80_pic dut (
        .wb_clk_i(wb_clk_i),
        .wb_rst_i(wb_rst_i),
        .wb_adr_i(wb_adr_i),
        .wb_dat_i(wb_dat_i),
        .wb_dat_o(wb_dat_o),
        .wb_we_i(wb_we_i),
        .wb_stb_i(wb_stb_i),
        .wb_cyc_i(wb_cyc_i),
        .wb_ack_o(wb_ack_o),
        .wb_sel_o(wb_sel_o),
        .wb_cs_i(wb_cs_i),
        .irq_i(irq_i),
        .int_req_o(int_req_o),
        .int_ack_i(int_ack_i),
        .highest_irq_o(highest_irq_o)
    );

endmodule
