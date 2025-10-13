// flash_loader_test.v
`default_nettype none

module flash_loader_test (
    input  wire clk_25mhz,      // Входная частота 25MHz
    output wire [7:0] debug_leds, // Светодиоды для индикации
    output wire [7:0] debug,  // Дополнительные debug выходы
    
    // SPI Flash физические линии
    output wire flash_cs_n,
    output wire flash_clk,  
    output wire flash_mosi,
    input  wire flash_miso,
    output wire flash_io2,
    output wire flash_io3,
    
    // SDRAM интерфейс (только для тестирования)
    output wire sdram_clock,
    output wire sdram_cke,
    output wire sdram_cs_n,
    output wire sdram_ras_n,
    output wire sdram_cas_n,
    output wire sdram_we_n,
    output wire [12:0] sdram_a,
    output wire [1:0] sdram_ba,
    output wire [1:0] sdram_dm,
    inout  wire [15:0] sdram_dq
);

// ===========================================
// Тактовые сигналы
// ===========================================
wire clk_100m, clk_54m, clk_27m, clk_270m;
wire pll_locked;
wire system_reset;

// PLL для тактовых сигналов
system_pll sys_pll(
    .clkin_25M(clk_25mhz),
    .clk_100M(clk_100m),
    .locked(pll_locked)
);

video_pll vid_pll(
    .rst(1'b0),
    .clkin_25M(clk_25mhz),
    .clk_270M(clk_270m),
    .clk_54M(clk_54m), 
    .clk_27M(clk_27m),
    .locked() // Используем общий locked
);

// Системный сброс
reset_controller reset_inst(
    .clk(clk_100m),
    .pll_locked(pll_locked),
    .system_reset(system_reset)
);

// ===========================================
// Flash Loader System
// ===========================================
wire flash_load_start = ~system_reset; // Автозагрузка при старте
wire flash_load_done;
wire [23:0] flash_addr;
wire [15:0] flash_data;
wire flash_valid, flash_busy;
wire flash_start;

// SPI Flash Reader
spi_flash_reader flash_reader(
    .clk_i(clk_100m),
    .rst_i(system_reset),
    .start_i(flash_start),
    .flash_addr_i(flash_addr),
    .data_o(flash_data),
    .valid_o(flash_valid),
    .busy_o(flash_busy),
    .spi_cs_n(flash_cs_n),
    .spi_clk(flash_clk),
    .spi_mosi(flash_mosi),
    .spi_miso(flash_miso),
    .spi_io2(flash_io2),
    .spi_io3(flash_io3)
);

// SDRAM Loader
flash_to_sdram_loader loader(
    .clk_i(clk_100m),
    .rst_i(system_reset),
    .load_start_i(flash_load_start),
    .load_done_o(flash_load_done),
    .flash_start_o(flash_start),
    .flash_addr_o(flash_addr),
    .flash_data_i(flash_data),
    .flash_valid_i(flash_valid),
    .flash_busy_i(flash_busy),
    .sdram_addr_o(sdram_addr),
    .sdram_data_o(sdram_data),
    .sdram_we_o(sdram_we),
    .sdram_req_o(sdram_req),
    .sdram_ack_i(sdram_ack)
);

// ===========================================
// SDRAM Controller
// ===========================================
wire [23:0] sdram_addr;
wire [15:0] sdram_data;
wire sdram_we, sdram_req, sdram_ack;
wire [15:0] sdram_data_in;

sdram_ctrl_wb sdram_controller(
    .wb_clk_i(clk_100m),
    .wb_rst_i(system_reset),
    .wb_cyc_i(sdram_req),
    .wb_stb_i(sdram_req),
    .wb_ack_o(sdram_ack),
    .wb_we_i(sdram_we),
    .wb_adr_i(sdram_addr),
    .wb_dat_i(sdram_data),
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
// Тестовый монитор и индикация
// ===========================================
reg [31:0] boot_timer;
reg [7:0] led_pattern;
reg [3:0] state_indicator;

always @(posedge clk_100m or posedge system_reset) begin
    if (system_reset) begin
        boot_timer <= 32'b0;
        led_pattern <= 8'b00000001;
        state_indicator <= 4'b0000;
    end else begin
        boot_timer <= boot_timer + 1;
        
        // Мигающий паттерн для индикации работы
        if (boot_timer[23:0] == 24'h000000) begin // ~0.5Hz при 100MHz
            led_pattern <= {led_pattern[6:0], led_pattern[7]};
        end
        
        // Индикатор состояния
        case (state_indicator)
            4'b0000: if (flash_start) state_indicator <= 4'b0001;
            4'b0001: if (flash_valid) state_indicator <= 4'b0010;
            4'b0010: if (sdram_req) state_indicator <= 4'b0011;
            4'b0011: if (sdram_ack) state_indicator <= 4'b0100;
            4'b0100: if (flash_load_done) state_indicator <= 4'b1111;
        endcase
    end
end

// ===========================================
// Выходные сигналы
// ===========================================
assign debug_leds = {
    led_pattern[7],           // LED7: Бегущий бит
    led_pattern[6],           // LED6: Бегущий бит  
    led_pattern[5],           // LED5: Бегущий бит
    led_pattern[4],           // LED4: Бегущий бит
    state_indicator[3],       // LED3: Старший бит состояния
    state_indicator[2],       // LED2: Биты состояния
    state_indicator[1],       // LED1: Биты состояния  
    state_indicator[0]        // LED0: Младший бит состояния
};

assign debug = {
    sdram_data_in[1],         // Debug7: Биты из SDRAM
    sdram_data_in[0],         // Debug6: Биты из SDRAM
    sdram_ack,                // Debug5: SDRAM подтверждение
    sdram_req,                // Debug4: SDRAM запрос
    flash_valid,              // Debug3: Flash данные валидны
    flash_busy,               // Debug2: Flash занят
    flash_start,              // Debug1: Flash старт
    flash_load_done           // Debug0: Загрузка завершена
};

endmodule
