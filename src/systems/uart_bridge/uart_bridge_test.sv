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
    logic clk_27m, clk_270m, clk_54m, clk_108m;
    logic pll_locked;
    logic system_reset;
    logic clk_pixel, clk_bus, clk_system;

    video_pll vid_pll(
        .rst(1'b0),
        .clkin_25M(clk_25mhz),
        .clk_270M(clk_270m),
        .clk_54M(), 
        .clk_27M(),
        .clk_108M(clk_108m),
        .locked(pll_locked)
    );
   
    system_clock system_clock(
        .clk_108(clk_108m),      // Входной такт 108 MHz от PLL
        .rst(!pll_locked),       // Сброс (active low)
        .ce_54(clk_54m),         // Строб 54 MHz (регистровый!)
        .ce_27_phase0(clk_27m),  // Строб 27 MHz фаза 0 (совпадает с ce_54)
        .ce_27_phase2()          // Строб 27 MHz фаза 2 (сдвиг на 180°)
    );

    localparam SYSTEM_CLK_FREQ = 108_000_000;
    localparam BUS_CLK_FREQ = 54_000_000;
    localparam PIXEL_CLK_FREQ = 27_000_000;

    assign clk_system = clk_108m;
    assign clk_bus = clk_54m;
    assign clk_pixel = clk_27m;

    // Системный сброс
    reset_controller reset_inst(
        .clk(clk_system),
        .clke(clk_pixel),
        .pll_locked(pll_locked),
        .system_reset(system_reset),
        .boot_complete()
    );

    // ===========================================
    // UART Bridge - прямой доступ к SDRAM
    // ===========================================
    logic uart_wb_cyc, uart_wb_stb, uart_wb_we, uart_wb_ack;
    logic [23:0] uart_wb_adr;
    logic [7:0] uart_wb_dat_i, uart_wb_dat_o;
    logic [1:0] uart_wb_sel;

    logic uart_dbg_cyc, uart_dbg_stb, uart_dbg_we, uart_dbg_ack, uart_wb_err;
    logic [7:0] uart_dbg_adr;
    logic [7:0] uart_dbg_dat_o, uart_dbg_dat_i;
    logic [1:0] uart_dbg_sel;
    logic uart_rx_ready, uart_rx_idle, uart_rx_eop;

    logic serial_rx_clk, serial_tx_clk;
    logic [3:0] cmd_state, bus_state;
    logic uart_rx_ready, uart_tx_busy;
    logic bus_stb, bus_ack;

    logic ackff;
    always @(posedge clk_system) begin
        if (system_reset) begin
            ackff<='0;
        end else if (clk_bus) begin
            ackff <= uart_wb_ack;
        end
    end

    uart_bridge #(
        .CLK_FREQ(SYSTEM_CLK_FREQ),
        .BUS_FREQ(BUS_CLK_FREQ),
        .WB_ADDR_WIDTH(24),
        .DBG_ADDR_WIDTH(8),
        .UART_DATA_WIDTH(8),
        .BAUD_RATE(115200),
        .OVERSAMPLING(16) // 8 does not work        
    ) uart_bridge_inst (
        .clk_i(clk_system),
        .clke_i(clk_bus),
        .rst(system_reset),
        
        // UART Interface
        .uart_rx(serial_rx),
        .uart_tx(serial_tx),
        .uart_rx_clk(serial_rx_clk),
        .uart_tx_clk(serial_tx_clk),
        .uart_rx_ready(uart_rx_ready),
        .uart_rx_idle(uart_rx_idle),
        .uart_rx_eop(uart_rx_eop),

        // Wishbone Master Interface
        .wb_cyc_o(uart_wb_cyc),
        .wb_stb_o(uart_wb_stb),
        .wb_we_o(uart_wb_we),
        .wb_adr_o(uart_wb_adr),
        .wb_dat_o(uart_wb_dat_o),
        .wb_dat_i(uart_wb_dat_i),
        .wb_ack_i(uart_wb_ack),
        .wb_err_i(uart_wb_err),

        .dbg_cyc_o(uart_dbg_cyc),
        .dbg_stb_o(uart_dbg_stb),
        .dbg_we_o(uart_dbg_we),
        .dbg_adr_o(uart_dbg_adr),
        .dbg_dat_o(uart_dbg_dat_i),
        .dbg_dat_i(uart_dbg_dat_o),
        .dbg_ack_i(uart_dbg_stb),
        .dbg_err_i('0),

        .cmd_state_o(cmd_state),
        .bus_state_o(bus_state),
        .bus_ack_o(bus_ack),
        .bus_stb_o(bus_stb),
        .uart_rx_ready(uart_rx_ready),
        .uart_tx_busy(uart_tx_busy)
    );

    // ===========================================
    // НОВЫЙ SDRAM Controller - прямой доступ от UART
    // ===========================================
    
    // Debug signals from new controller
    logic [2:0] sdram_debug_state;
    logic sdram_debug_init_complete;
    logic sdram_debug_ready;
    logic sdram_debug_busy;
    logic [15:0] sdram_dat_o; // databus from sdram

    // Convert 16 bits to 8
    assign uart_wb_dat_i = uart_wb_adr[0] ? sdram_dat_o[15:8] : sdram_dat_o[7:0];

    // Прямое подключение UART к НОВОМУ SDRAM контроллеру
    sdram_wishbone #(
        .CLK_FREQ(SYSTEM_CLK_FREQ),     // 54MHz системная частота
        .WB_ADDR_WIDTH(24),
        .WB_DATA_WIDTH(16)
    ) sdram_controller (
        // Wishbone Interface
        .wb_clk_i(clk_system),
        .wb_rst_i(system_reset),
        .wb_cyc_i(uart_wb_cyc),
        .wb_stb_i(uart_wb_stb),
        .wb_ack_o(),
        .wb_ack3_o(uart_wb_ack),
        .wb_we_i(uart_wb_we),
        .wb_adr_i(uart_wb_adr),
        .wb_dat_i({uart_wb_dat_o, uart_wb_dat_o}),
        .wb_dat_o(sdram_dat_o),
        .wb_sel_i(uart_wb_adr[0] ? 2'b10 : 2'b01),
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
        .SDRAM_DQM(sdram_dm),      // Теперь [3:0] вместо [1:0]
        
        // Debug Interface
        .debug_state(sdram_debug_state),
        .debug_init_complete(sdram_debug_init_complete),
        .debug_ready(sdram_debug_ready),
        .debug_initialized(),
        .debug_configured(),
        .debug_cycle(),
        .debug_busy(sdram_debug_busy),
        .debug_rst_cnt(),
        .debug_rst_done(),
        .debug_cfg_busy()
    );

    // SDRAM clock
    ODDRX1F sdram_clk_oddr(
        .SCLK(clk_system),
        .RST(1'b0), 
        .D0(1'b0), 
        .D1(1'b1), 
        .Q(sdram_clock)
    );

    // ============================================================================
    // Errors
    // ============================================================================

    wb_wdt_simple #(
        .TIMEOUT_CYCLES(16)  // Таймаут в тактах
    ) wb_wdt (
        // Wishbone интерфейс
        .clk_i(clk_system),
        .clke_i(clk_bus),
        .rst_i(system_reset),
        .cyc_i(uart_wb_cyc),
        .stb_i(uart_wb_stb),
        .ack_i(uart_wb_ack),     // Подтверждение от ведомого
        .err_o(uart_wb_err)      // Сигнал ошибки
    );
    // ===========================================
    // Отладочные сигналы - с мониторингом нового контроллера
    // ===========================================

    // Светодиоды показывают состояние SDRAM контроллера
    assign debug_leds[0] = sdram_debug_init_complete;  // Инициализация завершена
    assign debug_leds[1] = sdram_debug_ready;          // Контроллер готов
    assign debug_leds[2] = sdram_debug_busy;           // Контроллер занят
    assign debug_leds[3] = uart_wb_ack;                // WB ACK
    assign debug_leds[4] = uart_wb_stb;                // WB STB
    assign debug_leds[5] = uart_rx_ready;              // UART RX готов
    assign debug_leds[6] = uart_tx_busy;               // UART TX занят
    assign debug_leds[7] = pll_locked;                 // PLL locked

    // Отладочные пины - комбинированная информация
    /*
    assign debug = {
        sdram_debug_state[2],      // Старший бит состояния SDRAM
        sdram_debug_state[1],      // Средний бит состояния SDRAM  
        sdram_debug_state[0],      // Младший бит состояния SDRAM
        sdram_debug_init_complete, // Инициализация завершена
        sdram_debug_ready,         // Контроллер готов
        uart_wb_ack,               // WB ACK
        uart_wb_stb,               // WB STB
        system_reset               // Системный сброс
    };
*/
    assign debug = {
        sdram_dq[1],
        sdram_dq[0],
        sdram_dat_o[1],
        sdram_dat_o[0],
        uart_wb_adr[0],
        uart_wb_err,       // Инициализация завершена
        uart_wb_ack,               // WB ACK
        uart_wb_stb               // WB STB
    };



endmodule
