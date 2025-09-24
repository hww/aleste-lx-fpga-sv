module UM6845R_wb(
	// Wishbone Interface
	input            clk_i,
	input            rst_i,
	
	input      [0:0] adr_i,    // RS signal (0=address, 1=data)
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

// Internal signals for UM6845R
wire        crtc_clock;
wire        crtc_clken;
wire        crtc_nclken;
wire        crtc_nreset;
wire        crtc_type;
wire        crtc_enable;
wire        crtc_ncs;
wire        crtc_r_nw;
wire        crtc_rs;
wire [7:0]  crtc_di;
wire [7:0]  crtc_do;
wire        crtc_vsync;
wire        crtc_hsync;
wire        crtc_de;
wire        crtc_field;
wire        crtc_cursor;
wire [13:0] crtc_ma;
wire [4:0]  crtc_ra;

// Signal mapping
assign crtc_clock   = clk_i;
assign crtc_clken   = 1'b1;      // Always enabled for Wishbone
assign crtc_nclken  = 1'b0;      // Active low, so disable
assign crtc_nreset  = ~rst_i;    // Invert reset polarity
assign crtc_type    = crtc_type_i;
assign crtc_enable  = stb_i;     // Enable when strobe is active
assign crtc_ncs     = ~stb_i;    // Chip select active low
assign crtc_r_nw    = ~we_i;     // Read/Write: 1=Read, 0=Write
assign crtc_rs      = adr_i[0];  // Register select
assign crtc_di      = dat_i;

// DUT instantiation
UM6845R dut (
	.CLOCK(crtc_clock),
	.CLKEN(crtc_clken),
	.nCLKEN(crtc_nclken),
	.nRESET(crtc_nreset),
	.CRTC_TYPE(crtc_type),
	
	.ENABLE(crtc_enable),
	.nCS(crtc_ncs),
	.R_nW(crtc_r_nw),
	.RS(crtc_rs),
	.DI(crtc_di),
	.DO(crtc_do),
	
	.VSYNC(crtc_vsync),
	.HSYNC(crtc_hsync),
	.DE(crtc_de),
	.FIELD(crtc_field),
	.CURSOR(crtc_cursor),
	
	.MA(crtc_ma),
	.RA(crtc_ra)
);

// Wishbone acknowledge generation
always @(posedge clk_i) begin
	if (rst_i) begin
		ack_o <= 1'b0;
		dat_o <= 8'h00;
		vsync_o <= 1'b0;
		hsync_o <= 1'b0;
	end else begin
		// Generate acknowledge
		ack_o <= stb_i & ~ack_o;
		
		// Register data output on read operations
		if (stb_i & ~we_i & ~ack_o) begin
			dat_o <= crtc_do;
		end
		
		// Register video outputs (optional, for better timing)
		vsync_o <= crtc_vsync;
		hsync_o <= crtc_hsync;
	end
end

// Direct output assignments
assign de_o = crtc_de;
assign field_o = crtc_field;
assign cursor_o = crtc_cursor;
assign ma_o = crtc_ma;
assign ra_o = crtc_ra;

endmodule
