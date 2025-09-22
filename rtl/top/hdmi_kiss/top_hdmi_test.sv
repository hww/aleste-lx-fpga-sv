// =============================================================================
// Top Level: HDMI Test System
// =============================================================================

module top_hdmi_test (
    input  logic clk_25mhz,      // Тактовая частота платы 25 MHz
    input  logic rst,        // Кнопка сброса
    output logic [3:0] gpdi_dp,  // TMDS data+ [B, G, R, CLK]
    output logic [3:0] gpdi_dn   // TMDS data- [B, G, R, CLK]
);

    // =========================================================================
    // 1. Clock and Reset Generation
    // =========================================================================
    logic clk_96m;
    logic clk_32mhz;
    logic clk_27mhz;
    logic clk_270mhz;
    logic sys_pll_locked;
    logic video_pll_locked;
    logic rst_n;

    // Системный PLL: 25 MHz -> 96 MHz
    sys_pll sys_pll_inst (
        .clk_25mhz(clk_25mhz),
        .rst(1'b0),
        .clk_96m(clk_96m),
        .locked(sys_pll_locked)
    );

    // Видео PLL: 96 MHz -> 27 MHz и 270 MHz
    video_pll video_pll_inst (
        .clk_96m(clk_96m),
        .rst(!sys_pll_locked),
        .clk_27mhz(clk_27mhz),
        .clk_270mhz(clk_270mhz),
        .locked(video_pll_locked)
    );

    // Генерация 32 MHz из 96 MHz
    logic [1:0] clk_div;
    always_ff @(posedge clk_96m) begin
        clk_div <= clk_div + 1;
    end
    assign clk_32mhz = clk_div[1];  // 96 MHz / 3 ≈ 32 MHz

    // Сбросная логика
    assign rst_n = rst && sys_pll_locked && video_pll_locked;

    // =========================================================================
    // 2. Test Pattern Generation
    // =========================================================================
    logic [23:0] test_pixel;
    logic test_hsync, test_vsync, test_de;

    test_pattern_generator pattern_gen (
        .clk_32mhz(clk_32mhz),
        .rst(!rst_n),
        .pixel(test_pixel),
        .hsync(test_hsync),
        .vsync(test_vsync),
        .de(test_de)
    );

    // =========================================================================
    // 3. TMDS Encoding
    // =========================================================================
    logic [9:0] tmds_red, tmds_green, tmds_blue;
    logic [1:0] ctrl_signal;

    assign ctrl_signal = {test_vsync, test_hsync};

    // Red channel encoder
    tmds_encoder encoder_red (
        .clk(clk_27mhz),
        .rst(!rst_n),
        .data(test_pixel[23:16]),
        .c(ctrl_signal),
        .de(test_de),
        .tmds(tmds_red)
    );

    // Green channel encoder
    tmds_encoder encoder_green (
        .clk(clk_27mhz),
        .rst(!rst_n),
        .data(test_pixel[15:8]),
        .c(ctrl_signal),
        .de(test_de),
        .tmds(tmds_green)
    );

    // Blue channel encoder
    tmds_encoder encoder_blue (
        .clk(clk_27mhz),
        .rst(!rst_n),
        .data(test_pixel[7:0]),
        .c(ctrl_signal),
        .de(test_de),
        .tmds(tmds_blue)
    );

    // =========================================================================
    // 4. DDR Outputs for TMDS - ПРАВИЛЬНАЯ ВЕРСИЯ
    // =========================================================================
    // Для каждого TMDS бита нужно по два ODDRX1F: для + и -
    
    // Данные TMDS: синий, зеленый, красный
    genvar i;
    generate
    for (i = 0; i < 3; i = i + 1) begin : tmds_ddr
        logic ddr_data_0, ddr_data_1;
        logic ddr_data_0_n, ddr_data_1_n;
        
        always_ff @(posedge clk_270mhz) begin
            if (!rst_n) begin
                ddr_data_0 <= 1'b0;
                ddr_data_1 <= 1'b0;
                ddr_data_0_n <= 1'b1;  // Инвертированные для негативного выхода
                ddr_data_1_n <= 1'b1;
            end else begin
                case (i)
                    0: begin 
                        ddr_data_0 <= tmds_blue[0]; 
                        ddr_data_1 <= tmds_blue[1];
                        ddr_data_0_n <= ~tmds_blue[0];  // Инвертируем данные
                        ddr_data_1_n <= ~tmds_blue[1];
                    end
                    1: begin 
                        ddr_data_0 <= tmds_green[0]; 
                        ddr_data_1 <= tmds_green[1];
                        ddr_data_0_n <= ~tmds_green[0];
                        ddr_data_1_n <= ~tmds_green[1];
                    end
                    2: begin 
                        ddr_data_0 <= tmds_red[0]; 
                        ddr_data_1 <= tmds_red[1];
                        ddr_data_0_n <= ~tmds_red[0];
                        ddr_data_1_n <= ~tmds_red[1];
                    end
                endcase
            end
        end
        
        // Положительный выход
        ODDRX1F ddr_out_p (
            .Q(gpdi_dp[i]),
            .D0(ddr_data_0),
            .D1(ddr_data_1),
            .SCLK(clk_270mhz),
            .RST(!rst_n)
        );
        
        // Негативный выход
        ODDRX1F ddr_out_n (
            .Q(gpdi_dn[i]),
            .D0(ddr_data_0_n),
            .D1(ddr_data_1_n),
            .SCLK(clk_270mhz),
            .RST(!rst_n)
        );
    end
    endgenerate

    // Тактовый TMDS
    logic ddr_clk_0, ddr_clk_1;
    logic ddr_clk_0_n, ddr_clk_1_n;
    
    always_ff @(posedge clk_270mhz) begin
        if (!rst_n) begin
            ddr_clk_0 <= 1'b0;
            ddr_clk_1 <= 1'b0;
            ddr_clk_0_n <= 1'b1;  // Инвертированные
            ddr_clk_1_n <= 1'b1;
        end else begin
            ddr_clk_0 <= 1'b1;
            ddr_clk_1 <= 1'b0;
            ddr_clk_0_n <= 1'b0;  // Инвертированные: 0, 1
            ddr_clk_1_n <= 1'b1;
        end
    end
    
    // Тактовый положительный
    ODDRX1F clk_ddr_out_p (
        .Q(gpdi_dp[3]),
        .D0(ddr_clk_0),
        .D1(ddr_clk_1),
        .SCLK(clk_270mhz),
        .RST(!rst_n)
    );
    
    // Тактовый негативный
    ODDRX1F clk_ddr_out_n (
        .Q(gpdi_dn[3]),
        .D0(ddr_clk_0_n),
        .D1(ddr_clk_1_n),
        .SCLK(clk_270mhz),
        .RST(!rst_n)
    );

endmodule
