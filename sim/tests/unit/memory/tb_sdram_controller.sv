`timescale 1ns / 1ps

module tb_sdram_controller(
    input  wire        clk_sys,
    input  wire        rst,
    input  wire        locked,

    // Интерфейс хоста
    input  wire        host_wr_req,
    input  wire        host_rd_req,
    input  wire [23:0] host_addr,
    input  wire [15:0] host_data_in,
    output reg  [15:0] host_data_out,
    output reg         host_busy,
    output reg         host_rd_valid,

    // SDRAM интерфейс
    output reg         sdram_cke,
    output reg         sdram_cs_n,
    output reg         sdram_ras_n,
    output reg         sdram_cas_n,
    output reg         sdram_we_n,
    output reg [12:0]  sdram_a,
    output reg [1:0]   sdram_ba,
    inout  wire [15:0] sdram_dq,
    output wire [1:0]  sdram_dm,
    output wire [2:0]  debug_state
);

logic [15..0] sdram_dq_in;
logic [15..0] sdram_dq_out;

assign sdram_dq = 

dq_in
    sdram_model sdram_model (
        .clk(clk_sys),
        .rst(rst),
        .cs_n(sdram_cs_n),
        .ras_n(sdram_ras_n),
        .cas_n(sdram_cas_n),
        .we_n(sdram_we_n),
        .ba(sdram_ba),
        .a(sdram_a),
        .dq_in(sdram_dq_in),
        .dq_out(sdram_dq_out),
        .dm(sdram_dm)
    );


    // Instantiate the controller
    sdram_controller DUT (
        .clk_sys(clk_sys),
        .rst(rst),
        .locked(locked),
        .host_wr_req(host_wr_req),
        .host_rd_req(host_rd_req),
        .host_addr(host_addr),
        .host_data_in(host_data_in),
        .host_data_out(host_data_out),
        .host_busy(host_busy),
        .host_rd_valid(host_rd_valid),
        .sdram_cke(sdram_cke),
        .sdram_cs_n(sdram_cs_n),
        .sdram_ras_n(sdram_ras_n),
        .sdram_cas_n(sdram_cas_n),
        .sdram_we_n(sdram_we_n),
        .sdram_a(sdram_a),
        .sdram_ba(sdram_ba),
        .sdram_dq(sdram_dq),
        .sdram_dm(sdram_dm),
        .debug_state(debug_state)
    );


endmodule
