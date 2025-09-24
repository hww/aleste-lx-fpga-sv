`timescale 1ns/1ps

module tb_top_hdmi_test;

    logic clk_25mhz;
    logic rst;
    logic [3:0] gpdi_dp, gpdi_dn;
    logic led_r_o;
    logic led_g_o;
    logic led_b_o;
    
    // Генерация тактовой 25MHz
    always #20 clk_25mhz = ~clk_25mhz;
    
    hdmi_kiss_test dut (.*);
    
    initial begin
        $dumpfile("hdmi_kiss_test.vcd");
        $dumpvars(0, tb_top_hdmi_test);  // Записываем все сигналы
        
        // Инициализация
        clk_25mhz = 0;
        rst = 0;
        
        $display("=== Начало теста HDMI ===");
        
        // Сброс
        #100 rst = 1;
        #100 rst = 0;
        
        // Ждем ровно 2 кадра PAL (40ms)
        #40000000;  // 40ms
        
        $display("=== Конец теста (2 кадра PAL) ===");
        $display("Проверьте VCD файл: hdmi_test.vcd");
        
        $finish;
    end

endmodule
