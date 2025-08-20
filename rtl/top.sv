`default_nettype none

module top (
    input  wire clk25,    // Тактовая 25 MHz
    input  wire rst,      // Кнопка сброса
    // SDRAM выводы (добавьте по необходимости из .lpf)
    output wire sdram_clock,
    output wire sdram_cke,
    // ... остальные sdram_* ...
    output wire [3:0] leds // Светодиоды для отладки
);

    //--- Тактогенерация ---
    wire clk_sys;
    wire clk_sdram;
    wire clk_hdmi;
    wire locked;

    clk_gen clock_generator (
        .clk25(clk25),
        .rst(rst),
        .clk_sys(clk_sys),
        .clk_sdram(clk_sdram),
        .clk_hdmi(clk_hdmi),
        .locked(locked)
    );

    //--- Контроллер SDRAM ---
    // Пока оставляем незаполненным, это для проверки синтеза
    sdram_controller memory_controller (
        .clk_sys(clk_sys),
        .rst(!locked), // Сброс, пока PLL не стабилен
        .locked(locked)
        // ... остальные порты ...
    );

    //--- Индикация работы ---
    reg [23:0] counter = 0;
    always @(posedge clk_sys) begin
        if (!locked) counter <= 0;
        else counter <= counter + 1;
    end

    assign leds = counter[23:20]; // Мигаем светодиодами

endmodule
