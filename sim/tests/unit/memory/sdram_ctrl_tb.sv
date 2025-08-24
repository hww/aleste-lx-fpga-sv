`timescale 1ns/1ps

module sdram_ctrl_tb;

    // Параметры контроллера
    localparam CLK_FREQ = 100_000_000;
    localparam SDRAM_FREQ = 100_000_000;
    localparam SDRAM_ADDR_WIDTH = 13;
    localparam SDRAM_COL_WIDTH = 9;
    localparam SDRAM_ROW_WIDTH = 13;
    localparam SDRAM_BANK_WIDTH = 2;
    localparam WB_ADDR_WIDTH = 24;
    localparam WB_DATA_WIDTH = 16;
    localparam CAS_LATENCY = 2;
    localparam REFRESH_CYCLES = 7800;
    localparam SDRAM_SIZE_MB = 32;

    // Тактовый сигнал и сброс
    logic wb_clk_i = 1'b0;
    logic wb_rst_i = 1'b1;
    
    // Wishbone интерфейс
    logic wb_cyc_i = 1'b0;
    logic wb_stb_i = 1'b0;
    logic wb_ack_o;
    logic wb_we_i = 1'b0;
    logic [WB_ADDR_WIDTH-1:0] wb_adr_i = '0;
    logic [WB_DATA_WIDTH-1:0] wb_dat_i = '0;
    logic [WB_DATA_WIDTH-1:0] wb_dat_o;
    logic [WB_DATA_WIDTH/8-1:0] wb_sel_i = 2'b11; // Всегда выбираем оба байта
    
    // SDRAM интерфейс
    wire [WB_DATA_WIDTH-1:0] sdram_dq;
    logic [SDRAM_ADDR_WIDTH-1:0] sdram_addr;
    logic [WB_DATA_WIDTH/8-1:0] sdram_dqm;
    logic [SDRAM_BANK_WIDTH-1:0] sdram_ba;
    logic sdram_cs_n;
    logic sdram_we_n;
    logic sdram_ras_n;
    logic sdram_cas_n;
    logic sdram_cke;
    
    // Отладочные сигналы
    logic [2:0] debug_state;
    
    // Драйверы для шины данных
    logic [WB_DATA_WIDTH-1:0] sdram_dq_drive = '0;
    logic sdram_dq_drive_en = 1'b0;
    
    assign sdram_dq = sdram_dq_drive_en ? sdram_dq_drive : {WB_DATA_WIDTH{1'bz}};

    // Тактовый сигнал
    always #5ns wb_clk_i = ~wb_clk_i;

    // DUT - контроллер SDRAM
    sdram_ctrl_wb #(
        .CLK_FREQ(CLK_FREQ),
        .SDRAM_FREQ(SDRAM_FREQ),
        .SDRAM_ADDR_WIDTH(SDRAM_ADDR_WIDTH),
        .SDRAM_COL_WIDTH(SDRAM_COL_WIDTH),
        .SDRAM_ROW_WIDTH(SDRAM_ROW_WIDTH),
        .SDRAM_BANK_WIDTH(SDRAM_BANK_WIDTH),
        .WB_ADDR_WIDTH(WB_ADDR_WIDTH),
        .WB_DATA_WIDTH(WB_DATA_WIDTH),
        .CAS_LATENCY(CAS_LATENCY),
        .REFRESH_CYCLES(REFRESH_CYCLES)
    ) dut (
        .wb_clk_i(wb_clk_i),
        .wb_rst_i(wb_rst_i),
        .wb_cyc_i(wb_cyc_i),
        .wb_stb_i(wb_stb_i),
        .wb_ack_o(wb_ack_o),
        .wb_we_i(wb_we_i),
        .wb_adr_i(wb_adr_i),
        .wb_dat_i(wb_dat_i),
        .wb_dat_o(wb_dat_o),
        .wb_sel_i(wb_sel_i),
        
        .sdram_dq(sdram_dq),
        .sdram_addr(sdram_addr),
        .sdram_dqm(sdram_dqm),
        .sdram_ba(sdram_ba),
        .sdram_cs_n(sdram_cs_n),
        .sdram_we_n(sdram_we_n),
        .sdram_ras_n(sdram_ras_n),
        .sdram_cas_n(sdram_cas_n),
        .sdram_cke(sdram_cke),
        
        .debug_state(debug_state)
    );

    // Модель SDRAM
    sdram_model #(
        .SDRAM_ADDR_WIDTH(SDRAM_ADDR_WIDTH),
        .SDRAM_DATA_WIDTH(WB_DATA_WIDTH),
        .SDRAM_BANK_WIDTH(SDRAM_BANK_WIDTH),
        .SDRAM_COL_WIDTH(SDRAM_COL_WIDTH),
        .SDRAM_ROW_WIDTH(SDRAM_ROW_WIDTH),
        .SDRAM_LATENCY(CAS_LATENCY),
        .SDRAM_SIZE_MB(SDRAM_SIZE_MB)
    ) sdram_model_inst (
        .clk(wb_clk_i),
        .cke(sdram_cke),
        .cs_n(sdram_cs_n),
        .ras_n(sdram_ras_n),
        .cas_n(sdram_cas_n),
        .we_n(sdram_we_n),
        .ba(sdram_ba),
        .a(sdram_addr),
        .dq(sdram_dq),
        .dqm(sdram_dqm)
    );

    // Тестовый процесс
    initial begin
        $timeformat(-9, 0, " ns", 10);
        $dumpfile("sdram_ctrl_tb.vcd");
        $dumpvars(0, sdram_ctrl_tb);
        
        // Сброс
        #20ns;
        wb_rst_i = 1'b0;
        #100ns;
        
        $display("=== SDRAM CONTROLLER TEST START ===");
        $display("Time: %t", $time);
        
        // Ждем инициализации контроллера
        wait(debug_state == 3'b000); // Ждем состояния IDLE

        // Тест записи
        $display("\n[TEST] Writing data to address 0x000100");
        wb_write(24'h000100, 16'hABCD);
        
        // Тест чтения
        $display("\n[TEST] Reading data from address 0x000100");
        wb_read(24'h000100);
        
        // Проверка данных
        if (wb_dat_o === 16'hABCD) begin
            $display("[TEST] [RESULT] SUCCESS: Read correct data 0x%h", wb_dat_o);
        end else begin
            $display("[TEST] [RESULT] ERROR: Expected 0xABCD, got 0x%h", wb_dat_o);
        end
        
        #100ns;
        $display("=== TEST COMPLETE ===");
        $finish;
    end
    
    // Задача для записи по Wishbone
    task wb_write(input logic [WB_ADDR_WIDTH-1:0] address, input logic [WB_DATA_WIDTH-1:0] data);
        @(posedge wb_clk_i);
        wb_adr_i <= address;
        wb_dat_i <= data;
        wb_we_i <= 1'b1;
        wb_cyc_i <= 1'b1;
        wb_stb_i <= 1'b1;
        
        // Ждем подтверждения
        wait(wb_ack_o);
        @(posedge wb_clk_i);
        wb_cyc_i <= 1'b0;
        wb_stb_i <= 1'b0;
        wb_we_i <= 1'b0;
        #20ns;
    endtask
    
    // Задача для чтения по Wishbone
    task wb_read(input logic [WB_ADDR_WIDTH-1:0] address);
        @(posedge wb_clk_i);
        wb_adr_i <= address;
        wb_we_i <= 1'b0;
        wb_cyc_i <= 1'b1;
        wb_stb_i <= 1'b1;
        
        // Ждем подтверждения
        wait(wb_ack_o);
        @(posedge wb_clk_i);
        wb_cyc_i <= 1'b0;
        wb_stb_i <= 1'b0;
        #20ns;
    endtask
    
    // Мониторинг состояний
    always @(posedge wb_clk_i) begin
        if (wb_cyc_i && wb_stb_i) begin
            $display("T=%t: WB CYC=1 STB=1 WE=%b ADDR=0x%h DATA=0x%h", 
                    $time, wb_we_i, wb_adr_i, wb_we_i ? wb_dat_i : wb_dat_o);
        end
        
        if (wb_ack_o) begin
            $display("T=%t: WB ACK received", $time);
        end
    end
    
    // Мониторинг команд SDRAM
    always @(posedge wb_clk_i) begin
        $display("T=%t: SDRAM CMD={cs_n=%b, ras_n=%b, cas_n=%b, we_n=%b}, BA=0x%h, A=0x%h, DQ=0x%h, State=%d", 
                $time, sdram_cs_n, sdram_ras_n, sdram_cas_n, sdram_we_n, 
                sdram_ba, sdram_addr, sdram_dq, debug_state);
    end

endmodule
