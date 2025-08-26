module tb_i8255_wb (
	// Wishbone Interface
	input            clk_i,
	input            rst_i,
	
	input      [1:0] adr_i,
	input      [7:0] dat_i,
	output     [7:0] dat_o,
	input            we_i,
	input            stb_i,
	output           ack_o,
	
	// PPI Ports
	input      [7:0] ipa_i, 
	output     [7:0] opa_o,
	input      [7:0] ipb_i, 
	output     [7:0] opb_o,
	input      [7:0] ipc_i, 
	output     [7:0] opc_o
);

// Internal signals for i8255_wb
wire [1:0] ppi_addr;
wire [7:0] ppi_dat_i;
wire [7:0] ppi_dat_o;
wire       ppi_cs;
wire       ppi_we;
wire       ppi_oe;

// Signal mapping from Wishbone to i8255_wb
assign ppi_addr = adr_i;
assign ppi_dat_i = dat_i;
assign ppi_cs = stb_i;
assign ppi_we = we_i;
assign ppi_oe = ~we_i;  // oe active during read operations

// DUT instantiation - i8255_wb module
i8255_wb dut (
    // Wishbone Interface
    .clk_i(clk_i),
    .rst_i(rst_i),
    .adr_i(ppi_addr),
    .dat_i(ppi_dat_i),
    .dat_o(ppi_dat_o),
    .we_i(ppi_we),
    .stb_i(ppi_cs),
    .ack_o(ack_o),
    
    // PPI Ports
    .ipa_i(ipa_i),
    .opa_o(opa_o),
    .ipb_i(ipb_i),
    .opb_o(opb_o),
    .ipc_i(ipc_i),
    .opc_o(opc_o)
);

// Data output assignment
assign dat_o = ppi_dat_o;

endmodule

