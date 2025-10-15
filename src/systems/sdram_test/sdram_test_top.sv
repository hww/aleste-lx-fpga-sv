`default_nettype none

module sdram_test_top (
    input  wire clk25,          // 25MHz input
    input  wire rst,            // Reset button
    output wire user_led0,      // Test passed
    output wire user_led1,      // Test failed  
    output wire user_led2,      // SDRAM active
    output wire user_led3,      // Write phase
    output wire user_led4,      // Read phase
    output wire user_led5,      // Verify phase
    output wire user_led6,      // Reset phase
    output wire user_led7,      // PLL locked
   
    // SDRAM interface
    output wire sdram_clock,
    output wire sdram_cke,
    output wire sdram_cs_n,
    output wire sdram_ras_n,
    output wire sdram_cas_n,
    output wire sdram_we_n,
    output wire [12:0] sdram_a,
    output wire [1:0] sdram_ba,
    output wire [1:0] sdram_dm,
    inout  wire [15:0] sdram_dq,
    output wire [7:0] debug
);

// ===========================================
// Clock Generation
// ===========================================

wire clk_100m;
wire pll_locked;

system_pll pll_inst(
    .clkin_25M(clk25),
    .clk_100M(clk_100m),
    .locked(pll_locked)
);

// ===========================================
// Reset Generation
// ===========================================

reg [7:0] reset_counter = 0;
wire system_reset = ~pll_locked | (reset_counter != 8'hFF);

always @(posedge clk_100m) begin
    if (~pll_locked) begin
        reset_counter <= 0;
    end else if (system_reset) begin
        reset_counter <= reset_counter + 1;
    end
end

// ===========================================
// Test Control
// ===========================================

reg test_start;


// Auto-start test after reset
always @(posedge clk_100m or posedge system_reset) begin
    if (system_reset) begin
        test_start <= 1'b0;
    end else begin
        // Start test 1 cycle after reset release
        test_start <= (reset_counter == 8'hFF) ? 1'b1 : 1'b0;
    end
end

// ===========================================
// SDRAM Test Pattern (заменен на тестированную версию)
// ===========================================

wire        wb_cyc;
wire        wb_stb;
wire        wb_we;
wire [23:0] wb_adr;
wire [15:0] wb_dat_o;
wire [15:0] wb_dat_i;
wire [1:0]  wb_sel;
wire [1:0]  wb_tag;
wire [15:0] error_count;

wire test_end;
wire test_done;
wire test_passed;

sdram_test_pattern #(
    .TEST_SIZE(16'hFFF0) 
) test_inst (
    .clk(clk_100m),
    .rst(system_reset),
    
    // Wishbone Master Interface
    .wb_cyc_o(wb_cyc),
    .wb_stb_o(wb_stb),
    .wb_ack_i(test_ack),
    .wb_we_o(wb_we),
    .wb_adr_o(wb_adr),
    .wb_dat_o(wb_dat_o),
    .wb_dat_i(wb_dat_i),
    .wb_sel_o(wb_sel),    // Убрать - нет в модуле
    .wb_tag_o(wb_tag),    // Убрать - нет в модуле
    
    // Control
    .start_i(test_start),
    .done_o(test_done),
    
    // Results
    .test_passed_o(test_passed),
    .error_count_o(error_count),
    .test_end_o(test_end)         // Убрать - нет в модуле
);
// ===========================================
// SDRAM Controller
// ===========================================

wire test_ack;
wire [15:0] test_data_in;

sdram_ctrl_wb #(
    .CLK_FREQ(100_000_000),
    .SDRAM_FREQ(100_000_000),
    .SDRAM_ADDR_WIDTH(13),
    .SDRAM_COL_WIDTH(9),
    .SDRAM_ROW_WIDTH(13),
    .SDRAM_BANK_WIDTH(2),
    .WB_ADDR_WIDTH(24),
    .WB_DATA_WIDTH(16),
    .CAS_LATENCY(2),
    .REFRESH_CYCLES(7800)
) sdram_controller (
    // Wishbone Interface
    .wb_clk_i(clk_100m),
    .wb_rst_i(system_reset),
    .wb_cyc_i(wb_cyc),
    .wb_stb_i(wb_stb),
    .wb_ack_o(test_ack),
    .wb_we_i(wb_we),
    .wb_adr_i(wb_adr),
    .wb_dat_i(wb_dat_o),
    .wb_dat_o(wb_dat_i),
    .wb_sel_i(wb_sel),
    .wb_tag_i(wb_tag),

    // SDRAM Physical Interface
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

// SDRAM clock output (180 degree phase shift)
ODDRX1F sdram_clk_oddr (
    .SCLK(clk_100m),
    .RST(0),
    .D0(1'b0),
    .D1(1'b1),
    .Q(sdram_clock)
);

// ===========================================
// LED Outputs и Test Status
// ===========================================

logic blink_led = 0;

always @(posedge test_end) begin
    blink_led <= ~blink_led;
end

// Красный (R) - ошибка/сброс
assign user_led0 = (error_count > 0) ? 1'b1 : 1'b0;  // Красный горит при ошибках

// Зеленый (G) - тест пройден/активность  
assign user_led1 = test_passed ? 1'b1 : 1'b0;        // Зеленый горит когда тест пройден

// Синий (B) - активность SDRAM
assign user_led2 = blink_led ? 1'b1 : 1'b0;          // Синий мигает зацикливании теста


// ===========================================
// LOCATION OF DEBUG PINS ON THE PCB
// --------------------------------------+
//    |          | F2 D1 C1 B1 GND       |  
//    | HDMI CON | E1 C2 B2 A2 GND       |
//    +----------+                       |
//                                       |
// --------------------------------------+

assign debug[0] = test_done;
assign debug[1] = test_passed;
assign debug[2] = test_end;
assign debug[3] = blink_led;
assign debug[4] = wb_cyc;
assign debug[5] = wb_stb;
assign debug[6] = test_ack;
assign debug[7] = clk_100m;
endmodule