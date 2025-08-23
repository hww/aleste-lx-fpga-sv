module sdram_model #(
    parameter SDRAM_ADDR_WIDTH = 13,
    parameter SDRAM_DATA_WIDTH = 16,
    parameter SDRAM_BANK_WIDTH = 2,
    parameter SDRAM_COL_WIDTH = 9,
    parameter SDRAM_ROW_WIDTH = 13,
    parameter SDRAM_LATENCY = 2,
    parameter SDRAM_SIZE_MB = 32
)(
    input wire                          clk,
    input wire                          cke,
    input wire                          cs_n,
    input wire                          ras_n,
    input wire                          cas_n,
    input wire                          we_n,
    input wire [SDRAM_ADDR_WIDTH-1:0]   a,
    input wire [SDRAM_BANK_WIDTH-1:0]   ba,
    inout wire [SDRAM_DATA_WIDTH-1:0]   dq,
    input wire [SDRAM_DATA_WIDTH/8-1:0] dqm
);

    // Расчет параметров
    localparam NUM_BANKS = 2**SDRAM_BANK_WIDTH;
    localparam NUM_ROWS = 2**SDRAM_ROW_WIDTH;
    localparam NUM_COLS = 2**SDRAM_COL_WIDTH;
    localparam MEMORY_SIZE = NUM_BANKS * NUM_ROWS * NUM_COLS;
    
    logic [SDRAM_DATA_WIDTH-1:0] memory [0:MEMORY_SIZE-1];
    logic [SDRAM_DATA_WIDTH-1:0] data_out;
    logic                        drive_dq;

    assign dq = drive_dq ? data_out : {SDRAM_DATA_WIDTH{1'bz}};

    // ЧИТАЕМОЕ декодирование команд - ТОЧНО как в контроллере!
    wire command_nop          = (cke && !cs_n &&  ras_n &&  cas_n &&  we_n);  // 0111
    wire command_active       = (cke && !cs_n && !ras_n &&  cas_n &&  we_n);  // 0011
    wire command_read         = (cke && !cs_n &&  ras_n && !cas_n &&  we_n);  // 0101
    wire command_write        = (cke && !cs_n &&  ras_n && !cas_n && !we_n);  // 0100
    wire command_precharge    = (cke && !cs_n && !ras_n &&  cas_n && !we_n);  // 0010
    wire command_auto_refresh = (cke && !cs_n && !ras_n && !cas_n &&  we_n);  // 0001
    wire command_load_mode    = (cke && !cs_n && !ras_n && !cas_n && !we_n);  // 0000

    // Регистры для хранения состояния
    logic [SDRAM_ROW_WIDTH-1:0] active_row [0:NUM_BANKS-1];
    logic [SDRAM_COL_WIDTH-1:0] current_col;
    logic [SDRAM_BANK_WIDTH-1:0] current_ba;
    logic                        bank_active [0:NUM_BANKS-1];
    int                          read_counter;

    logic init_done = 1'b0;
    
    // Обработка команд - ЧИСТЫЙ и ЧИТАЕМЫЙ код
    always_ff @(posedge clk) begin
        if (!init_done) begin
            for (int i = 0; i < NUM_BANKS; i++) begin
                active_row[i] <= '0;
                bank_active[i] <= 1'b0;
            end
            drive_dq <= 1'b0;
            read_counter <= 0;
            init_done <= 1'b1;
            $display("[SDRAM] Initialized: %0d banks, %0d rows, %0d cols, %0d MB", 
                     NUM_BANKS, NUM_ROWS, NUM_COLS, SDRAM_SIZE_MB);
        end else begin
            drive_dq <= 1'b0;
            
            if (read_counter > 0) 
                read_counter <= read_counter - 1;

            // Обработка команд с использованием читаемых wire
            if (command_active) begin
                $display("[SDRAM] ACTIVE bank=%0d row=0x%h", ba, a[SDRAM_ROW_WIDTH-1:0]);
                active_row[ba] <= a[SDRAM_ROW_WIDTH-1:0];
                bank_active[ba] <= 1'b1;
            end
            else if (command_read) begin
                if (bank_active[ba]) begin
                    $display("[SDRAM] READ bank=%0d col=0x%h", ba, a[SDRAM_COL_WIDTH-1:0]);
                    read_counter <= SDRAM_LATENCY;
                    current_ba <= ba;
                    current_col <= a[SDRAM_COL_WIDTH-1:0];
                end else begin
                    $display("[SDRAM] READ ERROR: Bank %0d not active", ba);
                end
            end
            else if (command_write) begin
                if (bank_active[ba]) begin
                    automatic logic [SDRAM_DATA_WIDTH-1:0] masked_data = dq;
                    
                    for (int i = 0; i < SDRAM_DATA_WIDTH/8; i++) begin
                        if (dqm[i]) begin
                            masked_data[i*8 +: 8] = 'x;
                        end
                    end
                    
                    $display("[SDRAM] WRITE bank=%0d col=0x%h data=0x%h (dqm=0x%h)", 
                            ba, a[SDRAM_COL_WIDTH-1:0], masked_data, dqm);
                    memory[get_full_address(ba, active_row[ba], a[SDRAM_COL_WIDTH-1:0])] <= masked_data;
                end else begin
                    $display("[SDRAM] WRITE ERROR: Bank %0d not active", ba);
                end
            end
            else if (command_precharge) begin
                if (a[10]) begin  // A10 = 1: Precharge All
                    $display("[SDRAM] PRECHARGE ALL BANKS");
                    for (int i = 0; i < NUM_BANKS; i++) begin
                        bank_active[i] <= 1'b0;
                    end
                end else begin    // A10 = 0: Precharge Single Bank
                    $display("[SDRAM] PRECHARGE bank=%0d", ba);
                    bank_active[ba] <= 1'b0;
                end
            end
            else if (command_auto_refresh) begin
                $display("[SDRAM] AUTO REFRESH");
                // Обработка refresh
            end
            else if (command_load_mode) begin
                $display("[SDRAM] LOAD MODE REGISTER: 0x%h", a);
                // Обработка установки режима
            end
            else if (command_nop) begin
                // NOP - ничего не делаем, это нормально
            end
            else if (cke && !cs_n) begin
                $display("[SDRAM] UNKNOWN COMMAND: ras_n=%b, cas_n=%b, we_n=%b",
                        ras_n, cas_n, we_n);
            end

            // Выдача данных по latency
            if (read_counter == 1 && bank_active[current_ba]) begin
                automatic logic [SDRAM_DATA_WIDTH-1:0] read_data = 
                    memory[get_full_address(current_ba, active_row[current_ba], current_col)];
                
                data_out <= read_data;
                drive_dq <= 1'b1;
                $display("[SDRAM] DATA OUT: 0x%h (latency=%0d)", read_data, SDRAM_LATENCY);
            end
        end
    end

    // Функция для формирования полного адреса
    function automatic int get_full_address(
        input logic [SDRAM_BANK_WIDTH-1:0] bank,
        input logic [SDRAM_ROW_WIDTH-1:0] row, 
        input logic [SDRAM_COL_WIDTH-1:0] col
    );
        int bank_shifted = int'(bank) << (SDRAM_ROW_WIDTH + SDRAM_COL_WIDTH);
        int row_shifted = int'(row) << SDRAM_COL_WIDTH;
        int col_masked = int'(col) & ((1 << SDRAM_COL_WIDTH) - 1);
        
        return bank_shifted | row_shifted | col_masked;
    endfunction

    // Отладочный вывод
    //always @(posedge clk) begin
    //    if (cke && !cs_n) begin
    //        $display("[SDRAM] TIME %0t: cmd=%b%b%b, a=%h, ba=%h, dq=%h, init=%h", 
    //                $time, ras_n, cas_n, we_n, a, ba, dq, init_done);
    //    end
    //end

endmodule
