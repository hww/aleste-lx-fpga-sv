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
    output wire [1:0]  sdram_dm
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

    reg [2:0] state = STATE_INIT;
    reg [15:0] init_counter = 0;

    // Тайминги
    localparam tREF  = 16'd9600;
    localparam tRCD  = 3'd2;       // 2 такта задержки
    localparam tRP   = 3'd2;

    reg [15:0] refresh_counter = 0;
    reg [2:0] tRCD_counter = 0;    // Счетчик задержки
    reg [12:0] saved_col_addr;     // Сохраненный адрес

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
                    // Инициализация (оставляем как было)
                    if (init_counter > 20100) begin
                        state <= STATE_IDLE;
                        host_busy <= 0;
                    end
                    init_counter <= init_counter + 1;
                end

                STATE_IDLE: begin
                    host_rd_valid <= 0;
                    sdram_dq_oe <= 0;
                    
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
                    // Ждем окончания tRCD
                    if (tRCD_counter == 0) begin
                        if (host_rd_req) state <= STATE_READ;
                        else state <= STATE_WRITE;
                    end else begin
                        tRCD_counter <= tRCD_counter - 1;
                    end
                end

                STATE_READ: begin
                    // Команда READ
                    sdram_ras_n <= 1; 
                    sdram_cas_n <= 0; 
                    sdram_we_n <= 1;
                    sdram_a <= saved_col_addr; // Адрес колонки
                    
                    host_data_out <= sdram_dq;
                    host_rd_valid <= 1;
                    state <= STATE_IDLE;
                    host_busy <= 0;
                end

                STATE_WRITE: begin
                    // Команда WRITE
                    sdram_ras_n <= 1;
                    sdram_cas_n <= 0;
                    sdram_we_n <= 0;
                    sdram_a <= saved_col_addr; // Адрес колонки
                    sdram_dq_oe <= 1;
                    
                    state <= STATE_IDLE;
                    host_busy <= 0;
                end

                STATE_REFRESH: begin
                    // Refresh (оставляем как было)
                    sdram_ras_n <= 0; sdram_cas_n <= 0; sdram_we_n <= 1;
                    state <= STATE_IDLE;
                    host_busy <= 0;
                end
            endcase
        end
    end

endmodule
