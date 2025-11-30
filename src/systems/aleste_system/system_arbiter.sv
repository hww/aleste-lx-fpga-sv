`default_nettype none

// =============================================================================
// System Wishbone Arbiter
// =============================================================================
// Arbitrates between Z80 CPU and UART Bridge for system bus access
// =============================================================================

module system_arbiter (
    // -------------------------------------------------------------------------
    // Clock and Reset
    // -------------------------------------------------------------------------
    input  logic        clk_i,                    // System clock (54MHz)
    input  logic        rst_i,                    // Active high reset
    
    // -------------------------------------------------------------------------
    // Z80 CPU Wishbone Master Interface
    // -------------------------------------------------------------------------
    input  logic        z80_cyc_i,                // Z80 cycle
    input  logic        z80_stb_i,                // Z80 strobe
    input  logic        z80_we_i,                 // Z80 write enable
    input  logic [23:0] z80_adr_i,                // Z80 address
    input  logic [7:0]  z80_dat_i,                // Z80 data out
    output logic [7:0]  z80_dat_o,                // Z80 data in
    output logic        z80_ack_o,                // Z80 acknowledge
    output logic        z80_grant_o,              // Z80 bus grant
    
    // -------------------------------------------------------------------------
    // UART Bridge Wishbone Master Interface  
    // -------------------------------------------------------------------------
    input  logic        uart_cyc_i,               // UART cycle
    input  logic        uart_stb_i,               // UART strobe
    input  logic        uart_we_i,                // UART write enable
    input  logic [23:0] uart_adr_i,               // UART address
    input  logic [7:0]  uart_dat_i,               // UART data out
    output logic [7:0]  uart_dat_o,               // UART data in
    output logic        uart_ack_o,               // UART acknowledge
    output logic        uart_grant_o,             // UART bus grant
    
    // -------------------------------------------------------------------------
    // System Wishbone Master Interface (to memory/devices)
    // -------------------------------------------------------------------------
    output logic        sys_cyc_o,                // System cycle
    output logic        sys_stb_o,                // System strobe
    output logic        sys_we_o,                 // System write enable
    output logic [23:0] sys_adr_o,                // System address
    output logic [7:0]  sys_dat_o,                // System data out
    input  logic [7:0]  sys_dat_i,                // System data in
    input  logic        sys_ack_i,                // System acknowledge
    
    // -------------------------------------------------------------------------
    // Debug Outputs
    // -------------------------------------------------------------------------
    output logic [1:0]  debug_state_o,            // Arbiter state
    output logic        debug_z80_active_o,       // Z80 bus active
    output logic        debug_uart_active_o       // UART bus active
);

    // =========================================================================
    // Internal Signals
    // =========================================================================
    typedef enum logic [1:0] {
        STATE_IDLE     = 2'b00,
        STATE_Z80      = 2'b01, 
        STATE_UART     = 2'b10
    } arb_state_t;
    
    arb_state_t current_state;
    arb_state_t next_state;
    
    logic z80_request;
    logic uart_request;
    logic z80_bus_grant;
    logic uart_bus_grant;

    // =========================================================================
    // Request Detection
    // =========================================================================
    assign z80_request = z80_cyc_i && z80_stb_i;
    assign uart_request = uart_cyc_i && uart_stb_i;

    // =========================================================================
    // Arbiter State Machine
    // =========================================================================
    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            current_state <= STATE_IDLE;
        end else begin
            current_state <= next_state;
        end
    end

    always_comb begin
        case (current_state)
            STATE_IDLE: begin
                if (z80_request) begin
                    next_state = STATE_Z80;
                end else if (uart_request) begin
                    next_state = STATE_UART;
                end else begin
                    next_state = STATE_IDLE;
                end
            end
            
            STATE_Z80: begin
                if (!z80_request || sys_ack_i) begin
                    if (uart_request) begin
                        next_state = STATE_UART;
                    end else begin
                        next_state = STATE_IDLE;
                    end
                end else begin
                    next_state = STATE_Z80;
                end
            end
            
            STATE_UART: begin
                if (!uart_request || sys_ack_i) begin
                    if (z80_request) begin
                        next_state = STATE_Z80;
                    end else begin
                        next_state = STATE_IDLE;
                    end
                end else begin
                    next_state = STATE_UART;
                end
            end
            
            default: begin
                next_state = STATE_IDLE;
            end
        endcase
    end

    // =========================================================================
    // Grant Generation
    // =========================================================================
    assign z80_bus_grant = (current_state == STATE_Z80);
    assign uart_bus_grant = (current_state == STATE_UART);
    
    assign z80_grant_o = z80_bus_grant;
    assign uart_grant_o = uart_bus_grant;

    // =========================================================================
    // System Bus Outputs
    // =========================================================================
    assign sys_cyc_o = z80_bus_grant ? z80_cyc_i : uart_cyc_i;
    assign sys_stb_o = z80_bus_grant ? z80_stb_i : uart_stb_i;
    assign sys_we_o  = z80_bus_grant ? z80_we_i  : uart_we_i;
    assign sys_adr_o = z80_bus_grant ? z80_adr_i : uart_adr_i;
    assign sys_dat_o = z80_bus_grant ? z80_dat_i : uart_dat_i;

    // =========================================================================
    // Master Data and Acknowledge
    // =========================================================================
    assign z80_dat_o = sys_dat_i;
    assign uart_dat_o = sys_dat_i;
    
    assign z80_ack_o = z80_bus_grant && sys_ack_i;
    assign uart_ack_o = uart_bus_grant && sys_ack_i;

    // =========================================================================
    // Debug Outputs
    // =========================================================================
    assign debug_state_o = current_state;
    assign debug_z80_active_o = z80_bus_grant;
    assign debug_uart_active_o = uart_bus_grant;

endmodule

`default_nettype wire
