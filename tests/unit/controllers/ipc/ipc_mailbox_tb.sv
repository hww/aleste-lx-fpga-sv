// ipc_mailbox_tb.sv
// Testbench wrapper for simulation

module ipc_mailbox_tb (
    // System signals
    input  logic        wb_clk_i,
    input  logic        wb_rst_i,
    
    // Wishbone signals
    input  logic        wb_cs_i,
    input  logic        wb_stb_i,
    input  logic        wb_cyc_i,
    input  logic        wb_we_i,
    input  logic [23:0] wb_adr_i,
    input  logic [7:0]  wb_dat_i,
    output logic [7:0]  wb_dat_o,
    output logic        wb_ack_o,
    output logic        wb_sel_o,
    
    // IPC interrupt
    output logic        ipc_irq_o
);

    ipc_mailbox #(
    ) u_ipc_mailbox (
        .clk_i(wb_clk_i),
        .rst_i(wb_rst_i),
        .cs_i(wb_cs_i),
        .stb_i(wb_stb_i),
        .cyc_i(wb_cyc_i),
        .we_i(wb_we_i),
        .adr_i(wb_adr_i),
        .dat_i(wb_dat_i),
        .dat_o(wb_dat_o),
        .ack_o(wb_ack_o),
        .sel_o(wb_sel_o),
        .irq_o(ipc_irq_o)
    );

endmodule
