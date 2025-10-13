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
    output wire user_led6,      // Verify phase
    output wire user_led7,      // Verify phase
   
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
    inout  wire [15:0] sdram_dq
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
// SDRAM Test Pattern
// ===========================================

wire [15:0] test_data_out;
wire [15:0] test_data_in;
wire [23:0] test_addr;
wire test_we;
wire test_req;
wire test_ack;
wire test_passed;
wire test_failed;
wire [2:0] test_phase;

sdram_test_pattern test_inst(
    .clk(clk_100m),
    .rst(system_reset),
    .sdram_addr(test_addr),
    .sdram_data_out(test_data_out),
    .sdram_we(test_we),
    .sdram_req(test_req),
    .sdram_data_in(test_data_in),
    .sdram_ack(test_ack),
    .test_passed(test_passed),
    .test_failed(test_failed),
    .test_phase(test_phase)
);

// ===========================================
// SDRAM Controller
// ===========================================

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
    .wb_cyc_i(test_req),
    .wb_stb_i(test_req),
    .wb_ack_o(test_ack),
    .wb_we_i(test_we),
    .wb_adr_i(test_addr),
    .wb_dat_i(test_data_out),
    .wb_dat_o(test_data_in),
    .wb_sel_i(2'b11),  // Always 16-bit access
    .wb_tag_i(2'00),

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
// LED Outputs
// ===========================================
assign user_led0 = test_passed  ? 1'b0 : 1'b1;  // Зелёный канал (активный низкий?)
assign user_led1 = test_failed  ? 1'b0 : 1'b1;  // Красный канал  
assign user_led2 = test_req     ? 1'b0 : 1'b1;  // Синий канал
//assign user_led0 = test_passed;    // Green - test passed
//assign user_led1 = test_failed;    // Red - test failed
//assign user_led2 = test_req;       // SDRAM active
assign user_led3 = (test_phase == 0); // Write phase
assign user_led4 = (test_phase == 1); // Read phase  
assign user_led5 = (test_phase == 2); // Verify phase
assign user_led6 = system_reset;   // Reset active
assign user_led7 = pll_locked;     // PLL locked

endmodule
