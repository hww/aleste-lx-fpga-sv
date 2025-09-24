module bit_shift_unit (
    input  logic        clk_i,
    input  logic        rst_i,
    input  logic        cke_i,
    
    // Data inputs
    input  logic [31:0] data_i,
    input  logic [7:0]  shift_amount_i,
    input  logic        shift_right_i, // 0=left, 1=right
    input  logic        arithmetic_i,  // 0=logical, 1=arithmetic
    
    // Control
    input  logic        valid_i,
    
    // Outputs
    output logic [31:0] data_o,
    output logic        valid_o
);

logic [31:0] shifted_data;
logic output_valid;

// Shift operation
always_comb begin
    if (shift_right_i) begin
        if (arithmetic_i) begin
            // Arithmetic right shift
            shifted_data = $signed(data_i) >>> shift_amount_i;
        end else begin
            // Logical right shift
            shifted_data = data_i >> shift_amount_i;
        end
    end else begin
        // Left shift (same for arithmetic and logical)
        shifted_data = data_i << shift_amount_i;
    end
end

// Pipeline register for timing
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        data_o <= 32'h0;
        valid_o <= 1'b0;
    end else if (cke_i) begin
        data_o <= shifted_data;
        valid_o <= valid_i;
    end
end

endmodule