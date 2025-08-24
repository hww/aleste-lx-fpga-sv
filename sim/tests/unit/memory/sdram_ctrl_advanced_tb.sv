module sdram_ctrl_advanced_tb #(
    parameter CLK_FREQ = 100_000_000,          // Frequency of the clock input
    parameter SDRAM_FREQ = 100_000_000,        // Frequency of SDRAM operation
    parameter SDRAM_ADDR_WIDTH = 13,           // SDRAM address bus width
    parameter SDRAM_COL_WIDTH = 9,             // SDRAM column address width
    parameter SDRAM_ROW_WIDTH = 13,            // SDRAM row address width
    parameter SDRAM_BANK_WIDTH = 2,            // SDRAM bank address width
    parameter WB_ADDR_WIDTH = 24,              // Wishbone address width
    parameter WB_DATA_WIDTH = 16,              // Wishbone data width
    parameter CAS_LATENCY = 2,                 // CAS latency (2 or 3)
    parameter REFRESH_CYCLES = 7800            // Refresh cycles (64ms @ 100MHz)
)(
    // Testbench control
    input  wire        clk_i,
    input  wire        rst_i,
    
    // Wishbone Master Interface
    input  wire                    wb_cyc_i,
    input  wire                    wb_stb_i,
    output wire                    wb_ack_o,
    input  wire                    wb_we_i,
    input  wire [WB_ADDR_WIDTH-1:0] wb_adr_i,
    input  wire [WB_DATA_WIDTH-1:0] wb_dat_i,
    output wire [WB_DATA_WIDTH-1:0] wb_dat_o,
    input  wire [WB_DATA_WIDTH/8-1:0] wb_sel_i,
    
    // SDRAM Interface (monitoring)
    inout  wire [WB_DATA_WIDTH-1:0] sdram_dq,
    output wire [SDRAM_ADDR_WIDTH-1:0] sdram_addr,
    output wire [WB_DATA_WIDTH/8-1:0] sdram_dqm,
    output wire [SDRAM_BANK_WIDTH-1:0] sdram_ba,
    output wire                    sdram_cs_n,
    output wire                    sdram_we_n,
    output wire                    sdram_ras_n,
    output wire                    sdram_cas_n,
    output wire                    sdram_cke,
    
    // Debug
    output wire [2:0]            debug_state,
    output wire [2:0]            model_state,
    output wire                  sdram_initialized    
);

    // Local parameters
    localparam BYTE_SEL_WIDTH = WB_DATA_WIDTH / 8;

    // Internal signals for SDRAM model
    wire [BYTE_SEL_WIDTH-1:0] sdram_dm;
    wire                      sdram_dq_oe;

    // Connect DQM signals
    assign sdram_dm = sdram_dqm;

    // Instantiate SDRAM controller
    sdram_ctrl_wb #(
        .CLK_FREQ(CLK_FREQ),
        .SDRAM_FREQ(SDRAM_FREQ),
        .SDRAM_ADDR_WIDTH(SDRAM_ADDR_WIDTH),
        .SDRAM_COL_WIDTH(SDRAM_COL_WIDTH),
        .SDRAM_ROW_WIDTH(SDRAM_ROW_WIDTH),
        .SDRAM_BANK_WIDTH(SDRAM_BANK_WIDTH),
        .WB_ADDR_WIDTH(WB_ADDR_WIDTH),
        .WB_DATA_WIDTH(WB_DATA_WIDTH),
        .CAS_LATENCY(CAS_LATENCY),
        .REFRESH_CYCLES(REFRESH_CYCLES)
    ) DUT (
        // Wishbone Interface
        .wb_clk_i(clk_i),
        .wb_rst_i(rst_i),
        .wb_cyc_i(wb_cyc_i),
        .wb_stb_i(wb_stb_i),
        .wb_ack_o(wb_ack_o),
        .wb_we_i(wb_we_i),
        .wb_adr_i(wb_adr_i),
        .wb_dat_i(wb_dat_i),
        .wb_dat_o(wb_dat_o),
        .wb_sel_i(wb_sel_i),
        
        // SDRAM Interface
        .sdram_dq(sdram_dq),
        .sdram_addr(sdram_addr),
        .sdram_dqm(sdram_dqm),
        .sdram_ba(sdram_ba),
        .sdram_cs_n(sdram_cs_n),
        .sdram_we_n(sdram_we_n),
        .sdram_ras_n(sdram_ras_n),
        .sdram_cas_n(sdram_cas_n),
        .sdram_cke(sdram_cke),
        
        // Debug
        .debug_state(debug_state)
    );


    // Instantiate SDRAM model
    sdram_model #(
        .SDRAM_ADDR_WIDTH(SDRAM_ADDR_WIDTH),
        .SDRAM_DATA_WIDTH(WB_DATA_WIDTH),
        .SDRAM_BANK_WIDTH(SDRAM_BANK_WIDTH),
        .SDRAM_COL_WIDTH(SDRAM_COL_WIDTH),
        .SDRAM_ROW_WIDTH(SDRAM_ROW_WIDTH)
    ) sdram_model_inst (
        .clk(clk_i),
        .cke(sdram_cke),
        .cs_n(sdram_cs_n),
        .ras_n(sdram_ras_n),
        .cas_n(sdram_cas_n),
        .we_n(sdram_we_n),
        .ba(sdram_ba),
        .a(sdram_addr),
        .dq(sdram_dq),
        .dqm(sdram_dm)
        // Note: model_state and dq_en are not part of the standard sdram_model interface
    );

    // For debugging, you might want to add these as internal signals
    // if your sdram_model actually has them:
    // assign model_state = ...;
    // assign sdram_dq_en = ...;

endmodule
