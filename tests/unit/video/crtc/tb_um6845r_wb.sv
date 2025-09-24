module tb_um6845r_wb(
	// Wishbone Interface
	input            clk_i,
	input            rst_i,
	
	input      [0:0] adr_i,
	input      [7:0] dat_i,
	output reg [7:0] dat_o,
	input            we_i,
	input            stb_i,
	output reg       ack_o,
	
	// CRTC Configuration
	input            crtc_type_i,
	
	// Video Outputs
	output reg       vsync_o,
	output reg       hsync_o,
	output           de_o,
	output           field_o,
	output           cursor_o,
	
	// Memory Address
	output    [13:0] ma_o,
	output     [4:0] ra_o
);

	// Instantiate DUT
	UM6845R_wb dut (
		// Wishbone Interface
		.clk_i(clk_i),
		.rst_i(rst_i),
		
		.adr_i(adr_i),
		.dat_i(dat_i),
		.dat_o(dat_o),
		.we_i(we_i),
		.stb_i(stb_i),
		.ack_o(ack_o),
		
		// CRTC Configuration
		.crtc_type_i(crtc_type_i),
		
		// Video Outputs
		.vsync_o(vsync_o),
		.hsync_o(hsync_o),
		.de_o(de_o),
		.field_o(field_o),
		.cursor_o(cursor_o),
		
		// Memory Address
		.ma_o(ma_o),
		.ra_o(ra_o)
	);

endmodule
