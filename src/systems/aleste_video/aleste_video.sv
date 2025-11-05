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
    parameter BITS_PER_COLOR = 8,
    parameter RESET_CYCLES = 4,
    parameter CLOCK_INDEX = 3,
    parameter DATA_INDICES = 3,
       
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
    
    // UART интерфейс
    input  logic serial_rx,
    output logic serial_tx,
    
    // Отладочные выходы
    output logic [2:0] debug_leds,
    output logic [7:0] debug
);

    localparam HDMI_H_TOTAL       = HDMI_H_VISIBLE + HDMI_H_FRONT_PORCH + HDMI_H_SYNC_PULSE + HDMI_H_BACK_PORCH;
    localparam HDMI_V_TOTAL       = HDMI_V_VISIBLE + HDMI_V_FRONT_PORCH + HDMI_V_SYNC_PULSE + HDMI_V_BACK_PORCH;

    // ===========================================
    // Clock & Reset
    // ===========================================
    logic clk_27m, clk_270m, clk_54m, clk_108m;
    logic pll_locked;
    logic system_reset;
    logic clk_pixel, clk_pixel_x2, clk_bus, clk_system;

    video_pll vid_pll(
        .rst(1'b0),
        .clkin_25M(clk_25mhz),
        .clk_270M(clk_270m),
        .clk_54M(clk_54m), 
        .clk_27M(clk_27m),
        .clk_108M(clk_108m),
        .locked(pll_locked)
    );


    localparam CLK_FREQ_SYSTEM = 108_000_000;
    localparam CLK_FREQ_BUS = 54_000_000;
    localparam CLK_FREQ_PIXEL = 27_000_000;

    assign clk_system = clk_108m;
    assign clk_bus = clk_54m;
    assign clk_pixel = clk_27m;
    assign clk_pixel_x2 = clk_54m;

    // Системный сброс
    reset_controller reset_inst(
        .clk(clk_system),
        .clke(clk_pixel),
        .pll_locked(pll_locked),
        .system_reset(system_reset),
        .boot_complete()
    );

    // ===========================================
    // Signal Declarations
    // ===========================================
    
    // Memory Subsystem Signals
    logic [23:0] mem2sdram_addr;
    logic [15:0] mem2sdram_data_out;
    logic [15:0] mem2sdram_data_in; 
    logic mem2sdram_we, mem2sdram_req, mem2sdram_ack0, mem2sdram_ack1, mem2sdram_grant;
    logic mem2sdram_burst;
    logic [2:0] mem2sdram_burst_len;
    logic [1:0] mem2sdram_sel;

    // Video Pipeline Signals
    logic [7:0] ppu2pal_color;
    logic ppu2pal_pixel_stb;
    logic ppu2pal_de;

    // Video Buffer Signals
    logic [15:0] vbuf_data;
    logic [7:0] vbuf_data_o;
    logic vbuf_req, vbuf_ack0, vbuf_ack1, vbuf_de_o;
    logic vbuf_burst_request;
    logic vbuf_stb_byte, vbuf_stb_pixel;
    logic [1:0] vbuf_byte_select;

    // Color Palette Signals
    logic [11:0] pixel_color;

    // HDMI Signals  
    logic tmds_red, tmds_green, tmds_blue;
    logic [23:0] hdmi_pixel_data;
    logic hdmi_rd, hdmi_newline, hdmi_newframe;
    logic [10:0] hdmi_x;
    logic [9:0] hdmi_y;
    logic hdmi_de;

    // Wishbone Signals
    logic uart2ext_cyc, uart2ext_stb, uart2ext_ack, uart2ext_we, uart2ext_grant, uart2ext_err;
    logic [23:0] uart2ext_adr;
    logic [7:0] uart2ext_dat_out, uart2ext_dat_in;
    logic [1:0] uart2ext_sel;
      
    logic system2palette_cyc, system2palette_stb, system2palette_ack, system2palette_we, system2palette_grant;
    logic [23:0] system2palette_adr;
    logic [7:0] system2palette_dat_in, system2palette_dat_out;
    logic [1:0] system2palette_sel, system2palette_tag;

    logic system2crtc_cyc, system2crtc_stb, system2crtc_ack, system2crtc_we, system2crtc_grant;
    logic [23:0] system2crtc_adr;
    logic [7:0] system2crtc_dat_in, system2crtc_dat_out;
    logic [1:0] system2crtc_sel, system2crtc_tag;

    logic system2mem_cyc, system2mem_stb, system2mem_ack, system2mem_we, system2mem_grant;
    logic [23:0] system2mem_adr;
    logic [7:0] system2mem_dat_in, system2mem_dat_out;
    logic [1:0] system2mem_sel, system2mem_tag;
    logic [1:0] debug_mem_arbiter_state;
    logic debug_mem_video_active, debug_mem_wb_active;

    // CRTC Signals
    logic [13:0] crtc_ma;
    logic [4:0] crtc_ra;
    logic crtc_de, crtc_hsync, crtc_vsync;
    logic crtc_cursor, crtc_newline, crtc_newframe;
    logic [1:0] crtc_bpp;
    logic cfg_linear;
    logic [23:0] crtc2mem_addr;
    logic cfg_burst;
    logic [1:0] cfg_rate;
    logic crtc_stb_char, crtc_stb_word, crtc_stb_pixel, crtc_stb_byte, crtc_stb_origin;
    logic crtc_halt; // For debug

    // Scan Doubler Signals
    logic [11:0] scaler_pixel_i;
    logic [11:0] scaler_pixel_o;
    logic src_buffer, dst_buffer;

    // Boot Controller
    logic boot_complete;
    assign boot_complete = !system_reset;

    // Legacy mode
    logic cfg_legacy = 1'b0;

    // ===========================================
    // UART Bridge (заменяет тестовый генератор)
    // ===========================================
    
    // UART Bridge сигналы
    logic uart_rx_ready, uart_rx_idle, uart_rx_eop;
    logic serial_rx_clk, serial_tx_clk;
    logic uart_tx_busy;

    logic uart2dbg_cyc, uart2dbg_stb, uart2dbg_we, uart2dbg_ack;
    logic [7:0] uart2dbg_adr;
    logic [7:0] uart2dbg_dat_in, uart2dbg_dat_out;
    logic [1:0] uart2dbg_sel;
    logic debug_uart_bus_stb, debug_uart_bus_ack;
    logic [3:0] debug_uart_cmd_state;
    logic [1:0] debug_uart_bus_state;

    uart_bridge #(
        .CLK_FREQ(CLK_FREQ_SYSTEM),
        .BUS_FREQ(CLK_FREQ_BUS),
        .WB_ADDR_WIDTH(24),
        .DBG_ADDR_WIDTH(8),
        .UART_DATA_WIDTH(8),
        .BAUD_RATE(115200),

        .OVERSAMPLING(16) // 8 does not work        
    ) uart_bridge_inst (
        .clk_i(clk_bus),
        .rst(system_reset),
        
        // UART Interface
        .uart_rx(serial_rx),
        .uart_tx(serial_tx),
        .uart_rx_clk(serial_rx_clk),
        .uart_tx_clk(serial_tx_clk),
        .uart_rx_ready(uart_rx_ready),
        .uart_rx_idle(uart_rx_idle),
        .uart_rx_eop(uart_rx_eop),
        .uart_tx_busy(uart_tx_busy),

        // Wishbone Master Interface
        .wb_cyc_o(uart2ext_cyc),
        .wb_stb_o(uart2ext_stb),
        .wb_we_o(uart2ext_we),
        .wb_adr_o(uart2ext_adr),
        .wb_dat_o(uart2ext_dat_out),
        .wb_dat_i(uart2ext_dat_in),
        .wb_ack_i(uart2ext_ack),
        .wb_err_i(uart2ext_err),

        .dbg_cyc_o(uart2dbg_cyc),
        .dbg_stb_o(uart2dbg_stb),
        .dbg_we_o(uart2dbg_we),
        .dbg_adr_o(uart2dbg_adr),
        .dbg_dat_o(uart2dbg_dat_out),
        .dbg_dat_i(uart2dbg_dat_in),
        .dbg_ack_i(uart2dbg_ack),
        .dbg_err_i('0),

        .cmd_state_o(debug_uart_cmd_state),
        .bus_state_o(debug_uart_bus_state),
        .bus_ack_o(debug_uart_bus_ack),
        .bus_stb_o(debug_uart_bus_stb)
    );
    logic [2:0] tag;
    logic [7:0] cs, cs_system, cs_legacy;
    logic pal_cs, crtc_cs;

    address_decoder adu (
        .cfg_legacy_i(cfg_legacy),
        .wb_adr_i(uart2ext_adr),
        
        .wb_tag_o(tag),           // ← output

        .cs_o(cs),               // 8 устройств в native space
        .cs_system_o(cs_system),        // system devices  
        .cs_legacy_o(cs_legacy)         // legacy devices
    );

    assign pal_cs = cs_legacy[0];
    assign crtc_cs = cs_legacy[1];

    logic [7:0] dbg_data;
    wb_simple_reg dbg_reg (
        // Wishbone interface
        .clk_i(clk_bus),
        .rst_i(system_reset),
        .stb_i(uart2dbg_stb),
        .we_i(uart2dbg_we),
        .adr_i(uart2dbg_ack),
        .dat_i(uart2dbg_dat_out),
        .dat_o(uart2dbg_dat_in),
        .ack_o(uart2dbg_ack),
        .reg_out(dbg_data)
    );

    // ===========================================
    // Internal WB Arbiter
    // ===========================================

    system_arbiter sys_arbiter (
        .clk(clk_bus),
        .rst(system_reset),
        
        // External WB Interface (от UART Bridge)
        .wb_ext_cyc_i(uart2ext_cyc),
        .wb_ext_stb_i(uart2ext_stb),
        .wb_ext_grant_o(uart2ext_grant),
        .wb_ext_ack_o(uart2ext_ack),
        .wb_ext_we_i(uart2ext_we),
        .wb_ext_adr_i(uart2ext_adr),
        .wb_ext_dat_i(uart2ext_dat_out),
        .wb_ext_dat_o(uart2ext_dat_in),
        .wb_ext_tag_i(tag),

        // Palette Interface
        .palette_cyc_o(system2palette_cyc),
        .palette_stb_o(system2palette_stb),
        .palette_grant_i(system2palette_grant),
        .palette_ack_i(system2palette_ack),
        .palette_we_o(system2palette_we),
        .palette_adr_o(system2palette_adr),
        .palette_dat_o(system2palette_dat_out),
        .palette_dat_i(system2palette_dat_in),
        .palette_tag_o(system2palette_tag),

        // CRTC Interface
        .crtc_cyc_o(system2crtc_cyc),
        .crtc_stb_o(system2crtc_stb),
        .crtc_grant_i(system2crtc_grant), 
        .crtc_ack_i(system2crtc_ack),
        .crtc_we_o(system2crtc_we),
        .crtc_adr_o(system2crtc_adr),
        .crtc_dat_o(system2crtc_dat_out),
        .crtc_dat_i(system2crtc_dat_in),
        .crtc_tag_o(system2crtc_tag),
        
        // Memory Interface
        .mem_cyc_o(system2mem_cyc),
        .mem_stb_o(system2mem_stb),
        .mem_grant_i(system2mem_grant),
        .mem_ack_i(system2mem_ack),
        .mem_we_o(system2mem_we),
        .mem_adr_o(system2mem_adr),
        .mem_dat_o(system2mem_dat_out),
        .mem_dat_i(system2mem_dat_in),
        .mem_tag_o(system2mem_tag)
    );

    // ===========================================
    // CRTC контроллер
    // ===========================================
    mc6845mod #(
        .STANDARD("cpc"),
        .WB_ADDRESS(16'h6845),
        .HDMI_H_VISIBLE(HDMI_H_VISIBLE),
        .HDMI_V_VISIBLE(HDMI_V_VISIBLE),
        .HDMI_H_TOTAL(HDMI_H_TOTAL),
        .HDMI_V_TOTAL(HDMI_V_TOTAL)
    ) crtc (
        // Wishbone
        .wb_rst_i(system_reset),
        .wb_clk_i(clk_bus),
        .cfg_legacy_i(cfg_legacy),
        .cfg_cpc_bpp_i('0),             // graphics mode from CPC

        // Wishbone interface
        .wb_cyc_i(system2crtc_cyc),
        .wb_stb_i(system2crtc_stb),
        .wb_adr_i(system2crtc_adr),
        .wb_dat_i(system2crtc_dat_out),
        .wb_we_i(system2crtc_we),
        .wb_ack_o(system2crtc_ack),
        .wb_dat_o(system2crtc_dat_in),
        .wb_grant_o(system2crtc_grant), // CRTC self-detection to arbiter
        .wb_cs_i(crtc_cs),
        .wb_tag_i(system2crtc_tag),

        // Pixel Clock Domain  
        .pix_clk_i(clk_pixel),

        // Video Outputs
        .crtc_de_o(crtc_de),
        .crtc_hsync_o(crtc_hsync),
        .crtc_vsync_o(crtc_vsync),
        .crtc_cursor_o(crtc_cursor),
        .crtc_newline_o(crtc_newline),
        .crtc_newframe_o(crtc_newframe),
        .stb_char_o(crtc_stb_char),     // End of character 1/16 of 27MHz
        .stb_pixel_o(crtc_stb_pixel),   // Пиксельный строб 
        .stb_byte_o(crtc_stb_byte),     // Загрузка байта
        .stb_origin_o(crtc_stb_origin), // ключевой строб латентности

        // HDMI timing reference
        .hdmi_x_i(hdmi_x),
        .hdmi_y_i(hdmi_y),
        .hdmi_de_o(hdmi_de),            // 720x480
        .hdmi_newline_i(hdmi_newline),
        .hdmi_newframe_i(hdmi_newframe),

        // Memory Address Interface
        .crtc_ma_o(crtc_ma),
        .crtc_ra_o(crtc_ra),
        .crtc_halt_o(crtc_halt),        // For debug
        
        // Extended address
        .crtc_ext_addr_o(crtc2mem_addr),

        .cfg_bpp_o(crtc_bpp),           // 00=1bpp, 01=2bpp, 10=4bpp, 11=8bpp
        .cfg_linear_o(cfg_linear),      // 0=CPC-style, 1=continuous  
        .cfg_rate_o(cfg_rate),          // Pixel clock selection
        .cfg_burst_o(cfg_burst)         // 1=32-bit burst, 0=16-bit normal
    );

    // ===========================================
    // Memory Arbiter (Video + System WB)
    // ===========================================
    memory_arbiter mem_arbiter (
        .clk_i(clk_system),
        .clke_i(clk_bus),
        .rst(system_reset),
        
        // Video Interface
        .video_addr_i(crtc2mem_addr),
        .video_burst_i(cfg_burst),
        .video_req_i(vbuf_req),
        .video_data_o(vbuf_data),
        .video_ack0_o(vbuf_ack0),
        .video_ack1_o(vbuf_ack1),

        // System WB Interface (from internal arbiter)
        .wb_cyc_i(system2mem_cyc),
        .wb_stb_i(system2mem_stb),
        .wb_ack_o(system2mem_ack),
        .wb_we_i(system2mem_we),
        .wb_adr_i(system2mem_adr),
        .wb_dat_i(system2mem_dat_out),
        .wb_dat_o(system2mem_dat_in),
        .wb_tag_i(system2mem_tag),
        .wb_grant_o(system2mem_grant),

        // GPU bus
        .gpu_addr_i('0),
        .gpu_req_i('0),
        .gpu_we_i('0),
        .gpu_dat_i('0),
        .gpu_dat_o(),
        .gpu_ack0_o(),
        .gpu_ack1_o(),
        .gpu_sel_i('0),

        // SDRAM Interface
        .sdram_addr_o(mem2sdram_addr),
        .sdram_data_o(mem2sdram_data_out),
        .sdram_data_i(mem2sdram_data_in),
        .sdram_we_o(mem2sdram_we),
        .sdram_req_o(mem2sdram_req),
        .sdram_ack0_i(mem2sdram_ack0),
        .sdram_ack1_i(mem2sdram_ack1),
        .sdram_sel_o(mem2sdram_sel),

        .debug_state_o(debug_mem_arbiter_state),
        .debug_wb_active_o(debug_mem_wb_active),
        .debug_video_active_o(debug_mem_video_active),
        .debug_gpu_active_o()// not needed
    );

    // ===========================================
    // НОВЫЙ SDRAM Controller (из uart_bridge_test)
    // ===========================================
    
    // Debug signals from new controller
    logic [2:0] debug_sdram_state;
    logic debug_sdram_init_complete;
    logic debug_sdram_ready;
    logic debug_sdram_busy;

    // Прямое подключение к НОВОМУ SDRAM контроллеру
    sdram_wishbone #(
        .CLK_FREQ(CLK_FREQ_SYSTEM),     // 108MHz системная частота
        .WB_ADDR_WIDTH(24),
        .WB_DATA_WIDTH(16)
    ) sdram_ctrl (
        // Wishbone Interface
        .wb_clk_i(clk_system),          // 108MHz cистемная частота
        .wb_rst_i(system_reset),

        // SDRAM wishbon interface
        .wb_cyc_i(mem2sdram_req),
        .wb_stb_i(mem2sdram_req),
        .wb_ack0_o(mem2sdram_ack0),
        .wb_ack1_o(mem2sdram_ack1),
        .wb_we_i(mem2sdram_we),
        .wb_adr_i(mem2sdram_addr),
        .wb_dat_i(mem2sdram_data_out),
        .wb_dat_o(mem2sdram_data_in),
        .wb_sel_i(mem2sdram_sel),  
        .wb_refresh_i('0),

        // SDRAM Physical Interface
        .SDRAM_DQ(sdram_dq),
        .SDRAM_A(sdram_a),
        .SDRAM_BA(sdram_ba),
        .SDRAM_nCS(sdram_cs_n),
        .SDRAM_nWE(sdram_we_n),
        .SDRAM_nRAS(sdram_ras_n),
        .SDRAM_nCAS(sdram_cas_n),
        .SDRAM_CKE(sdram_cke),
        .SDRAM_DQM(sdram_dm),
        
        // Debug Interface
        .debug_state(debug_sdram_state),
        .debug_init_complete(debug_sdram_init_complete),
        .debug_ready(debug_sdram_ready),
        .debug_initialized(),
        .debug_configured(),
        .debug_cycle(),
        .debug_busy(debug_sdram_busy),
        .debug_rst_cnt(),
        .debug_rst_done(),
        .debug_cfg_busy()
    );

    // SDRAM clock (используем тот же подход что в uart_bridge_test)
    ODDRX1F sdram_clk_oddr(
        .SCLK(clk_system),  // 108MHz для нового контроллера
        .RST(1'b0), 
        .D0(1'b0), 
        .D1(1'b1), 
        .Q(sdram_clock)
    );

    // ===========================================
    // Video Buffer
    // ===========================================
    logic [15:0] vbuf_vmem_in = vbuf_data;
    video_buffer vbuf (
        .rst_i(system_reset),

        .cfg_rate(cfg_rate),              
        // Memory interface (16/32-bit burst)
        .vmem_clk_i(clk_system),    // 108mhz
        .vmem_ack0_i(vbuf_ack0),    // First word. One period of 108Mhz 
        .vmem_ack1_i(vbuf_ack1),    // Second word. One period of 108Mhz
        .vmem_data_i(vbuf_vmem_in),    // Word
        .vmem_req_o(vbuf_req),      // Request words

        // CRTC timing signals
        .pixel_clk_i(clk_pixel),    // 27Mhz
        .stb_pixel_i(crtc_stb_pixel),
        .stb_byte_i(crtc_stb_byte), // Every video byte character one periond
        .stb_origin_i(crtc_stb_origin),
        .de_i(crtc_de),             // Border

        // To pixel_pipeline (8-bit)
        .stb_pixel_o(vbuf_stb_pixel),
        .stb_byte_o(vbuf_stb_byte), // Every video byte character one periond
        .data_o(vbuf_data_o),       // Video byte
        .de_o(vbuf_de_o),             // Border
        .debug_byte_select_o(vbuf_byte_select)
    );

    // ===========================================
    // Video Pipeline
    // ===========================================
    logic [7:0] ppu_data_in = vbuf_data_o;
    pixel_pipeline ppu(
        .rst_i(system_reset),
        .clk_i(clk_pixel),           // 27mhz
        
        // Configuration
        .cfg_bpp_i(crtc_bpp),
        .cfg_linear_i(cfg_linear),

        // Memory interface
        .video_stb_i(vbuf_stb_byte),  // single clk with  
        .video_data_i(ppu_data_in),   // 8-bits

        // CRTC timing
        .stb_pixel_i(vbuf_stb_pixel), // Actual pixel frequency 13.5MHz or other or constant 1
        .pixel_de_i(vbuf_de_o),
        
        // Pixel output
        .pixel_o(ppu2pal_color),
        .pixel_de_o(ppu2pal_de)
    );
       
    // ===========================================
    // Color Palette
    // ===========================================
    
    color_palette pal(
        .wb_rst_i(system_reset),
        .wb_clk_i(clk_bus),
        .cfg_legacy_i(cfg_legacy),

        // Whishbone interface
        .wb_adr_i(system2palette_adr),
        .wb_dat_i(system2palette_dat_out),
        .wb_dat_o(system2palette_dat_in),
        .wb_we_i(system2palette_we),
        .wb_stb_i(system2palette_stb),
        .wb_cyc_i(system2palette_cyc),
        .wb_grant_o(system2palette_grant),
        .wb_ack_o(system2palette_ack),
        .wb_tag_i(system2palette_tag), // Palette tag
        .wb_cs_i(pal_cs),
        
        // Pixel interface
        .pixel_clk_i(clk_pixel),
        .pixel_index_i(ppu2pal_color),
        .pixel_de_i(ppu2pal_de),
        .pixel_color_o(pixel_color)
    );

    // ===========================================
    // Scan Doubler (HDMI Scaler)
    // ===========================================
    assign scaler_pixel_i = pixel_color;

    hdmi_scaler #(
        .SRC_H_VISIBLE(720),
        .DATA_WIDTH(12),
        .V_SCALE(2),
        .HDMI_H_VISIBLE(HDMI_H_VISIBLE),
        .HDMI_V_VISIBLE(HDMI_V_VISIBLE),
        .PIX_TOTAL_W()
    ) scaler_inst (
        // Source domain (CRTC - 54MHz)
        .src_rst_i(system_reset),
        .src_clk_i(clk_pixel),
        .src_pixel_data_i(scaler_pixel_i), 
        .src_newline_i(crtc_newline),
        .src_newframe_i(crtc_newframe),
        .src_buffer_o(src_buffer),
        .src_de_i(hdmi_de),
        
        // Destination domain (HDMI - 27MHz)  
        .dst_clk_i(clk_pixel),
        .dst_rst_i(system_reset),
        .dst_newline_i(hdmi_newline),
        .dst_newframe_i(hdmi_newframe),
        .dst_rd_i(hdmi_rd),
        .dst_pixel_data_o(scaler_pixel_o),
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
        .i_pixclk(clk_pixel),
        .i_reset(system_reset),
        .i_red(hdmi_pixel_data[23:16]),
        .i_grn(hdmi_pixel_data[15:8]),
        .i_blu(hdmi_pixel_data[7:0]),
        .o_rd(hdmi_rd),
        .o_newline(hdmi_newline),
        .o_newframe(hdmi_newframe),
        .o_resline(), // Not used
        .o_resframe(), // Not used
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


    // ============================================================================
    // Errors
    // ============================================================================

    wb_wdt_simple #(
        .TIMEOUT_CYCLES(32)  // Таймаут в тактах
    ) wb_wdt (
        // Wishbone интерфейс
        .clk_i(clk_bus),
        .rst_i(system_reset),
        .cyc_i(uart2ext_cyc),
        .stb_i(uart2ext_stb),
        .ack_i(uart2ext_ack),     // Подтверждение от ведомого
        .err_o(uart2ext_err)      // Сигнал ошибки
    );

    // ===========================================
    // Отладочные сигналы
    // ===========================================
    // RGB LED
    assign debug_leds = {
        debug_sdram_ready,      
        debug_sdram_init_complete, 
        uart2ext_err
    };

    // ===========================================
    /*
    // UART Bridge
    assign debug = {
        debug_sdram_ready,     
        debug_sdram_init_complete, 
        uart_rx_ready,         
        uart2ext_err,          
        uart2ext_ack,           
        uart2ext_we,           
        uart2ext_stb,          
        uart2ext_cyc             
    };
    */
    /*
    // Pixel Process unit
    assign debug = {
        '0,
        vbuf_data_o[0],
        vbuf_stb_byte,
        ppu2pal_color[0],
        crtc_stb_pixel,
        crtc_stb_pixel,
        clk_pixel
    };
    */
    // Memory Arbitter
    assign debug = {
        cs[1],
        cs[0],
        cs_legacy[1],
        cs_legacy[0],     // single clk with  
        uart2ext_ack, // Actual pixel frequency 13.5MHz or other or constant 1
        uart2ext_grant,       
        uart2ext_stb,
        uart2ext_cyc
    };
    /*
    assign debug = {
        system2mem_ack,
        system2mem_stb,
        //vbuf_ack1,
        //vbuf_ack0,
        //vbuf_req,
        mem2sdram_ack1,          
        mem2sdram_ack0,          
        mem2sdram_req,              
        debug_mem_video_active,           
        debug_mem_wb_active             
    };
 */
  /*
    assign debug = {
        system2mem_dat_out[0],
        system2mem_ack,
        system2mem_stb,           
        system2mem_cyc, 
        mem2sdram_data_out[0],            
        mem2sdram_ack1,             
        mem2sdram_ack0,          
        mem2sdram_req              
    };
    */
    // ===========================================
    // Отладка
    // ===========================================
   

    //assign debug = vbuf_data_o;

endmodule

`default_nettype none

module wb_simple_reg (
    // Wishbone interface
    input  logic        clk_i,
    input  logic        rst_i,
    input  logic        stb_i,
    input  logic        we_i,
    input  logic [7:0]  adr_i,
    input  logic [7:0]  dat_i,
    output logic [7:0]  dat_o,
    output logic        ack_o,

    // Register output
    output logic [7:0]  reg_out
);

logic [7:0] register = 8'h00;

// Wishbone transaction
always @(posedge clk_i) begin
    if (rst_i) begin
        register <= 8'h00;
        ack_o <= 1'b0;
    end else begin
        ack_o <= 1'b0;
        
        if (stb_i && !ack_o) begin
            ack_o <= 1'b1;
            
            if (we_i) begin
                // Write operation
                register <= dat_i;
            end
        end
    end
end

// Read operation
assign dat_o = register;
assign reg_out = register;

endmodule
