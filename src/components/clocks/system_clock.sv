`default_nettype none

module system_clock (
    input  wire clk_108,       // Входной такт 108 MHz от PLL
    input  wire rst,           // Сброс (active low)
    output reg  ce_54,         // Строб 54 MHz (регистровый!)
    output reg  ce_27_phase0,  // Строб 27 MHz фаза 0 (совпадает с ce_54)
    output reg  ce_27_phase2   // Строб 27 MHz фаза 2 (сдвиг на 180°)
);

// Внутренний счетчик
reg [1:0] counter;

// Инициализация и логика счетчика
always @(posedge clk_108) begin
    if (rst) begin
        counter <= 2'b00;
    end else begin
        counter <= counter + 1;
    end
end

// Генерация стробирующих сигналов с регистровыми выходами
always @(posedge clk_108) begin
    if (rst) begin
        ce_54         <= 1'b0;
        ce_27_phase0  <= 1'b0;
        ce_27_phase2  <= 1'b0;
    end else begin
        // ce_54 - каждый второй такт (1,3,1,3...)
        ce_54 <= (counter[0] == 1'b1);
        
        // ce_27_phase0 - совпадает с ce_54 в определенные такты
        ce_27_phase0 <= (counter == 2'b01);
        
        // ce_27_phase2 - сдвиг на 180° относительно phase0
        ce_27_phase2 <= (counter == 2'b11);
    end
end

// Валидация временных соотношений (для симуляции)
`ifdef SIMULATION
always @(posedge clk_108) begin
    if (!rst) begin
        // Проверка, что ce_27_phase0 совпадает с ce_54 когда оба активны
        if (ce_27_phase0 && ce_54) begin
            $display("OK: ce_27_phase0 и ce_54 синхронизированы");
        end
        
        // Проверка, что стробы не перекрываются некорректно
        if ((ce_27_phase0 && ce_27_phase2) || 
            (ce_54 && ce_27_phase2 && counter[0])) begin
            $warning("Возможное перекрытие стробов");
        end
    end
end
`endif

endmodule
