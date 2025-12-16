`timescale 1ns/1ps

// =============================================================================
// Module: wb_z80_nmi_controller
// Description: NMI Controller with Wishbone Interface for critical system events
// =============================================================================

module wb_z80_nmi_ctrl #(

)(
    // Clock and Reset
    input wire        wb_clk_i,
    input wire        wb_rst_i,

    // Wishbone Slave Interface
    input  wire        wb_cs_i,
    input  wire [23:0] wb_adr_i,
    input  wire [7:0]  wb_dat_i,
    output reg  [7:0]  wb_dat_o,
    input  wire        wb_we_i,
    input  wire        wb_stb_i,
    input  wire        wb_cyc_i,
    output reg         wb_ack_o,
    output wire        wb_sel_o,
    
    // NMI Source Inputs
    input  wire        nmi_wishbone_error_i,
    input  wire        nmi_panic_button_i,
    input  wire        nmi_ext_board_error_i,
    input  wire        nmi_debug_trigger_i,
    
    // CPU Interface
    output reg         nmi_req_o,
    
    // System Interface
    output wire        system_halt_o,
    
    // Debug outputs
    output wire [3:0]  debug_active_sources,
    output wire [3:0]  debug_masked_sources,
    output wire        debug_any_masked
);

    // =========================================================================
    // Internal Registers and Parameters
    // =========================================================================
    
    // Register addresses (offset from BASE_ADDR)
    localparam REG_STATUS       = 4'h0;
    localparam REG_MASK         = 4'h1;
    localparam REG_CLEAR        = 4'h2;
    localparam REG_SYSTEM_CTRL  = 4'h3;
    
    // Status register bits
    reg status_wishbone_error;
    reg status_panic_button;
    reg status_ext_board_error;
    reg status_debug_trigger;
    reg status_nmi_asserted;
    
    // Mask register bits - 1 = enabled, 0 = disabled
    reg mask_wishbone_error;
    reg mask_panic_button;
    reg mask_ext_board_error;
    reg mask_debug_trigger;
    
    // System control register bits
    reg system_halt_enable;
    reg system_auto_clear;
    
    // Internal signals
    wire [3:0] active_nmi_sources;
    wire [3:0] masked_nmi_sources;
    wire       any_masked_nmi;
    
    // Previous values for edge detection
    reg nmi_wishbone_error_prev;
    reg nmi_panic_button_prev;
    reg nmi_ext_board_error_prev;
    reg nmi_debug_trigger_prev;
    
    // =========================================================================
    // Address Decoding Logic
    // =========================================================================
    assign wb_sel_o = wb_cs_i && wb_stb_i && wb_cyc_i;
    wire [3:0] reg_address = wb_adr_i[3:0];

    // =========================================================================
    // Edge Detection for NMI Sources
    // =========================================================================
    always @(posedge wb_clk_i or posedge wb_rst_i) begin
        if (wb_rst_i) begin
            nmi_wishbone_error_prev <= 1'b0;
            nmi_panic_button_prev   <= 1'b0;
            nmi_ext_board_error_prev <= 1'b0;
            nmi_debug_trigger_prev  <= 1'b0;
        end else begin
            nmi_wishbone_error_prev <= nmi_wishbone_error_i;
            nmi_panic_button_prev   <= nmi_panic_button_i;
            nmi_ext_board_error_prev <= nmi_ext_board_error_i;
            nmi_debug_trigger_prev  <= nmi_debug_trigger_i;
        end
    end
    
    wire wishbone_error_edge = nmi_wishbone_error_i & ~nmi_wishbone_error_prev;
    wire panic_button_edge   = nmi_panic_button_i   & ~nmi_panic_button_prev;
    wire ext_board_error_edge = nmi_ext_board_error_i & ~nmi_ext_board_error_prev;
    wire debug_trigger_edge  = nmi_debug_trigger_i  & ~nmi_debug_trigger_prev;

    // =========================================================================
    // NMI Status Register Management
    // =========================================================================
    always @(posedge wb_clk_i or posedge wb_rst_i) begin
        if (wb_rst_i) begin
            status_wishbone_error <= 1'b0;
            status_panic_button   <= 1'b0;
            status_ext_board_error <= 1'b0;
            status_debug_trigger  <= 1'b0;
            status_nmi_asserted   <= 1'b0;
        end else begin
            // Set status bits on rising edges of respective sources
            if (wishbone_error_edge) status_wishbone_error <= 1'b1;
            if (panic_button_edge)   status_panic_button   <= 1'b1;
            if (ext_board_error_edge) status_ext_board_error <= 1'b1;
            if (debug_trigger_edge)  status_debug_trigger  <= 1'b1;
            
            // Clear status bits through Wishbone write to CLEAR register
            if (wb_sel_o && wb_we_i && (reg_address == REG_CLEAR)) begin
                if (wb_dat_i[0]) status_wishbone_error <= 1'b0;
                if (wb_dat_i[1]) status_panic_button   <= 1'b0;
                if (wb_dat_i[2]) status_ext_board_error <= 1'b0;
                if (wb_dat_i[3]) status_debug_trigger  <= 1'b0;
            end
            
            // Auto-clear functionality
            if (system_auto_clear && nmi_req_o) begin
                status_wishbone_error <= 1'b0;
                status_panic_button   <= 1'b0;
                status_ext_board_error <= 1'b0;
                status_debug_trigger  <= 1'b0;
            end
            
            // Update overall NMI asserted status - ИСПРАВЛЕНО ИМЯ!
            status_nmi_asserted <= any_masked_nmi;
        end
    end

    // =========================================================================
    // Mask Register and NMI Generation Logic
    // =========================================================================
    always @(posedge wb_clk_i or posedge wb_rst_i) begin
        if (wb_rst_i) begin
            // По умолчанию все источники DISABLED (0 = disabled)
            mask_wishbone_error <= 1'b0;
            mask_panic_button   <= 1'b0;
            mask_ext_board_error <= 1'b0;
            mask_debug_trigger  <= 1'b0;
            
            system_halt_enable  <= 1'b1;
            system_auto_clear   <= 1'b0;
        end else if (wb_sel_o && wb_we_i) begin
            case (reg_address)
                REG_MASK: begin
                    // 1 = enabled, 0 = disabled
                    mask_wishbone_error <= wb_dat_i[0];
                    mask_panic_button   <= wb_dat_i[1];
                    mask_ext_board_error <= wb_dat_i[2];
                    mask_debug_trigger  <= wb_dat_i[3];
                end
                REG_SYSTEM_CTRL: begin
                    system_halt_enable <= wb_dat_i[0];
                    system_auto_clear  <= wb_dat_i[1];
                end
            endcase
        end
    end

    // Combine active sources with their masks
    assign active_nmi_sources = {
        status_debug_trigger,
        status_ext_board_error,
        status_panic_button,
        status_wishbone_error
    };
    
    // 1 в маске = enabled, поэтому используем AND
    assign masked_nmi_sources = active_nmi_sources & {
        mask_debug_trigger,
        mask_ext_board_error,
        mask_panic_button,
        mask_wishbone_error
    };
    
    // ИСПРАВЛЕНО ИМЯ!
    assign any_masked_nmi = |masked_nmi_sources;

    // NMI Request to CPU
    always @(posedge wb_clk_i or posedge wb_rst_i) begin
        if (wb_rst_i) begin
            nmi_req_o <= 1'b0;
        end else begin
            // Assert NMI if any masked source is active
            if (any_masked_nmi) begin
                nmi_req_o <= 1'b1;
            end
            // Deassert when all sources are cleared
            else if (!any_masked_nmi) begin
                nmi_req_o <= 1'b0;
            end
        end
    end

    // System halt signal
    assign system_halt_o = system_halt_enable && nmi_req_o;

    // =========================================================================
    // Wishbone Register Interface
    // =========================================================================
    always @(posedge wb_clk_i or posedge wb_rst_i) begin
        if (wb_rst_i) begin
            wb_ack_o <= 1'b0;
            wb_dat_o <= 8'h00;
        end else begin
            wb_ack_o <= 1'b0;
            wb_dat_o <= 8'h00;
            
            if (wb_sel_o) begin
                wb_ack_o <= 1'b1;
                
                if (!wb_we_i) begin
                    // Read operations
                    case (reg_address)
                        REG_STATUS: begin
                            wb_dat_o <= {
                                3'b000,  // Reserved
                                status_nmi_asserted,
                                status_debug_trigger,
                                status_ext_board_error,
                                status_panic_button,
                                status_wishbone_error
                            };
                        end
                        REG_MASK: begin
                            // Правильно отображаем маску: 1 = enabled
                            wb_dat_o <= {
                                4'b0000,  // Reserved
                                mask_debug_trigger,
                                mask_ext_board_error,
                                mask_panic_button,
                                mask_wishbone_error
                            };
                        end
                        REG_SYSTEM_CTRL: begin
                            wb_dat_o <= {
                                6'b000000,  // Reserved
                                system_auto_clear,
                                system_halt_enable
                            };
                        end
                        default: wb_dat_o <= 8'h00;
                    endcase
                end
            end
        end
    end

    // =========================================================================
    // Debug/Status Outputs - ОБНОВЛЕНО!
    // =========================================================================
    assign debug_active_sources = active_nmi_sources;
    assign debug_masked_sources = masked_nmi_sources;
    assign debug_any_masked = any_masked_nmi;

endmodule
