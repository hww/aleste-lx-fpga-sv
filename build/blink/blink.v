module blink (
    input      rst,
    input      clk_i,
    output reg led_o
);

localparam MAX = 2_500_000;
localparam WIDTH = $clog2(MAX);

wire rst_s;

reg  [WIDTH-1:0] cpt_s;


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
        led_o <= 1'b0;
    end
    else if (cpt_s == MAX-1) begin
        led_o <= ~led_o;
    end
end

endmodule
