module rate_limiter (
    input  logic        clk_i,
    input  logic        rst_i,
    input  logic        cke_i,
    
    // Control inputs
    input  logic [3:0]  rate_limit_i, // 0=no limit, 15=max limit
    input  logic        request_i,
    
    // Output
    output logic        grant_o
);

logic [3:0] counter;
logic [3:0] limit_value;
logic grant;

// Convert rate limit to actual cycle count
always_comb begin
    case (rate_limit_i)
        4'h0: limit_value = 4'h0;    // No limiting
        4'h1: limit_value = 4'hF;    // Every 16th cycle
        4'h2: limit_value = 4'h7;    // Every 8th cycle
        4'h3: limit_value = 4'h3;    // Every 4th cycle
        4'h4: limit_value = 4'h1;    // Every 2nd cycle
        default: limit_value = 4'h0; // No limiting
    endcase
end

// Rate limiting counter
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        counter <= 4'h0;
        grant <= 1'b0;
    end else if (cke_i) begin
        if (request_i) begin
            if (counter == 4'h0) begin
                grant <= 1'b1;
                counter <= limit_value;
            end else begin
                grant <= 1'b0;
                counter <= counter - 1'b1;
            end
        end else begin
            grant <= 1'b0;
            counter <= 4'h0;
        end
    end
end

assign grant_o = grant;

endmodule