`default_nettype none

module uart #(
    parameter CLK_FREQ = 54_000_000,
    parameter BAUD_RATE = 115200,
    parameter OVERSAMPLING = 16
)(
    input wire rst_i,
    input wire clk_i,
    
    // transmitter
    input wire [7:0] tx_data_i,
    input wire  tx_data_valid_i,
    output wire tx_data_ready_o,
    output wire tx_o,
    output wire tx_baud_tick_o,

    // receiver
    input wire rx_i,
    input wire rx_ready_i,
    output wire rx_valid_o,
    output wire [7:0] rx_data_o,
    output wire rx_bit_tick_o,
	output wire rx_bit_tick_mid_o
);

// ==================== TRANSMITTER ====================
wire tx_data_ready;

uart_tx #(
    .CLK_FREQ(CLK_FREQ),
    .BAUD_RATE(BAUD_RATE)
) uart_tx_inst (
    .clk(clk_i),
    .rst_n(~rst_i),
    .tx_pin(tx_o),
    .tx_data(tx_data_i),
    .tx_data_valid(tx_data_valid_i),
    .tx_data_ready(tx_data_ready_o),
    .bit_tick(tx_baud_tick_o)
);


// ==================== RECEIVER ====================
wire rx_data_valid;

uart_rx #(
    .CLK_FREQ(CLK_FREQ), 
    .BAUD_RATE(BAUD_RATE)
) uart_rx_inst (
    .clk(clk_i),
    .rst_n(~rst_i),
    .rx_pin(rx_i),
    .rx_data_valid(rx_data_valid),  // valid от приемника
    .rx_data(rx_data_o),
    .rx_data_ready(rx_ready_i),   // ready = valid (no handshake)
    .bit_tick(rx_bit_tick_o),
    .bit_tick_mid(rx_bit_tick_mid_o)
);

// Преобразуем valid в ready (импульс на 1 такт)
assign rx_valid_o = rx_data_valid;

endmodule
