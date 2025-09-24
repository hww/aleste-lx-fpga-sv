`timescale 1ns/1ps

module sdram_model_tb;

    // Параметры должны соответствовать DUT
    localparam SDRAM_ADDR_WIDTH = 13;
    localparam SDRAM_DATA_WIDTH = 16;
    localparam SDRAM_BANK_WIDTH = 2;
    localparam SDRAM_COL_WIDTH = 9;
    localparam SDRAM_ROW_WIDTH = 13;
    localparam SDRAM_LATENCY = 2;
    localparam SDRAM_SIZE_MB = 32;

    logic clk = 1'b0;
    logic cke = 1'b1;
    logic cs_n = 1'b1;
    logic ras_n = 1'b1;
    logic cas_n = 1'b1;
    logic we_n = 1'b1;
    logic [SDRAM_BANK_WIDTH-1:0] ba = '0;
    logic [SDRAM_ADDR_WIDTH-1:0] a = '0;
    logic [SDRAM_DATA_WIDTH-1:0] dq_drive = '0;
    logic dq_drive_en = 1'b0;
    logic [SDRAM_DATA_WIDTH/8-1:0] dqm = '0;
    
    wire [SDRAM_DATA_WIDTH-1:0] dq = dq_drive_en ? dq_drive : {SDRAM_DATA_WIDTH{1'bz}};

    // Тактовый сигнал
    always #10ns clk = ~clk;

    // DUT с передачей параметров
    sdram_model #(
        .SDRAM_ADDR_WIDTH(SDRAM_ADDR_WIDTH),
        .SDRAM_DATA_WIDTH(SDRAM_DATA_WIDTH),
        .SDRAM_BANK_WIDTH(SDRAM_BANK_WIDTH),
        .SDRAM_COL_WIDTH(SDRAM_COL_WIDTH),
        .SDRAM_ROW_WIDTH(SDRAM_ROW_WIDTH),
        .SDRAM_LATENCY(SDRAM_LATENCY),
        .SDRAM_SIZE_MB(SDRAM_SIZE_MB)
    ) dut (.*);

    // Тестовый процесс
    initial begin
        $timeformat(-9, 0, " ns", 10);
        $dumpfile("sdram_model.vcd");
        $dumpvars(0, sdram_model_tb);
        
        #100ns;
        $display("=== SDRAM MODEL TEST START ===");
        
        // 1. PRECHARGE ALL
        $display("\n[TEST] 1. Precharge all banks");
        send_command(4'b0010); // Precharge
        a <= 13'h0400; // A10=1 for all banks
        #30ns;
        send_nop();
        #100ns;
        
        // 2. ACTIVE
        $display("\n[TEST] 2. ACTIVE bank 1, row 0x1ABC");
        send_command(4'b0011); // Active
        ba <= 2'b01;
        a <= 13'h1ABC;
        #30ns;
        send_nop();
        #100ns;
        
        // 3. WRITE
        $display("\n[TEST] 3. WRITE to bank 1, col 0x00F1");
        send_command(4'b0100); // Write
        ba <= 2'b01;
        a <= 13'h00F1;
        dq_drive <= 16'hDEAD;
        dq_drive_en <= 1'b1;
        #20ns;
        send_nop();
        dq_drive_en <= 1'b0;
        #100ns;
        
        // 4. READ
        $display("\n[TEST] 4. READ from bank 1, col 0x00F1");
        send_command(4'b0101); // Read
        ba <= 2'b01;
        a <= 13'h00F1;
        #20ns;
        send_nop();

        // Ожидание данных
        #200ns;

        #100ns;
        $display("=== TEST COMPLETE ===");
        $finish;
    end
    
    logic [15:0] captured_data;
    logic data_valid;

    always @(posedge clk) begin
        if (dq !== 16'hzzzz) begin
            captured_data <= dq;
            data_valid <= 1'b1;
            $display("CAPTURED DATA: %h at time %t", dq, $time);
            
            // Проверяем сразу при получении данных
            if (dq === 16'hDEAD) begin
                $display("[TEST] SUCCESS: Correct data read: 0x%h", dq);
            end else begin
                $display("[TEST] ERROR: Expected 0xDEAD, got 0x%h", dq);
            end
        end else begin
            data_valid <= 1'b0;
        end
    end

    // Задачи для отправки команд
    task send_command(input logic [3:0] cmd);
        {cs_n, ras_n, cas_n, we_n} <= cmd;
    endtask

    task send_nop();
        send_command(4'b0111); // NOP
    endtask

    // Мониторинг
    always @(posedge clk) begin
        $display("T=%t: CMD={cs_n=%b, ras_n=%b, cas_n=%b, we_n=%b}, BA=0x%h, A=0x%h, DQ=0x%h", 
                $time, cs_n, ras_n, cas_n, we_n, ba, a, dq);
    end

endmodule
