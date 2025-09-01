module ff_test(
    input logic clk,
    input logic rst,
    input logic [2:0] ff1_in,
    output logic [2:0] ff1_out,
    output logic [2:0] ff2_out
);

    // 3-битные регистры
    logic [2:0] ff1_reg;
    logic [2:0] ff2_reg;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            ff1_reg <= 3'b000;
            ff2_reg <= 3'b000;
        end else begin
            ff1_reg <= ff1_in;
            ff2_reg <= ff1_reg;
        end
    end

    assign ff1_out = ff1_reg;
    assign ff2_out = ff2_reg;

endmodule
