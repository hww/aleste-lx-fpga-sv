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
    // System bus has signals for any route access  
    // -------------------------------------------------------------------------
    output logic        sys_cyc_o,               // SYS cycle
    output logic        sys_stb_o,               // SYS strobe
    output logic        sys_we_o,                // SYS write enable
    output logic        sys_ack_o,               // SYS acknowlege
    output logic [23:0] sys_adr_o,               // SYS address
    output logic [7:0]  sys_dat_o,               // SYS data in
    input  logic        sys_err_i,

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
    output logic        z80_err_o,                // Z80 bus grant
    
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
    output logic        uart_err_o,               // UART bus error

    // -------------------------------------------------------------------------
    // System Wishbone Master Interface (to memory/devices)
    // -------------------------------------------------------------------------
    output logic        vid_cyc_o,                // Video controller cycle
    output logic        vid_stb_o,                // Video controller strobe
    output logic        vid_we_o,                 // Video controller write enable
    output logic [23:0] vid_adr_o,                // Video controller address
    output logic [7:0]  vid_dat_o,                // Video controller data out
    input  logic [7:0]  vid_dat_i,                // Video controller data in
    input  logic        vid_ack_i,                // Video controller acknowledge
    input  logic        vid_grant_i,              // Video controller confirms access

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
    
    // Системная шина от мастера к слейвам
    logic [7:0] sys_dat_miso;
    logic [7:0] sys_dat_mosi;
    logic sys_ack_miso;
    
    // =========================================================================
    // Request Detection
    // =========================================================================
    assign z80_request  = z80_cyc_i  && z80_stb_i;
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
                if (!z80_request || vid_ack_i || sys_err_i) begin
                    //if (uart_request) begin
                    //    next_state = STATE_UART;
                    //end else begin
                        next_state = STATE_IDLE;
                   // end
                end else begin
                    next_state = STATE_Z80;
                end
            end
            
            STATE_UART: begin
                if (!uart_request || vid_ack_i || sys_err_i) begin
                    //if (z80_request) begin
                    //    next_state = STATE_Z80;
                    //end else begin
                        next_state = STATE_IDLE;
                    //end
                end else begin
                    next_state = STATE_UART;
                end
            end
            
            default: begin
                next_state = STATE_IDLE;
            end
        endcase
    end
    
    // ===========================================
    // Маршрутизатор мастер -> slave
    // ===========================================
    always_comb begin
        // Значения по умолчанию - задаются ПЕРВЫМИ
        z80_bus_grant = 1'b0;
        uart_bus_grant = 1'b0;
        sys_cyc_o = 1'b0;
        sys_stb_o = 1'b0;
        sys_we_o  = 1'b0;
        sys_adr_o = 24'h000000;
        sys_dat_mosi = 8'h00;

        // Переопределяем значения по умолчанию только когда нужно
        case (current_state)
            STATE_Z80: begin
                z80_bus_grant = 1'b1;          // Переопределяем значение по умолчанию
                sys_cyc_o = z80_cyc_i;
                sys_stb_o = z80_stb_i;
                sys_we_o  = z80_we_i;
                sys_adr_o = z80_adr_i;
                sys_dat_mosi = z80_dat_i;
            end
            
            STATE_UART: begin
                uart_bus_grant = 1'b1;         // Переопределяем значение по умолчанию
                sys_cyc_o = uart_cyc_i;
                sys_stb_o = uart_stb_i;
                sys_we_o  = uart_we_i;
                sys_adr_o = uart_adr_i;
                sys_dat_mosi = uart_dat_i;                
            end
            
            // default: используем значения по умолчанию (уже установлены)
            default: begin
            end            
        endcase
    end

    // =========================================================================
    // Маршрутизатор слейв -> system bus
    // =========================================================================

    always_comb begin
        if (vid_grant_i) begin
            sys_dat_miso = vid_dat_i;
            sys_ack_miso = vid_ack_i;
        end 
        else begin 
            sys_dat_miso = 8'h00;
            sys_ack_miso = 1'b0;
        end
    end

    assign sys_dat_o = sys_dat_mosi;  // МОИ данные к слейвам
    assign sys_ack_o = sys_ack_miso;  // МОИ данные от слейвов

    // =========================================================================
    // Z80 Bus
    // =========================================================================
    assign z80_grant_o = z80_bus_grant;
    assign z80_dat_o  = sys_dat_miso;  // Данные от слейвов к Z80
    assign z80_ack_o  = z80_bus_grant && sys_ack_miso;  
    assign z80_err_o  = z80_bus_grant && sys_err_i;

    // =========================================================================
    // UART Bus
    // =========================================================================
    assign uart_grant_o = uart_bus_grant;
    assign uart_dat_o = sys_dat_miso;  // Данные от слейвов к UART
    assign uart_ack_o = uart_bus_grant && sys_ack_miso;  
    assign uart_err_o = uart_bus_grant && sys_err_i;

    // =========================================================================
    // Video Bus
    // =========================================================================
    assign vid_cyc_o = sys_cyc_o;  
    assign vid_stb_o = sys_stb_o;  
    assign vid_we_o  = sys_we_o;   
    assign vid_adr_o = sys_adr_o;  
    assign vid_dat_o = sys_dat_mosi;  

    // =========================================================================
    // Debug Outputs
    // =========================================================================
    assign debug_state_o = current_state;
    assign debug_z80_active_o = (current_state == STATE_Z80);
    assign debug_uart_active_o = (current_state == STATE_UART);

endmodule

`default_nettype wire