module test_pattern_generator (
    input  logic rst_i,          // Сброс
    input  logic clk_i,
    input  logic pixel_clk_i,  // Тактовая частота 16 MHz (PAL pixel clock)
    output logic [23:0] pixel_o, // Выходной пиксель
    output logic hsync_o,        // Горизонтальная синхронизация
    output logic vsync_o,        // Вертикальная синхронизация
    output logic pixel_clk_o   // Разрешение данных
);
    // Параметры прогрессивной PAL видео режима (16 MHz)
    localparam H_ACTIVE = 640;     // 40µs × 16MHz
    localparam H_FP = 38;          
    localparam H_SYNC = 64;        
    localparam H_BP = 282;         
    localparam H_TOTAL = 1024;     // 64µs × 16MHz

    localparam V_ACTIVE = 200;     // 25 chars × 8 lines  
    localparam V_FP = 3;
    localparam V_SYNC = 3;
    localparam V_BP = 106;         // 312 - 200 - 3 - 3 = 106
    localparam V_TOTAL = 312;      // 39 chars × 8 lines

    // Счетчики
    logic [9:0] h_count;
    logic [9:0] v_count;

    // Генерация счетчиков на 16MHz
    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            h_count <= '0;
            v_count <= '0;
        end else begin
            if (pixel_clk_i) begin
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
    end

    logic de;

    // Генерация синхросигналов PAL
    assign hsync_o = ~((h_count >= H_ACTIVE + H_FP) && 
                    (h_count < H_ACTIVE + H_FP + H_SYNC));
    
    assign vsync_o = ~((v_count >= V_ACTIVE + V_FP) && 
                    (v_count < V_ACTIVE + V_FP + V_SYNC));
    
    assign de = (h_count < H_ACTIVE) && (v_count < V_ACTIVE);

    assign pixel_clk_o = de && pixel_clk_i;

    logic [23:0] pixel;

    // Генерация тестового паттерна
    always_ff @(posedge clk_i) begin
        if (de) begin
            // 8 полос по 80 пикселей = 640 / 80 = 8
            // Используем биты 9:7, но для 640 пикселей нужно смещение
            case (h_count[9:7])
                3'b000: pixel <= 24'hFF0000; // Полоса 0: пиксели 0-127
                3'b001: pixel <= 24'h00FF00; // Полоса 1: пиксели 128-255
                3'b010: pixel <= 24'h0000FF; // Полоса 2: пиксели 256-383
                3'b011: pixel <= 24'hFFFFFF; // Полоса 3: пиксели 384-511
                3'b100: pixel <= 24'hFFFF00; // Полоса 4: пиксели 512-639
                // Полосы 5-7 не видны (640-1023) - используем черный
                default: pixel <= 24'h000000;
            endcase
        end else begin
            pixel <= 24'h000000;
        end
    end

    assign pixel_o = pixel;

endmodule
