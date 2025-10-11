module sdram_test_pattern (
    input clk, rst,
    output reg [23:0] sdram_addr,
    output reg [15:0] sdram_data_out,
    output reg sdram_we, sdram_req,
    input [15:0] sdram_data_in,
    input sdram_ack,
    
    output reg test_passed,
    output reg test_failed,
    output reg [2:0] test_phase
);

reg [23:0] test_addr;
reg [15:0] test_data;
reg [15:0] read_back;
reg [7:0] test_counter;
reg [3:0] state;
reg [19:0] timeout_counter;

// Test states
localparam STATE_IDLE      = 0;
localparam STATE_WRITE     = 1;
localparam STATE_READ      = 2;
localparam STATE_VERIFY    = 3;
localparam STATE_PASSED    = 4;
localparam STATE_FAILED    = 5;
localparam STATE_TIMEOUT   = 6;

// Test pattern - walking ones
function [15:0] gen_test_data(input [7:0] addr);
    gen_test_data = {8'hA5, addr} ^ {addr, 8'h5A};
endfunction

always @(posedge clk or posedge rst) begin
    if (rst) begin
        state <= STATE_IDLE;
        test_counter <= 0;
        test_passed <= 0;
        test_failed <= 0;
        timeout_counter <= 0;
        test_phase <= 0;
    end else begin
        sdram_req <= 0;
        sdram_we <= 0;
        timeout_counter <= timeout_counter + 1;
        
        case (state)
            STATE_IDLE: begin
                test_counter <= 0;
                test_addr <= 0;
                state <= STATE_WRITE;
                test_phase <= 1;
            end
            
            STATE_WRITE: begin
                sdram_addr <= test_addr;
                sdram_data_out <= gen_test_data(test_counter);
                sdram_we <= 1;
                sdram_req <= 1;
                
                if (sdram_ack) begin
                    test_addr <= test_addr + 1;
                    test_counter <= test_counter + 1;
                    
                    if (test_counter == 8'h3F) begin // Test 64 locations
                        test_addr <= 0;
                        test_counter <= 0;
                        state <= STATE_READ;
                        test_phase <= 2;
                    end
                end
                
                if (timeout_counter > 20_000_000) begin
                    state <= STATE_TIMEOUT;
                end
            end
            
            STATE_READ: begin
                sdram_addr <= test_addr;
                sdram_we <= 0;
                sdram_req <= 1;
                
                if (sdram_ack) begin
                    read_back <= sdram_data_in;
                    state <= STATE_VERIFY;
                end
                
                if (timeout_counter > 40_000_000) begin
                    state <= STATE_TIMEOUT;
                end
            end
            
            STATE_VERIFY: begin
                if (read_back == gen_test_data(test_counter)) begin
                    test_addr <= test_addr + 1;
                    test_counter <= test_counter + 1;
                    
                    if (test_counter == 8'h3F) begin
                        state <= STATE_PASSED;
                        test_phase <= 3;
                    end else begin
                        state <= STATE_READ;
                    end
                end else begin
                    state <= STATE_FAILED;
                    test_phase <= 4;
                end
            end
            
            STATE_PASSED: begin
                test_passed <= 1;
                test_phase <= 5;
            end
            
            STATE_FAILED: begin
                test_failed <= 1;
                test_phase <= 6;
            end
            
            STATE_TIMEOUT: begin
                test_failed <= 1;
                test_phase <= 7;
            end
        endcase
    end
end

endmodule
