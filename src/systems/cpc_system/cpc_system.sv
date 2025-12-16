`default_nettype none

// =============================================================================
// CPC System Arbiter
// =============================================================================
// Arbitrates PPI, PSG, LPT, FDC with dual-bus architecture:
// - Main Wishbone bus: Z80 access to real devices
// - Debug dbus: PMI access to emulation registers
// =============================================================================

module system_arbiter (
    // -------------------------------------------------------------------------
    // Clock and Reset
    // -------------------------------------------------------------------------
    input  logic        clk_i,           // System clock (54MHz)
    input  logic        rst_i,           // Active high reset
    
    // -------------------------------------------------------------------------
    // Configuration signals
    // -------------------------------------------------------------------------
    input  logic        vsync_i,         // VSYNC from CRTC for PPI Port B bit 0
    input  logic        legacy_mode_i,   // 0=8-bit LPT (AY port B), 1=7-bit LPT (original CPC)

    // -------------------------------------------------------------------------
    // Main Wishbone Bus (Z80 access)
    // -------------------------------------------------------------------------
    // Device selects from external decoder
    input  logic        wb_cs_ppi_i,     // PPI select
    input  logic        wb_cs_lpt_i,     // LPT port select
    input  logic        wb_cs_fdc_i,     // FDC select
    input  logic        wb_cs_mot_i,     // FDC motor control select
    
    // Wishbone signals
    input  logic        wb_cyc_i,
    input  logic        wb_stb_i,
    input  logic        wb_we_i,
    input  logic [23:0] wb_adr_i,
    input  logic [7:0]  wb_dat_i,
    output logic [7:0]  wb_dat_o,
    output logic        wb_ack_o,

    // -------------------------------------------------------------------------
    // Debug Bus (PMI access to emulation registers)
    // -------------------------------------------------------------------------
    // Device selects from external decoder
    input  logic        dbus_cs_ppi_i,   // PPI debug registers select
    input  logic        dbus_cs_fdc_i,   // FDC debug registers select
    
    // Debug bus signals (same as Wishbone but separate)
    input  logic        dbus_cyc_i,
    input  logic        dbus_stb_i,
    input  logic        dbus_we_i,
    input  logic [7:0]  dbus_adr_i,      // 8-bit address for debug registers
    input  logic [7:0]  dbus_dat_i,
    output logic [7:0]  dbus_dat_o,
    output logic        dbus_ack_o,

    // -------------------------------------------------------------------------
    // Sound outputs (delta-sigma)
    // -------------------------------------------------------------------------
    output logic        delta_sigma_a_o,
    output logic        delta_sigma_b_o,
    output logic        delta_sigma_c_o
);

// -------------------------------------------------------------------------
// Internal signals
// -------------------------------------------------------------------------

// PSG clock enable (1MHz from 54MHz)
logic [5:0] psg_divider;
logic       psg_ce;

// PPI signals
logic [7:0] ppi_port_a_dat_i;
logic [7:0] ppi_port_a_dat_o;
logic       ppi_port_a_dir;  // 1=output, 0=input
logic [7:0] ppi_port_b_dat_i;
logic [7:0] ppi_port_b_dat_o;
logic       ppi_port_b_dir;
logic [7:0] ppi_port_c_dat_i;
logic [7:0] ppi_port_c_dat_o;
logic       ppi_port_c_dir;

// LPT Port signals
logic [7:0] lpt_port_reg;      // LPT data register (bit7 = STROBE in legacy mode)
logic [7:0] lpt_port_lx;       // 8-bit data from AY port B (non-legacy mode)

// FDC signals
logic       fdc_motor_reg;

// Keyboard dual-port memory (16x8)
logic [3:0] kbd_row_select;     // From PPI port C bits 0-2 (0-7) or AY in non-legacy?
logic [7:0] kbd_column_data;    // Column data for selected row
logic [7:0] kbd_memory [0:15];  // 16x8-bit dual-port memory

// Debug registers for PPI (0x20-0x3F)
logic [7:0] dbus_ppi_reg [0:31];  // 32 debug registers

// Debug registers for FDC (0x40-0x7F) - TBD
logic [7:0] dbus_fdc_reg [0:63];  // 64 debug registers

// -------------------------------------------------------------------------
// PSG Clock Divider (54MHz -> ~1MHz)
// -------------------------------------------------------------------------
// TODO: Verify exact divider value for 1MHz PSG clock
// 54MHz / 54 = 1MHz
always_ff @(posedge clk_i) begin
    if (rst_i) begin
        psg_divider <= 6'd0;
        psg_ce <= 1'b0;
    end else begin
        psg_divider <= psg_divider + 6'd1;
        // Generate 1MHz enable pulse
        psg_ce <= (psg_divider == 6'd53);
        if (psg_divider == 6'd53) begin
            psg_divider <= 6'd0;
        end
    end
end

// -------------------------------------------------------------------------
// Wishbone ACK generation (main bus)
// -------------------------------------------------------------------------
// Simple one-cycle ACK for all devices
always_ff @(posedge clk_i) begin
    if (rst_i) begin
        wb_ack_o <= 1'b0;
    end else begin
        // Generate ACK on next cycle after valid cycle
        wb_ack_o <= (wb_cyc_i && wb_stb_i && !wb_ack_o);
    end
end

// -------------------------------------------------------------------------
// Debug Bus ACK generation (dbus)
// -------------------------------------------------------------------------
always_ff @(posedge clk_i) begin
    if (rst_i) begin
        dbus_ack_o <= 1'b0;
    end else begin
        // Generate ACK on next cycle after valid cycle
        dbus_ack_o <= (dbus_cyc_i && dbus_stb_i && !dbus_ack_o);
    end
end

// -------------------------------------------------------------------------
// Keyboard Dual-Port Memory (16x8 bits)
// -------------------------------------------------------------------------
// Row selection from PPI port C bits 0-2
// TODO: Verify if AY port B is used for keyboard in non-legacy mode
assign kbd_row_select = ppi_port_c_dat_o[2:0];

// Column data output to AY port A
always_comb begin
    // Default to all keys released (active low)
    kbd_column_data = 8'hFF;
    
    if (kbd_row_select < 4'd10) begin
        // CPC has 10 rows (0-9), but we have 16 memory locations
        kbd_column_data = kbd_memory[kbd_row_select];
    end
    // Rows 10-15 return 0xFF (no keys)
end

// -------------------------------------------------------------------------
// PPI i8255
// -------------------------------------------------------------------------
// TODO: Need to connect PPI ports properly:
// Port A: connected to AY data bus (bidirectional)
// Port B: input with VSYNC, printer busy, etc.
// Port C: output for keyboard row select and AY control

// Temporary connections - will be completed in next iteration
assign ppi_port_a_dat_i = 8'h00;  // TODO: Connect to AY data bus
assign ppi_port_b_dat_i = {7'b0000000, vsync_i}; // Bit0 = VSYNC
assign ppi_port_c_dat_i = 8'h00;  // Port C is output-only in CPC

i8255_wb i8255_wb_inst
(
    // Wishbone Interface
    .clk_i(clk_i),
    .rst_i(rst_i),
    
    .cs_i(wb_cs_ppi_i),
    .adr_i(wb_adr_i[1:0]),  // PPI uses A0,A1
    .dat_i(wb_dat_i),
    .dat_o(wb_dat_o),      // TODO: Need to mux with other devices
    .we_i(wb_we_i),
    .stb_i(wb_stb_i),
    .ack_o(),              // TODO: Connect to PPI-specific ACK if needed
    
    // PPI Ports
    .ipa_i(ppi_port_a_dat_i), 
    .opa_o(ppi_port_a_dat_o),
    .ipb_i(ppi_port_b_dat_i), 
    .opb_o(ppi_port_b_dat_o),
    .ipc_i(ppi_port_c_dat_i), 
    .opc_o(ppi_port_c_dat_o)
);

// -------------------------------------------------------------------------
// PSG YM2149
// -------------------------------------------------------------------------
// TODO: Need to connect:
// - BDIR/BC1 from PPI port C bits 6-7
// - Data bus to PPI port A
// - IOB output to lpt_port_lx (8-bit LPT data in non-legacy mode)

YM2149 ym2149_inst
(
    .CLK(clk_i),          // Global clock
    .CE(psg_ce),         // PSG Clock enable (1MHz)
    .RESET(rst_i),       // Chip RESET
    .BDIR(ppi_port_c_dat_o[7]), // Bus Direction from PPI port C bit 7
    .BC(ppi_port_c_dat_o[6]),   // Bus control from PPI port C bit 6
    .DI(ppi_port_a_dat_o),      // Data from PPI port A (CPU -> PSG)
    .DO(ppi_port_a_dat_i),      // Data to PPI port A (PSG -> CPU)
    .CHANNEL_A(),        // TODO: Connect to delta-sigma
    .CHANNEL_B(),        // TODO: Connect to delta-sigma
    .CHANNEL_C(),        // TODO: Connect to delta-sigma

    .SEL(1'b0),          // TODO: Verify if needed
    .MODE(1'b0),         // TODO: Verify if needed
    .ACTIVE(1'b1),       // Always active

    .IOA_in(kbd_column_data), // Keyboard column data
    .IOA_out(),          // Not used for keyboard

    .IOB_in(8'hFF),      // TODO: What connects here?
    .IOB_out(lpt_port_lx) // 8-bit LPT data in non-legacy mode
);

// -------------------------------------------------------------------------
// FDC with Wishbone interface
// -------------------------------------------------------------------------
// TODO: Need to connect FDC control signals
// The u765_wb module already has Wishbone interface

u765_wb #(
    .CYCLES(20'd4000),
    .SPECCY_SPEEDLOCK_HACK(0)
) u765_wb_inst (
    // Wishbone interface
    .wb_clk_i(clk_i),
    .wb_rst_i(rst_i),
    .wb_cyc_i(wb_cyc_i && wb_cs_fdc_i),
    .wb_stb_i(wb_stb_i && wb_cs_fdc_i),
    .wb_we_i(wb_we_i),
    .wb_adr_i(wb_adr_i[2:0]),  // FDC uses A0-A2
    .wb_dat_i(wb_dat_i),
    .wb_dat_o(),          // TODO: Need to mux with other devices
    .wb_ack_o(),          // TODO: Connect to FDC-specific ACK if needed
    
    // FDC control signals
    .enable(1'b1),        // TODO: Connect properly
    .ready(2'b11),        // TODO: Both drives ready
    .motor({2{fdc_motor_reg}}), // Motor control
    .available(2'b11),    // TODO: Both drives available
    .fast(1'b0),          // TODO: Fast mode control
    
    // SD card interface - connected to debug bus via PMI
    // TODO: These signals need to go to external SD controller
    .img_mounted(2'b00),  // TODO: From PMI via dbus
    .img_wp(1'b0),        // TODO: From PMI via dbus
    .img_size(32'h0),     // TODO: From PMI via dbus
    .sd_lba(),            // TODO: To external SD controller
    .sd_rd(),             // TODO: To external SD controller
    .sd_wr(),             // TODO: To external SD controller
    .sd_ack(1'b0),        // TODO: From external SD controller
    .sd_buff_addr(9'h0),  // TODO: From external SD controller
    .sd_buff_dout(8'h0),  // TODO: From external SD controller
    .sd_buff_din(),       // TODO: To external SD controller
    .sd_buff_wr(1'b0)     // TODO: From external SD controller
);

// -------------------------------------------------------------------------
// FDC Motor Control
// -------------------------------------------------------------------------
always_ff @(posedge clk_i) begin
    if (rst_i) begin
        fdc_motor_reg <= 1'b0;
    end else if (wb_cs_mot_i && wb_cyc_i && wb_stb_i && wb_we_i) begin
        fdc_motor_reg <= wb_dat_i[0];
    end
end

// -------------------------------------------------------------------------
// LPT Port (Parallel Printer Port)
// -------------------------------------------------------------------------
// In legacy mode: 7-bit data + STROBE (bit7 of register)
// In non-legacy mode: 8-bit data from AY port B, STROBE from register bit7

always_ff @(posedge clk_i) begin
    if (rst_i) begin
        lpt_port_reg <= 8'h00;
    end else if (wb_cs_lpt_i && wb_cyc_i && wb_stb_i && wb_we_i) begin
        lpt_port_reg <= wb_dat_i;
    end
end

// LPT data output (7 or 8 bits depending on mode)
// TODO: Need to connect to physical pins

// -------------------------------------------------------------------------
// Debug Bus PPI Registers (0x20-0x3F)
// -------------------------------------------------------------------------
// 0x20-0x2F: Keyboard buffer data (16 bytes)
// 0x32: Write PPI Port C (except bit 0)
// 0x33: Read printer port

always_ff @(posedge clk_i) begin
    if (rst_i) begin
        // Initialize debug registers
        for (int i = 0; i < 32; i++) begin
            dbus_ppi_reg[i] <= 8'h00;
        end
        // Initialize keyboard memory
        for (int i = 0; i < 16; i++) begin
            kbd_memory[i] <= 8'hFF; // All keys released
        end
    end else begin
        // Debug bus write to PPI registers
        if (dbus_cs_ppi_i && dbus_cyc_i && dbus_stb_i && dbus_we_i) begin
            case (dbus_adr_i[4:0])
                // 0x20-0x2F: Keyboard buffer
                5'h00, 5'h01, 5'h02, 5'h03,
                5'h04, 5'h05, 5'h06, 5'h07,
                5'h08, 5'h09, 5'h0A, 5'h0B,
                5'h0C, 5'h0D, 5'h0E, 5'h0F: begin
                    kbd_memory[dbus_adr_i[3:0]] <= dbus_dat_i;
                    dbus_ppi_reg[dbus_adr_i[4:0]] <= dbus_dat_i;
                end
                
                // 0x32: Write PPI Port C (except bit 0)
                5'h12: begin
                    // TODO: Implement writing to PPI port C via debug bus
                    // Preserve bit 0 (keyboard row select bit 0)
                    dbus_ppi_reg[5'h12] <= {dbus_dat_i[7:1], ppi_port_c_dat_o[0]};
                end
                
                // Other registers are read-only or reserved
                default: begin
                    if (dbus_adr_i[4:0] < 5'h20) begin
                        dbus_ppi_reg[dbus_adr_i[4:0]] <= dbus_dat_i;
                    end
                end
            endcase
        end
        
        // Update register 0x33 (printer port) from LPT port
        dbus_ppi_reg[5'h13] <= legacy_mode_i ? lpt_port_reg : lpt_port_lx;
        
        // Update other status registers from PPI
        // TODO: Add more status registers as needed
    end
end

// Debug bus read from PPI registers
always_comb begin
    dbus_dat_o = 8'h00;
    
    if (dbus_cs_ppi_i && dbus_cyc_i && dbus_stb_i && !dbus_we_i) begin
        dbus_dat_o = dbus_ppi_reg[dbus_adr_i[4:0]];
    end
    // TODO: Add FDC debug register reads when dbus_cs_fdc_i is active
end

// -------------------------------------------------------------------------
// Debug Bus FDC Registers (0x40-0x7F) - TBD
// -------------------------------------------------------------------------
// These will be implemented in a later iteration
// Will interface with u765_wb's SD card interface signals

// -------------------------------------------------------------------------
// Data bus multiplexing for main Wishbone bus
// -------------------------------------------------------------------------
// TODO: Need to mux data from PPI, FDC, and other devices
// Currently PPI and FDC output data directly, need arbitration

always_comb begin
    wb_dat_o = 8'hFF;  // Default pull-up
    
    // Priority: PPI > FDC > LPT > Motor
    if (wb_cs_ppi_i) begin
        // Data comes from i8255_wb instance
        // TODO: Connect properly
    end else if (wb_cs_fdc_i) begin
        // Data comes from u765_wb instance
        // TODO: Connect properly
    end
    // Other devices return 0xFF
end

// -------------------------------------------------------------------------
// Sound outputs (temporary - will be connected in next iteration)
// -------------------------------------------------------------------------
assign delta_sigma_a_o = 1'b0;
assign delta_sigma_b_o = 1'b0;
assign delta_sigma_c_o = 1'b0;

endmodule