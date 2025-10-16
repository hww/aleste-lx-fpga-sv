module debug_shift_reg #(
    parameter WIDTH = 16,
    parameter DELAY = 0
)(
    input  wire             clk,      // Тактовая частота
    input  wire             rst,      // Сброс (активный 1)
    input  wire             ce,       // Clock enable  
    input  wire             we,       // Write enable - захватываем данные
    input  wire [WIDTH-1:0] data_in,  // Входные данные для отладки
    output wire             data_out  // Выходной бит (сдвинутый)
);

reg [WIDTH-1:0] shift_reg;
reg [15:0] delay_reg;
wire we_delayed;

// Правильная логика задержки
assign we_delayed = (DELAY == 0) ? we : delay_reg[DELAY-1];

// Выход всегда комбинационный - без задержки!
assign data_out = shift_reg[WIDTH-1];

// Сдвиговый регистр для задержки we
always @(posedge clk or posedge rst) begin
    if (rst) begin
        delay_reg <= 16'b0;
    end else if (ce) begin
        // Сдвигаем we через регистр задержки
        delay_reg <= {delay_reg[14:0], we};
    end
end

// Основной сдвиговый регистр
always @(posedge clk or posedge rst) begin
    if (rst) begin
        shift_reg <= {WIDTH{1'b0}};
    end else if (ce) begin
        if (we_delayed) begin
            // Захватываем новые данные
            shift_reg <= data_in;
        end else begin
            // Сдвигаем влево
            shift_reg <= {shift_reg[WIDTH-2:0], 1'b0};
        end
    end
end

endmodule
