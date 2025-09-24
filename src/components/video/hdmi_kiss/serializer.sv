// =============================================================================
// HDMI Scaler Core 
// =============================================================================
// For Aleste LX project by H2W
// =============================================================================

module serializer #(
    parameter WIDTH = 10
)(
    input  logic clk_pixel,      // 27 MHz
    input  logic clk_10x,        // 270 MHz  
    input  logic rst,
    input  logic [WIDTH-1:0] parallel_data,
    output logic serial_data
);

    logic [WIDTH-1:0] shift_reg;
    logic [3:0] bit_counter;

    always_ff @(posedge clk_10x or posedge rst) begin
        if (rst) begin
            shift_reg <= 0;
            bit_counter <= 0;
            serial_data <= 0;
        end else begin
            if (bit_counter == 0) begin
                // Загружаем новые данные по фронту пиксельного clock
                shift_reg <= parallel_data;
                serial_data <= parallel_data[0];
                bit_counter <= 1;
            end else begin
                // Сдвигаем данные
                serial_data <= shift_reg[bit_counter];
                if (bit_counter == WIDTH-1) begin
                    bit_counter <= 0;
                end else begin
                    bit_counter <= bit_counter + 1;
                end
            end
        end
    end

endmodule
