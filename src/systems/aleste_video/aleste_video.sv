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
    // Clock & Reset
    // ===========================================
    logic clk_27m, clk_270m, clk_54m, clk_100m;
    logic pll_locked;
    logic system_reset;

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
        .clk(clk_54m),
        .pll_locked(pll_locked),
        .system_reset(system_reset),
        .boot_complete()
    );

    // ===========================================
    // Signal Declarations
    // ===========================================
    
    // Memory Subsystem Signals
    logic [23:0] sdram_addr;
    logic [15:0] sdram_data_out;
    logic [15:0] sdram_data_in; 
    logic sdram_we, sdram_req, sdram_ack, sdram_grant;
    logic sdram_burst;
    logic [2:0] sdram_burst_len;
    logic [1:0] sdram_tag;

    // Video Pipeline Signals
    logic [15:0] video_data;
    logic video_ack, video_grant;
    logic [7:0] pixel_index;
    logic pixel_valid;
    logic pipeline_de;

    // Video Buffer Signals
    logic [15:0] vbuf_data_i;
    logic [7:0] vbuf_data_o;
    logic vbuf_data_valid;
    logic vbuf_need_data;
    logic vbuf_burst_request;
    logic vbuf_de, vbuf_char_strobe, vbuf_byte_strobe, vbuf_byte_select;

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
    logic wb_ext_cyc, wb_ext_stb, wb_ext_ack, wb_ext_we, wb_ext_grant;
    logic [23:0] wb_ext_adr;
    logic [15:0] wb_ext_dat_i, wb_ext_dat_o;
    logic [1:0] wb_ext_sel, wb_ext_tag;
      
    logic palette_cyc, palette_stb, palette_ack, palette_we, palette_grant;
    logic [23:0] palette_adr;
    logic [15:0] palette_dat_i, palette_dat_o;
    logic [1:0] palette_sel, palette_tag;

    logic crtc_cyc, crtc_stb, crtc_ack, crtc_we, crtc_grant;
    logic [23:0] crtc_adr;
    logic [15:0] crtc_dat_i, crtc_dat_o;
    logic [1:0] crtc_sel, crtc_tag;

    logic mem_cyc, mem_stb, mem_ack, mem_we, mem_grant;
    logic [23:0] mem_adr;
    logic [15:0] mem_dat_i, mem_dat_o;
    logic [1:0] mem_sel, mem_tag;
    logic [1:0] mem_arbiter_state;
    logic mem_video_active, mem_wb_active;

    // CRTC Signals
    logic [13:0] crtc_ma;
    logic [4:0] crtc_ra;
    logic crtc_de, crtc_hsync, crtc_vsync;
    logic crtc_cursor, crtc_newline, crtc_newframe;
    logic [1:0] crtc_bpp_mode;
    logic crtc_continuous_mode;
    logic crtc_use_cpc_modes;
    logic [23:0] crtc_ext_addr;
    logic crtc_burst_mode;
    logic [2:0] crtc_addr_mode;
    logic [1:0] crtc_pixel_clock_sel;
    logic crtc_char_strobe, crtc_word_strobe, crtc_pixel_strobe, crtc_byte_strobe;
    logic crtc_halt; // For debug

    // Scan Doubler Signals
    logic [11:0] scaler_pixel_i;
    logic [11:0] scaler_pixel_o;
    logic src_buffer, dst_buffer;

    // Boot Controller
    logic boot_complete;
    assign boot_complete = !system_reset;

    // ===========================================
    // Test Data Generator (External WB Interface)
    // ===========================================
   
   // Graphics oriented version
   /*
    test_video_data_generator data_gen (
        .clk(clk_54m),
        .rst(system_reset),
        .wb_cyc_o(wb_ext_cyc),
        .wb_stb_o(wb_ext_stb),
        .wb_ack_i(wb_ext_ack),
        .wb_we_o(wb_ext_we),
        .wb_adr_o(wb_ext_adr),
        .wb_dat_o(wb_ext_dat_i),
        .wb_sel_o(wb_ext_sel),
        .wb_tag_o(wb_ext_tag),
        .start_i(!boot_complete)
    );
   */

    // Memory testing version
    logic [15:0] test_errors;
    logic test_done, test_passed, test_end;
    /*
    sdram_test_pattern #(
        .TEST_SIZE(24'h00FFFF) 
    ) test_inst (
        .clk(clk_54m),
        .rst(system_reset),
        
        // Wishbone Master Interface
        .wb_cyc_o(wb_ext_cyc),
        .wb_stb_o(wb_ext_stb),
        .wb_ack_i(wb_ext_ack),
        .wb_we_o(wb_ext_we),
        .wb_adr_o(wb_ext_adr),
        .wb_dat_o(wb_ext_dat_i),
        .wb_dat_i(wb_ext_dat_o),
        .wb_sel_o(wb_ext_sel),    
        .wb_tag_o(wb_ext_tag),   
        
        // Control
        .start_i(boot_complete),
        .done_o(test_done),
        
        // Results
        .test_passed_o(test_passed),
        .error_count_o(),
        .test_end_o(test_end)         
    );
    */
    // Direct comect to memory
    sdram_test_pattern #(
        .TEST_SIZE(24'h00FFFF) 
    ) test_inst (
        .clk(clk_54m),
        .rst(system_reset),
        
        // Wishbone Master Interface
        .wb_cyc_o(mem_cyc),
        .wb_stb_o(mem_stb),
        .wb_grant_i(mem_grant),
        .wb_ack_i(mem_ack),
        .wb_we_o(mem_we),
        .wb_adr_o(mem_adr),
        .wb_dat_o(mem_dat_i),
        .wb_dat_i(mem_dat_o),
        .wb_sel_o(mem_sel),    
        .wb_tag_o(mem_tag),   
        
        // Control
        .start_i(boot_complete),
        .done_o(test_done),
        
        // Results
        .test_passed_o(test_passed),
        .error_count_o(test_errors),
        .test_end_o(test_end)         
    );

    // ===========================================
    // Internal WB Arbiter
    // ===========================================
    /*
    wb_arbiter_internal wb_arbiter (
        .clk(clk_54m),
        .rst(system_reset),
        
        // External WB Interface
        .wb_ext_cyc_i(wb_ext_cyc),
        .wb_ext_stb_i(wb_ext_stb),
        .wb_ext_grant_o(wb_ext_grant),
        .wb_ext_ack_o(wb_ext_ack),
        .wb_ext_we_i(wb_ext_we),
        .wb_ext_adr_i(wb_ext_adr),
        .wb_ext_dat_i(wb_ext_dat_i),
        .wb_ext_dat_o(wb_ext_dat_o),
        .wb_ext_sel_i(wb_ext_sel),
        .wb_ext_tag_i(wb_ext_tag),
        
        // Palette Interface
        .palette_cyc_o(palette_cyc),
        .palette_stb_o(palette_stb),
        .palette_grant_i(palette_grant),
        .palette_ack_i(palette_ack),
        .palette_we_o(palette_we),
        .palette_adr_o(palette_adr),
        .palette_dat_o(palette_dat_i),
        .palette_dat_i(palette_dat_o),
        .palette_sel_o(palette_sel),
        .palette_tag_o(palette_tag),

        // CRTC Interface
        .crtc_cyc_o(crtc_cyc),
        .crtc_stb_o(crtc_stb),
        .crtc_grant_i(crtc_grant), 
        .crtc_ack_i(crtc_ack),
        .crtc_we_o(crtc_we),
        .crtc_adr_o(crtc_adr),
        .crtc_dat_o(crtc_dat_i),
        .crtc_dat_i(crtc_dat_o),
        .crtc_sel_o(crtc_sel),
        .crtc_tag_o(crtc_tag),
        
        // Memory Interface
        .mem_cyc_o(mem_cyc),
        .mem_stb_o(mem_stb),
        .mem_grant_i(mem_grant),
        .mem_ack_i(mem_ack),
        .mem_we_o(mem_we),
        .mem_adr_o(mem_adr),
        .mem_dat_o(mem_dat_i),
        .mem_dat_i(mem_dat_o),
        .mem_sel_o(mem_sel),
        .mem_tag_o(mem_tag)
    );
    */
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
        .wb_clk_i(clk_54m),
        .wb_rst_i(system_reset),
        .wb_cyc_i(crtc_cyc),
        .wb_stb_i(crtc_stb),
        .wb_adr_i(crtc_adr),
        .wb_dat_i(crtc_dat_i),
        .wb_sel_i(crtc_sel),
        .wb_we_i(crtc_we),
        .wb_ack_o(crtc_ack),
        .wb_dat_o(crtc_dat_o),
        .wb_grant_o(crtc_grant), // CRTC self-detection to arbiter
        .wb_tag_i(crtc_tag),

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
        .char_strobe_o(crtc_char_strobe),// End of character 1/16 of 27MHz
        .word_strobe_o(crtc_word_strobe),// End of character
        .pixel_strobe_o(crtc_pixel_strobe),// Пиксельный строб 
        .byte_strobe_o(crtc_byte_strobe),// Загрузка байта
               
        // HDMI timing reference
        .hdmi_x_i(hdmi_x),
        .hdmi_y_i(hdmi_y),
        .hdmi_de_o(hdmi_de), // 720x480
        .hdmi_newline_i(hdmi_newline),
        .hdmi_newframe_i(hdmi_newframe),

        // Memory Address Interface
        .crtc_ma_o(crtc_ma),
        .crtc_ra_o(crtc_ra),
        .crtc_halt_o(crtc_halt), // For debug
        
        // Extended address
        .crtc_ext_addr_o(crtc_ext_addr),

        .crtc_bpp_mode(crtc_bpp_mode),                  // 00=1bpp, 01=2bpp, 10=4bpp, 11=8bpp
        .crtc_continuous_mode(crtc_continuous_mode),    // 0=CPC-style, 1=continuous  
        .crtc_use_cpc_modes(crtc_use_cpc_modes),        // 0=extended, 1=legacy CPC
    
        // NEW: Extended address interface
        .crtc_burst_mode_o(crtc_burst_mode),            // 1=32-bit burst, 0=16-bit normal
        .crtc_addr_mode_o(crtc_addr_mode),              // Address mode
        .crtc_pixel_clock_sel_o(crtc_pixel_clock_sel)   // Pixel clock selection
    );

    // ===========================================
    // Memory Arbiter (Video + System WB)
    // ===========================================
    memory_arbiter mem_arbiter (
        .clk(clk_54m),
        .rst(system_reset),
        
        // Video Interface
        .video_addr_i(crtc_ext_addr),
        .video_req_i(vbuf_need_data),
        .video_burst_i(crtc_burst_mode),
        .video_data_o(video_data),
        .video_ack_o(video_ack),
        .video_grant_o(video_grant),
        
        // System WB Interface (from internal arbiter)
        .wb_cyc_i(mem_cyc),
        .wb_stb_i(mem_stb),
        .wb_ack_o(mem_ack),
        .wb_we_i(mem_we),
        .wb_adr_i(mem_adr),
        .wb_dat_i(mem_dat_i),
        .wb_dat_o(mem_dat_o),
        .wb_sel_i(mem_sel),
        .wb_tag_i(mem_tag),
        .wb_grant_o(mem_grant),
        
        // SDRAM Interface
        .sdram_addr_o(sdram_addr),
        .sdram_data_o(sdram_data_out),
        .sdram_data_i(sdram_data_in),
        .sdram_we_o(sdram_we),
        .sdram_req_o(sdram_req),
        .sdram_ack_i(sdram_ack),
        .sdram_burst_o(sdram_burst),
        .sdram_burst_len_o(sdram_burst_len),
        .sdram_tag_o(sdram_tag),
        .sdram_grant_i(sdram_grant),

        .debug_state_o(mem_arbiter_state),
        .debug_video_active_o(mem_video_active),
        .debug_wb_active_o(mem_wb_active)
    );

    // ===========================================
    // SDRAM Controller
    // ===========================================
    sdram_ctrl_wb sdram_controller(
        .wb_clk_i(clk_54m),
        .wb_rst_i(system_reset),
        .wb_cyc_i(sdram_req),
        .wb_stb_i(sdram_req),
        .wb_ack_o(sdram_ack),
        .wb_we_i(sdram_we),
        .wb_adr_i(sdram_addr[3:0]),
        .wb_dat_i(sdram_data_out),
        .wb_dat_o(sdram_data_in),
        .wb_sel_i(2'b11),
        .wb_tag_i(sdram_tag),
        .wb_grant_o(sdram_grant),

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

    // SDRAM clock (clk_54m с фазовым сдвигом)
    ODDRX1F sdram_clk_oddr(
        .SCLK(clk_54m),
        .RST(1'b0),
        .D0(1'b0),
        .D1(1'b1),
        .Q(sdram_clock)
    );

    // ===========================================
    // Video Buffer
    // ===========================================
    assign vbuf_data_i = mem_dat_o;

    video_buffer vbuf (
        .clk_i(clk_54m),
        .rst_i(system_reset),
        .pix_ena_i(clk_27m),
                
        // CRTC config signals
        .burst_mode_i(crtc_burst_mode),

        // CRTC timing signals
        .de_i(crtc_de),
        .char_strobe_i(crtc_char_strobe),
        .byte_strobe_i(crtc_byte_strobe),
        .de_o(vbuf_de),
        .char_strobe_o(vbuf_char_strobe),
        .byte_strobe_o(vbuf_byte_strobe),
        .byte_select_o(vbuf_byte_select),

        // Memory interface (16/32-bit burst)
        .vmem_data_i(video_data),
        .vmem_valid_i(video_ack),
        
        // To pixel_pipeline (8-bit)
        .pixel_data_o(vbuf_data_o),
        .pixel_valid_o(vbuf_data_valid),
        
        // Memory control
        .need_data_o(vbuf_need_data)
    );

    // ===========================================
    // Video Pipeline
    // ===========================================
    pixel_pipeline pipeline(
        .clk_i(clk_54m),
        .rst_i(system_reset),
        .pix_ena_i(clk_27m),
        
        // Memory interface
        //.vmem_data_i(16'h77),
        .vmem_data_i(vbuf_data_o),

        // Configuration
        .bpp_mode_i(crtc_bpp_mode),
        .continuous_mode_i(crtc_continuous_mode),

        // CRTC timing
        .de_i(vbuf_de),
        .char_strobe_i(vbuf_char_strobe),
        .byte_strobe_i(vbuf_byte_strobe),
        .pixel_strobe_i(crtc_pixel_strobe),
        
        // Pixel output
        .pixel_index_o(pixel_index),
        .de_o(pipeline_de)
    );
       
    // ===========================================
    // Color Palette
    // ===========================================
    
    color_palette palette(
        .wb_clk_i(clk_54m),
        .wb_rst_i(system_reset),
        .wb_adr_i(palette_adr),
        .wb_dat_i(palette_dat_i),
        .wb_dat_o(palette_dat_o),
        .wb_we_i(palette_we),
        .wb_stb_i(palette_stb),
        .wb_cyc_i(palette_cyc),
        .wb_grant_o(palette_grant),
        .wb_ack_o(palette_ack),
        .tag_i(palette_tag), // Palette tag
        .legacy_mode_i(1'b0),
        
        // Pixel interface
        .pix_clk_i(clk_54m),
        .pix_ena_i(clk_27m),
        .pixel_index_i(pixel_index),
        .de_i(pipeline_de),
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
        .i_pixclk(clk_27m),
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

    // ===========================================
    // Отладочные сигналы
    // ===========================================
    assign debug_leds = {
        1'b1,              // LED0: Always on
        sdram_ack,         // LED1: SDRAM access  
        sdram_req,         // LED2: Memory request
        crtc_hsync,        // LED3: CRTC HSync
        crtc_vsync,        // LED4: CRTC VSync 
        crtc_de,           // LED5: CRTC display active
        system_reset,      // LED6: Reset active
        pll_locked         // LED7: PLL locked
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

// Memory arbiter
/* 
assign debug[0] = crtc_char_strobe;
assign debug[1] = mem_stb;
assign debug[2] = mem_grant;
assign debug[3] = mem_ack;
assign debug[4] = mem_we;
assign debug[5] = mem_sel[0];
assign debug[6] = mem_sel[1];
assign debug[7] = mem_tag[1];
*/
/*
assign debug[0] = sdram_cke;
assign debug[1] = sdram_cs_n;
assign debug[2] = sdram_ras_n;
assign debug[3] = sdram_cas_n;
assign debug[4] = sdram_we_n;
assign debug[5] = sdram_dm[0];
assign debug[6] = sdram_dm[1];
assign debug[7] = sdram_a[0];
 */
assign debug[0] = sdram_ras_n;
assign debug[1] = sdram_we_n;
assign debug[2] = test_errors[0];
assign debug[3] = test_errors[1];
assign debug[4] = test_errors[2];
assign debug[5] = test_done;
assign debug[6] = test_passed;
assign debug[7] = test_end;

endmodule

