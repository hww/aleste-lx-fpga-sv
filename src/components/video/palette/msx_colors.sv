// RAM-based MSX color converter
module msx_colors (
    input  logic        clk_i,
    input  logic [7:0]  hw_register,
    output logic [11:0] rgb_color
);

// 256x12 ROM с предрасчитанными MSX2+ цветами
logic [11:0] msx_color_rom [0:255];

initial begin
    // Инициализация ROM - предрасчет всех 256 значений
    for (int i = 0; i < 256; i++) begin
        logic [3:0] r_val, g_val, b_val;
        
        // R component (биты 7-5)
        case (i[7:5])
            3'b000: r_val = 4'h0;
            3'b001: r_val = 4'h3;
            3'b010: r_val = 4'h6;
            3'b011: r_val = 4'h9;
            3'b100: r_val = 4'hC;
            3'b101: r_val = 4'hD;
            3'b110: r_val = 4'hE;
            3'b111: r_val = 4'hF;
        endcase
        
        // G component (биты 4-2)
        case (i[4:2])
            3'b000: g_val = 4'h0;
            3'b001: g_val = 4'h3;
            3'b010: g_val = 4'h6;
            3'b011: g_val = 4'h9;
            3'b100: g_val = 4'hC;
            3'b101: g_val = 4'hD;
            3'b110: g_val = 4'hE;
            3'b111: g_val = 4'hF;
        endcase
        
        // B component (биты 1-0)
        case (i[1:0])
            2'b00: b_val = 4'h0;
            2'b01: b_val = 4'h5;
            2'b10: b_val = 4'hA;
            2'b11: b_val = 4'hF;
        endcase
        
        msx_color_rom[i] = {r_val, g_val, b_val};
    end
end

// Простой lookup из ROM
always_ff @(posedge clk_i) begin
    rgb_color <= msx_color_rom[hw_register];
end

endmodule
