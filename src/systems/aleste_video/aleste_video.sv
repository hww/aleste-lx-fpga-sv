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
    output logic [2:0]      gpdi_dp,  // TMDS данные
    output logic [2:0]      gpdi_dn,
    output logic            gpdi_clock_p,   // TMDS clock
    output logic            gpdi_clock_n,
    
    // SDRAM интерфейс
    output logic            sdram_clock,
    output logic            sdram_cke,
    output logic            sdram_cs_n,
    output logic            sdram_ras_n,
    output logic            sdram_cas_n,
    output logic            sdram_we_n,
    output logic [12:0]     sdram_a,
    output logic [1:0]      sdram_ba,
    output logic [1:0]      sdram_dm,
    inout  logic [15:0]     sdram_dq,
    
    // UART интерфейс
    input  logic            serial_rx,
    output logic            serial_tx,
    
    // Отладочные выходы
    output logic [2:0]      debug_leds,
    output logic [7:0]      debug
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
    
    // Video Controller Signals
    logic [24:0] video2mem_addr; // Meory 32MB so it uses 25 bits address
    logic [15:0] video2mem_data_out;
    logic [15:0] video2mem_data_in; 
    logic video2mem_we, video2mem_req, video2mem_ack0, video2mem_ack1;
    logic [1:0] video2mem_sel;
    
    logic video_tmds_red, video_tmds_green, video_tmds_blue;
    logic video_hdmi_rd, video_hdmi_newline, video_hdmi_newframe;
    logic [10:0] video_hdmi_x;
    logic [9:0] video_hdmi_y;
    
    logic [2:0] video_debug_leds;
    logic [7:0] video_debug;

    // UART Bridge Signals
    logic wb_cyc, wb_stb, wb_ack, wb_we, wb_grant, wb_err;
    logic [23:0] wb_adr;
    logic [7:0] wb_dat_out, wb_dat_in;
    logic [1:0] wb_sel;
      
    logic uart_rx_ready, uart_rx_idle, uart_rx_eop;
    logic serial_rx_clk, serial_tx_clk;
    logic uart_tx_busy;

    logic       uart2dbg_cyc, uart2dbg_stb, uart2dbg_we, uart2dbg_ack;
    logic [7:0] uart2dbg_adr;
    logic [7:0] uart2dbg_dat_in, uart2dbg_dat_out;
    logic [1:0] uart2dbg_sel;
    logic       debug_uart_bus_stb, debug_uart_bus_ack;
    logic [3:0] debug_uart_cmd_state;
    logic [1:0] debug_uart_bus_state;

    // Debug Register
    logic [7:0] dbg_data;

    // SDRAM Controller Signals
    logic [2:0] debug_sdram_state;
    logic debug_sdram_init_complete;
    logic debug_sdram_ready;
    logic debug_sdram_busy;

    // Configuration
    logic cfg_legacy = 1'b0;

    // ===========================================
    // UART Bridge
    // ===========================================
    uart_bridge #(
        .CLK_FREQ(CLK_FREQ_SYSTEM),
        .BUS_FREQ(CLK_FREQ_BUS),
        .WB_ADDR_WIDTH(24),
        .DBG_ADDR_WIDTH(8),
        .UART_DATA_WIDTH(8),
        .BAUD_RATE(115200),
        .OVERSAMPLING(16)
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
        .wb_cyc_o(wb_cyc),
        .wb_stb_o(wb_stb),
        .wb_we_o(wb_we),
        .wb_adr_o(wb_adr),
        .wb_dat_o(wb_dat_out),
        .wb_dat_i(wb_dat_in),
        .wb_ack_i(wb_ack),
        .wb_err_i(wb_err),

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

    // Debug Register
    wb_simple_reg dbg_reg (
        // Wishbone interface
        .clk_i(clk_bus),
        .rst_i(system_reset),
        .stb_i(uart2dbg_stb),
        .we_i(uart2dbg_we),
        .adr_i(uart2dbg_adr),
        .dat_i(uart2dbg_dat_out),
        .dat_o(uart2dbg_dat_in),
        .ack_o(uart2dbg_ack),
        .reg_out(dbg_data)
    );

    // ===========================================
    // Address Decoder
    // ===========================================

    // Address Decoder Signals
    logic [7:0] cs;
    logic [7:0] cs_system;
    logic [7:0] cs_legacy;
    logic [2:0] wb_tag;

    address_decoder adu (
        .cfg_legacy_i(cfg_legacy),
        .wb_adr_i(wb_adr),
        
        .wb_tag_o(wb_tag),
        .cs_o(cs),                  // Native space 256 bytes blocks
        .cs_system_o(cs_system),    // Native (system space) 32 bytes blocks
        .cs_legacy_o(cs_legacy)     // Native (legacy space) 32 bytes blocks
    );

    logic wb_cs_pal  = cs_legacy[0];
    logic wb_cs_crtc = cs_legacy[1];

    // ===========================================
    // Video Controller
    // ===========================================
    video_ctrl #(
        .BASE_CLOCK(BASE_CLOCK),
        .SRC_H_VISIBLE(SRC_H_VISIBLE),
        .SRC_H_FRONT_PORCH(SRC_H_FRONT_PORCH),
        .SRC_H_SYNC_PULSE(SRC_H_SYNC_PULSE),
        .SRC_H_BACK_PORCH(SRC_H_BACK_PORCH),
        .SRC_V_VISIBLE(SRC_V_VISIBLE),
        .SRC_V_FRONT_PORCH(SRC_V_FRONT_PORCH),
        .SRC_V_SYNC_PULSE(SRC_V_SYNC_PULSE),
        .SRC_V_BACK_PORCH(SRC_V_BACK_PORCH),
        .HDMI_H_VISIBLE(HDMI_H_VISIBLE),
        .HDMI_H_FRONT_PORCH(HDMI_H_FRONT_PORCH),
        .HDMI_H_SYNC_PULSE(HDMI_H_SYNC_PULSE),
        .HDMI_H_BACK_PORCH(HDMI_H_BACK_PORCH),
        .HDMI_V_VISIBLE(HDMI_V_VISIBLE),
        .HDMI_V_FRONT_PORCH(HDMI_V_FRONT_PORCH),
        .HDMI_V_SYNC_PULSE(HDMI_V_SYNC_PULSE),
        .HDMI_V_BACK_PORCH(HDMI_V_BACK_PORCH),
        .BITS_PER_COLOR(BITS_PER_COLOR),
        .CLOCK_INDEX(CLOCK_INDEX),
        .DATA_INDICES(DATA_INDICES),
        .SDRAM_ADDR_WIDTH(SDRAM_ADDR_WIDTH),
        .SDRAM_DATA_WIDTH(SDRAM_DATA_WIDTH)
    ) video_controller (
        // Тактирование
        .clk_system(clk_system),
        .clk_bus(clk_bus),
        .clk_pixel(clk_pixel),
        .clk_pixel_x2(clk_pixel_x2),
        .clk_270m(clk_270m),
        
        // Сброс
        .system_reset(system_reset),
        
        // Wishbone Slave Interface
        .wb_cyc_i(wb_cyc),
        .wb_stb_i(wb_stb),
        .wb_we_i(wb_we),
        .wb_adr_i(wb_adr),
        .wb_dat_i(wb_dat_out),
        .wb_dat_o(wb_dat_in),
        .wb_ack_o(wb_ack),
        .wb_tag_i(wb_tag), 
        .wb_cs_pal_i(wb_cs_pal),
        .wb_cs_crt_i(wb_cs_crtc),

        // Memory Interface
        .mem_addr_o(video2mem_addr),
        .mem_data_o(video2mem_data_out),
        .mem_data_i(video2mem_data_in),
        .mem_we_o(video2mem_we),
        .mem_req_o(video2mem_req),
        .mem_ack0_i(video2mem_ack0),
        .mem_ack1_i(video2mem_ack1),
        .mem_sel_o(video2mem_sel),
        
        // HDMI Video Output
        .tmds_red(video_tmds_red),
        .tmds_green(video_tmds_green),
        .tmds_blue(video_tmds_blue),
        .hdmi_rd(video_hdmi_rd),
        .hdmi_newline(video_hdmi_newline),
        .hdmi_newframe(video_hdmi_newframe),
        .hdmi_x(video_hdmi_x),
        .hdmi_y(video_hdmi_y),
        
        // Отладочные выходы
        .debug_leds(video_debug_leds),
        .debug(video_debug),
        
        // Конфигурационные сигналы
        .cfg_legacy_i(cfg_legacy)
    );

    // ===========================================
    // SDRAM Controller
    // ===========================================
    // will have inoout port sdram_dq
    logic [15:0] sdram_dq_i, sdram_dq_o;
    logic sdram_dq_oen; 

    sdram_wishbone #(
        .CLK_FREQ(CLK_FREQ_SYSTEM),
        .WB_ADDR_WIDTH(24),
        .WB_DATA_WIDTH(16)
    ) sdram_ctrl (
        // Wishbone Interface
        .wb_clk_i(clk_system),
        .wb_rst_i(system_reset),

        // SDRAM wishbone interface
        .wb_cyc_i(video2mem_req),
        .wb_stb_i(video2mem_req),
        .wb_ack0_o(video2mem_ack0),
        .wb_ack1_o(video2mem_ack1),
        .wb_we_i(video2mem_we),
        .wb_adr_i(video2mem_addr),
        .wb_dat_i(video2mem_data_out),
        .wb_dat_o(video2mem_data_in),
        .wb_sel_i(video2mem_sel),  
        .wb_refresh_i('0),

        // SDRAM Physical Interface
        .SDRAM_DQ_I(sdram_dq_i),
        .SDRAM_DQ_O(sdram_dq_o),
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
    
    assign sdram_dq_i = sdram_dq;
    assign sdram_dq = sdram_dq_oen ? sdram_dq_o : {16{1'bz}};

    // ===========================================
    // Clock Outputs
    // ===========================================
    
    // SDRAM clock
    ODDRX1F sdram_clk_oddr(
        .SCLK(clk_system),
        .RST(1'b0), 
        .D0(1'b0), 
        .D1(1'b1), 
        .Q(sdram_clock)
    );

    // TMDS выходы
    OBUFDS OBUFDS_red( .I(video_tmds_red),   .O(gpdi_dp[2]), .OB(gpdi_dn[2]) );
    OBUFDS OBUFDS_grn( .I(video_tmds_green), .O(gpdi_dp[1]), .OB(gpdi_dn[1]) );
    OBUFDS OBUFDS_blu( .I(video_tmds_blue),  .O(gpdi_dp[0]), .OB(gpdi_dn[0]) );
    OBUFDS OBUFDS_clk( .I(clk_27m),          .O(gpdi_clock_p), .OB(gpdi_clock_n) );

    // ===========================================
    // Watchdog Timer
    // ===========================================
    wb_wdt_simple #(
        .TIMEOUT_CYCLES(32)
    ) wb_wdt (
        .clk_i(clk_bus),
        .rst_i(system_reset),
        .cyc_i(wb_cyc),
        .stb_i(wb_stb),
        .ack_i(wb_ack),
        .err_o(wb_err)
    );

    // ===========================================
    // Отладочные сигналы
    // ===========================================
    
    // RGB LED
    assign debug_leds = {
        debug_sdram_ready,      
        debug_sdram_init_complete, 
        wb_err
    };

    // Debug output - можно выбрать разные источники для отладки
    assign debug = video_debug; // Используем отладку из видеоконтроллера

    /*
    // Альтернативные варианты отладки:
    
    // UART Bridge debug
    assign debug = {
        debug_sdram_ready,     
        debug_sdram_init_complete, 
        uart_rx_ready,         
        wb_err,          
        wb_ack,           
        wb_we,           
        wb_stb,          
        wb_cyc             
    };
    
    // SDRAM debug  
    assign debug = {
        debug_sdram_state,
        debug_sdram_init_complete,
        debug_sdram_ready,
        debug_sdram_busy,
        video2mem_req,
        video2mem_ack0,
        video2mem_ack1,
        system_reset
    };
    */

endmodule

`default_nettype none

// ===========================================
// Вспомогательные модули
// ===========================================

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
