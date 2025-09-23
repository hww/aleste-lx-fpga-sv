module blink (
    input       rst,
    input       clk_i,
    output      led_r_o,
    output      led_g_o,
    output      led_b_o
);

localparam MAX = 2_500_000;
localparam WIDTH = $clog2(MAX);

wire rst_s;

reg  [WIDTH-1:0] cpt_s;
reg  [2:0] rgb;

rst_gen rst_inst (
    .clk_i(clk_i), 
    .rst_i(rst), 
    .rst_o(rst_s)
    );

always @(posedge clk_i) begin
    if (rst_s) begin
        cpt_s <= 0;
    end
    else begin
        cpt_s <= cpt_s + 1'b1;
    end
end

always @(posedge clk_i) begin
    if (rst_s) begin
        rgb <= 0;
    end
    else if (cpt_s == MAX-1) begin
        rgb <= rgb + 1;
    end
end

assign led_r_o = rgb[0];
assign led_g_o = rgb[1];
assign led_b_o = rgb[2];

endmodule
