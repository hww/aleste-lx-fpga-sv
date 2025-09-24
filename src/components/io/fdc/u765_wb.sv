`timescale 1ns/1ps
module u765_wb #(
    parameter CYCLES = 20'd4000,
    parameter SPECCY_SPEEDLOCK_HACK = 0
)(
    // Wishbone interface
    input                   wb_clk_i,
    input                   wb_rst_i,
    input                   wb_cyc_i,
    input                   wb_stb_i,
    input                   wb_we_i,
    input           [2:0]   wb_adr_i,
    input           [7:0]   wb_dat_i,
    output reg    [7:0]   wb_dat_o,
    output reg            wb_ack_o,
    
    // FDC control signals
    input                   enable, // The chip enable (not a CS)
    input           [1:0]   ready,
    input           [1:0]   motor,
    input           [1:0]   available,
    input                   fast,
    
    // SD card interface
    input           [1:0]   img_mounted,
    input                   img_wp,
    input           [31:0]  img_size,
    output logic    [31:0]  sd_lba,
    output logic    [1:0]   sd_rd,
    output logic    [1:0]   sd_wr,
    input                   sd_ack,
    input           [8:0]   sd_buff_addr,
    input           [7:0]   sd_buff_dout,
    output logic [7:0]      sd_buff_din,
    input                   sd_buff_wr
);

    // Internal signals
    logic        fdc_clk;
    logic        fdc_reset;
    logic        fdc_a0;
    logic        fdc_nRD;
    logic        fdc_nWR;
    logic [7:0]  fdc_din;
    logic [7:0]  fdc_dout;

    // Wishbone address decoding
    logic wb_access;
    logic [2:0] reg_addr;

    assign reg_addr = wb_adr_i;
    assign wb_access = wb_cyc_i && wb_stb_i;
    // FDC control signals
    assign fdc_clk = wb_clk_i;
    assign fdc_reset = wb_rst_i;
    assign fdc_a0 = reg_addr[0];
    assign fdc_nRD = !(wb_access && !wb_we_i && !wb_ack_o);
    assign fdc_nWR = !(wb_access && wb_we_i && !wb_ack_o);
    assign fdc_din = wb_dat_i;

    // Instantiate the u765 FDC
    u765 #(
        .CYCLES(CYCLES),
        .SPECCY_SPEEDLOCK_HACK(SPECCY_SPEEDLOCK_HACK)
    ) fdc_inst (
        // Wishbone Interface
        .clk_sys(fdc_clk),
        .ce(enable),            // The chip enable (not a CS)
        .reset(fdc_reset),
        .ready(ready),
        .motor(motor),
        .available(available),
        .fast(fast),
        .a0(fdc_a0),
        .nRD(fdc_nRD),
        .nWR(fdc_nWR),
        .din(fdc_din),
        .dout(fdc_dout),
        
        // Disk Image Interface
        .img_mounted(img_mounted),
        .img_wp(img_wp),
        .img_size(img_size),
        
        // SD Interface
        .sd_lba(sd_lba),
        .sd_rd(sd_rd),
        .sd_wr(sd_wr),
        .sd_ack(sd_ack),
        .sd_buff_addr(sd_buff_addr),
        .sd_buff_dout(sd_buff_dout),
        .sd_buff_din(sd_buff_din),
        .sd_buff_wr(sd_buff_wr)
    );

    // Wishbone handshake - чистая SystemVerilog реализация
    always_ff @(posedge wb_clk_i or posedge wb_rst_i) begin
        if (wb_rst_i) begin
            wb_ack_o <= 1'b0;
            wb_dat_o <= 8'h00;
        end else begin
            // ACK генерируется на следующий такт после STB
            wb_ack_o <= wb_access && !wb_ack_o;  // Однократный ACK
            
            // Данные захватываются когда они доступны от FDC
            if (wb_access && !wb_we_i && !wb_ack_o) begin
                wb_dat_o <= fdc_dout;
            end
        end
    end
    // Мониторинг на каждом такте
    //always @(posedge wb_clk_i) begin
    //    $display("[u675_wb_tb] Time %0t: rst=%b cyc=%b stb=%b ack=%b we=%b dat_i=%h dat_o=%h wb_access=%b", 
    //             $time, wb_rst_i, wb_cyc_i, wb_stb_i, wb_ack_o, wb_we_i, wb_dat_i, wb_dat_o, wb_access);
    //end
endmodule
