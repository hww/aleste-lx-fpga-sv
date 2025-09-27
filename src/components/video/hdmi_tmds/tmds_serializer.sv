module tmds_serializer #(
    parameter WIDTH = 10
)(
    input  logic clk_pixel,      // 27 MHz
    input  logic clk_10x,        // 270 MHz  
    input  logic rst,
    input  logic [WIDTH-1:0] parallel_data,
    output logic serial_data,
    output logic hdmi_clk
);

    logic [WIDTH-1:0] tmds_data_reg;     // Регистр в домене 27MHz
    logic [WIDTH-1:0] shift_reg;         // Регистр сдвига в домене 270MHz
    logic load_strobe;                   // Строб загрузки
    logic load_strobe_middle;
    // ==================================================
    // Домен 27MHz - подготовка данных
    // ==================================================
    always_ff @(posedge clk_pixel or posedge rst) begin
        if (rst) begin
            tmds_data_reg <= 0;
        end else begin
            tmds_data_reg <= parallel_data;  // Загрузка новых данных
        end
    end
    
    // ==================================================  
    // Домен 270MHz - сериализация
    // ==================================================
    logic [3:0] bit_counter;
    
    // Генерация строба загрузки (каждый 10-й такт)
    always_ff @(posedge clk_10x or posedge rst) begin
        if (rst) begin
            bit_counter <= 0;
            load_strobe <= 0;
            load_strobe_middle <= 0;
            hdmi_clk <= 0;
        end else begin
            bit_counter <= (bit_counter == 9) ? 0 : bit_counter + 1;
            load_strobe <= (bit_counter == 9);
            load_strobe_middle <= (bit_counter == 4);
            if (load_strobe) begin
               hdmi_clk <= '1;
            end else if (load_strobe_middle) begin
               hdmi_clk <= '0;
            end else begin               
               hdmi_clk <= hdmi_clk;
            end

        end
    end
    
    // Сдвиговый регистр
    always_ff @(posedge clk_10x or posedge rst) begin
        if (rst) begin
            shift_reg <= 0;
            serial_data <= 0;
        end else if (load_strobe) begin
            shift_reg <= tmds_data_reg;      // Загрузка из пиксельного домена
            serial_data <= tmds_data_reg[0]; // Первый бит
        end else begin
            shift_reg <= shift_reg >> 1;     // Сдвиг
            serial_data <= shift_reg[1];     // Следующий бит
        end
    end


endmodule