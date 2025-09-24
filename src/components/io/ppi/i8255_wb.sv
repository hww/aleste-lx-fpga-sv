module i8255_wb
(
	// Wishbone Interface
	input            clk_i,
	input            rst_i,
	
	input      [1:0] adr_i,
	input      [7:0] dat_i,
	output reg [7:0] dat_o,
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

// Internal registers
reg [7:0] mode;
reg [7:0] opa_r;
reg [7:0] opb_r;
reg [7:0] opc_r;

// Port output assignments
assign opa_o = (~mode[4] | mode[6]) ? opa_r : 8'hFF;
assign opb_o = (~mode[1])           ? opb_r : 8'hFF;
assign opc_o[7:4] = (~mode[3])      ? opc_r[7:4] : 4'hF;
assign opc_o[3:0] = (~mode[0])      ? opc_r[3:0] : 4'hF;

// Port C mask generation
reg [7:0] maskC;
always @(*) begin
	casex({mode[6:4], mode[2]})
		'b1xx0: maskC = 8'b00000111;
		'b1xx1: maskC = 8'b00000000;
		'b0110: maskC = 8'b00110111;
		'b0111: maskC = 8'b00110000;
		'b0100: maskC = 8'b11000111;
		'b0101: maskC = 8'b11000000;
		'b00x1: maskC = 8'b11111000;
	  default: maskC = 8'b11111111;
	endcase
end

// CPC quirk for tape motor
wire [3:0] tapemotor = (~mode[6] & mode[5] & ~mode[4] & ~mode[2]) ? 4'h2 : 4'h0;

// Wishbone FSM
reg ack_next;
reg [7:0] dat_next;

always @(posedge clk_i) begin
	if (rst_i) begin
		{opa_r, opb_r, opc_r, mode} <= {8'h00, 8'h00, 8'h00, 8'h9B};
		ack_o <= 1'b0;
		dat_o <= 8'hFF;
	end else begin
		// Register outputs
		ack_o <= ack_next;
		dat_o <= dat_next;
		
		// Clear ack after one cycle
		if (ack_o) begin
			ack_o <= 1'b0;
		end
		
		// Write operations
		if (stb_i && we_i && !ack_o) begin
			case(adr_i)
				2'b00: opa_r <= dat_i;
				2'b01: opb_r <= dat_i;
				2'b10: opc_r <= (dat_i & maskC) | (opc_r & ~maskC);
				2'b11: begin
					if (~dat_i[7]) 
						opc_r[dat_i[3:1]] <= dat_i[0];
					else 
						{opa_r, opb_r, opc_r, mode} <= {8'h00, 8'h00, 8'h00, dat_i};
				end
			endcase
		end
	end
end

// Combinatorial next state logic
always @(*) begin
	ack_next = 1'b0;
	dat_next = 8'hFF;
	
	if (stb_i && !ack_o) begin
		ack_next = 1'b1;
		
		if (we_i) begin
			// Write operation - data out is don't care
			dat_next = 8'hFF;
		end else begin
			// Read operation
			case(adr_i)
				2'b00: dat_next = (mode[4] | mode[6]) ? ipa_i : opa_r;
				2'b01: dat_next = mode[1] ? ipb_i : opb_r;
				2'b10: dat_next = {mode[3] ? (ipc_i[7:4] & maskC[7:4]) | tapemotor : opc_r[7:4], 
				                 mode[0] ? ipc_i[3:0] & maskC[3:0] : opc_r[3:0]};
				2'b11: dat_next = mode;
				default: dat_next = 8'hFF;
			endcase
		end
	end
end

endmodule
