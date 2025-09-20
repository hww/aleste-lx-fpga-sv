// ============================================================================
// ALESTE LX HDMI KISS module wrapper for ECP5
// ============================================================================

module hdmi_scaler_ecp5 #(
    parameter int INPUT_WIDTH = 640,
    parameter int INPUT_HEIGHT = 480,
    parameter int PIXEL_DEPTH = 24,
    parameter bit HSYNC_POLARITY = 1'b1,
    parameter bit VSYNC_POLARITY = 1'b1
)(
    input  logic clk_96m,
    input  logic rst_n,
    
    input  logic pixel_strobe,
    input  logic [PIXEL_DEPTH-1:0] pixel_data,
    input  logic hsync_in,
    input  logic vsync_in,
    input  logic data_enable,
    
    output logic [2:0] tmds_data_p,
    output logic [2:0] tmds_data_n,
    output logic tmds_clock_p,
    output logic tmds_clock_n,
    
    output logic [7:0]  debug_r_o,
    output logic [7:0]  debug_g_o,
    output logic [7:0]  debug_b_o,
    output logic        debug_hsync_o, 
    output logic        debug_vsync_o,
    output logic [1:0]  debug_buf_ready_sync_o,
    output logic [23:0] debug_current_pixel_o,
    output logic        debug_read_buf_sel_o
);

// ============================================================================
// 1. PLL для генерации видеоклоков
// ============================================================================
logic video_clk;      // 74.25 MHz для 720p
logic video_clk_5x;   // 371.25 MHz для DDR
logic pll_locked;

// Настройка PLL для ECP5
video_pll ecp5_pll (
    .clki(clk_96m),
    .rst(!rst_n),
    .clkop(video_clk_5x),
    .clkos(video_clk),
    .lock(pll_locked)
);

logic video_rst_n;
assign video_rst_n = rst_n && pll_locked;

// ============================================================================
// 2. Экземпляр основного скалера
// ============================================================================
logic [2:0] tmds_data;
logic tmds_clock;

hdmi_scaler #(
    .INPUT_WIDTH(INPUT_WIDTH),
    .INPUT_HEIGHT(INPUT_HEIGHT),
    .PIXEL_DEPTH(PIXEL_DEPTH),
    .HSYNC_POLARITY(HSYNC_POLARITY),
    .VSYNC_POLARITY(VSYNC_POLARITY)
) scaler_inst (
    .clk_96m(clk_96m),
    .rst_n(rst_n),
    
    .pixel_strobe(pixel_strobe),
    .pixel_data(pixel_data),
    .hsync_in(hsync_in),
    .vsync_in(vsync_in),
    .data_enable(data_enable),
    
    .video_clk(video_clk),
    
    .tmds_data(tmds_data),
    .tmds_clock(tmds_clock),
    .hdmi_data_enable(),
    
    .debug_r_o(debug_r_o),
    .debug_g_o(debug_g_o),
    .debug_b_o(debug_b_o),
    .debug_hsync_o(debug_hsync_o),
    .debug_vsync_o(debug_vsync_o),
    .debug_buf_ready_sync_o(debug_buf_ready_sync_o),
    .debug_current_pixel_o(debug_current_pixel_o),
    .debug_read_buf_sel_o(debug_read_buf_sel_o)
);

// ============================================================================
// 3. DDR выходы для TMDS данных
// ============================================================================
genvar i;
generate
for (i = 0; i < 3; i = i + 1) begin : tmds_ddr
    // Регистр для данных
    logic ddr_data_0, ddr_data_1;
    
    always_ff @(posedge video_clk_5x) begin
        ddr_data_0 <= tmds_data[i];
        ddr_data_1 <= tmds_data[i];
    end
    
    // ODDRX1F для DDR выхода
    ODDRX1F ddr_out (
        .Q(tmds_data_p[i]),
        .D0(ddr_data_0),
        .D1(ddr_data_1),
        .SCLK(video_clk_5x),
        .RST(!video_rst_n)
    );
    
    // Инверсный выход
    assign tmds_data_n[i] = ~tmds_data_p[i];
end
endgenerate

// ============================================================================
// 4. DDR выход для TMDS clock
// ============================================================================
logic ddr_clock_0, ddr_clock_1;

always_ff @(posedge video_clk_5x) begin
    ddr_clock_0 <= 1'b1;
    ddr_clock_1 <= 1'b0;
end

ODDRX1F clock_ddr_out (
    .Q(tmds_clock_p),
    .D0(ddr_clock_0),
    .D1(ddr_clock_1),
    .SCLK(video_clk_5x),
    .RST(!video_rst_n)
);

assign tmds_clock_n = ~tmds_clock_p;

endmodule

// ============================================================================
// 5. PLL модуль для ECP5
// ============================================================================
module video_pll (
    input  wire clki,     // 96 MHz input
    input  wire rst,
    output wire clkop,    // 371.25 MHz
    output wire clkos,    // 74.25 MHz
    output wire lock
);

// Параметры PLL для ECP5
defparam pll_inst.DIVR = 4'b0000;    // DIVR = 0
defparam pll_inst.DIVF = 7'b0111101; // DIVF = 61
defparam pll_inst.DIVQ = 3'b101;     // DIVQ = 5
defparam pll_inst.FILTER_RANGE = 3'b001;
defparam pll_inst.FEEDBACK_PATH = "SIMPLE";
defparam pll_inst.DELAY_ADJUSTMENT_MODE_FEEDBACK = "FIXED";
defparam pll_inst.FDA_FEEDBACK = 4'b0000;
defparam pll_inst.DELAY_ADJUSTMENT_MODE_RELATIVE = "FIXED";
defparam pll_inst.FDA_RELATIVE = 4'b0000;
defparam pll_inst.SHIFTREG_DIV_MODE = 2'b00;
defparam pll_inst.PLLOUT_SELECT_PORTA = "GENCLK";
defparam pll_inst.PLLOUT_SELECT_PORTB = "GENCLK";
defparam pll_inst.ENABLE_ICEGATE_PORTA = 1'b0;
defparam pll_inst.ENABLE_ICEGATE_PORTB = 1'b0;

EHXPLLL pll_inst (
    .RST(rst),
    .STDBY(1'b0),
    .CLKI(clki),
    .CLKOP(clkop),
    .CLKOS(clkos),
    .PHASESEL0(1'b0),
    .PHASESEL1(1'b0),
    .PHASEDIR(1'b0),
    .PHASESTEP(1'b0),
    .PLLWAKESYNC(1'b0),
    .ENCLKOP(1'b1),
    .ENCLKOS(1'b1),
    .LOCK(lock),
    .INTLOCK(),
    .REFCLK(),
    .CLKINTFB()
);

endmodule
