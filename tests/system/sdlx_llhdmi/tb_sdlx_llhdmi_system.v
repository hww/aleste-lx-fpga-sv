`timescale 1ns/1ps

module tb_sdlx_llhdmi_system;

    // Тактовый сигнал
    reg clk_25mhz;
    
    // Выходы системы
    wire [3:0] gpdi_dp;
    wire [3:0] gpdi_dn;
    wire wifi_gpio0;
    
    // Генерация 25MHz такта (период 40ns)
    initial begin
        clk_25mhz = 0;
        forever #20 clk_25mhz = ~clk_25mhz; // 25MHz = 40ns период
    end
    
    // DUT
    sdlx_llhdmi_system dut (
        .clk_25mhz(clk_25mhz),
        .gpdi_dp(gpdi_dp),
        .gpdi_dn(gpdi_dn),
        .wifi_gpio0(wifi_gpio0)
    );
    
    // Мониторинг внутренних сигналов
    wire clk_16m, clk_27m, clk_270m;
    wire system_locked, video_locked;
    
    assign clk_16m = dut.clk_16m;
    assign clk_27m = dut.clk_tdms_pixel; 
    assign clk_270m = dut.clk_tdms;
    assign system_locked = dut.system_pll_inst.locked;
    assign video_locked = dut.vid_pll_inst.locked;
    
    // Запись VCD файла
    initial begin
        $dumpfile("sdlx_llhdmi_system.vcd");
        $dumpvars(0, tb_sdlx_llhdmi_system);
        
        // Симуляция 2ms для проверки частот
        #30000000; // 2ms
        
        $display("Simulation finished at %t ns", $time);
        $finish;
    end
    
    // Точное измерение частот
    initial begin
        #1500; // Ждем стабилизации PLL (1.5us)
        
        // Измерение 16MHz
        begin
            integer start_time, end_time, period;
            real frequency;
            start_time = $time;
            @(posedge clk_16m);
            @(posedge clk_16m); 
            end_time = $time;
            period = end_time - start_time;
            frequency = 1000000000.0 / period; // GHz to Hz
            $display("16MHz clock: period=%0d ns, freq=%0.2f MHz", period, frequency/1000000);
        end
        
        // Измерение 27MHz  
        begin
            integer start_time, end_time, period;
            real frequency;
            start_time = $time;
            @(posedge clk_27m);
            @(posedge clk_27m);
            end_time = $time; 
            period = end_time - start_time;
            frequency = 1000000000.0 / period;
            $display("27MHz clock: period=%0d ns, freq=%0.2f MHz", period, frequency/1000000);
        end
        
        // Измерение 270MHz
        begin
            integer start_time, end_time, period;
            real frequency;
            start_time = $time;
            @(posedge clk_270m);
            @(posedge clk_270m);
            end_time = $time; 
            period = end_time - start_time;
            frequency = 1000000000.0 / period;
            $display("270MHz clock: period=%0d ns, freq=%0.2f MHz", period, frequency/1000000);
        end
    end
    
    // Мониторинг синхросигналов паттерн-генератора
    initial begin
        #2000; // Ждем 2us
        
        forever begin
            @(posedge dut.pattern_hsync);
            $display("HSYNC at %t ns", $time);
        end
    end

endmodule