module msx_colors (
    input  logic        clk_i,
    input  logic        yjk_mode, // 0 = RGB, 1 = YJK
    input  logic [7:0]  hw_register,  // 8-битный цвет
    output logic [11:0] rgb_color
);

// Память 512x12 бит = 2 палитры по 256 цветов
(* no_rw_check, ram_style = "block" *)
logic [11:0] color_rom [0:511];

// Загрузка из внешнего файла
initial begin
    $readmemh("msx_palette.mem", color_rom);
end

// Адрес: palette_mode = старший бит, hw_register = младшие 8 бит
logic [8:0] rom_address;
assign rom_address = {yjk_mode, hw_register};

// Один простой доступ к памяти
always_ff @(posedge clk_i) begin
    rgb_color <= color_rom[rom_address];
end

endmodule
