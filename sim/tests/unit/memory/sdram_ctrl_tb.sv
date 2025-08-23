module sdram_ctrl_tb (
    // Testbench control
    input  wire        clk,
    input  wire        rst,
    
    // Wishbone Master Interface
    input  reg         wb_cyc_i,
    input  reg         wb_stb_i,
    output wire        wb_ack_o,
    input  reg         wb_we_i,
    input  reg  [23:0] wb_adr_i,
    input  reg  [15:0] wb_dat_i,
    output wire [15:0] wb_dat_o,
    input  reg  [1:0]  wb_sel_i,
    
    // SDRAM Interface (monitoring)
    inout   wire [15:0] sdram_dq,
    output  wire [12:0] sdram_addr,
    output  wire        sdram_dqml,
    output  wire        sdram_dqmh,
    output  wire [1:0]  sdram_ba,
    output  wire        sdram_cs_n,
    output  wire        sdram_we_n,
    output  wire        sdram_ras_n,
    output  wire        sdram_cas_n,
    output  wire        sdram_dq_en,
    output  wire        sdram_cke,
    // Debug
    output  wire [2:0]  debug_state,
    output  wire [2:0]  model_state,
    output  wire        sdram_dq_oe
);

    // Internal signals for SDRAM model
    wire [1:0] sdram_dm;


    // Instantiate SDRAM controller
    sdram_wb_controller #(
        .CLK_FREQ(100_000_000),
        .SDRAM_FREQ(100_000_000),
        .CAS_LATENCY(2),
        .BURST_LENGTH(1)
    ) DUT (
        .wb_clk_i(clk),
        .wb_rst_i(rst),
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
        .sdram_dqml(sdram_dqml),
        .sdram_dqmh(sdram_dqmh),
        .sdram_ba(sdram_ba),
        .sdram_cs_n(sdram_cs_n),
        .sdram_we_n(sdram_we_n),
        .sdram_ras_n(sdram_ras_n),
        .sdram_cas_n(sdram_cas_n),
        .sdram_cke(sdram_cke),
        
        .debug_state(debug_state),
        .sdram_dq_oe(sdram_dq_oe)
    );

    // Instantiate SDRAM model
    sdram_model sdram_model (
        .clk(clk),
        .cs_n(sdram_cs_n),
        .ras_n(sdram_ras_n),
        .cas_n(sdram_cas_n),
        .we_n(sdram_we_n),
        .ba(sdram_ba),
        .a(sdram_addr),
        .dq(sdram_dq),
        .dm(sdram_dm),
        .dq_en(sdram_dq_en),
        .sdram_cke(sdram_cke),
        .model_state(model_state)
    );


endmodule
