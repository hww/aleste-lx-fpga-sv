`timescale 1ns/1ps

module u765_wb_tb
(
    // Wishbone interface
    input                   wb_clk_i,
    input                   wb_rst_i,
    input                   wb_cyc_i,
    input                   wb_stb_i,
    input                   wb_we_i,
    input           [2:0]   wb_adr_i,
    input           [7:0]   wb_dat_i,
    output logic    [7:0]   wb_dat_o,
    output logic            wb_ack_o,
    
    // FDC control signals
    input                   enable,       // enable, activate FDC (Not a CS signal!)
    input           [1:0]   ready,        // disk is inserted in MiST(er)
    input           [1:0]   motor,        // drive motor
    input           [1:0]   available,    // drive available
    input                   fast,         // "Fast" mode
    
    // SD card interface
    input           [1:0]   img_mounted,  // signaling that new image has been mounted
    input                   img_wp,       // write protect
    input           [31:0]  img_size,     // size of image in bytes
    output logic    [31:0]  sd_lba,
    output logic    [1:0]   sd_rd,
    output logic    [1:0]   sd_wr,
    input                   sd_ack,
    input           [8:0]   sd_buff_addr,
    input           [7:0]   sd_buff_dout,
    output logic    [7:0]   sd_buff_din,
    input                   sd_buff_wr,

    output logic    [1:0]   test
);

    // Instantiate the u765_wb FDC with reduced cycles for testing
    u765_wb #(
        .CYCLES(100),
        .SPECCY_SPEEDLOCK_HACK(0)
    ) u765_wb_inst (
        // Wishbone interface
        .wb_clk_i(wb_clk_i),
        .wb_rst_i(wb_rst_i),
        .wb_cyc_i(wb_cyc_i),
        .wb_stb_i(wb_stb_i),
        .wb_we_i(wb_we_i),
        .wb_adr_i(wb_adr_i),
        .wb_dat_i(wb_dat_i),
        .wb_dat_o(wb_dat_o),  // Connect directly to output
        .wb_ack_o(wb_ack_o),  // Connect directly to output
        
        // FDC control signals
        .enable(enable),      // Activate chip (it is not a CS)
        .ready(ready),
        .motor(motor),
        .available(available),
        .fast(fast),
        
        // SD card interface
        .img_mounted(img_mounted),
        .img_wp(img_wp),
        .img_size(img_size),
        .sd_lba(sd_lba),
        .sd_rd(sd_rd),
        .sd_wr(sd_wr),
        .sd_ack(sd_ack),
        .sd_buff_addr(sd_buff_addr),
        .sd_buff_dout(sd_buff_dout),
        .sd_buff_din(sd_buff_din),
        .sd_buff_wr(sd_buff_wr)
    );

endmodule
