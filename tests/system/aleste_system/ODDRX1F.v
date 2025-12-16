// ODDRX1F.v
// ODDRX1F.v - Простая и годная модель DDR выхода для симуляции
module ODDRX1F(
    input  SCLK,  // Тактовый сигнал
    input  RST,   // Сброс (активный высокий)
    input  D0,    // Данные для положительного фронта
    input  D1,    // Данные для отрицательного фронта
    output Q      // Выход DDR
);

    reg q_reg = 1'b0;
    reg sclk_prev = 1'b0;
    
    always @(SCLK or posedge RST) begin
        if (RST) begin
            q_reg <= 1'b0;
            sclk_prev <= 1'b0;
        end else begin
            // Обнаружение фронтов
            if (SCLK && !sclk_prev) begin
                // Положительный фронт SCLK -> выводим D0
                q_reg <= D0;
            end else if (!SCLK && sclk_prev) begin
                // Отрицательный фронт SCLK -> выводим D1
                q_reg <= D1;
            end
            sclk_prev <= SCLK;
        end
    end
    
    assign Q = q_reg;

endmodule
