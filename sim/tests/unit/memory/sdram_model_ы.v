`timescale 1ns / 1ps
/* verilator lint_off MULTITOP */
/* verilator lint_off EOFNEWLINE */

module sdram_model (
    // SDRAM Interface (IS42S16160 compatible)
    input              clk,
    input              cke,
    input              cs_n,
    input              ras_n,
    input              cas_n,
    input              we_n,
    input [12:0]       a,
    input [1:0]        ba,
    inout  wire [15:0] dq,
    input [1:0]        dm,
    output logic [2:0] model_state = 3'b0  // Изменено имя порта
);

    // SDRAM Parameters for IS42S16160
    parameter int ROWS = 8192;       // 13-bit row address
    parameter int COLS = 512;        // 9-bit column address  
    parameter int BANKS = 4;
    parameter int DATA_WIDTH = 16;
    parameter int BURST_LENGTH = 1;
    
    // SDRAM Commands
    typedef enum logic [2:0] {
        CMD_DESELECT     = 3'b111,
        CMD_NO_OPERATION = 3'b011,
        CMD_ACTIVE       = 3'b010,
        CMD_READ         = 3'b101,
        CMD_WRITE        = 3'b100,
        CMD_BURST_TERM   = 3'b110,
        CMD_PRECHARGE    = 3'b001,
        CMD_MODE_REG_SET = 3'b000
    } sdram_cmd_t;
    
    // SDRAM State Machine
    typedef enum logic [2:0] {
        STATE_IDLE      = 3'b000,
        STATE_ACTIVE    = 3'b001,
        STATE_READ      = 3'b010,
        STATE_WRITE     = 3'b011,
        STATE_PRECHARGE = 3'b100,
        STATE_REFRESH   = 3'b101,
        STATE_MODE_REG  = 3'b110
    } sdram_state_t;
    
    // Internal registers
    logic [12:0] row_addr = '0;
    logic [8:0]  col_addr = '0;
    logic [1:0]  bank_addr = '0;
    logic        write_enable = 1'b0;
    logic [8:0]  burst_counter = '0;
    logic        burst_active = 1'b0;
    
    // Memory banks
    logic [DATA_WIDTH-1:0] memory [0:BANKS-1][0:ROWS-1][0:COLS-1];
    
    // DQ bus control
    logic [15:0] dq_out = 16'b0;
    logic        dq_oe = 1'b0;  // Output enable
    
    assign dq = dq_oe ? dq_out : 16'bz;
    
    // Command decoding
    function automatic sdram_cmd_t decode_command();
        if (cs_n) return CMD_DESELECT;
        if (!ras_n && cas_n && we_n) return CMD_ACTIVE;
        if (ras_n && !cas_n && we_n) return CMD_READ;
        if (ras_n && !cas_n && !we_n) return CMD_WRITE;
        if (ras_n && cas_n && !we_n) return CMD_BURST_TERM;
        if (!ras_n && cas_n && !we_n) return CMD_PRECHARGE;
        if (!ras_n && !cas_n && !we_n) return CMD_MODE_REG_SET;
        return CMD_NO_OPERATION;
    endfunction
    
    // Local parameter for comparison - fixed width
    localparam logic [8:0] BURST_END = 9'(BURST_LENGTH - 1);
    
    // Main state machine
    always_ff @(posedge clk) begin
        sdram_cmd_t current_cmd = decode_command();
        
        case (model_state)
            STATE_IDLE: begin
                if (current_cmd == CMD_ACTIVE) begin
                    row_addr <= a;
                    bank_addr <= ba;
                    model_state <= STATE_ACTIVE;
                end
            end
            
            STATE_ACTIVE: begin
                if (current_cmd == CMD_READ) begin
                    col_addr <= a[8:0];
                    burst_counter <= '0;
                    burst_active <= 1'b1;
                    model_state <= STATE_READ;
                end
                else if (current_cmd == CMD_WRITE) begin
                    col_addr <= a[8:0];
                    write_enable <= 1'b1;
                    burst_counter <= '0;
                    burst_active <= 1'b1;
                    model_state <= STATE_WRITE;
                end
                else if (current_cmd == CMD_PRECHARGE) begin
                    model_state <= STATE_PRECHARGE;
                end
            end
            
            STATE_READ: begin
                if (burst_active) begin
                    dq_out <= memory[bank_addr][row_addr][col_addr + burst_counter];
                    dq_oe <= 1'b1;
                    
                    if (burst_counter == BURST_END) begin
                        burst_active <= 1'b0;
                        dq_oe <= 1'b0;
                        model_state <= STATE_ACTIVE;
                    end
                    burst_counter <= burst_counter + 1;
                end
            end
            
            STATE_WRITE: begin
                if (burst_active) begin
                    memory[bank_addr][row_addr][col_addr + burst_counter] <= dq;
                    
                    if (burst_counter == BURST_END) begin
                        burst_active <= 1'b0;
                        write_enable <= 1'b0;
                        model_state <= STATE_ACTIVE;
                    end
                    burst_counter <= burst_counter + 1;
                end
            end
            
            STATE_PRECHARGE: begin
                model_state <= STATE_IDLE;
            end
            
            default: begin
                model_state <= STATE_IDLE;
            end
        endcase
        
        // Handle mode register set
        if (current_cmd == CMD_MODE_REG_SET) begin
            model_state <= STATE_MODE_REG;
        end
    end
    
    // Initialize memory
    initial begin
        foreach (memory[i, j, k]) begin
            memory[i][j][k] = '0;
        end
        model_state = STATE_IDLE;
    end

endmodule
/* verilator lint_on MULTITOP */
/* verilator lint_on EOFNEWLINE */
