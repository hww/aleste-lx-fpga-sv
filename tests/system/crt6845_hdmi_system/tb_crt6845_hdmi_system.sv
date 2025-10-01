`timescale 1ns/1ps

module tb_crt6845_hdmi_system;

    // Тактовый сигнал
    logic clk_25mhz;
    
    // Выходы системы
    logic [3:0] gpdi_dp;
    logic [3:0] gpdi_dn;
    logic wifi_gpio0;
    logic debug_0, debug_1, debug_2;
    
    // Мониторинг сигналов
    integer newline_count = 0;
    integer newframe_count = 0;
    integer hdmi_activity = 0;
    logic last_debug_0 = 0;
    logic last_debug_1 = 0;
    logic [3:0] last_gpdi_dp = 0;
    logic [3:0] last_gpdi_dn = 0;
    
    // Генерация 25MHz такта (период 40ns)
    initial begin
        clk_25mhz = 0;
        forever #20 clk_25mhz = ~clk_25mhz; // 25MHz = 40ns период
    end
    
    // DUT
    crt6845_hdmi_system dut (
        .clk_25mhz(clk_25mhz),
        .gpdi_dp(gpdi_dp),
        .gpdi_dn(gpdi_dn),
        .wifi_gpio0(wifi_gpio0),
        .debug_0(debug_0),
        .debug_1(debug_1), 
        .debug_2(debug_2)
    );
    
    // Запись VCD файла
    initial begin
        $dumpfile("crt6845_hdmi_system.fst");
        $dumpvars(0, tb_crt6845_hdmi_system);
        
        // Ждем инициализацию и покажем сообщения
        #100000; // 100us ждем PLL lock
        $display("PLL should be locked by now");
        
        // Симуляция 5ms для проверки работы
        #50_000_000; // 5ms
        
        $display("Simulation finished at %t ns", $time);
        $finish;
    end
    
    // Мониторинг debug сигналов
    initial begin
        #150000; // Ждем 150us пока система стабилизируется
        
        $display("Starting to monitor video signals...");
        
        forever begin
            @(posedge clk_25mhz);
            
            // Detect rising edge on debug_0 (newline)
            if (!last_debug_0 && debug_0) begin
                newline_count++;
                $display("Newline #%0d at %t ns", newline_count, $time);
            end
            
            // Detect rising edge on debug_1 (newframe)
            if (!last_debug_1 && debug_1) begin
                newframe_count++;
                if (newframe_count % 10 == 0) begin
                    $display("Newframe #%0d at %t ns", newframe_count, $time);
                end
            end
            
            last_debug_0 = debug_0;
            last_debug_1 = debug_1;
        end
    end
    
    // Проверка HDMI выходов
    initial begin
        #200000; // Ждем 200us
        
        forever begin
            @(posedge clk_25mhz);
            
            // Проверяем изменение на HDMI выходах
            if (gpdi_dp !== last_gpdi_dp || gpdi_dn !== last_gpdi_dn) begin
                hdmi_activity++;
                if (hdmi_activity % 1000 == 0) begin
                    $display("HDMI activity #%0d: dp=%b dn=%b at %t ns", 
                             hdmi_activity, gpdi_dp, gpdi_dn, $time);
                end
            end
            
            last_gpdi_dp = gpdi_dp;
            last_gpdi_dn = gpdi_dn;
        end
    end
    
    // Периодический статус
    initial begin
        #50000;
        $display("=== System Status at %t ns ===", $time);
        $display("Debug signals: newline=%b, newframe=%b, rd=%b", 
                 debug_0, debug_1, debug_2);
        $display("HDMI outputs: dp=%b, dn=%b", gpdi_dp, gpdi_dn);
        $display("==============================");
        
        // Повторяем каждые 100us
        forever begin
            #100000;
            $display("=== Status at %t ns ===", $time);
            $display("Debug: newline=%b, newframe=%b, rd=%b", 
                     debug_0, debug_1, debug_2);
            $display("HDMI: dp=%b, dn=%b", gpdi_dp, gpdi_dn);
            $display("=======================");
        end
    end

endmodule
