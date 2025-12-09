`default_nettype none

// Include configuration
`include "config_27mhz.vh"

module aleste_system #(
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
    inout logic [15:0] sdram_dq,

`ifdef SIMULATION
    input  logic [15:0] sdram_dq_i,
    output logic [15:0] sdram_dq_o,
    output logic sdram_dq_oen,
`endif

`ifdef SIMULATION
    // the UART bridge replacement for simulation
    output logic        debug_wb_clk_o,
    input  logic        debug_wb_cyc_i,
    input  logic        debug_wb_stb_i,
    input  logic        debug_wb_we_i,
    input  logic [23:0] debug_wb_adr_i,
    input  logic [7:0]  debug_wb_dat_i,
    output logic [7:0]  debug_wb_dat_o,
    output logic        debug_wb_ack_o,
    output logic        debug_wb_err_o,
`endif

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
    localparam CLK_FREQ_CPU = 27_000_000;  // Z80 at 27MHz

    assign clk_system = clk_108m;
    assign clk_bus = clk_54m;
    assign clk_pixel = clk_27m;
    assign clk_pixel_x2 = clk_54m;

    // Системный сброс
    reset_controller reset_ctrl_inst(
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
    logic [23:0] video2mem_addr; // The memory address for video controller, 24 bits for 16bits and 32MB memory 
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
    logic uart2wb_cyc, uart2wb_stb, uart2wb_ack, uart2wb_we, uart2wb_grant, uart2wb_err;
    logic [23:0] uart2wb_adr;
    logic [7:0] uart2wb_dat_out, uart2wb_dat_in;
    logic [1:0] uart2wb_sel;
      
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

    // Z80 CPU Signals
    logic z80_cyc, z80_stb, z80_ack, z80_we, z80_grant;
    logic [23:0] z80_adr;
    logic [7:0] z80_dat_out, z80_dat_in;
    
    // Z80 System Control
    logic [1:0] z80_graphic_mode;
    logic z80_irq_control;
    logic z80_supervisor_mode;
    logic z80_legacy_mode;
    logic z80_native_mode;
    logic z80_debug_halt_status;
    logic [7:0] z80_debug_control;

    // System Arbiter Signals
    logic vid_cyc, vid_stb, vid_ack, vid_we, vid_grant;
    logic [23:0] vid_adr;
    logic [7:0] vid_dat_to_slave;  // От арбитра к слейву
    logic [7:0] vid_dat_from_slave; // От слейва к арбитру
    logic [1:0] debug_arbiter_state;

    // Memory Controller Signals
    logic [2:0] debug_sdram_state;
    logic debug_sdram_init_complete;
    logic debug_sdram_ready;
    logic debug_sdram_busy;

`ifdef SIMULATION
    // will have ports sdram_dq_i, sdram_dq_o
`else
    // will have inoout port sdram_dq
    logic [15:0] sdram_dq_i, sdram_dq_o;
    logic sdram_dq_oen; 
    assign sdram_dq_i = sdram_dq;
    assign sdram_dq = sdram_dq_oen ? sdram_dq_o : {16{1'bz}};
`endif

    // Debug Register
    logic [7:0] dbg_data;

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

`ifdef SIMULATION     
        .wb_cyc_o(),
        .wb_stb_o(),
        .wb_we_o(),
        .wb_adr_o(),
        .wb_dat_o(),
        .wb_dat_i(8'd0),
        .wb_ack_i(1'b0),
        .wb_err_i(1'b0),  
`else   
        .wb_cyc_o(uart2wb_cyc),
        .wb_stb_o(uart2wb_stb),
        .wb_we_o(uart2wb_we),
        .wb_adr_o(uart2wb_adr),
        .wb_dat_o(uart2wb_dat_out),
        .wb_dat_i(uart2wb_dat_in),
        .wb_ack_i(uart2wb_ack),
        .wb_err_i(uart2wb_err),  
`endif
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

`ifdef SIMULATION   
    // В симуляции напрямую подключаем debug интерфейс
    assign uart2wb_cyc = debug_wb_cyc_i;
    assign uart2wb_stb = debug_wb_stb_i;
    assign uart2wb_we = debug_wb_we_i;
    assign uart2wb_adr = debug_wb_adr_i;
    assign uart2wb_dat_out = debug_wb_dat_i;
    assign debug_wb_dat_o = uart2wb_dat_in;
    assign debug_wb_ack_o = uart2wb_ack;
    assign debug_wb_err_o = uart2wb_err;
    assign debug_wb_clk_o = clk_bus;
`endif

    // ===========================================
    // Z80 CPU System
    // ===========================================
    z80_system z80_sys_inst (
        // Clock and Reset
        .clk_i(clk_bus),                    // 27MHz CPU clock
        .res_i(system_reset),
        .res_short_i(~pll_locked),

        // Main Wishbone Master Interface
        .wbm_adr_o(z80_adr),
        .wbm_dat_i(z80_dat_in),
        .wbm_dat_o(z80_dat_out),
        .wbm_cyc_o(z80_cyc),
        .wbm_stb_o(z80_stb),
        .wbm_we_o(z80_we),
        .wbm_ack_i(z80_ack),
        
        // (No Wishbone Slave interface - MMU registers accessed directly
        // via Z80 I/O ports)

        // Debug Bus Interface
        .dbg_adr_i(uart2dbg_adr),                  // Not used for now
        .dbg_dat_o(uart2dbg_dat_in),
        .dbg_dat_i(uart2dbg_dat_out),
        .dbg_we_i(uart2dbg_we),
        .dbg_stb_i(uart2dbg_stb),
        .dbg_cs_i(uart2dbg_stb),
        .dbg_ack_o(uart2dbg_ack),           // immediate answer
        
        // Z80-specific Interface
        .nmi_req_i(1'b0),                   // No NMI for now
        .int_req_i(1'b0),                   // No interrupts for now
        .busrq_i(1'b0),                     // No bus requests for now
        .busak_o(),
        
        // System Control Outputs
        .graphic_mode(z80_graphic_mode),
        .irq_control(z80_irq_control),
        .supervisor_mode_o(z80_supervisor_mode),
        .legacy_mode_o(z80_legacy_mode),
        .native_mode_o(z80_native_mode),

        // Debug Status Outputs
        .debug_halt_status(z80_debug_halt_status),
        .debug_control_o(z80_debug_control)
    );

    // ===========================================
    // System Wishbone Arbiter
    // ===========================================
    logic sys_cyc, sys_stb, sys_we, sys_ack, sys_err;
    logic [23:0] sys_adr;
    logic [7:0] sys_dat_to_slaves;  // Данные от мастера к слейвам
    logic [7:0] sys_dat_from_slaves; // Данные от слейвов к мастеру
    logic [2:0] sys_tag;  // TAG от декодера адресов
    logic debug_z80_active, debug_uart_active;

    system_arbiter sys_arbiter_inst (
        // Clock and Reset
        .clk_i(clk_bus),                    // 54MHz bus clock
        .rst_i(system_reset),

        // System bus for monitoring only
        .sys_cyc_o(sys_cyc),               // SYS cycle
        .sys_stb_o(sys_stb),               // SYS strobe
        .sys_we_o(sys_we),                 // SYS write enable
        .sys_adr_o(sys_adr),               // SYS address
        .sys_dat_o(sys_dat_to_slaves),     // SYS data out (to slaves)
        .sys_ack_o(sys_ack),               // SYS acknowledge (from slaves)
        .sys_err_i(sys_err),               // SYS error (from WDT)
        
        // Z80 CPU Interface
        .z80_cyc_i(z80_cyc),
        .z80_stb_i(z80_stb),
        .z80_we_i(z80_we),
        .z80_adr_i(z80_adr),
        .z80_dat_i(z80_dat_out),
        .z80_dat_o(z80_dat_in),
        .z80_ack_o(z80_ack),
        .z80_grant_o(z80_grant),
        .z80_err_o(),                      // Not used
        
        // UART Bridge Interface
        .uart_cyc_i(uart2wb_cyc),
        .uart_stb_i(uart2wb_stb),
        .uart_we_i(uart2wb_we),
        .uart_adr_i(uart2wb_adr),
        .uart_dat_i(uart2wb_dat_out),
        .uart_dat_o(uart2wb_dat_in),
        .uart_ack_o(uart2wb_ack),
        .uart_grant_o(uart2wb_grant),
        .uart_err_o(uart2wb_err),                     
        
        // Video Controller Interface
        .vid_cyc_o(vid_cyc),
        .vid_stb_o(vid_stb),
        .vid_we_o(vid_we),
        .vid_adr_o(vid_adr),
        .vid_dat_o(vid_dat_to_slave),
        .vid_dat_i(vid_dat_from_slave),
        .vid_ack_i(vid_ack),
        .vid_grant_i(vid_grant),

        // Debug Outputs
        .debug_state_o(debug_arbiter_state),
        .debug_z80_active_o(debug_z80_active),
        .debug_uart_active_o(debug_uart_active)
    );

    // ===========================================
    // Address Decoder
    // ===========================================

    // Registered versions: used throughout the system
    logic [7:0] cs_native;          // Native space 256 bytes blocks
    logic [7:0] cs_system;          // Native (system space) 32 bytes blocks
    logic [7:0] cs_legacy;          // Native (legacy space) 32 bytes blocks

    address_decoder addr_dec_inst (
        .cfg_legacy_i(cfg_legacy),  // Legacy mode

        .wb_adr_i(sys_adr),         // Input address lines
        
        .wb_tag_o(sys_tag),         // The result TAG (comb)
        .cs_native_o(cs_native),    // Native space 256 bytes blocks (comb)
        .cs_system_o(cs_system),    // Native (system space) 32 bytes blocks (comb)
        .cs_legacy_o(cs_legacy)     // Native (legacy space) 32 bytes blocks (comb)
    );

    // Chip select для видео контроллера (легаси устройства)
    logic vid_cs_pal  = cs_legacy[0];
    logic vid_cs_crtc = cs_legacy[1];

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
    ) video_ctrl_inst (
        // Тактирование
        .clk_system(clk_system),
        .clk_bus(clk_bus),
        .clk_pixel(clk_pixel),
        .clk_pixel_x2(clk_pixel_x2),
        .clk_270m(clk_270m),
        
        // Сброс
        .system_reset(system_reset),
        
        // Wishbone Slave Interface
        .wb_cyc_i(vid_cyc),
        .wb_stb_i(vid_stb),
        .wb_we_i(vid_we),
        .wb_adr_i(vid_adr),
        .wb_dat_i(vid_dat_to_slave),
        .wb_dat_o(vid_dat_from_slave),
        .wb_ack_o(vid_ack),
        .wb_tag_i(sys_tag),
        .wb_grant_o(vid_grant),
        .wb_cs_pal_i(vid_cs_pal),
        .wb_cs_crt_i(vid_cs_crtc),
   
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
    sdram_wishbone #(
        .CLK_FREQ(CLK_FREQ_SYSTEM),
        .WB_ADDR_WIDTH(24),
        .WB_DATA_WIDTH(16)
    ) sdram_ctrl_inst (
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
        .SDRAM_DQOEN(sdram_dq_oen),
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
    ) wb_wdt_inst (
        .clk_i(clk_bus),
        .rst_i(system_reset),
        .cyc_i(sys_cyc),
        .stb_i(sys_stb),
        .ack_i(sys_ack),
        .err_o(sys_err)
    );

    // ===========================================
    // Отладочные сигналы
    // ===========================================
    
    // RGB LED
    assign debug_leds = {
        debug_sdram_ready,      
        debug_sdram_init_complete
    };

    // Debug output - можно выбрать разные источники для отладки
    assign debug = {
        debug_arbiter_state,
        debug_uart_active,
        debug_z80_active, 
        z80_legacy_mode,
        z80_native_mode,
        z80_debug_halt_status,
        system_reset
    };

endmodule

`default_nettype wire