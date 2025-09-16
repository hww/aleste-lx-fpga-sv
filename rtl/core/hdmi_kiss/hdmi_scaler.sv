module hdmi_scaler #(
    parameter int INPUT_WIDTH = 640,   // 640 для 16MHz, 512 для 12MHz
    parameter int OUTPUT_WIDTH = 1280, // HDMI 720p
    parameter int PIXEL_DEPTH = 24
)(
    // Системный такт
    input  logic clk_96m,
    input  logic rst_n,
    
    // Вход от ретро-ядра
    input  logic pixel_strobe,
    input  logic [PIXEL_DEPTH-1:0] pixel_data,
    input  logic hsync_in,
    input  logic vsync_in,
    input  logic data_enable,
    
    // HDMI выход
    output logic [2:0] tmds_data,
    output logic tmds_clock,
    output logic hdmi_data_enable
);

// ============================================================================
// 1. Размеры буферов и счетчиков
// ============================================================================
localparam int BUF_ADDR_WIDTH = INPUT_WIDTH <= 1024 ? 10 : 11;
localparam int OUT_ADDR_WIDTH = OUTPUT_WIDTH <= 1024 ? 10 : 11;

// Локальные параметры для приведения размерности
localparam logic [BUF_ADDR_WIDTH-1:0] INPUT_WIDTH_TRUNC = INPUT_WIDTH;
localparam logic [OUT_ADDR_WIDTH-1:0] OUTPUT_WIDTH_TRUNC = OUTPUT_WIDTH - 1;

logic [PIXEL_DEPTH-1:0] line_buf0 [0:INPUT_WIDTH-1];
logic [PIXEL_DEPTH-1:0] line_buf1 [0:INPUT_WIDTH-1];
logic buf_wr_select = 0;
logic buf_rd_select = 0;
logic [BUF_ADDR_WIDTH-1:0] wr_ptr = 0;
logic buf_ready [0:1];

// ============================================================================
// 2. Запись в буфер
// ============================================================================
always_ff @(posedge clk_96m or negedge rst_n) begin
    if (!rst_n) begin
        wr_ptr <= 0;
        buf_wr_select <= 0;
        buf_ready[0] <= 0;
        buf_ready[1] <= 0;
    end else if (pixel_strobe && data_enable) begin
        if (wr_ptr < INPUT_WIDTH_TRUNC) begin
            if (buf_wr_select == 0) begin
                line_buf0[wr_ptr] <= pixel_data;
            end else begin
                line_buf1[wr_ptr] <= pixel_data;
            end
            wr_ptr <= wr_ptr + 1;
        end
    end
    
    if (hsync_in) begin
        buf_ready[buf_wr_select] <= (wr_ptr > 0);
        buf_wr_select <= ~buf_wr_select;
        wr_ptr <= 0;
    end
end

// ============================================================================
// 3. Масштабирование и чтение
// ============================================================================
logic [OUT_ADDR_WIDTH-1:0] h_count = 0;
logic [PIXEL_DEPTH-1:0] current_pixel;

// Коэффициент масштабирования
localparam int SCALE_FACTOR = (OUTPUT_WIDTH * 256) / INPUT_WIDTH;

// Вычисление позиции
logic [BUF_ADDR_WIDTH-1:0] input_pos;
assign input_pos = (h_count * SCALE_FACTOR) >> 8;

always_ff @(posedge clk_96m or negedge rst_n) begin
    if (!rst_n) begin
        h_count <= 0;
        buf_rd_select <= 0;
        hdmi_data_enable <= 0;
        current_pixel <= 0;
    end else if (buf_ready[buf_rd_select]) begin
        h_count <= h_count + 1;
        
        if (input_pos < INPUT_WIDTH_TRUNC) begin
            if (buf_rd_select == 0) begin
                current_pixel <= line_buf0[input_pos];
            end else begin
                current_pixel <= line_buf1[input_pos];
            end
            hdmi_data_enable <= 1;
        end else begin
            hdmi_data_enable <= 0;
        end
        
        if (h_count == OUTPUT_WIDTH_TRUNC) begin
            h_count <= 0;
            buf_ready[buf_rd_select] <= 0;
            buf_rd_select <= ~buf_rd_select;
        end
    end
end

// ============================================================================
// 4. TMDS кодирование
// ============================================================================
logic [9:0] tmds_encoded [2:0];

tmds_encoder encoder_r (
    .clk(clk_96m),
    .rst_n(rst_n),
    .data(current_pixel[23:16]),
    .c(2'b00),
    .de(hdmi_data_enable),
    .tmds(tmds_encoded[2])
);

tmds_encoder encoder_g (
    .clk(clk_96m),
    .rst_n(rst_n),
    .data(current_pixel[15:8]),
    .c(2'b00),
    .de(hdmi_data_enable),
    .tmds(tmds_encoded[1])
);

tmds_encoder encoder_b (
    .clk(clk_96m),
    .rst_n(rst_n),
    .data(current_pixel[7:0]),
    .c({vsync_in, hsync_in}),
    .de(hdmi_data_enable),
    .tmds(tmds_encoded[0])
);

// ============================================================================
// 5. Сериализация
// ============================================================================
logic [3:0] bit_counter = 0;
logic [9:0] shift_reg [2:0];

always_ff @(posedge clk_96m or negedge rst_n) begin
    if (!rst_n) begin
        bit_counter <= 0;
        for (int i = 0; i < 3; i++) shift_reg[i] <= 0;
    end else begin
        if (bit_counter == 0) begin
            for (int i = 0; i < 3; i++) begin
                shift_reg[i] <= tmds_encoded[i];
            end
        end
        
        for (int i = 0; i < 3; i++) begin
            tmds_data[i] <= shift_reg[i][9];
            shift_reg[i] <= {shift_reg[i][8:0], 1'b0};
        end
        
        bit_counter <= (bit_counter == 9) ? 0 : bit_counter + 1;
    end
end

assign tmds_clock = clk_96m;

endmodule
