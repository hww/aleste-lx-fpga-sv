module ecp5_pll #(
    parameter CLKI_DIV = 1,
    parameter CLKOP_DIV = 1,
    parameter CLKOP_CPHASE = 0,
    parameter CLKOS_DIV = 1,
    parameter CLKOS_CPHASE = 0
) (
    input  wire CLKI,
    input  wire RST,
    output wire CLKOP,
    output wire CLKOS,
    output wire LOCK
);

assign CLKOP = CLKI;
assign CLKOS = CLKI;
assign LOCK = 1'b1;

endmodule