// ============================================================================
// ALESTE LX (https://github.com/hww/aleste-lx-fpga-sv)
// DVI Module 
// ============================================================================

module tmds_encoder #(
    parameter int DATA_WIDTH = 8,
    parameter int TMDS_WIDTH = 10
)(
    input  logic clk,
    input  logic [DATA_WIDTH-1:0] data,
    input  logic [1:0] c,
    input  logic de,
    output logic [TMDS_WIDTH-1:0] tmds
);

    // Упрощенная, но рабочая реализация TMDS кодирования
    // Для целей тестирования и отладки
    
    logic [3:0] ones_count;
    
    // Функция подсчета единиц
    function automatic [3:0] count_ones(input [7:0] word);
        count_ones = 0;
        for (int i = 0; i < 8; i++) begin
            if (word[i]) count_ones++;
        end
    endfunction
    
    // Основная логика кодирования
    always_ff @(posedge clk) begin
        if (!de) begin
            // Control period - стандартные DVI коды
            case (c)
                2'b00: tmds <= 10'b1101010100;
                2'b01: tmds <= 10'b0010101011;
                2'b10: tmds <= 10'b0101010100;
                2'b11: tmds <= 10'b1010101011;
                default: tmds <= 10'b1101010100;
            endcase
        end else begin
            // Data period - упрощенное кодирование
            ones_count <= count_ones(data);
            
            if (ones_count > 4 || (ones_count == 4 && data[0] == 0)) begin
                // XOR encoding
                tmds[9:8] <= 2'b01;
                tmds[7] <= data[7];
                tmds[6] <= data[6] ^ data[7];
                tmds[5] <= data[5] ^ data[6];
                tmds[4] <= data[4] ^ data[5];
                tmds[3] <= data[3] ^ data[4];
                tmds[2] <= data[2] ^ data[3];
                tmds[1] <= data[1] ^ data[2];
                tmds[0] <= data[0] ^ data[1];
            end else begin
                // XNOR encoding
                tmds[9:8] <= 2'b10;
                tmds[7] <= data[7];
                tmds[6] <= data[6] ~^ data[7];
                tmds[5] <= data[5] ~^ data[6];
                tmds[4] <= data[4] ~^ data[5];
                tmds[3] <= data[3] ~^ data[4];
                tmds[2] <= data[2] ~^ data[3];
                tmds[1] <= data[1] ~^ data[2];
                tmds[0] <= data[0] ~^ data[1];
            end
        end
    end

endmodule
