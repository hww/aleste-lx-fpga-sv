`default_nettype none

module uart #(
    parameter CLK_FREQ = 54_000_000,
    parameter BAUD_RATE = 115200,
    parameter OVERSAMPLING = 16 // DOES NOT WORK IF 8 BECAUSE DEBUNCING SLOW
)(
    input wire clk_i,
    input wire rst_i,
    
    // transmitter
    input wire [7:0] tx_data_i,
    input wire tx_wr_i,
    output wire tx_o,
    output wire tx_busy_o,
    output wire tx_baud_tick_o,

    // receiver
    input wire rx_i,
    output wire rx_ready_o,
    output wire [7:0] rx_data_o,
    
    // optional advanced features
    output wire rx_idle_o,
    output wire rx_eop_o,
    output wire rx_os_tick_o
);

// ==================== TRANSMITTER ====================
// Адаптация интерфейсов
wire tx_busy;
uart_tx #(
    .CLK_FREQ(CLK_FREQ),
    .BAUD_RATE(BAUD_RATE)
) uart_tx_inst (
    .rst(rst_i),
    .clk(clk_i),
    .tx_start(tx_wr_i),     // Твой tx_wr_i -> их tx_start
    .tx_data(tx_data_i),    // Прямое подключение
    .tx(tx_o),              // Выход
    .tx_busy(tx_busy),       // Статус занятости
    .bit_tick(tx_baud_tick_o)
);

assign tx_busy_o = tx_busy;

// ==================== RECEIVER ====================
// Адаптация интерфейсов - здесь основная работа
uart_rx #(
    .CLK_FREQ(CLK_FREQ), 
    .BAUD_RATE(BAUD_RATE),
    .OVERSAMPLING(OVERSAMPLING)
) uart_rx_inst (
    .rst(rst_i),
    .clk(clk_i),
    .rx(rx_i),
    .rx_ready(rx_ready_o),  // Их rx_ready -> наш rx_ready_o
    .rx_data(rx_data_o),    // Прямое подключение
    .rx_idle(rx_idle_o),    // Дополнительные фичи
    .rx_eop(rx_eop_o),      // Дополнительные фичи
    .os_tick(rx_os_tick_o)
);

endmodule
