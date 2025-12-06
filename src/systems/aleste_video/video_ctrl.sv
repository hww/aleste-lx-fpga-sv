`default_nettype none
// Include configuration
`include "config_27mhz.vh"
module video_ctrl #(
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
    parameter CLOCK_INDEX = 3,
    parameter DATA_INDICES = 3,
       
    // SDRAM параметры
    parameter SDRAM_ADDR_WIDTH = 24,
    parameter SDRAM_DATA_WIDTH = 16
)(
    // Тактирование
    input  logic        clk_system,      // 108MHz
    input  logic        clk_bus,         // 54MHz  
    input  logic        clk_pixel,       // 27MHz
    input  logic        clk_pixel_x2,    // 54MHz
    input  logic        clk_270m,        // 270MHz для TMDS
    
    // Сброс
    input  logic        system_reset,
    
    // Wishbone Slave Interface (для конфигурации)
    input  logic        wb_cyc_i,
    input  logic        wb_stb_i,
    input  logic        wb_we_i,
    input  logic [23:0] wb_adr_i,
    input  logic [7:0]  wb_dat_i,
    output logic [7:0]  wb_dat_o,
    output logic        wb_ack_o,
    output logic        wb_grant_o,    
    input  logic [2:0]  wb_tag_i,
    input  logic        wb_cs_crt_i,
    input  logic        wb_cs_pal_i,
    
    // Memory Interface (к SDRAM контроллеру)
    output logic [23:0] mem_addr_o,
    output logic [15:0] mem_data_o,
    input  logic [15:0] mem_data_i,
    output logic        mem_we_o,
    output logic        mem_req_o,
    input  logic        mem_ack0_i,
    input  logic        mem_ack1_i,
    output logic [1:0]  mem_sel_o,
    
    // HDMI Video Output
    output logic        tmds_red,
    output logic        tmds_green, 
    output logic        tmds_blue,
    output logic        hdmi_rd,
    output logic        hdmi_newline,
    output logic        hdmi_newframe,
    output  logic [10:0] hdmi_x,
    output  logic [9:0]  hdmi_y,
    
    // Отладочные выходы
    output logic [2:0]  debug_leds,
    output logic [7:0]  debug,
    
    // Конфигурационные сигналы
    input  logic        cfg_legacy_i
);

    localparam HDMI_H_TOTAL       = HDMI_H_VISIBLE + HDMI_H_FRONT_PORCH + HDMI_H_SYNC_PULSE + HDMI_H_BACK_PORCH;
    localparam HDMI_V_TOTAL       = HDMI_V_VISIBLE + HDMI_V_FRONT_PORCH + HDMI_V_SYNC_PULSE + HDMI_V_BACK_PORCH;

    // ===========================================
    // Internal Signal Declarations
    // ===========================================
    
    // Video Pipeline Signals
    logic [7:0] ppu2pal_color;
    logic ppu2pal_pixel_stb;
    logic ppu2pal_de;

    // Video Buffer Signals
    logic [15:0] vbuf_data;
    logic [7:0] vbuf_data_o;
    logic vbuf_req, vbuf_ack0, vbuf_ack1, vbuf_de_o;
    logic vbuf_stb_byte, vbuf_stb_pixel;
    logic [1:0] debug_vbuf_byte_select;
    logic debug_vbuf_data_req, debug_vbuf_data_valid;

    // Color Palette Signals
    logic [11:0] pixel_color;

    // HDMI Signals  
    logic [23:0] hdmi_pixel_data;
    logic hdmi_de;

    // Wishbone Signals
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
    logic [1:0] cfg_pixel_rate;
    logic crtc_stb_char, crtc_stb_word, crtc_stb_pixel, crtc_stb_byte, crtc_stb_sync1, crtc_stb_sync2;
    logic crtc_halt;

    // Scan Doubler Signals
    logic [11:0] scaler_pixel_i;
    logic [11:0] scaler_pixel_o;
    logic src_buffer, dst_buffer;

    // ===========================================
    // Internal WB Arbiter
    // ===========================================
    wb_arbiter wb_arbiter (
        .clk(clk_bus),
        .rst(system_reset),
        
        // External WB Interface
        .wb_ext_cyc_i(wb_cyc_i),
        .wb_ext_stb_i(wb_stb_i),
        .wb_ext_grant_o(wb_grant_o),
        .wb_ext_ack_o(wb_ack_o),    
        .wb_ext_we_i(wb_we_i),
        .wb_ext_adr_i(wb_adr_i),
        .wb_ext_dat_i(wb_dat_i),
        .wb_ext_dat_o(wb_dat_o),
        .wb_ext_tag_i(wb_tag_i),

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
        .cfg_legacy_i(cfg_legacy_i),
        .cfg_cpc_bpp_i('0),

        // Wishbone interface
        .wb_cyc_i(system2crtc_cyc),
        .wb_stb_i(system2crtc_stb),
        .wb_adr_i(system2crtc_adr),
        .wb_dat_i(system2crtc_dat_out),
        .wb_we_i(system2crtc_we),
        .wb_ack_o(system2crtc_ack),
        .wb_dat_o(system2crtc_dat_in),
        .wb_grant_o(system2crtc_grant),
        .wb_cs_i(wb_cs_crt_i),
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
        .stb_char_o(crtc_stb_char),
        .stb_pixel_o(crtc_stb_pixel),
        .stb_byte_o(crtc_stb_byte),
        .stb_sync1_o(crtc_stb_sync1),
        .stb_sync2_o(crtc_stb_sync2),

        // HDMI timing reference
        .hdmi_x_i(hdmi_x),
        .hdmi_y_i(hdmi_y),
        .hdmi_de_o(hdmi_de),
        .hdmi_newline_i(hdmi_newline),
        .hdmi_newframe_i(hdmi_newframe),

        // Memory Address Interface
        .crtc_ma_o(crtc_ma),
        .crtc_ra_o(crtc_ra),
        .crtc_halt_o(crtc_halt),
        
        // Extended address
        .crtc_ext_addr_o(crtc2mem_addr),

        .cfg_bpp_o(crtc_bpp),
        .cfg_linear_pixel_o(cfg_linear),
        .cfg_pixel_rate_o(cfg_pixel_rate)
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
        .video_req_i(vbuf_req),
        .video_data_o(vbuf_data),
        .video_ack0_o(vbuf_ack0),
        .video_ack1_o(vbuf_ack1),

        // System WB Interface
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

        // Memory Interface
        .sdram_addr_o(mem_addr_o),
        .sdram_data_o(mem_data_o),
        .sdram_data_i(mem_data_i),
        .sdram_we_o(mem_we_o),
        .sdram_req_o(mem_req_o),
        .sdram_ack0_i(mem_ack0_i),
        .sdram_ack1_i(mem_ack1_i),
        .sdram_sel_o(mem_sel_o),

        .debug_state_o(debug_mem_arbiter_state),
        .debug_wb_active_o(debug_mem_wb_active),
        .debug_video_active_o(debug_mem_video_active),
        .debug_gpu_active_o()
    );

    // ===========================================
    // Video Buffer
    // ===========================================
    video_buffer vbuf (
        .rst_i(system_reset),

        .cfg_rate(cfg_pixel_rate),
        
        // Memory interface
        .vmem_clk_i(clk_system),
        .vmem_ack0_i(vbuf_ack0),
        .vmem_ack1_i(vbuf_ack1),
        .vmem_data_i(vbuf_data),
        .vmem_req_o(vbuf_req),

        // CRTC timing signals
        .pixel_clk_i(clk_pixel),
        .stb_pixel_i(crtc_stb_pixel),
        .stb_byte_i(crtc_stb_byte),
        .stb_sync1_i(crtc_stb_sync1),
        .stb_sync2_i(crtc_stb_sync2),
        .de_i(crtc_de),

        // To pixel_pipeline
        .stb_pixel_o(vbuf_stb_pixel),
        .stb_byte_o(vbuf_stb_byte),
        .data_o(vbuf_data_o),
        .de_o(vbuf_de_o),
        .debug_byte_select_o(debug_vbuf_byte_select),
        .debug_data_req_o(debug_vbuf_data_req),
        .debug_data_valid_o(debug_vbuf_data_valid)
    );

    // ===========================================
    // Video Pipeline
    // ===========================================
    pixel_pipeline ppu(
        .rst_i(system_reset),
        .clk_i(clk_pixel),
        
        // Configuration
        .cfg_bpp_i(crtc_bpp),
        .cfg_linear_i(cfg_linear),

        // Memory interface
        .video_stb_i(vbuf_stb_byte),
        .video_data_i(vbuf_data_o),

        // CRTC timing
        .stb_pixel_i(vbuf_stb_pixel),
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
        .cfg_legacy_i(cfg_legacy_i),

        // Wishbone interface
        .wb_adr_i(system2palette_adr),
        .wb_dat_i(system2palette_dat_out),
        .wb_dat_o(system2palette_dat_in),
        .wb_we_i(system2palette_we),
        .wb_stb_i(system2palette_stb),
        .wb_cyc_i(system2palette_cyc),
        .wb_grant_o(system2palette_grant),
        .wb_ack_o(system2palette_ack),
        .wb_tag_i(system2palette_tag),
        .wb_cs_i(wb_cs_pal_i),
        
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
        .HDMI_V_VISIBLE(HDMI_V_VISIBLE)
    ) scaler_inst (
        // Source domain
        .src_rst_i(system_reset),
        .src_clk_i(clk_pixel),
        .src_pixel_data_i(scaler_pixel_i), 
        .src_newline_i(crtc_newline),
        .src_newframe_i(crtc_newframe),
        .src_buffer_o(src_buffer),
        .src_de_i(hdmi_de),
        
        // Destination domain  
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
        scaler_pixel_o[11:8], scaler_pixel_o[11:8],  // R
        scaler_pixel_o[7:4], scaler_pixel_o[7:4],    // G
        scaler_pixel_o[3:0], scaler_pixel_o[3:0]     // B
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
        .o_resline(),
        .o_resframe(),
        .o_red(tmds_red),
        .o_grn(tmds_green), 
        .o_blu(tmds_blue),
        .o_x(hdmi_x),
        .o_y(hdmi_y)
    );

    // ===========================================
    // Отладочные сигналы
    // ===========================================
    assign debug_leds = {
        debug_mem_video_active,
        debug_mem_wb_active, 
        system_reset
    };

    // Video Buffer debug
    assign debug = {
        debug_vbuf_data_valid,
        debug_vbuf_data_req,
        vbuf_req,
        crtc_stb_pixel,          
        crtc_stb_byte,          
        crtc_stb_sync2,              
        crtc_stb_sync1,           
        crtc_de             
    };

endmodule

