// cpc_colors.sv - Accurate CPC hardware register to RGB converter
module cpc_colors (
    input  wire        clk_i,         // ← ДОБАВИЛ такт
    input  wire [4:0]  hw_register,   // Raw byte from CPC Gate Array
    output reg [11:0]  rgb_color      // 12-bit R4G4B4
);

// Distributed memory LUT для точного маппинга CPC hardware значений
//(* rom_style = "distributed" *) 
(* no_rw_check *)
reg [11:0] cpc_hw_to_rgb [0:26];

// Pipeline регистр
reg [11:0] rgb_color_ff;

// Инициализация точных CPC цветов на основе предоставленной таблицы
initial begin
    // Точные CPC цвета - 27 цветов CPC
    cpc_hw_to_rgb[0]  = 12'h000; // Black
    cpc_hw_to_rgb[1]  = 12'h005; // Blue
    cpc_hw_to_rgb[2]  = 12'h00F; // Bright Blue
    cpc_hw_to_rgb[3]  = 12'h500; // Red
    cpc_hw_to_rgb[4]  = 12'h505; // Magenta
    cpc_hw_to_rgb[5]  = 12'h50F; // Mauve
    cpc_hw_to_rgb[6]  = 12'hF00; // Bright Red
    cpc_hw_to_rgb[7]  = 12'hF05; // Purple
    cpc_hw_to_rgb[8]  = 12'hF0F; // Bright Magenta
    cpc_hw_to_rgb[9]  = 12'h050; // Green
    cpc_hw_to_rgb[10] = 12'h055; // Cyan
    cpc_hw_to_rgb[11] = 12'h05F; // Sky Blue
    cpc_hw_to_rgb[12] = 12'h550; // Yellow
    cpc_hw_to_rgb[13] = 12'h555; // White
    cpc_hw_to_rgb[14] = 12'h55F; // Pastel Blue
    cpc_hw_to_rgb[15] = 12'hF50; // Orange
    cpc_hw_to_rgb[16] = 12'hF55; // Pink
    cpc_hw_to_rgb[17] = 12'hF5F; // Pastel Magenta
    cpc_hw_to_rgb[18] = 12'h0F0; // Bright Green
    cpc_hw_to_rgb[19] = 12'h0F5; // Sea Green
    cpc_hw_to_rgb[20] = 12'h0FF; // Bright Cyan
    cpc_hw_to_rgb[21] = 12'h5F0; // Lime
    cpc_hw_to_rgb[22] = 12'h5F5; // Pastel Green
    cpc_hw_to_rgb[23] = 12'h5FF; // Pastel Cyan
    cpc_hw_to_rgb[24] = 12'hFF0; // Bright Yellow
    cpc_hw_to_rgb[25] = 12'hFF5; // Pastel Yellow
    cpc_hw_to_rgb[26] = 12'hFFF; // Bright White
end

// Pipeline стадия - убираем комбинаторный взрыв
always @(posedge clk_i) begin
    // Защита от выхода за границы массива
    if (hw_register <= 26)
        rgb_color_ff <= cpc_hw_to_rgb[hw_register];
    else
        rgb_color_ff <= 12'h000; // Черный по умолчанию
end

// Выход всегда защелкнут
assign rgb_color = rgb_color_ff;

endmodule
