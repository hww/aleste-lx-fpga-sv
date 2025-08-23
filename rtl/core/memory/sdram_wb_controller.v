// sdram_wb_controller.v
// Modernized SDRAM controller with Wishbone Classic interface
// Based on mist_sdram from Amstrad project

module sdram_wb_controller #(
    parameter CLK_FREQ = 100_000_000,    // Clock frequency in Hz
    parameter SDRAM_FREQ = 100_000_000,  // SDRAM clock frequency
    parameter CAS_LATENCY = 2,           // 2 or 3
    parameter BURST_LENGTH = 1           // 1, 2, 4, 8
)(
    // Wishbone Classic Interface
    input              wb_clk_i,        // Wishbone clock
    input              wb_rst_i,        // Wishbone reset
    input              wb_cyc_i,        // Cycle valid
    input              wb_stb_i,        // Transfer request
    output reg         wb_ack_o,        // Transfer acknowledge
    input              wb_we_i,         // Write enable
    input       [23:0] wb_adr_i,        // Address
    input       [15:0] wb_dat_i,        // Data input
    output reg  [15:0] wb_dat_o,        // Data output
    input       [1:0]  wb_sel_i,        // Byte select
    
    // SDRAM Physical Interface
    inout       [15:0] sdram_dq,        // Data bus
    output reg  [12:0] sdram_addr,      // Address bus
    output reg         sdram_dqml,      // Lower byte mask
    output reg         sdram_dqmh,      // Upper byte mask
    output reg   [1:0] sdram_ba,        // Bank address
    output reg         sdram_cs_n,      // Chip select
    output reg         sdram_we_n,      // Write enable
    output reg         sdram_ras_n,     // Row address strobe
    output reg         sdram_cas_n,     // Column address strobe
    output             sdram_cke,       // Clock enable
    
    // Debug
    output       [2:0] debug_state,     // Current state
    output reg         sdram_dq_oe
);

// Local parameters
localparam tRCD_CYCLES = (20 * SDRAM_FREQ) / 1000_000_000; // tRCD=20ns in cycles
localparam tRP_CYCLES  = (20 * SDRAM_FREQ) / 1000_000_000;  // tRP=20ns in cycles
localparam REFRESH_CYCLES = (64 * SDRAM_FREQ) / 1000;       // Refresh every 64ms

// SDRAM Commands
localparam CMD_NOP          = 4'b0111;
localparam CMD_ACTIVE       = 4'b0011;
localparam CMD_READ         = 4'b0101;
localparam CMD_WRITE        = 4'b0100;
localparam CMD_PRECHARGE    = 4'b0010;
localparam CMD_AUTO_REFRESH = 4'b0001;
localparam CMD_LOAD_MODE    = 4'b0000;

// Controller states
localparam STATE_INIT       = 0;
localparam STATE_IDLE       = 1;
localparam STATE_ACTIVATE   = 2;
localparam STATE_READ       = 3;
localparam STATE_WRITE      = 4;
localparam STATE_REFRESH    = 5;
localparam STATE_PRECHARGE  = 6;

reg [2:0] state = STATE_INIT;
reg [2:0] next_state;

// Timing counters
reg [15:0] init_counter = 0;
reg [15:0] refresh_counter = 0;
reg [3:0]  delay_counter = 0;

// Address decoding
logic [1:0] bank_addr = wb_adr_i[22:21];
logic [12:0] row_addr = wb_adr_i[20:8];
logic [8:0] col_addr = wb_adr_i[9:1]; 
;
// Internal registers
reg [15:0] data_out;
reg [15:0] data_in;
reg        write_en;
reg        read_req;
reg        busy = 0;

// SDRAM mode register
localparam MODE_REGISTER = {3'b000, 1'b1, 2'b00, CAS_LATENCY[2:0], 1'b0, BURST_LENGTH[2:0]};

// Assign outputs
assign sdram_cke = ~wb_rst_i;
assign debug_state = state;

// Data bus control
reg [15:0] sdram_dq_out;
assign sdram_dq = sdram_dq_oe ? sdram_dq_out : 16'bzzzz_zzzz_zzzz_zzzz;

// Wishbone interface
always @(posedge wb_clk_i) begin
    if (wb_rst_i) begin
        wb_ack_o <= 0;
        busy <= 0;
        read_req <= 0;
        write_en <= 0;
    end else begin
        wb_ack_o <= 0;
        
        if (wb_cyc_i && wb_stb_i && !busy) begin
            busy <= 1;
            read_req <= !wb_we_i;
            write_en <= wb_we_i;
            data_in <= wb_dat_i;
            // Store address for SDRAM access
            {sdram_ba, row_addr, col_addr} <= {bank_addr, row_addr, col_addr};
        end
        
        if (busy && state == STATE_IDLE) begin
            busy <= 0;
            if (read_req) begin
                wb_dat_o <= data_out;
                wb_ack_o <= 1;
            end else if (write_en) begin
                wb_ack_o <= 1;
            end
        end
    end
end

// Main state machine
always @(posedge wb_clk_i) begin
    if (wb_rst_i) begin
        state <= STATE_INIT;
        init_counter <= 0;
        refresh_counter <= 0;
        {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_NOP;
    end else begin
        // Refresh counter
        refresh_counter <= refresh_counter + 1;
        if (refresh_counter >= REFRESH_CYCLES[15:0]) begin
            refresh_counter <= 0;
            if (state == STATE_IDLE) begin
                state <= STATE_REFRESH;
            end
        end
        
        case (state)
            STATE_INIT: begin
                init_counter <= init_counter + 1;
                
                if (init_counter == 100) begin
                    // Precharge all
                    {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_PRECHARGE;
                    sdram_addr[10] <= 1'b1;
                end
                else if (init_counter == 200) begin
                    // Auto refresh
                    {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_AUTO_REFRESH;
                end
                else if (init_counter == 300) begin
                    // Auto refresh
                    {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_AUTO_REFRESH;
                end
                else if (init_counter == 400) begin
                    // Load mode register
                    {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_LOAD_MODE;
                    sdram_addr <= MODE_REGISTER;
                end
                else if (init_counter > 500) begin
                    state <= STATE_IDLE;
                end
                
                {sdram_dqml, sdram_dqmh} <= 2'b11;
            end
            
            STATE_IDLE: begin
                {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_NOP;
                sdram_dq_oe <= 0;
                
                if (busy) begin
                    state <= STATE_ACTIVATE;
                    delay_counter <= tRCD_CYCLES[3:0];
                end
            end
            
            STATE_ACTIVATE: begin
                {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_ACTIVE;
                sdram_addr <= row_addr;
                
                if (delay_counter == 0) begin
                    if (read_req) begin
                        state <= STATE_READ;
                    end else begin
                        state <= STATE_WRITE;
                    end
                end else begin
                    delay_counter <= delay_counter - 1;
                end
            end
            
            STATE_READ: begin
                {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_READ;
                sdram_addr <= {4'b0010, col_addr};
                {sdram_dqml, sdram_dqmh} <= 2'b00;
                
                // Wait for CAS latency
                delay_counter <= CAS_LATENCY;
                state <= STATE_READ + 1;
            end
            
            STATE_READ + 1: begin
                if (delay_counter == 0) begin
                    data_out <= sdram_dq;
                    state <= STATE_PRECHARGE;
                end else begin
                    delay_counter <= delay_counter - 1;
                end
            end
            
            STATE_WRITE: begin
                {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_WRITE;
                sdram_addr <= {4'b0010, col_addr};
                sdram_dq_out <= data_in;
                sdram_dq_oe <= 1;
                {sdram_dqml, sdram_dqmh} <= ~wb_sel_i;
                
                state <= STATE_PRECHARGE;
            end
            
            STATE_PRECHARGE: begin
                {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_PRECHARGE;
                sdram_addr[10] <= 1'b1; // Precharge all banks
                sdram_dq_oe <= 0;
                
                delay_counter <= tRP_CYCLES[3:0];
                state <= STATE_PRECHARGE + 1;
            end
            
            STATE_PRECHARGE + 1: begin
                if (delay_counter == 0) begin
                    state <= STATE_IDLE;
                end else begin
                    delay_counter <= delay_counter - 1;
                end
            end
            
            STATE_REFRESH: begin
                {sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n} <= CMD_AUTO_REFRESH;
                state <= STATE_REFRESH + 1;
                delay_counter <= 8;
            end
            
            STATE_REFRESH + 1: begin
                if (delay_counter == 0) begin
                    state <= STATE_IDLE;
                end else begin
                    delay_counter <= delay_counter - 1;
                end
            end
        endcase
    end
end

endmodule
