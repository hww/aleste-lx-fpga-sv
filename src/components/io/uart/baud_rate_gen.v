/*
 * Hacky baud rate generator to divide a 50MHz clock into a 115200 baud
 * rx/tx pair where the rx clcken oversamples by 16x.
 */
`default_nettype none
module baud_rate_gen(
	input wire clk_i,
	input wire clke_i,
	input wire rst_i,
	output wire rxclk_en_o,
	output wire txclk_en_o
);

parameter RX_ACC_MAX = 54000000 / (115200 * 16);
parameter TX_ACC_MAX = 54000000 / 115200;
parameter RX_ACC_WIDTH = $clog2(RX_ACC_MAX);
parameter TX_ACC_WIDTH = $clog2(TX_ACC_MAX);

reg [RX_ACC_WIDTH - 1:0] rx_acc = 0;
reg [TX_ACC_WIDTH - 1:0] tx_acc = 0;



always @(posedge clk_i) begin
	if (rst_i) begin
		rx_acc <= 0;
		rxclk_en_o <= 0;
	end else if (clke_i) begin
		rxclk_en_o <= (rx_acc == 5'd0);
		if (rx_acc == RX_ACC_MAX[RX_ACC_WIDTH - 1:0])
			rx_acc <= 0;
		else begin
			rx_acc <= rx_acc + 5'b1;
		end
	end
end

always @(posedge clk_i) begin
	if (rst_i) begin
		tx_acc <= 0;
		txclk_en_o <= 0;
	end else if (clke_i) begin
		txclk_en_o <= (tx_acc == 9'd0);
		if (tx_acc == TX_ACC_MAX[TX_ACC_WIDTH - 1:0])
			tx_acc <= 0;
		else
			tx_acc <= tx_acc + 9'b1;
	end
end

endmodule
