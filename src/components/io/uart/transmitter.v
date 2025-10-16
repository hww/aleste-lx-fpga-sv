`default_nettype none
module transmitter(
	input wire rst_i,
	input wire clk_i,
	input wire clken_i,
	input wire [7:0] data_i,
	input wire wr_i,
	output wire busy_o,
	output reg tx_o
);

initial begin
	 tx_o = 1'b1;
end

parameter STATE_IDLE	= 2'b00;
parameter STATE_START	= 2'b01;
parameter STATE_DATA	= 2'b10;
parameter STATE_STOP	= 2'b11;

reg [7:0] data = 8'h00;
reg [2:0] bitpos = 3'h0;
reg [1:0] state = STATE_IDLE;

always @(posedge clk_i) begin
	if (rst_i) begin 

	end begin
		case (state)
		STATE_IDLE: begin
			if (wr_i) begin
				state <= STATE_START;
				data <= data_i;
				bitpos <= 3'h0;
			end
		end
		STATE_START: begin
			if (clken_i) begin
				tx_o <= 1'b0;
				state <= STATE_DATA;
			end
		end
		STATE_DATA: begin
			if (clken_i) begin
				if (bitpos == 3'h7)
					state <= STATE_STOP;
				else
					bitpos <= bitpos + 3'h1;
				tx_o <= data[bitpos];
			end
		end
		STATE_STOP: begin
			if (clken_i) begin
				tx_o <= 1'b1;
				state <= STATE_IDLE;
			end
		end
		default: begin
			tx_o <= 1'b1;
			state <= STATE_IDLE;
		end
		endcase
	end
end

assign busy_o = (state != STATE_IDLE);

endmodule
