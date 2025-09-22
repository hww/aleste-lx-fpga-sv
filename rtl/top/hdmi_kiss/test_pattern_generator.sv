// =============================================================================
// Test Pattern Generator (32 MHz domain)
// =============================================================================

module test_pattern_generator (
    input  logic clk_32mhz,      // Тактовая частота 32 MHz
    input  logic rst,            // Сброс
    output logic [23:0] pixel,   // Выходной пиксель
    output logic hsync,          // Горизонтальная синхронизация
    output logic vsync,          // Вертикальная синхронизация
    output logic de              // Разрешение данных
);

    // Параметры видео режима
    localparam H_ACTIVE = 640;
    localparam H_FP = 16;
    localparam H_SYNC = 96;
    localparam H_BP = 48;
    localparam H_TOTAL = H_ACTIVE + H_FP + H_SYNC + H_BP;
    
    localparam V_ACTIVE = 480;
    localparam V_FP = 10;
    localparam V_SYNC = 2;
    localparam V_BP = 33;
    localparam V_TOTAL = V_ACTIVE + V_FP + V_SYNC + V_BP;

    // Счетчики
    logic [9:0] h_count;
    logic [9:0] v_count;

    // Генерация счетчиков
    always_ff @(posedge clk_32mhz or posedge rst) begin
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

    // Генерация синхросигналов
    assign hsync = ~((h_count >= H_ACTIVE + H_FP) && 
                    (h_count < H_ACTIVE + H_FP + H_SYNC));
    
    assign vsync = ~((v_count >= V_ACTIVE + V_FP) && 
                    (v_count < V_ACTIVE + V_FP + V_SYNC));
    
    assign de = (h_count < H_ACTIVE) && (v_count < V_ACTIVE);

    // Генерация тестового паттерна (цветные полосы)
    always_ff @(posedge clk_32mhz) begin
        if (de) begin
            // Вертикальные цветные полосы
            case (h_count[8:6])  // 8 полос по 80 пикселей
                3'b000: pixel <= 24'hFF0000; // Красный
                3'b001: pixel <= 24'h00FF00; // Зеленый
                3'b010: pixel <= 24'h0000FF; // Синий
                3'b011: pixel <= 24'hFFFFFF; // Белый
                3'b100: pixel <= 24'hFFFF00; // Желтый
                3'b101: pixel <= 24'hFF00FF; // Пурпурный
                3'b110: pixel <= 24'h00FFFF; // Голубой
                3'b111: pixel <= 24'h808080; // Серый
            endcase
        end else begin
            pixel <= 24'h000000; // Черный в blanking
        end
    end

endmodule
