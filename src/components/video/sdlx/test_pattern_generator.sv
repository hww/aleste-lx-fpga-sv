module test_pattern_generator (
    input  logic rst_i,          // Сброс
    input  logic clk_i,
    input  logic pixel_stb_i,    // Тактовая частота 16 MHz (PAL pixel clock)
    output logic [23:0] pixel_o, // Выходной пиксель
    output logic hsync_o,        // Горизонтальная синхронизация (активный 1)
    output logic vsync_o,        // Вертикальная синхронизация (активный 1)
    output logic pixel_stb_o,     // Разрешение данных
    output logic de_o            // Активная область
);

    // Параметры прогрессивной PAL видео режима (CPC 6128 16 MHz)
    localparam H_TOTAL = 1024;     // 64µs × 16MHz
    localparam H_ACTIVE = 640;     // 40µs × 16MHz
    localparam H_FP = 96;          
    localparam H_SYNC = 224;        
    localparam H_BP = 64;         
    localparam H_SYNC_START = H_ACTIVE + H_FP;         
    localparam H_SYNC_STOP = H_SYNC_START + H_SYNC;         

    localparam V_TOTAL = 312;      // 312 строк всего
    localparam V_ACTIVE = 200;     // 200 активных строк
    localparam V_FP = 53;
    localparam V_SYNC = 5;
    localparam V_BP = 54;          
    localparam V_SYNC_START = V_ACTIVE + V_FP;         
    localparam V_SYNC_STOP = V_SYNC_START + V_SYNC;       

    // Счетчики
    logic [9:0] h_count;
    logic [9:0] v_count;

    // Генерация счетчиков на 16MHz
    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            h_count <= '0;  // Для упрощения тестирования
            v_count <= '0;
        end else if (pixel_stb_i) begin
            if (h_count == H_TOTAL - 1) begin
                h_count <= '0;
                if (v_count == V_TOTAL - 1) begin
                    v_count <= '0;
                end else begin
                    v_count <= v_count + 1;
                end
            end else begin
                h_count <= h_count + 1;
            end
        end
    end

    // Генерация синхросигналов
    assign hsync_o = (h_count >= H_SYNC_START) && (h_count < H_SYNC_STOP);
    assign vsync_o = (v_count >= V_SYNC_START) && (v_count < V_SYNC_STOP);
    assign de_o = (h_count < H_ACTIVE) && (v_count < V_ACTIVE);
    assign pixel_stb_o = de_o && pixel_stb_i;

    // Генерация тестового паттерна
    logic [23:0] pixel;
    
    // Позиция внутри знакоместа 8x8
    logic [2:0] char_pixel_x;  // 0-7 (позиция внутри знакоместа по X)
    logic [2:0] char_pixel_y;  // 0-7 (позиция внутри знакоместа по Y)
    logic [6:0] char_x;        // номер знакоместа по X (640/8 = 80 знакомест)
    logic [5:0] char_y;        // номер знакоместа по Y (200/8 = 25 знакомест)
    
    assign char_pixel_x = h_count[2:0];        // младшие 3 бита = позиция в знакоместе X
    assign char_pixel_y = v_count[2:0];        // младшие 3 бита = позиция в знакоместе Y  
    assign char_x = h_count[9:3];              // старшие биты = номер знакоместа по X
    assign char_y = v_count[8:3];              // старшие биты = номер знакоместа по Y
    
    // Градиент фона: красный увеличивается с char_x, зеленый с char_y
    logic [7:0] red_gradient, green_gradient;
    assign red_gradient = char_x * 3;          // 0-80 -> 0-240 (примерно)
    assign green_gradient = char_y * 10;       // 0-25 -> 0-250 (примерно)
    
    always_comb begin
        if (de_o) begin
            // Проверяем, находимся ли мы в синей диагонали 4x4 внутри знакоместа
            if (char_pixel_x < 4 && char_pixel_y < 4 && char_pixel_x == char_pixel_y) begin
                // Синие пиксели на диагонали 4x4
                pixel = 24'h0000FF;  // Синий
            end else if (char_pixel_x < 4 && char_pixel_y < 4) begin
                // Черные пиксели в квадрате 4x4 (но не на диагонали)
                pixel = 24'h000000;  // Черный
            end else begin
                // Фон знакоместа - градиент
                pixel = {red_gradient, green_gradient, 8'h00};  // R и G градиент, синий=0
            end
        end else begin
            pixel = 24'h000000;  // Черный за активной областью
        end
    end

    assign pixel_o = pixel;

endmodule
