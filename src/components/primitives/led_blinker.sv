
// =============================================================================
// LED Blinker Module (без изменений)
// =============================================================================

module led_blinker (
    input      rst_i,
    input      clk_i,
    output reg led_o
);

localparam MAX = 12_500_000;
localparam WIDTH = $clog2(MAX);

reg [WIDTH-1:0] cpt_s;

always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        led_o <= 0;
        cpt_s <= 0;
    end else begin
        if (cpt_s == MAX-1) begin
            cpt_s <= 0;
            led_o <= ~led_o;
        end else begin
            cpt_s <= cpt_s + 1'b1;
        end
    end
end

endmodule
