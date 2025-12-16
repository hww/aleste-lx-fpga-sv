`timescale 1ns/1ps

module wb_z80_nmi_tb (
    // Clock and Reset
    input wire        wb_clk_i,
    input wire        wb_rst_i,
    input wire        wb_cs_i,
    
    // Wishbone Slave Interface
    input  wire [23:0] wb_adr_i,
    input  wire [7:0]  wb_dat_i,
    output wire [7:0]  wb_dat_o,
    input  wire        wb_we_i,
    input  wire        wb_stb_i,
    input  wire        wb_cyc_i,
    output wire        wb_ack_o,
    output wire        wb_sel_o,
    
    // NMI Source Inputs
    input  wire        nmi_wishbone_error_i,
    input  wire        nmi_panic_button_i,
    input  wire        nmi_ext_board_error_i,
    input  wire        nmi_debug_trigger_i,
    
    // CPU Interface
    output wire        nmi_req_o,
    
    // System Interface
    output wire        system_halt_o,
    
    // Debug outputs
    output wire [3:0]  debug_active_sources,
    output wire [3:0]  debug_masked_sources,
    output wire        debug_any_masked
);

    wb_z80_nmi_ctrl #(

    ) nmi_controller_inst (
        .wb_clk_i(wb_clk_i),
        .wb_rst_i(wb_rst_i),
        .wb_cs_i(wb_cs_i),

        .wb_adr_i(wb_adr_i),
        .wb_dat_i(wb_dat_i),
        .wb_dat_o(wb_dat_o),
        .wb_we_i(wb_we_i),
        .wb_stb_i(wb_stb_i),
        .wb_cyc_i(wb_cyc_i),
        .wb_ack_o(wb_ack_o),
        .wb_sel_o(wb_sel_o),
        
        .nmi_wishbone_error_i(nmi_wishbone_error_i),
        .nmi_panic_button_i(nmi_panic_button_i),
        .nmi_ext_board_error_i(nmi_ext_board_error_i),
        .nmi_debug_trigger_i(nmi_debug_trigger_i),
        
        .nmi_req_o(nmi_req_o),
        
        .system_halt_o(system_halt_o),
        
        .debug_active_sources(debug_active_sources),
        .debug_masked_sources(debug_masked_sources),
        .debug_any_masked(debug_any_masked)
    );

endmodule
