module u765_wb_tb2;

    // Тактовый сигнал - ДОЛЖЕН БЫТЬ!
    logic wb_clk_i = 0;
    always #5 wb_clk_i = ~wb_clk_i; // Тактирование 100MHz
    
    // Остальные сигналы
    logic wb_rst_i = 1;
    logic wb_cyc_i = 0;
    logic wb_stb_i = 0;
    logic wb_we_i = 0;
    logic [2:0] wb_adr_i = 0;
    logic [7:0] wb_dat_i = 0;
    logic [7:0] wb_dat_o;
    logic wb_ack_o;
    
    // Отладочный сигнал
    logic wb_access = wb_cyc_i && wb_stb_i;
    
    // Инстанс DUT
    u765_wb dut (.*);
    
    // Простой тест для проверки тактирования
    initial begin
        $display("=== SIMULATION STARTED ===");
        
        // Сброс
        #10;
        wb_rst_i = 0;
        $display("Time %0t: Reset released", $time);
        
        // Ждем немного
        #20;
        
        // Первая транзакция
        wb_cyc_i = 1;
        wb_stb_i = 1;
        wb_we_i = 0;
        wb_adr_i = 3'b000;
        $display("Time %0t: Transaction started", $time);
        
        // Ждем ACK
        wait(wb_ack_o);
        $display("Time %0t: ACK received!", $time);
        
        // Завершаем
        wb_cyc_i = 0;
        wb_stb_i = 0;
        
        #100;
        $display("=== SIMULATION FINISHED ===");
        $finish;
    end
    
    // Мониторинг каждого такта
    always @(posedge wb_clk_i) begin
        $display("Time %0t: clk=1 cyc=%b stb=%b ack=%b access=%b", 
                $time, wb_cyc_i, wb_stb_i, wb_ack_o, wb_access);
    end
    
    always @(negedge wb_clk_i) begin
        $display("Time %0t: clk=0", $time);
    end

endmodule
