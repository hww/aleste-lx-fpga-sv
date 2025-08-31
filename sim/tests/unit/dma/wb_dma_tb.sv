module wb_dma_tb (
    // Clock and reset (now inputs!)
    input  logic clk,
    input  logic rst,

    // Wishbone Slave
    input  logic [ADDR_WIDTH-1:0] wbs_adr_i,
    input  logic [DATA_WIDTH-1:0] wbs_dat_i,
    output logic [DATA_WIDTH-1:0] wbs_dat_o,
    input  logic wbs_we_i,
    input  logic wbs_stb_i,
    input  logic wbs_cyc_i,
    output logic wbs_ack_o,
    output logic wbs_sel_o,

    // Wishbone Master
    output logic [ADDR_WIDTH-1:0] wbm_adr_o,
    output logic [DATA_WIDTH-1:0] wbm_dat_o,
    input  logic [DATA_WIDTH-1:0] wbm_dat_i,
    output logic wbm_we_o,
    output logic wbm_stb_o,
    output logic wbm_cyc_o,
    input  logic wbm_ack_i,
    input  logic wbm_err_i,

    // DMA signals
    input  logic [CHANNELS-1:0] drq_i,
    output logic [CHANNELS-1:0] dack_o,
    output logic irq_o
);

// Parameters
parameter int ADDR_WIDTH = 24;
parameter int DATA_WIDTH = 16;
parameter int CHANNELS = 4;
parameter bit [ADDR_WIDTH-1:0] BASE_ADDR = 24'h10_0000;
parameter bit [ADDR_WIDTH-1:0] ADDR_MASK = 24'hFF_0000;

// DUT instantiation
wb_dma #(
    .ADDR_WIDTH(ADDR_WIDTH),
    .DATA_WIDTH(DATA_WIDTH),
    .CHANNELS(CHANNELS),
    .BASE_ADDR(BASE_ADDR),
    .ADDR_MASK(ADDR_MASK)
) dut (
    .*
);

endmodule
