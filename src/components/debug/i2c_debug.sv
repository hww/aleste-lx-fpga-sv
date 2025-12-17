module i2c_debug (
    input  wire        clk,
    input  wire        rst,
    input  wire [31:0] debug_data,
    output wire        scl,
    output wire        sda
);
    
    // SCL = clk/4 (25MHz при 100MHz clk)
    reg [3:0] scl_div = 0;
    reg scl_r = 1;
    always @(posedge clk) begin
        scl_div <= scl_div + 1;
        scl_r <= scl_div[1];
    end
    
    // FSM
    reg [2:0] state = 0;
    reg [5:0] bit_num = 0;
    reg [39:0] data = 0;
    reg sda_r = 1;
    
    // ОПАСНАЯ ЗОНА: FSM реагирует на ПАДАЮЩИЙ фронт SCL
    wire scl_falling = (scl_div == 4'b1111);  // 11→00 переход
    
    always @(posedge clk) begin
        if (rst) begin
            state <= 0;
            sda_r <= 1;
        end else if (scl_falling) begin  // ТОЛЬКО на падающем SCL!
            case (state)
                0: begin // IDLE
                    if (1) begin // всегда передаём
                        data <= {8'hA0, debug_data};
                        state <= 1;
                        bit_num <= 0;
                        sda_r <= 0; // START
                    end
                end
                
                1: begin // BITS
                    sda_r <= data[39 - bit_num];
                    bit_num <= bit_num + 1;
                    
                    if (bit_num == 39) state <= 2; // STOP
                    else if (bit_num == 7 || bit_num == 15 || 
                            bit_num == 23 || bit_num == 31) state <= 3; // ACK
                end
                
                2: begin // STOP
                    sda_r <= 1;
                    state <= 0;
                end
                
                3: begin // ACK
                    sda_r <= 0;
                    state <= 1;
                end
            endcase
        end
    end
    
    assign scl = scl_r;
    assign sda = sda_r;
    
endmodule
