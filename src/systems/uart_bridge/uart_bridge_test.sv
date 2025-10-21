`default_nettype none

module uart_bridge_test #(
    parameter SDRAM_ADDR_WIDTH = 24,
    parameter SDRAM_DATA_WIDTH = 16
)(
    // Тактирование
    input  logic clk_25mhz,
    
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
    output logic [7:0] debug_leds,
    output logic [7:0] debug
);

    // ===========================================
    // Clock & Reset
    // ===========================================
    logic clk_27m, clk_270m, clk_54m, clk_108m, clk_system;
    logic pll_locked;
    logic system_reset;

    video_pll vid_pll(
        .rst(1'b0),
        .clkin_25M(clk_25mhz),
        .clk_270M(clk_270m),
        .clk_54M(clk_54m), 
        .clk_27M(clk_27m),
        .clk_108M(clk_108m),
        .locked(pll_locked)
    );

    reset_controller reset_inst(
        .clk(clk_54m),
        .pll_locked(pll_locked),
        .system_reset(system_reset),
        .boot_complete()
    );

    assign clk_system = clk_108m;

    // ===========================================
    // UART Bridge - прямой доступ к SDRAM
    // ===========================================
    logic uart_wb_cyc, uart_wb_stb, uart_wb_we, uart_wb_ack;
    logic [23:0] uart_wb_adr;
    logic [15:0] uart_wb_dat_o, uart_wb_dat_i;
    logic [1:0] uart_wb_sel;

    logic uart_dbg_cyc, uart_dbg_stb, uart_dbg_we, uart_dbg_ack;
    logic [7:0] uart_dbg_adr;
    logic [7:0] uart_dbg_dat_o, uart_dbg_dat_i;
    logic [1:0] uart_dbg_sel;

    logic serial_rx_clk, serial_tx_clk;
    logic [3:0] cmd_state, bus_state;
    logic uart_rx_ready, uart_tx_busy;
    logic bus_stb, bus_ack;

    uart_bridge uart_bridge_inst (
        .clk_54m(clk_54m),
        .rst(system_reset),
        
        // UART Interface
        .uart_rx(serial_rx),
        .uart_tx(serial_tx),
        .uart_rx_clk(serial_rx_clk),
        .uart_tx_clk(serial_tx_clk),

        // Wishbone Master Interface
        .wb_cyc_o(uart_wb_cyc),
        .wb_stb_o(uart_wb_stb),
        .wb_we_o(uart_wb_we),
        .wb_adr_o(uart_wb_adr),
        .wb_dat_o(uart_wb_dat_i),
        .wb_dat_i(uart_wb_dat_o),
        .wb_sel_o(uart_wb_sel),
        .wb_ack_i(uart_wb_ack),
        .wb_err_i('0),

        .dbg_cyc_o(uart_dbg_cyc),
        .dbg_stb_o(uart_dbg_stb),
        .dbg_we_o(uart_dbg_we),
        .dbg_adr_o(uart_dbg_adr),
        .dbg_dat_o(uart_dbg_dat_i),
        .dbg_dat_i(uart_dbg_dat_o),
        .dbg_ack_i('1),
        .dbg_err_i('0),

        .cmd_state_o(cmd_state),
        .bus_state_o(bus_state),
        .bus_ack_o(bus_ack),
        .bus_stb_o(bus_stb),
        .uart_rx_ready(uart_rx_ready),
        .uart_tx_busy(uart_tx_busy)
    );

    // ===========================================
    // SDRAM Controller - прямой доступ от UART
    // ===========================================
    logic [23:0] sdram_addr;
    logic [15:0] sdram_data_out, sdram_data_in;
    logic sdram_we, sdram_req, sdram_ack;

    // Прямое подключение UART к SDRAM
    assign sdram_req = uart_wb_stb;
    assign sdram_we = uart_wb_we;
    assign sdram_addr = uart_wb_adr;
    assign sdram_data_out = uart_wb_dat_i;
    assign uart_wb_dat_o = sdram_data_in;
    assign uart_wb_ack = sdram_ack;

    sdram_ctrl_wb sdram_controller(
        .wb_clk_i(clk_system),
        .wb_rst_i(system_reset),
        .wb_cyc_i(sdram_req),
        .wb_stb_i(sdram_req),
        .wb_ack_o(sdram_ack),
        .wb_we_i(sdram_we),
        .wb_adr_i(sdram_addr),
        .wb_dat_i(sdram_data_out),
        .wb_dat_o(sdram_data_in),
        .wb_sel_i(uart_wb_sel),
        .wb_tag_i(2'b00),
        .wb_grant_o(), // Не используется при прямом доступе

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

    // SDRAM clock
    ODDRX1F sdram_clk_oddr(
        .SCLK(clk_54m),
        .RST(1'b0),
        .D0(1'b0),
        .D1(1'b1),
        .Q(sdram_clock)
    );

    // ===========================================
    // Отладочные сигналы
    // ===========================================


    assign debug_leds[0] = cmd_state[0];
    assign debug_leds[1] = cmd_state[1];
    assign debug_leds[2] = cmd_state[2];

    // Отладочные пины - мониторим адресную шину
    //assign debug = {
    //    cmd_state[3], 
    //    cmd_state[2],       
    //    cmd_state[1],       
    //    cmd_state[0],       
    //    uart_wb_ack, 
    //    uart_wb_stb, 
    //    bus_ack,      
    //    bus_stb       
    //};
    assign debug = {
        cmd_state[3], 
        cmd_state[2],       
        bus_state[1],       
        bus_state[0],       
        uart_wb_ack, 
        uart_wb_stb, 
        bus_ack,      
        bus_stb       
    };

endmodule
