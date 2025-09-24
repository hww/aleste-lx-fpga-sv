module test_pattern_generator (
    input  logic clk_16mhz,      // Тактовая частота 16 MHz (PAL pixel clock)
    input  logic rst,            // Сброс
    output logic [23:0] pixel,   // Выходной пиксель
    output logic hsync,          // Горизонтальная синхронизация
    output logic vsync,          // Вертикальная синхронизация
    output logic de              // Разрешение данных
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
    always_ff @(posedge clk_16mhz or posedge rst) begin
        if (rst) begin
            h_count <= '0;
            v_count <= '0;
        end else begin
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

    // Генерация синхросигналов PAL
    assign hsync = ~((h_count >= H_ACTIVE + H_FP) && 
                    (h_count < H_ACTIVE + H_FP + H_SYNC));
    
    assign vsync = ~((v_count >= V_ACTIVE + V_FP) && 
                    (v_count < V_ACTIVE + V_FP + V_SYNC));
    
    assign de = (h_count < H_ACTIVE) && (v_count < V_ACTIVE);

    // Генерация тестового паттерна
    always_ff @(posedge clk_16mhz) begin
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

endmodule
