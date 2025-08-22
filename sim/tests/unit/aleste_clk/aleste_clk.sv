module aleste_clk (
    input  wire logic high,       // Режим (0: текст, 1: графика)
    input  wire logic clk_16m,    // Тактовая частота 16 МГц
    input  wire logic clk_13m,    // Тактовая частота 13.3 МГц
    input  wire logic mreq_n,     // Запрос к памяти (активный 0)
    input  wire logic rfsh_n,     // Регенерация (активный 0)
    input  wire logic rd_n,       // Чтение (активный 0)
    input  wire logic wr_n,       // Запись (активный 0)
    output logic ras_n,           // Строб строки (активный 0)
    output logic cas_n,           // Строб столбца (активный 0)
    output logic we_n,            // Запись в память    
    output logic mvi_n,           // Загрузить пиксель в сдвиговый регистр
    output logic dis,             // Display access
    output logic vbuf_n,          // Video buffer enable (активный 0)
    output logic cbuf_n,          // CPU buffer enable (активный 0)
    output logic wait_n,          // Wait signal (активный 0)
    output logic clk,             // Тактовая CPU
    output logic [1:0] st,        // Пиксельный мультиплектор

    // Добавленные шины для наглядности
    input logic [15:0] cpu_addr,   // Шина адреса CPU
    output logic [7:0] cpu_data_in, // Шина данных CPU (выход)
    input  logic [7:0] cpu_data_out, // Шина данных CPU (выход)
    input logic [7:0] dram_data_out,    // Шина данных DRAM
    
    // Такты процессорного цикла
    input logic [2:0] cpu_cycle    // 0: idle, 1: T1, 2: T2, 3: T3, 4: T4, 5: TW
);

    assign cpu_data_in  = dram_data_out;

    // Внутренние тактовые сигналы
    logic [3:0] counter;
    logic [3:0] d39_q;
    logic d40_1_q, d40_2_q;
    
    logic clk_8m, clk_4m, clk_2m, clk_1m;
    logic ras_cas, vclk, xtal;

    // Счетчики для генерации тестовых данных
    logic [15:0] addr_counter = 16'h1000;
    logic [7:0] data_counter = 8'h01;
    logic [2:0] data_sequence = 3'b0;

    // FSM для тактов процессора
    logic [2:0] cycle_counter = 3'b0;
    logic cycle_active = 1'b0;
    logic in_wait_state = 1'b0;
    logic last_clk = 1'b0;

    // Делители частоты
    always_ff @(posedge xtal) begin
        counter <= counter + 1;
    end

    assign clk_8m  = counter[0];  // 16/2 = 8 MHz
    assign clk_4m  = counter[1];  // 16/4 = 4 MHz  
    assign clk_2m  = counter[2];  // 16/8 = 2 MHz
    assign clk_1m  = counter[3];  // 16/16 = 1 MHz

    // Мультиплексор режимов
    assign {ras_cas, vclk, xtal} = high ? 
        {clk_4m, clk_2m, clk_13m} : 
        {clk_2m, clk_1m, clk_16m};

    // Автомат состояний (регистр D39) 
    always_ff @(posedge xtal) begin
        d39_q[0] <= clk_4m;
        d39_q[1] <= d39_q[0];
        d39_q[2] <= ras_cas;
        d39_q[3] <= d39_q[2];
        
        // Генерация тестовых адресов и данных
        if (d39_q[1]) begin // по такту CPU
            addr_counter <= addr_counter + 1;
            data_counter <= data_counter + 1;
            data_sequence <= data_sequence + 1;
        end
    end

    assign clk   = d39_q[1];
    assign ras_n = ~d39_q[2];  // Инвертируем для активного 0
    assign cas_n = ~d39_q[3];  // Инвертируем для активного 0

    // Формирование MVI
    assign st[0] = clk_8m & clk_4m;
    assign st[1] = clk_8m & high;
    assign mvi_n = ~(clk_8m & clk_4m & (clk_2m | high));

    // Триггеры D40_1
    always_ff @(posedge mvi_n or negedge rfsh_n) begin
        if (!rfsh_n)
            d40_1_q <= 1'b0;
        else
            d40_1_q <= vclk | mreq_n;
    end

    // Триггеры D40_2
    always_ff @(posedge clk or negedge rfsh_n) begin
        if (!rfsh_n)
            d40_2_q <= 1'b0;
        else
            d40_2_q <= !(!dis & (rd_n & wr_n));
    end

    assign dis = d40_1_q;
    assign we_n = d40_2_q;

    // Управление буферами
    assign vbuf_n = ~(vclk | ~ras_n);
    assign cbuf_n = ~(~vclk | ~ras_n);

    // Сигнал ожидания - НЕ завязан на MREQ!
    assign wait_n = ~(~ras_n & vclk);

endmodule
