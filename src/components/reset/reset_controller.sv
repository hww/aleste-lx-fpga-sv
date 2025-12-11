`default_nettype none

module reset_controller (
    input clk,
    input reset_in,
    input pll_locked,
    output reg system_reset
);
    reg [7:0] reset_counter;
    
    always @(posedge clk) begin
        if (reset_in || !pll_locked) begin
            reset_counter <= 0;
            system_reset <= 1;
        end else if (reset_counter != 8'hFF) begin
            reset_counter <= reset_counter + 1;
            system_reset <= 1;
        end else begin
            system_reset <= 0;
        end
    end
endmodule

