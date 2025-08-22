module sdram_model (
    input        clk,
    input        cke,
    input        cs_n,
    input        ras_n,
    input        cas_n,
    input        we_n,
    input [1:0]  ba,
    input [12:0] a,
    inout [15:0] dq,
    input [1:0]  dm,
    output [2:0] model_state
);

    // SDRAM memory array
    reg [15:0] memory [0:1024*1024-1]; // 2MB memory
    
    // Internal signals
    reg [15:0] dq_out;
    reg        dq_oe;
    assign dq = dq_oe ? dq_out : 16'bzzzz_zzzz_zzzz_zzzz;
    
    // Command decoding
    wire [3:0] command = {cs_n, ras_n, cas_n, we_n};
    
    // Model states
    localparam STATE_IDLE = 0;
    localparam STATE_ACTIVE = 1;
    localparam STATE_READ = 2;
    localparam STATE_WRITE = 3;
    localparam STATE_PRECHARGE = 4;
    
    reg [2:0] state = STATE_IDLE;
    assign model_state = state;
    
    // Address and bank tracking
    reg [12:0] active_row [0:3];
    reg [1:0]  active_bank;
    reg        bank_active [0:3];
    
    initial begin
        for (int i = 0; i < 4; i++) begin
            bank_active[i] = 0;
            active_row[i] = 0;
        end
    end
    
    always @(posedge clk) begin
        if (cke && !cs_n) begin
            case (command)
                4'b0011: begin // ACTIVATE
                    state <= STATE_ACTIVE;
                    active_bank <= ba;
                    active_row[ba] <= a;
                    bank_active[ba] <= 1;
                end
                
                4'b0101: begin // READ
                    if (bank_active[ba]) begin
                        state <= STATE_READ;
                        dq_out <= memory[{{ba, active_row[ba], a[8:0]}}[19:0]];
                        dq_oe <= 1;
                        #30 dq_oe <= 0; // CAS latency simulation
                    end
                end
                
                4'b0100: begin // WRITE
                    if (bank_active[ba]) begin
                        state <= STATE_WRITE;
                        memory[{{ba, active_row[ba], a[8:0]}}[19:0]] <= dq;
                    end
                end
                
                4'b0010: begin // PRECHARGE
                    state <= STATE_PRECHARGE;
                    if (a[10]) begin // Precharge all banks
                        for (int i = 0; i < 4; i++) bank_active[i] <= 0;
                    end else begin
                        bank_active[ba] <= 0;
                    end
                end
                
                default: state <= STATE_IDLE;
            endcase
        end else begin
            state <= STATE_IDLE;
            dq_oe <= 0;
        end
    end

endmodule
