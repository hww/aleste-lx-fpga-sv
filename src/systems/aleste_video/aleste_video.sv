`default_nettype none


// Include configuration
`include "config_27mhz.vh"

module aleste_video #(
    parameter BASE_CLOCK    = `BASE_CLOCK,

    parameter SRC_H_VISIBLE      = `SRC_H_VISIBLE,
    parameter SRC_H_FRONT_PORCH  = `SRC_H_FRONT_PORCH,
    parameter SRC_H_SYNC_PULSE   = `SRC_H_SYNC_PULSE,
    parameter SRC_H_BACK_PORCH   = `SRC_H_BACK_PORCH,
     
    parameter SRC_V_VISIBLE      = `SRC_V_VISIBLE,
    parameter SRC_V_FRONT_PORCH  = `SRC_V_FRONT_PORCH,
    parameter SRC_V_SYNC_PULSE   = `SRC_V_SYNC_PULSE,
    parameter SRC_V_BACK_PORCH   = `SRC_V_BACK_PORCH,

    parameter HDMI_H_VISIBLE     = `HDMI_H_VISIBLE,
    parameter HDMI_H_FRONT_PORCH = `HDMI_H_FRONT_PORCH,
    parameter HDMI_H_SYNC_PULSE  = `HDMI_H_SYNC_PULSE,
    parameter HDMI_H_BACK_PORCH  = `HDMI_H_BACK_PORCH,
    
    parameter HDMI_V_VISIBLE     = `HDMI_V_VISIBLE,
    parameter HDMI_V_FRONT_PORCH = `HDMI_V_FRONT_PORCH,
    parameter HDMI_V_SYNC_PULSE  = `HDMI_V_SYNC_PULSE,
    parameter HDMI_V_BACK_PORCH  = `HDMI_V_BACK_PORCH,
    parameter BITS_PER_COLOR = 8,      // Bits per color channel
    parameter RESET_CYCLES = 4,        // Reset duration in clock cycles
    parameter CLOCK_INDEX = 3,         // GPIO index for clock output
    parameter DATA_INDICES = 3,        // Number of data channels (R, G, B)
       
    // SDRAM параметры
    parameter SDRAM_ADDR_WIDTH = 24,
    parameter SDRAM_DATA_WIDTH = 16
)(
    // Тактирование
    input  logic clk_25mhz,
    
    // HDMI выход
    output logic [2:0] gpdi_dp,  // TMDS данные
    output logic [2:0] gpdi_dn,
    output logic gpdi_clock_p,   // TMDS clock
    output logic gpdi_clock_n,
    
    // SDRAM интерфейс
    output logic sdram_clock,
    output logic sdram_cke,
    output logic sdram_cs_n,
    output logic sdram_ras_n,
    output logic sdram_cas_n,
    output logic sdram_we_n,
    output logic [12:0] sdram_a,
    output logic [1:0] sdram_ba,
    output logic [1:0] sdram_dm,
    inout  logic [15:0] sdram_dq,
    
    // Отладочные выходы
    output logic [7:0] debug_leds,
    output logic [7:0] debug
);
    localparam HDMI_H_TOTAL       = HDMI_H_VISIBLE + HDMI_H_FRONT_PORCH + HDMI_H_SYNC_PULSE + HDMI_H_BACK_PORCH;
    localparam HDMI_V_TOTAL       = HDMI_V_VISIBLE + HDMI_V_FRONT_PORCH + HDMI_V_SYNC_PULSE + HDMI_V_BACK_PORCH;

// ===========================================
// Тактовые сигналы
// ===========================================
logic clk_27m, clk_270m, clk_54m, clk_100m;
logic pll_locked;
logic system_reset;
// ===========================================
// Объявляем все сигналы ДО их использования
// ===========================================

// Memory Subsystem Signals
logic [23:0] sdram_addr;
logic [15:0] sdram_data_out;
logic [15:0] sdram_data_in; 
logic sdram_we, sdram_req, sdram_ack;

// HDMI Signals  
logic tmds_red, tmds_green, tmds_blue;

// Video Pipeline Signals
logic [15:0] crtc_vmem_data;
logic crtc_vmem_valid;
logic [7:0] pixel_index;
logic pixel_valid;
logic pipeline_de;

// Color Palette Signals
logic [11:0] pixel_color;

// HDMI Output Signals
logic [23:0] hdmi_pixel_data;
logic hdmi_rd, hdmi_newline, hdmi_newframe;


video_pll vid_pll(
        .rst(1'b0),
    .clkin_25M(clk_25mhz),
    .clk_270M(clk_270m),
    .clk_54M(clk_54m), 
    .clk_27M(clk_27m),
    .locked(pll_locked)
);

system_pll sys_pll(
    .clkin_25M(clk_25mhz),
    .clk_100M(clk_100m),
    .locked() // Используем общий locked
);

// Системный сброс
reset_controller reset_inst(
    .clk(clk_100m),
    .pll_locked(pll_locked),
    .system_reset(system_reset)
);

// ===========================================
// CRTC контроллер
// ===========================================
logic [13:0] crtc_ma;
logic [4:0] crtc_ra;
logic crtc_de, crtc_hsync, crtc_vsync;
logic crtc_cursor, crtc_newline, crtc_newframe;
logic [10:0] hdmi_x;
logic [9:0] hdmi_y;
logic hdmi_de;
logic [1:0] crtc_bpp_mode;        // 00=1bpp, 01=2bpp, 10=4bpp, 11=8bpp
logic       crtc_continuous_mode; // 0=CPC-style, 1=continuous  
logic       crtc_use_cpc_modes;   // 0=extended, 1=legacy CPC
logic [23:0] crtc_ext_addr;     // 24-bit extended address
logic        crtc_burst_req;    // 1=32-bit burst, 0=16-bit normal
logic [2:0]  crtc_addr_mode;    // Address mode
logic [1:0]  crtc_pixel_clock_sel; // Pixel clock selection
logic crtc_char;

mc6845mod #(
    .STANDARD("cpc"),
    .WB_ADDRESS(16'h6845),
    .HDMI_H_VISIBLE(HDMI_H_VISIBLE),
    .HDMI_V_VISIBLE(HDMI_V_VISIBLE),
        .HDMI_H_TOTAL(HDMI_H_TOTAL),
        .HDMI_V_TOTAL(HDMI_V_TOTAL)
) crtc (
    // Wishbone (пока не используем)
    .wb_clk_i(clk_100m),
    .wb_rst_i(system_reset),
    .wb_cyc_i(1'b0),
    .wb_stb_i(1'b0),
    .wb_adr_i(0),
    .wb_dat_i(0),
    .wb_sel_i(0),
    .wb_we_i(1'b0),
    .wb_ack_o(),
    .wb_dat_o(),
    .sel_o(),
    
    // Pixel Clock Domain  
    .pix_clk_i(clk_54m),
    .pix_en_i(clk_27m),

    // Video Outputs
    .crtc_de_o(crtc_de),
    .crtc_hsync_o(crtc_hsync),
    .crtc_vsync_o(crtc_vsync),
    .crtc_cursor_o(crtc_cursor),
    .crtc_newline_o(crtc_newline),
    .crtc_newframe_o(crtc_newframe),
    .crtc_char_o(crtc_char),

    // HDMI timing reference
    .hdmi_x_i(hdmi_x),
    .hdmi_y_i(hdmi_y),
    .hdmi_de_o(hdmi_de), // 720x480
    .hdmi_newline_i(hdmi_newline),
    .hdmi_newframe_i(hdmi_newframe),

    // Memory Address Interface
    .crtc_ma_o(crtc_ma),
    .crtc_ra_o(crtc_ra),
    .crtc_halt_o(),
    
    // Extended address
    .crtc_ext_addr_o(crtc_ext_addr),

    .crtc_bpp_mode(crtc_bpp_mode),                  // 00=1bpp, 01=2bpp, 10=4bpp, 11=8bpp
    .crtc_continuous_mode(crtc_continuous_mode),    // 0=CPC-style, 1=continuous  
    .crtc_use_cpc_modes(crtc_use_cpc_modes),        // 0=extended, 1=legacy CPC
    
    // NEW: Extended address interface
    .crtc_burst_req_o(crtc_burst_req),            // 1=32-bit burst, 0=16-bit normal
    .crtc_addr_mode_o(crtc_addr_mode),            // Address mode
    .crtc_pixel_clock_sel_o(crtc_pixel_clock_sel) // Pixel clock selection
);

// ===========================================
// Memory Subsystem
// ===========================================

memory_arbiter arbiter(
    .clk(clk_100m),
    .rst(system_reset),
    
    // CRTC interface (диктатор)
    .crtc_addr(crtc_ext_addr),
    .crtc_data(crtc_vmem_data),
    .crtc_valid(crtc_vmem_valid),
    .crtc_req(1'b1), // CRTC всегда требует данные
    
    // SDRAM controller interface
    .sdram_addr(sdram_addr),
    .sdram_data_out(sdram_data_out),
    .sdram_data_in(sdram_data_in),
    .sdram_we(sdram_we),
    .sdram_req(sdram_req),
    .sdram_ack(sdram_ack)
);

sdram_ctrl_wb sdram_controller(
    .wb_clk_i(clk_100m),
    .wb_rst_i(system_reset),
    .wb_cyc_i(sdram_req),
    .wb_stb_i(sdram_req),
    .wb_ack_o(sdram_ack),
    .wb_we_i(sdram_we),
    .wb_adr_i(sdram_addr),
    .wb_dat_i(sdram_data_out),
    .wb_dat_o(sdram_data_in),
    .wb_sel_i(2'b11),
    
    // SDRAM physical interface
    .sdram_dq(sdram_dq),
    .sdram_addr(sdram_a),
    .sdram_dqm(sdram_dm),
    .sdram_ba(sdram_ba),
    .sdram_cs_n(sdram_cs_n),
    .sdram_we_n(sdram_we_n),
    .sdram_ras_n(sdram_ras_n),
    .sdram_cas_n(sdram_cas_n),
    .sdram_cke(sdram_cke)
);

// SDRAM clock (100MHz с фазовым сдвигом)
ODDRX1F sdram_clk_oddr(
    .SCLK(clk_100m),
    .RST(1'b0),
    .D0(1'b0),
    .D1(1'b1),
    .Q(sdram_clock)
);

// ===========================================
// Video Buffer
// ===========================================

video_buffer vbuf (
    .clk_i(clk_54m),
    .rst_i(system_reset),
    
    // Видеопамять 16 бит
    .vmem_data_i(1'b1),
    .vmem_valid_i(1'b1),
    
    // К pixel_pipeline - 8 бит
    .pixel_data_o(),
    .pixel_strobe_o(),
    .pixel_valid_o(),
    
    .pix_ena_i(1'b1),
    .next_pixel_i(1'b1),
    .need_data_o()
);

// ===========================================
// Video Pipeline
// ===========================================

logic [15:0] pixel_pipeline_i;
logic [7:0] pixel_pipeline_o;

assign pixel_pipeline_i = 16'h48AF; //crtc_vmem_data;

pixel_pipeline pipeline(
    .clk_i(clk_54m),
    .rst_i(system_reset),
    .pix_ena_i(clk_27m),
    
    // Memory interface
    .byte_strobe_i(crtc_char),
    .byte_select_i(1'b0),
    .vmem_data_i(pixel_pipeline_i),
    
    // Configuration
    .bpp_mode_i(2'b00),
    .continuous_mode_i(1'b1),

    // CRTC timing
    .de_i(crtc_de),
    .next_pixel_i(clk_27m), // Упрощённо - всегда следующий пиксель
    
    // Pixel output
    .pixel_index_o(pixel_pipeline_o),
    .pixel_valid_o(pixel_valid),
    .de_o(pipeline_de)
);
   
// ===========================================
// Color Palette
// ===========================================

logic [7:0] pal_index_i;
logic [11:0] pal_pixel_o;

assign pal_index_i = pixel_pipeline_o;

color_palette palette(
    .wb_clk_i(clk_100m),
    .wb_rst_i(system_reset),
    .wb_adr_i(0),
    .wb_dat_i(0),
    .wb_dat_o(),
    .wb_we_i(1'b0),
    .wb_stb_i(1'b0),
    .wb_cyc_i(1'b0),
    .wb_ack_o(),
    .tag_i(2'b00),
    .legacy_mode_i(1'b0),
    
    // Pixel interface
    .pixel_index_i(pal_index_i),
    .is_border_i(~pipeline_de),
    .pixel_color_o(pal_pixel_o),
    .pixel_valid_o()
);

// ===========================================
// Scan Doubler (HDMI Scaler)
// ===========================================

logic [11:0] scaler_pixel_i;
logic [11:0] scaler_pixel_o;
logic src_buffer, dst_buffer;

assign scaler_pixel_i = pal_pixel_o;

hdmi_scaler #(
    .SRC_H_VISIBLE(720),     // CRTC генерирует 720x400?
    .DATA_WIDTH(12),
    .V_SCALE(2),            // Масштабируем по вертикали
    .HDMI_H_VISIBLE(HDMI_H_VISIBLE),
    .HDMI_V_VISIBLE(HDMI_V_VISIBLE),
    .PIX_TOTAL_W()
) scaler_inst (
    // Source domain (CRTC - 54MHz)
    .src_clk_i(clk_54m),
    .src_pix_en_i(clk_27m),
    .src_rst_i(system_reset),
    .src_pixel_data_i(scaler_pixel_i), 
    .src_newline_i(crtc_newline),
    .src_newframe_i(crtc_newframe),
    .src_buffer_o(src_buffer),
    .src_de_i(hdmi_de),
    
    // Destination domain (HDMI - 27MHz)  
    .dst_clk_i(clk_27m),
    .dst_rst_i(system_reset),
    .dst_newline_i(hdmi_newline),
    .dst_newframe_i(hdmi_newframe),
    .dst_rd_i(hdmi_rd),
    .dst_pixel_data_o(scaler_pixel_o), // К HDMI
    .dst_buffer_o(dst_buffer)
);

// Конвертируем 12-bit цвет в 24-bit для HDMI
assign hdmi_pixel_data = {
    scaler_pixel_o[11:8], scaler_pixel_o[11:8],  // R (4→8 bit)
    scaler_pixel_o[7:4], scaler_pixel_o[7:4],    // G (4→8 bit)  
    scaler_pixel_o[3:0], scaler_pixel_o[3:0]     // B (4→8 bit)
};



// ===========================================
// HDMI Output
// ===========================================


llhdmi #(
    .INPUT_LATENCY(1),
    .H_VISIBLE(HDMI_H_VISIBLE),
    .H_FRONT_PORCH(HDMI_H_FRONT_PORCH),
    .H_SYNC_PULSE(HDMI_H_SYNC_PULSE),
    .H_BACK_PORCH(HDMI_H_BACK_PORCH),
    .V_VISIBLE(HDMI_V_VISIBLE),
    .V_FRONT_PORCH(HDMI_V_FRONT_PORCH),
    .V_SYNC_PULSE(HDMI_V_SYNC_PULSE),
    .V_BACK_PORCH(HDMI_V_BACK_PORCH)
) hdmi (
    .i_tmdsclk(clk_270m),
    .i_pixclk(clk_27m),
    .i_reset(system_reset),
    .i_red(hdmi_pixel_data[23:16]),
    .i_grn(hdmi_pixel_data[15:8]),
    .i_blu(hdmi_pixel_data[7:0]),
    .o_rd(hdmi_rd),
    .o_newline(hdmi_newline),
    .o_newframe(hdmi_newframe),
    .o_resline(),
    .o_resframe(),
    .o_red(tmds_red),
    .o_grn(tmds_green), 
    .o_blu(tmds_blue),
    .o_x(hdmi_x),
    .o_y(hdmi_y)
);

// TMDS выходы
OBUFDS OBUFDS_red( .I(tmds_red),   .O(gpdi_dp[2]), .OB(gpdi_dn[2]) );
OBUFDS OBUFDS_grn( .I(tmds_green), .O(gpdi_dp[1]), .OB(gpdi_dn[1]) );
OBUFDS OBUFDS_blu( .I(tmds_blue),  .O(gpdi_dp[0]), .OB(gpdi_dn[0]) );
OBUFDS OBUFDS_clk( .I(clk_27m),    .O(gpdi_clock_p), .OB(gpdi_clock_n) );

// ===========================================
// Отладочные сигналы
// ===========================================

assign debug_leds = {
    1'b1,              // LED0: Always on (тест светодиодов)
    sdram_ack,       // LED1: SDRAM access
    crtc_vmem_valid, // LED2: Memory data valid
    crtc_hsync,      // LED3: CRTC HSync
    crtc_vsync,      // LED4: CRTC VSync 
    crtc_de,         // LED5: CRTC display active
    system_reset,    // LED6: Reset active (должен погаснуть после запуска)
    pll_locked      // LED7: PLL locked (должен гореть)
};

// ===========================================
// Отладка
// ===========================================
// LOCATION OF DEBUG PINS ON THE PCB
// --------------------------------------+
//    |          | F2 D1 C1 B1 GND       |  
//    | HDMI CON | E1 C2 B2 A2 GND       |
//    +----------+                       |
//                                       |
// --------------------------------------+

assign debug = {
    hdmi_newframe,
    hdmi_newline,    // LED0: Always on (тест светодиодов)
    sdram_ack,       // LED1: SDRAM access
    crtc_vmem_valid, // LED2: Memory data valid
    crtc_hsync,      // LED3: CRTC HSync
    crtc_vsync,      // LED4: CRTC VSync 
    crtc_de,         // LED5: CRTC display active
    crtc_char        // LED6: Reset active (должен погаснуть после запуска)
};
endmodule
