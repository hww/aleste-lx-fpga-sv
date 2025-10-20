`default_nettype none
module uart(
    input wire clk_i,
    input wire rst_i,  // Добавлен rst_i
    
    // transmitter
    input wire [7:0] tx_data_i,
    input wire tx_wr_i,
    output wire tx_o,
    output wire tx_busy_o,
	output wire tx_clk_o,

    // receiver
    input wire rx_i,
    output wire rx_ready_o,
    input wire rx_ready_clr_i,
    output wire [7:0] rx_data_o,
	output wire rx_clk_o
);

wire rx_clk_en, tx_clk_en;

baud_rate_gen uart_baud(
    .rst_i(rst_i),
    .clk_i(clk_i),
    .rxclk_en_o(rx_clk_o),
    .txclk_en_o(tx_clk_o));

transmitter uart_tx(
    .rst_i(rst_i),
    .clk_i(clk_i),
    .clken_i(tx_clk_o),
	// Serial
    .tx_o(tx_o),
	// Bus
    .wr_i(tx_wr_i),          
    .data_i(tx_data_i),     
    .busy_o(tx_busy_o)
);

receiver uart_rx(
    .rst_i(rst_i),
    .clk_i(clk_i), 
    .clken_i(rx_clk_o),
	// Serial	
    .rx_i(rx_i),              
	// Bus
    .ready_clr_i(rx_ready_clr_i),
    .ready_o(rx_ready_o),
    .data_o(rx_data_o)
);

endmodule
