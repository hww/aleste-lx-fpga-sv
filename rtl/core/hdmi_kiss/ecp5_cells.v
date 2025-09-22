// ECP5 Primitives for Yosys
module EHXPLLL (
    input CLKI, RST, STDBY,
    output CLKOP, CLKOS, LOCK
);
    parameter CLKI_DIV = 1;
    parameter CLKFB_DIV = 1;
    parameter CLKOP_DIV = 1;
    parameter CLKOS_DIV = 1;
    parameter FEEDBK_PATH = "CLKOP";
    
    assign CLKOP = CLKI;
    assign CLKOS = CLKI;
    assign LOCK = 1'b1;
endmodule

// Правильная реализация ODDR для ECP5
//module ODDRX1F (
//    output Q,
//    input D0, D1, SCLK, RST
//);
//    // Для синтеза - просто буфер, nextpnr заменит на примитив
//    assign Q = D0;
//endmodule

//module oddrx1f (
//    input  D,
//    input  SCLK,
//    input  RST,
//    output Q
//);
//
//assign Q = D;
//
//endmodule

// (c) fpga4fun.com & KNJN LLC 2013

////////////////////////////////////////////////////////////////////////
module OBUFDS(
	input I, // input
	output O, // positive output
	output OB // negative output
);

assign O = I;
assign OB = ~I;

endmodule
////////////////////////////////////////////////////////////////////////