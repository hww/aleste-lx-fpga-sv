// =============================================================================
// Z80 Debug Module - Front Panel Emulation
// =============================================================================
// Provides real-time CPU inspection and step-by-step execution control
// Memory-mapped registers accessible via 8-bit debug bus
// =============================================================================

module z80_debug (
    // -------------------------------------------------------------------------
    // Clock and Reset
    // -------------------------------------------------------------------------
    input  logic        clk,
    input  logic        reset,                    // Active high reset
    
    // -------------------------------------------------------------------------
    // Debug Bus Interface (8-bit Wishbone-like)
    // -------------------------------------------------------------------------
    input  logic [7:0]  dbus_addr_i,              // Address bus
    output logic [7:0]  dbus_data_o,              // Data output (read)
    input  logic [7:0]  dbus_data_i,              // Data input (write)
    input  logic        dbus_we_i,                // Write enable
    input  logic        dbus_stb_i,               // Strobe
    input  logic        dbus_cs_i,                // Chip select
    output logic        dbus_ack_o,               // Acknowledge
    
    // -------------------------------------------------------------------------
    // Z80 CPU Interface (direct signals)
    // -------------------------------------------------------------------------
    input  logic [15:0] z80_a,                    // Z80 address bus
    input  logic [7:0]  z80_do,                   // Z80 data output
    input  logic [7:0]  z80_di,                   // Z80 data input
    input  logic        z80_mreq_n,               // Memory request
    input  logic        z80_iorq_n,               // I/O request
    input  logic        z80_rd_n,                 // Read strobe
    input  logic        z80_wr_n,                 // Write strobe
    input  logic        z80_m1_n,                 // Machine cycle 1
    input  logic        z80_rfsh_n,               // Refresh
    input  logic        z80_halt_n,               // Halt state
    input  logic        z80_busak_n,              // Bus acknowledge
    
    // -------------------------------------------------------------------------
    // CPU Control Outputs
    // -------------------------------------------------------------------------
    output logic        z80_wait_n,               // Wait control
    output logic        z80_cen_p,                // Clock enable
    output logic        debug_halt_o              // Debug halt status
);

    // =========================================================================
    // Internal Registers and Control Signals
    // =========================================================================
    logic [7:0] control_reg;                      // Control register
    logic [7:0] speed_divider;                    // Speed divider for slow mode
    logic [7:0] step_counter;                     // Step counter for slow mode
    
    logic        halt_state;                      // Current halt state
    logic        step_pulse;                      // Single step pulse
    logic        slow_mode;                       // Slow mode active
    logic        step_request;                    // Step request pending
    
    logic [15:0] addr_latch;                      // Latched address bus
    logic [7:0]  data_out_latch;                  // Latched data output
    logic [7:0]  data_in_latch;                   // Latched data input
    logic [7:0]  control_sigs_latch;              // Latched control signals
    
    logic        dbus_ack;
    logic        step_issued;

    // =========================================================================
    // Control Register Bits
    // =========================================================================
    localparam BIT_HALT      = 0;                 // 1=Halt CPU
    localparam BIT_STEP      = 1;                 // Write 1 to single step
    localparam BIT_SLOW_MODE = 2;                 // 1=Slow mode enabled
    localparam BIT_CLK_EN    = 3;                 // 1=Clock enabled
    
    // =========================================================================
    // Debug Register Map
    // =========================================================================
    localparam REG_ADDR_LO   = 8'h00;             // Address bus low byte
    localparam REG_ADDR_HI   = 8'h01;             // Address bus high byte
    localparam REG_DATA_OUT  = 8'h02;             // Data output from CPU
    localparam REG_DATA_IN   = 8'h03;             // Data input to CPU
    localparam REG_CTRL_SIGS = 8'h04;             // Control signals
    localparam REG_CONTROL   = 8'h05;             // Control register (R/W)
    localparam REG_SPEED     = 8'h06;             // Speed divider (R/W)

    // =========================================================================
    // Signal Latching
    // =========================================================================
    always_ff @(posedge clk) begin
        if (reset) begin
            addr_latch        <= 16'h0000;
            data_out_latch    <= 8'h00;
            data_in_latch     <= 8'h00;
            control_sigs_latch <= 8'h00;
        end else if (z80_cen_p && !halt_state) begin
            // Latch signals on active CPU clock
            addr_latch        <= z80_a;
            data_out_latch    <= z80_do;
            data_in_latch     <= z80_di;
            control_sigs_latch <= {
                z80_m1_n, z80_mreq_n, z80_iorq_n, z80_rd_n,
                z80_wr_n, z80_rfsh_n, z80_halt_n, z80_busak_n
            };
        end
    end

    // =========================================================================
    // Control Register Handling
    // =========================================================================
    always_ff @(posedge clk) begin
        if (reset) begin
            control_reg   <= 8'b00001000;         // Start with clock enabled
            speed_divider <= 8'd10;               // Default speed divider
            halt_state    <= 1'b0;
            slow_mode     <= 1'b0;
            step_request  <= 1'b0;
            step_counter  <= 8'd0;
            step_issued   <= 1'b0;
        end else begin
            // Handle step pulse - clear after one cycle
            if (step_issued) begin
                step_issued <= 1'b0;
            end
            
            // Process control register writes
            if (dbus_cs_i && dbus_stb_i && dbus_we_i) begin
                case (dbus_addr_i)
                    REG_CONTROL: begin
                        control_reg <= dbus_data_i;
                        
                        // Generate step pulse on step bit write
                        if (dbus_data_i[BIT_STEP] && !step_issued) begin
                            step_request <= 1'b1;
                            step_issued  <= 1'b1;
                        end
                    end
                    REG_SPEED: begin
                        speed_divider <= dbus_data_i;
                    end
                endcase
            end
            
            // Update internal state from control register
            halt_state <= control_reg[BIT_HALT];
            slow_mode  <= control_reg[BIT_SLOW_MODE];
            
            // Handle step request
            if (step_request && z80_cen_p) begin
                step_request <= 1'b0;
                // Step completed, maintain halt state
                control_reg[BIT_HALT] <= 1'b1;
            end
            
            // Slow mode counter
            if (slow_mode && !halt_state) begin
                if (step_counter >= speed_divider) begin
                    step_counter <= 8'd0;
                    step_pulse   <= 1'b1;
                end else begin
                    step_counter <= step_counter + 8'd1;
                    step_pulse   <= 1'b0;
                end
            end else begin
                step_counter <= 8'd0;
                step_pulse   <= 1'b0;
            end
        end
    end

    // =========================================================================
    // CPU Clock Control Logic
    // =========================================================================
    always_ff @(posedge clk) begin
        if (reset) begin
            z80_cen_p <= 1'b1;
        end else begin
            if (halt_state) begin
                // Halted state - only clock on step requests
                z80_cen_p <= step_request || (slow_mode && step_pulse);
            end else begin
                // Running state - normal clock or slow mode
                z80_cen_p <= control_reg[BIT_CLK_EN] && 
                            (!slow_mode || (slow_mode && step_pulse));
            end
        end
    end

    // =========================================================================
    // Debug Bus Read Interface
    // =========================================================================
    always_ff @(posedge clk) begin
        if (reset) begin
            dbus_data_o <= 8'h00;
            dbus_ack    <= 1'b0;
        end else begin
            dbus_ack <= 1'b0;
            
            if (dbus_cs_i && dbus_stb_i && !dbus_we_i) begin
                dbus_ack <= 1'b1;
                
                case (dbus_addr_i)
                    REG_ADDR_LO:    dbus_data_o <= addr_latch[7:0];
                    REG_ADDR_HI:    dbus_data_o <= addr_latch[15:8];
                    REG_DATA_OUT:   dbus_data_o <= data_out_latch;
                    REG_DATA_IN:    dbus_data_o <= data_in_latch;
                    REG_CTRL_SIGS:  dbus_data_o <= control_sigs_latch;
                    REG_CONTROL:    dbus_data_o <= control_reg;
                    REG_SPEED:      dbus_data_o <= speed_divider;
                    default:        dbus_data_o <= 8'hFF;
                endcase
            end
        end
    end

    assign dbus_ack_o = dbus_ack;
    
    // =========================================================================
    // CPU Wait Control
    // =========================================================================
    // In halt state, assert wait to stop CPU immediately
    assign z80_wait_n = ~halt_state;
    
    // =========================================================================
    // Status Outputs
    // =========================================================================
    assign debug_halt_o = halt_state;

endmodule
