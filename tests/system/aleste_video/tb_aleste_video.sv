`timescale 1ns/1ps

module tb_aleste_video;

    // Тактовый сигнал
    logic clk_25mhz;
    
    // Выходы системы
    logic [2:0] gpdi_dp;
    logic [2:0] gpdi_dn;
    logic gpdi_clock_p;
    logic gpdi_clock_n;
    logic [7:0] debug_leds;
    
    // SDRAM сигналы (для мониторинга)
    logic sdram_clock;
    logic sdram_cke;
    logic sdram_cs_n;
    logic sdram_ras_n;
    logic sdram_cas_n;
    logic sdram_we_n;
    logic [12:0] sdram_a;
    logic [1:0] sdram_ba;
    logic [1:0] sdram_dm;
    logic [15:0] sdram_dq;
    
    // Мониторинг сигналов
    integer frame_count = 0;
    integer line_count = 0;
    integer sdram_access_count = 0;
    logic [7:0] last_debug_leds = 0;
    logic last_sdram_ack = 0;
    
    // Генерация 25MHz такта (период 40ns)
    initial begin
        clk_25mhz = 0;
        forever #20 clk_25mhz = ~clk_25mhz; // 25MHz = 40ns период
    end
    
    // DUT - aleste_video система
    aleste_video dut (
        .clk_25mhz(clk_25mhz),
        .gpdi_dp(gpdi_dp),
        .gpdi_dn(gpdi_dn),
        .gpdi_clock_p(gpdi_clock_p),
        .gpdi_clock_n(gpdi_clock_n),
        .sdram_clock(sdram_clock),
        .sdram_cke(sdram_cke),
        .sdram_cs_n(sdram_cs_n),
        .sdram_ras_n(sdram_ras_n),
        .sdram_cas_n(sdram_cas_n),
        .sdram_we_n(sdram_we_n),
        .sdram_a(sdram_a),
        .sdram_ba(sdram_ba),
        .sdram_dm(sdram_dm),
        .sdram_dq(sdram_dq),
        .debug_leds(debug_leds)
    );
    
    // Запись VCD файла
    initial begin
        $dumpfile("aleste_video.fst");
        $dumpvars(0, tb_aleste_video);
        
        // Ждем инициализацию PLL и SDRAM
        #200000; // 200us ждем PLL lock и SDRAM init
        $display("=== System should be initialized by now ===");
        
        // Симуляция 10ms для проверки работы
        #10_000_000; // 10ms
        
        $display("Simulation finished at %t ns", $time);
        $display("Frames: %0d, Lines: %0d, SDRAM accesses: %0d", 
                 frame_count, line_count, sdram_access_count);
        $finish;
    end
    
    // Мониторинг debug сигналов (LEDs)
    initial begin
        #250000; // Ждем 250us пока система стабилизируется
        
        $display("Starting to monitor system signals...");
        
        forever begin
            @(posedge clk_25mhz);
            
            // Detect changes in debug LEDs
            if (debug_leds !== last_debug_leds) begin
                $display("Debug LEDs changed: %b (PLL:%b RST:%b DE:%b VS:%b HS:%b MEM:%b SDRAM:%b LED:%b) at %t ns",
                         debug_leds,
                         debug_leds[7], // PLL locked
                         debug_leds[6], // System reset
                         debug_leds[5], // CRTC DE
                         debug_leds[4], // CRTC VSync
                         debug_leds[3], // CRTC HSync
                         debug_leds[2], // Memory valid
                         debug_leds[1], // SDRAM ack
                         debug_leds[0], // Always on
                         $time);
                
                // Count frames on VSync falling edge
                if (last_debug_leds[4] && !debug_leds[4]) begin // VSync falling edge
                    frame_count++;
                    if (frame_count % 5 == 0) begin
                        $display("Frame #%0d completed at %t ns", frame_count, $time);
                    end
                end
                
                // Count lines on HSync falling edge  
                if (last_debug_leds[3] && !debug_leds[3]) begin // HSync falling edge
                    line_count++;
                end
                
                last_debug_leds = debug_leds;
            end
        end
    end

// В tb_aleste_video.sv УБЕРИ ВСЮ логику с sdram_dq
// Оставь только подсчёт доступа:

// Мониторинг SDRAM активности  
initial begin
    #300000; // Ждем 300us
    
    forever begin
        @(posedge dut.sdram_req); // Ждем запрос от арбитра
        
        sdram_access_count++;
        if (sdram_access_count % 100 == 0) begin
            $display("SDRAM access #%0d at %t ns, addr: %h", 
                     sdram_access_count, $time, dut.sdram_addr);
        end
    end
end

    integer hdmi_activity = 0;

    logic [2:0] last_gpdi_dp = 0;
    logic [2:0] last_gpdi_dn = 0;
    logic last_gpdi_clock_p = 0;

    // Проверка HDMI выходов
    initial begin
        #350000; // Ждем 350us

        
        forever begin
            @(posedge clk_25mhz);
            
            // Проверяем изменение на HDMI выходах
            if (gpdi_dp !== last_gpdi_dp || gpdi_dn !== last_gpdi_dn) begin
                hdmi_activity++;
                if (hdmi_activity % 500 == 0) begin
                    $display("HDMI pixel activity #%0d at %t ns", hdmi_activity, $time);
                end
            end
            
            // Проверяем HDMI clock (должен быть 27MHz)
            if (gpdi_clock_p !== last_gpdi_clock_p) begin
                // Clock toggle - это нормально
            end
            
            last_gpdi_dp = gpdi_dp;
            last_gpdi_dn = gpdi_dn;
            last_gpdi_clock_p = gpdi_clock_p;
        end
    end
    
    // Периодический статус системы
    initial begin
        #100000;
        $display("=== Initial System Status at %t ns ===", $time);
        $display("Debug LEDs: %b", debug_leds);
        $display("HDMI: data=%b/%b, clock=%b/%b", 
                 gpdi_dp, gpdi_dn, gpdi_clock_p, gpdi_clock_n);
        $display("SDRAM: cs_n=%b, ras_n=%b, cas_n=%b, we_n=%b", 
                 sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n);
        $display("=====================================");
        
        // Повторяем каждые 1ms
        forever begin
            #1_000_000; // 1ms
            $display("=== System Status at %t ns ===", $time);
            $display("Debug LEDs: %b", debug_leds);
            $display("Frames: %0d, Lines: %0d, SDRAM accesses: %0d",
                     frame_count, line_count, sdram_access_count);
            $display("HDMI clock: %b (should be toggling)", gpdi_clock_p);
            $display("===============================");
        end
    end
    
    // Автоматическая проверка критических ошибок
    initial begin
        #500000; // Ждем 500us
        
        forever begin
            #100000; // Проверяем каждые 100us
            
            // Критическая ошибка: система всё ещё в сбросе
            if (debug_leds[6] === 1'b1) begin // system_reset still active
                $display("ERROR: System still in reset after 500us! Check PLL.");
            end
            
            // Критическая ошибка: PLL не locked
            if (debug_leds[7] === 1'b0) begin // PLL not locked
                $display("ERROR: PLL not locked! Check clock input.");
            end
            
            // Предупреждение: нет видеосигналов
            if (frame_count == 0 && $time > 2_000_000) begin // 2ms без кадров
                $display("WARNING: No video frames detected after 2ms");
            end
        end
    end

endmodule
