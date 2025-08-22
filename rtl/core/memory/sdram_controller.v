module sdram_controller (
    input  wire        clk_sys,
    input  wire        rst,
    input  wire        locked,

    // Интерфейс хоста
    input  wire        host_wr_req,
    input  wire        host_rd_req,
    input  wire [23:0] host_addr,
    input  wire [15:0] host_data_in,
    output reg  [15:0] host_data_out,
    output reg         host_busy,
    output reg         host_rd_valid,

    // SDRAM интерфейс
    output reg        sdram_cke,
    output reg        sdram_cs_n,
    output reg        sdram_ras_n,
    output reg        sdram_cas_n,
    output reg        sdram_we_n,
    output reg [12:0] sdram_a,
    output reg [1:0]  sdram_ba,
    inout  wire [15:0] sdram_dq,
    output wire [1:0]  sdram_dm,
    
    // DEBUG Interface
    output wire [2:0] debug_state 
);

    // Управление данными
    reg [15:0] sdram_dq_out;
    reg        sdram_dq_oe = 0;
    assign sdram_dq = sdram_dq_oe ? sdram_dq_out : 16'bzzzz_zzzz_zzzz_zzzz;
    assign sdram_dm = 2'b00;

    // Состояния автомата
    localparam STATE_INIT    = 0;
    localparam STATE_IDLE    = 1;
    localparam STATE_ACTIVE  = 2;  // Добавлено!
    localparam STATE_READ    = 3;
    localparam STATE_WRITE   = 4;
    localparam STATE_REFRESH = 5;
    localparam STATE_WRITE_DONE = 6;

    reg [2:0] state = STATE_INIT;
    reg [15:0] init_counter = 0;

    // Тайминги
    localparam tREF  = 16'd9600;
    localparam tRCD  = 3'd2;       // 2 такта задержки
    localparam tRP   = 3'd2;

    reg [15:0] refresh_counter = 0;
    reg [2:0] tRCD_counter = 0;    // Счетчик задержки
    reg [12:0] saved_col_addr;     // Сохраненный адрес
    reg [2:0] cas_latency_counter = 3'd2; // CAS latency = 2

    always @(posedge clk_sys or posedge rst) begin
        if (rst || !locked) begin
            // Сброс (оставляем как было)
            state <= STATE_INIT;
            init_counter <= 0;
            refresh_counter <= 0;
            sdram_cke <= 0;
            sdram_cs_n <= 1;
            sdram_ras_n <= 1;
            sdram_cas_n <= 1;
            sdram_we_n <= 1;
            sdram_a <= 0;
            sdram_ba <= 0;
            sdram_dq_oe <= 0;
            host_busy <= 1;
            host_rd_valid <= 0;
            tRCD_counter <= 0;
        end else begin
            case (state)
                STATE_INIT: begin
                    // Инициализация SDRAM
                    init_counter <= init_counter + 1;
                    
                    // Правильные тайминги инициализации
                    if (init_counter == 100) begin
                        // Первая пауза - включаем clock
                        sdram_cke <= 1'b1;
                    end else if (init_counter == 110) begin
                        // Первая команда - precharge all
                        sdram_cs_n <= 1'b0;
                        sdram_ras_n <= 1'b0;
                        sdram_cas_n <= 1'b1;
                        sdram_we_n <= 1'b0;
                        sdram_a[10] <= 1'b1; // Precharge all banks
                    end else if (init_counter == 120) begin
                        // Вторая команда - auto refresh
                        sdram_ras_n <= 1'b0;
                        sdram_cas_n <= 1'b0;
                        sdram_we_n <= 1'b1;
                    end else if (init_counter == 130) begin
                        // Третья команда - auto refresh
                        sdram_ras_n <= 1'b0;
                        sdram_cas_n <= 1'b0;
                        sdram_we_n <= 1'b1;
                    end else if (init_counter == 140) begin
                        // Четвертая команда - mode register set
                        sdram_ras_n <= 1'b0;
                        sdram_cas_n <= 1'b0;
                        sdram_we_n <= 1'b0;
                        sdram_a <= 13'h020; // CAS latency = 2, burst length = 1
                    end else if (init_counter > 150) begin
                        // Завершение инициализации
                        state <= STATE_IDLE;
                        host_busy <= 0;
                        // Сброс командных сигналов
                        sdram_ras_n <= 1'b1;
                        sdram_cas_n <= 1'b1;
                        sdram_we_n <= 1'b1;
                    end
                end

                STATE_IDLE: begin
                    //$display("STATE_ACTIVE: tRCD_counter=%d", tRCD_counter);

                    host_rd_valid <= 0;
                    sdram_dq_oe <= 0;

                    // Сброс командных сигналов SDRAM
                    sdram_ras_n <= 1'b1;
                    sdram_cas_n <= 1'b1;
                    sdram_we_n <= 1'b1;
                    sdram_cs_n <= 1'b0;  // Chip select активен в рабочем режиме
                    
                    refresh_counter <= refresh_counter + 1;
                    if (refresh_counter >= tREF) begin
                        state <= STATE_REFRESH;
                        refresh_counter <= 0;
                        host_busy <= 1;
                    end
                    else if (host_rd_req || host_wr_req) begin
                        state <= STATE_ACTIVE;
                        host_busy <= 1;
                        // Адрес банка и строки
                        {sdram_ba, sdram_a} <= host_addr[16:2]; // Строка
                        saved_col_addr <= host_addr[12:0];      // Колонка
                        tRCD_counter <= tRCD;
                    end
                end

                STATE_ACTIVE: begin
                    // Команда ACTIVATE - активация строки
                    sdram_ras_n <= 1'b0;  // RAS=0
                    sdram_cas_n <= 1'b1;  // CAS=1  
                    sdram_we_n <= 1'b1;   // WE=1
                    sdram_cs_n <= 1'b0;   // CS=0
                    
                    // Подготовка данных для записи (если это запись)
                    if (!host_rd_req) begin
                        sdram_dq_out <= host_data_in; // Предварительная подготовка данных
                    end
                    
                    // Ждем окончания tRCD
                    if (tRCD_counter == 0) begin
                        if (host_rd_req) begin
                            state <= STATE_READ;
                            cas_latency_counter <= 3'd2;
                        end else begin
                            state <= STATE_WRITE;
                        end
                    end else begin
                        tRCD_counter <= tRCD_counter - 1;
                    end
                end

                STATE_READ: begin
                    // Команда READ
                    sdram_ras_n <= 1'b1; 
                    sdram_cas_n <= 1'b0;
                    sdram_we_n <= 1'b1;
                    sdram_cs_n <= 1'b0;
                    sdram_a <= saved_col_addr;
                    
                    // ВЫКЛЮЧИТЬ вывод на шину для чтения!
                    sdram_dq_oe <= 1'b0;
                    
                    // Ждем CAS latency
                    if (cas_latency_counter == 0) begin
                        host_data_out <= sdram_dq;  // Читаем данные с шины
                        host_rd_valid <= 1;
                        state <= STATE_IDLE;
                        host_busy <= 0;
                        $display("[sdram_controller] READ: addr=%h, data=%h", saved_col_addr, sdram_dq);
                    end else begin
                        cas_latency_counter <= cas_latency_counter - 1;
                    end
                end

                STATE_WRITE: begin
                    // Команда WRITE
                    sdram_ras_n <= 1'b1;
                    sdram_cas_n <= 1'b0;
                    sdram_we_n <= 1'b0;
                    sdram_cs_n <= 1'b0;
                    sdram_a <= saved_col_addr; // Адрес колонки
                    
                    // КРИТИЧЕСКИ ВАЖНО: ВКЛЮЧИТЬ вывод данных на шину!
                    sdram_dq_out <= host_data_in;  // Данные для записи
                    sdram_dq_oe <= 1'b1;           // Разрешить вывод на шину!
                    
                    // Добавить небольшую задержку для стабилизации данных
                    state <= STATE_WRITE_DONE;
                end

                // Добавьте новое состояние для завершения записи
                STATE_WRITE_DONE: begin
                    // Удерживаем данные еще один такт
                    state <= STATE_IDLE;
                    host_busy <= 0;
                    sdram_dq_oe <= 1'b0; // Отключаем вывод после записи
                    
                    $display("[sdram_controller] WRITE COMPLETE: addr=%h, data=%h", saved_col_addr, host_data_in);
                end
                STATE_REFRESH: begin
                    // Refresh (оставляем как было)
                    sdram_ras_n <= 0; sdram_cas_n <= 0; sdram_we_n <= 1;
                    state <= STATE_IDLE;
                    host_busy <= 0;
                end

                // Неопределенное состояние
                default: begin 
                    state <= STATE_IDLE; // Сброс при неизвестном состоянии
                    host_busy <= 0;
                    $display("[sdram_controller] ERROR: Unknown state, resetting to IDLE");
                end
            endcase
        end
    end

    // Debugging
    assign debug_state = state;

endmodule
