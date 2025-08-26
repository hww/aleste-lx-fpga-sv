module tb_i8255(
	input           reset,
	input           clk,

	input     [1:0] addr,
	input     [7:0] idata,
	output reg[7:0] odata,
	input           cs,
	input           we,
	input           oe,

	input     [7:0] ipa, 
	output    [7:0] opa,
	input     [7:0] ipb, 
	output    [7:0] opb,
	input     [7:0] ipc, 
	output    [7:0] opc
);


// DUT instantiation - ПРАВИЛЬНОЕ подключение!
i8255 dut (
    .reset(reset),      // input от тестбенча
    .cke(1),
    .clk_sys(clk),  // input от тестбенча
    .addr(addr),        // input от тестбенча
    .idata(idata),      // input от тестбенча
    .odata(odata),      // OUTPUT к тестбенчу - ПРАВИЛЬНО!
    .cs(cs),            // input от тестбенча
    .we(we),            // input от тестбенча
    .oe(oe),            // input от тестбенча
    .ipa(ipa),          // input от тестбенча
    .opa(opa),          // OUTPUT к тестбенчу
    .ipb(ipb),          // input от тестбенча
    .opb(opb),          // OUTPUT к тестбенчу
    .ipc(ipc),          // input от тестбенча
    .opc(opc)           // OUTPUT к тестбенчу
);

endmodule
