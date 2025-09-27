`timescale 1ns/1ps

module hdmi_kiss_test_tb;

    logic clk_25mhz;
    logic rst;
    logic [3:0] gpdi_dp, gpdi_dn;
    logic led_r_o;
    logic led_g_o;
    logic led_b_o;
    logic debug_0;
    logic debug_1;
    logic debug_2;
    logic debug_3;
    logic debug_4;
    logic debug_5;
    logic debug_6;
    logic debug_7;

    // Генерация тактовой 25MHz
    always #20 clk_25mhz = ~clk_25mhz;
    
    hdmi_kiss_test dut (.*);
    
    initial begin
        $dumpfile("hdmi_kiss_test.fst");
        $dumpvars(0, hdmi_kiss_test_tb);  // Записываем все сигналы
        
        // Инициализация
        clk_25mhz = 0;
        rst = 0;
        
        $display("=== Начало теста HDMI ===");
        
        // Сброс
        #100 rst = 1;
        #100 rst = 0;
        
        // Ждем ровно 2 кадра PAL (40ms)
        //#40000000;  // 40ms
        #40000000;  // 40ms
        //#4000000;  // 400mks

        $display("=== Конец теста (2 кадра PAL) ===");
        $display("Проверьте VCD файл: hdmi_test.vcd");
        
        $finish;
    end

endmodule
