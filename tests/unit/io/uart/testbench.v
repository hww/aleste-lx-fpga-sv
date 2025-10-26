/*
 * Simple testbench for UART.  Loop the rx and tx pins to each other and send
 * incrementing bytes, make sure that we receive what we expected.
 */

module uart_tx_test();

reg [7:0] tx_data = 0;
reg clk = 0;
reg tx_wr = 0;
reg rst = 0;

wire tx_busy;
wire rx_ready;
wire [7:0] rx_data;

wire loopback;

// Новый интерфейс UART
uart test_uart(
    .clk_i(clk),
    .rst_i(rst),
    
    // transmitter
    .tx_data_i(tx_data),
    .tx_wr_i(tx_wr),
    .tx_o(loopback),
    .tx_busy_o(tx_busy),
    
    // receiver  
    .rx_i(loopback),
    .rx_ready_o(rx_ready),
    .rx_data_o(rx_data)
);

always begin
    #1 clk = ~clk;  // 50MHz clock
end

initial begin
    $dumpfile("uart.vcd");
    $dumpvars(0, uart_tx_test);
    
    // Сброс
    #10 rst <= 1'b1;
    #20 rst <= 1'b0;
    #50;
    
    // Первая передача
    tx_wr <= 1'b1;
    #1 tx_wr <= 1'b0;
end


always @(posedge rx_ready) begin
    #4
    if (rx_data != tx_data) begin
        $display("FAIL: rx data %x does not match tx %x", rx_data, tx_data);
        $finish;
    end else begin
        if (rx_data == 8'hff) begin
            $display("SUCCESS: all bytes verified");
            $finish;
        end
        
        // Следующий байт
        tx_data <= tx_data + 1'b1;
        // Ждем пока передатчик освободится
        wait(!tx_busy);
        #10 tx_wr <= 1'b1;
        #2 tx_wr <= 1'b0;
    end
end

// Таймаут на случай зависания
initial begin
    #30000000;
    $display("FAIL: Test timeout");
    $finish;
end

endmodule
