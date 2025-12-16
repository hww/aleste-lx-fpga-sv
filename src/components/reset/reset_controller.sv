`default_nettype none

module reset_controller (
    input clk_i,         // System clock
    input pll_locked_i,  // Active 1 the PLL is locked
    input rst_i,         // Active 1 the external reset
    output rst_o,        // Active 1 the reset out
    output eof_rst_o     // Short pulse after reset
);

localparam RESET_END = 8'hFF;

reg [7:0] reset_counter = 0;
reg [1:0] rst_o_ff;

always @(posedge clk_i) begin
    if (!pll_locked_i || rst_i) begin
        reset_counter <= 0;
        rst_o_ff <= 2'b11;
    end else if (reset_counter != RESET_END) begin
        reset_counter <= reset_counter + 1;
        rst_o_ff <= 2'b11;
    end else begin
        rst_o_ff <= { rst_o_ff[0], 1'b0 };
    end
end

assign rst_o = rst_o_ff[0];
assign eof_rst_o = rst_o_ff[1] && !rst_o_ff[0];

endmodule
