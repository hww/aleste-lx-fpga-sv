`timescale 1ns/1ps

module uart_tb();

reg clk = 0;
reg rst = 0;

// Test control
reg [7:0] tx_data = 0;
reg tx_valid = 0;
wire tx_ready;

reg rx_ready = 0;
wire rx_valid;
wire [7:0] rx_data;

// Loopback connection
wire tx_pin;
wire rx_pin = tx_pin;  // Connect TX to RX

// UART module
uart #(
    .CLK_FREQ(54_000_000),
    .BAUD_RATE(115200)
) uart_inst (
    .clk_i(clk),
    .rst_i(rst),
    
    // transmitter
    .tx_data_i(tx_data),
    .tx_data_valid_i(tx_valid),
    .tx_data_ready_o(tx_ready),
    .tx_o(tx_pin),
    .tx_baud_tick_o(),
    
    // receiver
    .rx_i(rx_pin),
    .rx_ready_i(rx_ready),
    .rx_valid_o(rx_valid),
    .rx_data_o(rx_data),
    .rx_bit_tick_o(),
    .rx_bit_tick_mid_o()
);

// Clock generation
always #10 clk = ~clk;  // 50 MHz (20ns period)

initial begin
    $dumpfile("uart_tb.vcd");
    $dumpvars(0, uart_tb);
    
    // Reset sequence
    #15 rst = 1'b1;
    #100 rst = 1'b0;
    
    // Wait a bit
    #1000;
    
    // Send bytes 0x00 to 0xFF
    for (integer i = 0; i < 256; i = i + 1) begin
        send_byte(i[7:0]);
        receive_and_check(i[7:0]);
    end
    
    $display("Test PASSED: All 256 bytes verified!");
    $display("SUCCESS: All tests passed");  // Добавь именно SUCCESS
    #1000;
    $finish(0);  // Явный код возврата 0
end

// Task to send one byte
task send_byte(input [7:0] data);
    begin
        // Wait for transmitter to be ready
        wait(tx_ready == 1'b1);
        
        // Apply data and assert valid
        tx_data = data;
        tx_valid = 1'b1;
        
        // Wait for transmitter to accept data (ready goes low)
        @(posedge clk);
        while(tx_ready == 1'b1) @(posedge clk);
        
        // Deassert valid
        tx_valid = 1'b0;
        
        $display("Sent byte: 0x%h", data);
    end
endtask
task receive_and_check(input [7:0] expected);
    begin
        // Ждем valid синхронно
        @(posedge clk);
        while(rx_valid !== 1'b1) @(posedge clk);
        
        // Ставим ready на следующий такт
        rx_ready <= 1'b1;  // Неблокирующее присваивание!
        
        @(posedge clk);
        // Теперь valid=1 и ready=1
        if (rx_data !== expected) begin
            $display("ERROR: Expected 0x%h, received 0x%h", expected, rx_data);
            $finish;
        end
        
        rx_ready <= 1'b0;
        
        @(posedge clk);
    end
endtask

// Timeout
initial begin
    #200_000_000;  // 100ms timeout
    $display("ERROR: Test timeout");
    $finish;
end

endmodule
