module hdmi_scaler_wrapper #(
    parameter INPUT_WIDTH = 640,
    parameter INPUT_HEIGHT = 480,
    parameter PIXEL_DEPTH = 24
)(
    // System Interface
    input  logic clk_96m,
    input  logic rst_n,
    
    // Video Input
    input  logic [PIXEL_DEPTH-1:0] pixel_data,
    input  logic hsync_in,
    input  logic vsync_in,
    input  logic data_enable,
    
    // HDMI Output
    output logic [2:0] tmds_data_p,
    output logic [2:0] tmds_data_n,
    output logic tmds_clock_p,
    output logic tmds_clock_n
);

    // =========================================================================
    // 1. Video Clock Generation
    // =========================================================================
    logic video_clk;       // 27 MHz
    logic video_clk_10x;   // 270 MHz
    logic pll_locked;
    logic video_rst_n;

    video_pll ecp5_pll (
        .clki(clk_96m),
        .rst(!rst_n),
        .clkop(video_clk_10x),
        .clkos(video_clk),
        .lock(pll_locked)
    );

    assign video_rst_n = rst_n && pll_locked;

    // =========================================================================
    // 2. Video Scaling
    // =========================================================================
    logic dst_pixel_valid;
    logic [PIXEL_DEPTH-1:0] dst_pixel_data;
    logic dst_hsync;
    logic dst_vsync;

    hdmi_scaler_core #(
        .SRC_WIDTH(INPUT_WIDTH),
        .SRC_HEIGHT(INPUT_HEIGHT),
        .DATA_WIDTH(PIXEL_DEPTH),
        .V_SCALE(2)
    ) scaler_inst (
        .src_clk_i(clk_96m),
        .src_rst_i(!rst_n),
        .dst_clk_i(video_clk),
        .dst_rst_i(!video_rst_n),
        
        // Video Input
        .src_pixel_valid_i(data_enable),
        .src_pixel_data_i(pixel_data),
        .src_hsync_i(hsync_in),
        .src_vsync_i(vsync_in),

        // Video Output
        .dst_pixel_valid_o(dst_pixel_valid),
        .dst_pixel_data_o(dst_pixel_data),
        .dst_hsync_o(dst_hsync),
        .dst_vsync_o(dst_vsync)
    );

    // =========================================================================
    // 3. TMDS Encoding
    // =========================================================================
    tmds_encoder #(.CHANNEL("RED")) encoder_red (
        .clk(video_clk),
        .rst(!video_rst_n),
        .data(dst_pixel_data[23:16]),
        .hsync(dst_hsync),
        .vsync(dst_vsync),
        .data_enable(dst_pixel_valid),
        .tmds_out(tmds_red)
    );

    tmds_encoder #(.CHANNEL("GREEN")) encoder_green (
        .clk(video_clk),
        .rst(!video_rst_n),
        .data(dst_pixel_data[15:8]),
        .hsync(dst_hsync),
        .vsync(dst_vsync),
        .data_enable(dst_pixel_valid),
        .tmds_out(tmds_green)
    );

    tmds_encoder #(.CHANNEL("BLUE")) encoder_blue (
        .clk(video_clk),
        .rst(!video_rst_n),
        .data(dst_pixel_data[7:0]),
        .hsync(dst_hsync),
        .vsync(dst_vsync),
        .data_enable(dst_pixel_valid),
        .tmds_out(tmds_blue)
    );

    // =========================================================================
    // 4. DDR Output
    // =========================================================================
    ddr_output ddr_inst (
        .video_clk(video_clk),
        .video_clk_10x(video_clk_10x),
        .rst_n(video_rst_n),
        .tmds_red(tmds_red),
        .tmds_green(tmds_green),
        .tmds_blue(tmds_blue),
        .tmds_data_p(tmds_data_p),
        .tmds_data_n(tmds_data_n),
        .tmds_clock_p(tmds_clock_p),
        .tmds_clock_n(tmds_clock_n)
    );

endmodule
