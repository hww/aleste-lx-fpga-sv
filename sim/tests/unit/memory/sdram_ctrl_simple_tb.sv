`timescale 1ns/1ps

module sdram_ctrl_simple_tb (
    // Тактовый сигнал и сброс
    input   logic wb_clk_i,
    input   logic wb_rst_i,
    
    // Wishbone интерфейс
    input   logic wb_cyc_i,
    input   logic wb_stb_i,
    output  logic wb_ack_o,
    input   logic wb_we_i,
    input   logic [23:0] wb_adr_i,
    input   logic [15:0] wb_dat_i,
    output  logic [15:0] wb_dat_o,
    input   logic [1:0] wb_sel_i,
    
    // SDRAM интерфейс
    inout   wire [15:0] sdram_dq,
    output  logic [12:0] sdram_addr,
    output  logic [1:0] sdram_dqm,
    output  logic [1:0] sdram_ba,
    output  logic sdram_cs_n,
    output  logic sdram_we_n,
    output  logic sdram_ras_n,
    output  logic sdram_cas_n,
    output  logic sdram_cke,
    
    // Отладочные сигналы
    output  logic [3:0] debug_state,
    
    // Драйверы для шины данных
    output logic [15:0] sdram_dq_drive,
    output logic sdram_dq_drive_en
);

    // Параметры
    localparam SDRAM_ADDR_WIDTH = 13;
    localparam SDRAM_BANK_WIDTH = 2;
    localparam WB_DATA_WIDTH = 16;
    localparam WB_ADDR_WIDTH = 24;
    localparam CAS_LATENCY = 2;
    localparam SDRAM_SIZE_MB = 32;

    // Тактовый сигнал
    //initial wb_clk_i = 1'b0;
    //always #5ns wb_clk_i = ~wb_clk_i;

    // Драйвер для шины данных SDRAM
    assign sdram_dq = sdram_dq_drive_en ? sdram_dq_drive : {WB_DATA_WIDTH{1'bz}};

    // DUT - контроллер SDRAM
    sdram_ctrl_wb #(
        .CLK_FREQ(100_000_000),
        .SDRAM_FREQ(100_000_000),
        .SDRAM_ADDR_WIDTH(SDRAM_ADDR_WIDTH),
        .SDRAM_COL_WIDTH(9),
        .SDRAM_ROW_WIDTH(13),
        .SDRAM_BANK_WIDTH(SDRAM_BANK_WIDTH),
        .WB_ADDR_WIDTH(WB_ADDR_WIDTH),
        .WB_DATA_WIDTH(WB_DATA_WIDTH),
        .CAS_LATENCY(CAS_LATENCY),
        .REFRESH_CYCLES(7800)
    ) dut (
        .wb_clk_i(wb_clk_i),
        .wb_rst_i(wb_rst_i),
        .wb_cyc_i(wb_cyc_i),
        .wb_stb_i(wb_stb_i),
        .wb_ack_o(wb_ack_o),
        .wb_we_i(wb_we_i),
        .wb_adr_i(wb_adr_i),
        .wb_dat_i(wb_dat_i),
        .wb_dat_o(wb_dat_o),
        .wb_sel_i(wb_sel_i),
        
        .sdram_dq(sdram_dq),
        .sdram_addr(sdram_addr),
        .sdram_dqm(sdram_dqm),
        .sdram_ba(sdram_ba),
        .sdram_cs_n(sdram_cs_n),
        .sdram_we_n(sdram_we_n),
        .sdram_ras_n(sdram_ras_n),
        .sdram_cas_n(sdram_cas_n),
        .sdram_cke(sdram_cke),
        
        .debug_state(debug_state)
    );

    // Модель SDRAM
    sdram_model #(
        .SDRAM_ADDR_WIDTH(SDRAM_ADDR_WIDTH),
        .SDRAM_DATA_WIDTH(WB_DATA_WIDTH),
        .SDRAM_BANK_WIDTH(SDRAM_BANK_WIDTH),
        .SDRAM_COL_WIDTH(9),
        .SDRAM_ROW_WIDTH(13),
        .SDRAM_LATENCY(CAS_LATENCY),
        .SDRAM_SIZE_MB(SDRAM_SIZE_MB)
    ) sdram_model_inst (
        .clk(wb_clk_i),
        .cke(sdram_cke),
        .cs_n(sdram_cs_n),
        .ras_n(sdram_ras_n),
        .cas_n(sdram_cas_n),
        .we_n(sdram_we_n),
        .ba(sdram_ba),
        .a(sdram_addr),
        .dq(sdram_dq),
        .dqm(sdram_dqm)
    );

endmodule
