// cpc_colors.sv - Accurate CPC hardware register to RGB converter
module cpc_colors (
    input  wire        clk_i,
    input  wire [4:0]  hw_register, 
    output reg [11:0]  rgb_color
);

(* no_rw_check *)
reg [11:0] cpc_hw_to_rgb [0:26];

// Загрузка из файла - НЕТ КОМБИНАТОРНОГО ВЗРЫВА
initial begin
    $readmemh("cpc_palette.mem", cpc_hw_to_rgb);
end

always @(posedge clk_i) begin
    if (hw_register <= 26)
        rgb_color <= cpc_hw_to_rgb[hw_register];
    else
        rgb_color <= 12'h000;
end

endmodule
