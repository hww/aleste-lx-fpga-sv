`default_nettype none

module reset_controller (
    input clk,
    input pll_locked,
    output reg system_reset,
    output reg boot_complete
);

localparam RESET_END = 8'hFF;

reg [7:0] reset_counter = 0;
reg system_reset_ff = 0;

always @(posedge clk) begin
    if (!pll_locked) begin
        reset_counter <= 0;
        system_reset <= 1;
        system_reset_ff <= 1;
    end else if (reset_counter != RESET_END) begin
        reset_counter <= reset_counter + 1;
        system_reset <= 1;
        system_reset_ff <= 1;
    end else begin
        system_reset <= 0;
        system_reset_ff <= system_reset;
    end
end

assign boot_complete = system_reset_ff && !system_reset;

endmodule
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    