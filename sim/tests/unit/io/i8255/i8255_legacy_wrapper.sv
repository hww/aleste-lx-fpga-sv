// Или если нужно преобразовать старый i8255 в Wishbone:

module i8255_legacy_wrapper(
	// Wishbone Interface
	input            clk_i,
	input            rst_i,
	
	input      [1:0] adr_i,
	input      [7:0] dat_i,
	output     [7:0] dat_o,
	input            we_i,
	input            stb_i,
	output reg       ack_o,
	
	// PPI Ports
	input      [7:0] ipa_i, 
	output     [7:0] opa_o,
	input      [7:0] ipb_i, 
	output     [7:0] opb_o,
	input      [7:0] ipc_i, 
	output     [7:0] opc_o
);

// Internal signals for legacy i8255
wire [7:0] ppi_odata;

// DUT instantiation - legacy i8255 module
i8255 dut (
    .reset(rst_i),
    .clk_sys(clk_i),
    .cke(1'b1),
    .addr(adr_i),
    .idata(dat_i),
    .odata(ppi_odata),
    .cs(stb_i),
    .we(we_i),
    .oe(~we_i),
    .ipa(ipa_i),
    .opa(opa_o),
    .ipb(ipb_i),
    .opb(opb_o),
    .ipc(ipc_i),
    .opc(opc_o)
);

// Wishbone acknowledge generation
always @(posedge clk_i) begin
	if (rst_i) begin
		ack_o <= 1'b0;
	end else begin
		ack_o <= stb_i & ~ack_o;
	end
end

// Data output
assign dat_o = ppi_odata;

endmodule
