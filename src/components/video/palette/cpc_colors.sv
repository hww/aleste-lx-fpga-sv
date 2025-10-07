// cpc_colors.sv - Accurate CPC hardware register to RGB converter
module cpc_colors (
    input wire [7:0] hw_register,  // Raw byte from CPC Gate Array
    output reg [11:0] rgb_color    // 12-bit R4G4B4
);

// Distributed memory LUT для точного маппинга CPC hardware значений
(* rom_style = "distributed" *) 
reg [11:0] cpc_hw_to_rgb [0:255];

// Инициализация точных CPC цветов на основе предоставленной таблицы
initial begin
    // Инициализируем все значения по умолчанию
    for (int i = 0; i < 256; i++) begin
        cpc_hw_to_rgb[i] = 12'h000; // Black by default
    end
    
    // Точные CPC цвета из вашей таблицы
    cpc_hw_to_rgb[8'h54] = 12'h000; // 0  Black
    cpc_hw_to_rgb[8'h44] = 12'h005; // 1  Blue (или 8'h50?)
    cpc_hw_to_rgb[8'h50] = 12'h005; // 1  Blue (альтернатива)
    cpc_hw_to_rgb[8'h55] = 12'h00F; // 2  Bright Blue
    cpc_hw_to_rgb[8'h5C] = 12'h500; // 3  Red
    cpc_hw_to_rgb[8'h58] = 12'h505; // 4  Magenta
    cpc_hw_to_rgb[8'h5D] = 12'h50F; // 5  Mauve
    cpc_hw_to_rgb[8'h4C] = 12'hF00; // 6  Bright Red
    cpc_hw_to_rgb[8'h45] = 12'hF05; // 7  Purple
    cpc_hw_to_rgb[8'h48] = 12'hF05; // 7  Purple (альтернатива)
    cpc_hw_to_rgb[8'h4D] = 12'hF0F; // 8  Bright Magenta
    cpc_hw_to_rgb[8'h56] = 12'h050; // 9  Green
    cpc_hw_to_rgb[8'h46] = 12'h055; // 10 Cyan
    cpc_hw_to_rgb[8'h57] = 12'h05F; // 11 Sky Blue
    cpc_hw_to_rgb[8'h5E] = 12'h550; // 12 Yellow
    cpc_hw_to_rgb[8'h40] = 12'h555; // 13 White
    cpc_hw_to_rgb[8'h41] = 12'h555; // 13 White (альтернатива)
    cpc_hw_to_rgb[8'h5F] = 12'h55F; // 14 Pastel Blue
    cpc_hw_to_rgb[8'h4E] = 12'hF50; // 15 Orange
    cpc_hw_to_rgb[8'h47] = 12'hF55; // 16 Pink
    cpc_hw_to_rgb[8'h4F] = 12'hF5F; // 17 Pastel Magenta
    cpc_hw_to_rgb[8'h52] = 12'h0F0; // 18 Bright Green
    cpc_hw_to_rgb[8'h42] = 12'h0F5; // 19 Sea Green
    cpc_hw_to_rgb[8'h51] = 12'h0F5; // 19 Sea Green (альтернатива)
    cpc_hw_to_rgb[8'h53] = 12'h0FF; // 20 Bright Cyan
    cpc_hw_to_rgb[8'h5A] = 12'h5F0; // 21 Lime
    cpc_hw_to_rgb[8'h59] = 12'h5F5; // 22 Pastel Green
    cpc_hw_to_rgb[8'h5B] = 12'h5FF; // 23 Pastel Cyan
    cpc_hw_to_rgb[8'h4A] = 12'hFF0; // 24 Bright Yellow
    cpc_hw_to_rgb[8'h43] = 12'hFF5; // 25 Pastel Yellow
    cpc_hw_to_rgb[8'h49] = 12'hFF5; // 25 Pastel Yellow (альтернатива)
    cpc_hw_to_rgb[8'h4B] = 12'hFFF; // 26 Bright White
end

always @(*) begin
    rgb_color = cpc_hw_to_rgb[hw_register];
end

endmodule
