module pixel_pipeline (
    input wire clk_i,
    input wire rst_i,
    
    // Timing from CRT
    input wire pix_ena_i,        // Основной пиксельный такт (фиксированная частота)
    input wire pix_shift_i,      // Строб сдвига (разная частота в разных режимах)
    input wire byte_strobe_i,    // Загрузка байта
    input wire byte_select_i,    // 0=младший байт, 1=старший байт
    
    // Data input
    input wire [15:0] vmem_data_i,
    
    // Configuration
    input wire [1:0] bpp_mode_i,
    input wire continuous_mode_i,
    
    // Output to palette
    output wire [7:0] pixel_index_o,
    output wire pixel_valid_o
);

reg [7:0] shift_reg;
reg [7:0] pixel_index_latch;
reg pixel_valid;

// Вся логика ТОЛЬКО по pix_ena_i для фиксированной латентности
always @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        shift_reg <= 8'b0;
        pixel_index_latch <= 8'b0;
    end else if (pix_ena_i) begin
        // Загрузка байта (имеет приоритет над сдвигом)
        if (byte_strobe_i) begin
            shift_reg <= byte_select_i ? vmem_data_i[15:8] : vmem_data_i[7:0];
        end
        // Вычисление пикселя по pix_shift_i (если не было загрузки)
        else if (pix_shift_i) begin
            case (bpp_mode_i)
                2'b00: begin // 1bpp - 8 пикселей из байта
                    // Continuous: [7], [6], [5], [4], [3], [2], [1], [0]
                    pixel_index_latch <= {7'b0, shift_reg[7]};
                    shift_reg <= {shift_reg[6:0], 1'b0};
                end
                
                2'b01: begin // 2bpp - 4 пикселя из байта
                    if (continuous_mode_i) begin
                        // Continuous: красивые последовательные пары [7:6], [5:4], [3:2], [1:0]
                        pixel_index_latch <= {6'b0, shift_reg[7:6]};
                        shift_reg <= {shift_reg[5:0], 2'b0};
                    end else begin
                        // CPC Mode 1: [3,7], [2,6], [1,5], [0,4]
                        pixel_index_latch <= {6'b0, shift_reg[3], shift_reg[7]};
                        shift_reg <= {shift_reg[6:0], 1'b0};
                    end
                end
                
                2'b10: begin // 4bpp - 2 пикселя из байта
                    if (continuous_mode_i) begin
                        // Continuous: красивые тетрады [7:4], [3:0]
                        pixel_index_latch <= {4'b0, shift_reg[7:4]};
                        shift_reg <= {shift_reg[3:0], 4'b0};
                    end else begin
                        // CPC Mode 0: [1,5,3,7], [0,4,2,6]
                        pixel_index_latch <= {4'b0, shift_reg[1], shift_reg[5], shift_reg[3], shift_reg[7]};
                        shift_reg <= {shift_reg[6:0], 1'b0};
                    end
                end
                
                2'b11: begin // 8bpp - 1 пиксель из байта
                    // Весь байт = один пиксель, биты не перепутаны
                    pixel_index_latch <= shift_reg;
                    // Сдвиг не нужен - всегда загружаем новый байт
                    shift_reg <= 8'b0; // Очищаем после использования
                end
            endcase
        end
    end
end

always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        pixel_valid <= 0;
    end else if (pix_ena_i) begin
        pixel_valid <= pix_shift_i;
    end
end
 
assign pixel_index_o = pixel_index_latch;
assign pixel_valid_o = pixel_valid;


endmodule
