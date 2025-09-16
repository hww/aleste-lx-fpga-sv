
// ============================================================================
// ALESTE LX (https://github.com/hww/aleste-lx-fpga-sv)
// DVI Module 
// ============================================================================

// Простейший сериализатор для симуляции
module dvi_serializer #(
    parameter int WIDTH = 10
)(
    input  logic clk,
    input  logic clk_5x,
    input  logic [WIDTH-1:0] data_in,
    output logic out_p,
    output logic out_n
);
    logic [WIDTH-1:0] shift_reg;
    logic serial_bit;
    
    always_ff @(posedge clk_5x) begin
        if (clk) begin // Загрузка по медленному такту
            shift_reg <= data_in;
        end else begin // Сдвиг по быстрому такту
            shift_reg <= {shift_reg[WIDTH-2:0], 1'b0};
        end
        serial_bit <= shift_reg[WIDTH-1];
    end
    
    assign out_p = serial_bit;
    assign out_n = ~serial_bit; // Для дифференциального сигнала
endmodule
