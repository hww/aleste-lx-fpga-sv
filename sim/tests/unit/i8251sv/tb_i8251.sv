// tb_i8251.sv - Testbench for i8251
module tb_i8251(
    input  logic        clk,          // Тактовый сигнал
    input  logic        clken,        // Тактовый разрешающий сигнал
    input  logic        reset_n,      // Сброс (активный 0)
    
    // Шина CPU
    input  logic [1:0]  addr,         // Адресные линии
    input  logic [7:0]  data_in,      // Шина данных (вход)
    output logic [7:0]  data_out,     // Шина данных (выход)
    input  logic        cs_n,         // Выбор чипа
    input  logic        rd_n,         // Чтение
    input  logic        wr_n,         // Запись
    input  logic        c_d,          // Control/Data select
    
    // Последовательный интерфейс
    input  logic        rx,           // Прием данных
    output logic        tx,           // Передача данных
    
    // Сигналы состояния
    output logic        tx_ready,     // Передатчик готов
    output logic        rx_ready,     // Приемник готов
    output logic        tx_empty,     // Буфер передатчика пуст
    output logic        rx_full,      // Буфер приемника полон
    
    // Сигналы прерываний
    output logic        irq           // Запрос прерывания
);

    
    i8251 dut (
        .clk(clk),
        .clken(clken),
        .reset_n(reset_n),
        .addr(2'b00),        // Подключен к земле, так как не используется
        .data_in(data_in),
        .data_out(data_out),
        .cs_n(cs_n),
        .rd_n(rd_n),
        .wr_n(wr_n),
        .c_d(c_d),
        .rx(rx),
        .tx(tx),
        .tx_ready(tx_ready),
        .rx_ready(rx_ready),
        .tx_empty(tx_empty),
        .rx_full(rx_full),
        .irq(irq)
    );
    
endmodule
