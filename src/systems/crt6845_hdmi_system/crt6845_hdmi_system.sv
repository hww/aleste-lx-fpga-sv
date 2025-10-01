`default_nettype none

// Include configuration
`include "config_27mhz.vh"

module crt6845_hdmi_system #(
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
    parameter DATA_INDICES = 3         // Number of data channels (R, G, B)
)(
    // Primary clock input
    input  logic              clk_25mhz,
    
    // Differential HDMI outputs
    output logic [DATA_INDICES:0] gpdi_dp,  // Positive differential outputs
    output logic [DATA_INDICES:0] gpdi_dn,  // Negative differential outputs
    
    // System control output
    output logic              wifi_gpio0,
    output logic              debug_0,
    output logic              debug_1,
    output logic              debug_2
);       

    // ===========================================
    // Существующие сигналы
    // ===========================================
    logic clk_100m, clk_32m, clk_16m;
    logic clk_tdms_pixel, clk_tdms;
    logic pll_locked;
    logic [23:0] pixel_data;
    logic o_rd, o_newline, o_newframe;
    logic o_red, o_grn, o_blu;

    // Reset signals
    reg [RESET_CYCLES-1:0] reset_counter = 0;
    wire system_reset;

    // ===========================================
    // Новые сигналы для MC6845 и скандаблера
    // ===========================================
    
    // MC6845 сигналы (16MHz домен)
    logic [13:0] mc6845_ma;
    logic [4:0] mc6845_ra;
    logic mc6845_de;
    logic mc6845_hsync;
    logic mc6845_vsync; 
    logic mc6845_newline;
    logic mc6845_newframe;
    logic mc6845_cursor;
    logic mc6845_pix_stb;  // Pixel strobe
    
    // Скандаблер сигналы
    logic scaler_sync;
    
    // CGEN сигналы
    logic [23:0] cgen_pixel;

    // ===========================================
    // Тактовые сигналы
    // ===========================================

    // System PLL instance
    system_pll system_pll_inst(
        .rst(1'b0),
        .clkin_25M(clk_25mhz),
        .clk_100M(clk_100m),
        .clk_32M(clk_32m),
        .clk_16M(clk_16m),
        .locked(pll_locked)
    );
    
    // Video PLL for HDMI clocks
    video_pll vid_pll_inst(
        .rst(~pll_locked),
        .clkin_25M(clk_25mhz),
        .clk_270M(clk_tdms),
        .clk_27M(clk_tdms_pixel),
        .locked()  // Можно подключить к system_reset при необходимости
    );

    // ===========================================
    // Инициализация MC6845
    // ===========================================

    // Reset generation
    assign system_reset = ~pll_locked | (reset_counter != {RESET_CYCLES{1'b1}});
    
    always @(posedge clk_32m) begin
        if (~pll_locked) begin
            reset_counter <= 0;
        end else if (system_reset) begin
            reset_counter <= reset_counter + 1;
        end
    end
    
    // ===========================================
    // Инициализация MC6845
    // ===========================================
    
    // Программирование регистров MC6845 при сбросе
    logic [4:0] init_addr = 0;
    logic [7:0] init_data = 0;
    logic [3:0] init_state = 0;
    logic init_we = 0;
    logic wb_cyc;
    logic wb_stb; 
    logic [23:0] wb_adr;
    logic [31:0] wb_dat;
    logic [3:0] wb_sel;
    logic wb_we;
    logic wb_ack;

    always_ff @(posedge clk_32m) begin
        if (system_reset) begin
            init_state <= 0;
            init_we <= 0;
        end else begin
            init_we <= 0;
            
            if (init_state < 32) begin  // 16 регистров × 2 операции = 32 состояния
                init_we <= 1;
                
                case (init_state)
                    // Пары: адрес=0 (выбор регистра) → адрес=1 (запись данных)
                    0: begin init_addr <= 5'h00; init_data <= 5'h00; end  // Select R0
                    1: begin init_addr <= 5'h01; init_data <= 8'd63; end  // Write R0 = 63
                    
                    2: begin init_addr <= 5'h00; init_data <= 5'h01; end  // Select R1
                    3: begin init_addr <= 5'h01; init_data <= 8'd40; end  // Write R1 = 40
                    
                    4: begin init_addr <= 5'h00; init_data <= 5'h02; end  // Select R2
                    5: begin init_addr <= 5'h01; init_data <= 8'd46; end  // Write R2 = 46
                    
                    6: begin init_addr <= 5'h00; init_data <= 5'h03; end  // Select R3
                    7: begin init_addr <= 5'h01; init_data <= 8'h8E; end  // Write R3 = 0x8E (HSync=14, VSync=8)
                    
                    8: begin init_addr <= 5'h00; init_data <= 5'h04; end  // Select R4
                    9: begin init_addr <= 5'h01; init_data <= 8'd38; end  // Write R4 = 38
                    
                    10: begin init_addr <= 5'h00; init_data <= 5'h05; end // Select R5
                    11: begin init_addr <= 5'h01; init_data <= 8'd0;  end // Write R5 = 0
                    
                    12: begin init_addr <= 5'h00; init_data <= 5'h06; end // Select R6
                    13: begin init_addr <= 5'h01; init_data <= 8'd25; end // Write R6 = 25
                    
                    14: begin init_addr <= 5'h00; init_data <= 5'h07; end // Select R7
                    15: begin init_addr <= 5'h01; init_data <= 8'd30; end // Write R7 = 30
                    
                    16: begin init_addr <= 5'h00; init_data <= 5'h08; end // Select R8
                    17: begin init_addr <= 5'h01; init_data <= 8'd0;  end // Write R8 = 0
                    
                    18: begin init_addr <= 5'h00; init_data <= 5'h09; end // Select R9
                    19: begin init_addr <= 5'h01; init_data <= 8'd7;  end // Write R9 = 7
                    
                    20: begin init_addr <= 5'h00; init_data <= 5'h0A; end // Select R10
                    21: begin init_addr <= 5'h01; init_data <= 8'd0;  end // Write R10 = 0
                    
                    22: begin init_addr <= 5'h00; init_data <= 5'h0B; end // Select R11
                    23: begin init_addr <= 5'h01; init_data <= 8'd0;  end // Write R11 = 0
                    
                    24: begin init_addr <= 5'h00; init_data <= 5'h0C; end // Select R12
                    25: begin init_addr <= 5'h01; init_data <= 8'd48; end // Write R12 = 48
                    
                    26: begin init_addr <= 5'h00; init_data <= 5'h0D; end // Select R13
                    27: begin init_addr <= 5'h01; init_data <= 8'd0;  end // Write R13 = 0
                    
                    28: begin init_addr <= 5'h00; init_data <= 5'h0E; end // Select R14
                    29: begin init_addr <= 5'h01; init_data <= 8'd0;  end // Write R14 = 0
                    
                    30: begin init_addr <= 5'h00; init_data <= 5'h0F; end // Select R15
                    31: begin init_addr <= 5'h01; init_data <= 8'd0;  end // Write R15 = 0
                endcase
                
                if (wb_ack) begin
                    init_state <= init_state + 1;
                end
            end
        end
    end
    
    // ===========================================
    // Wishbone интерфейс для инициализации
    // ===========================================

    assign wb_cyc = (init_state < 9);
    assign wb_stb = init_we;
    assign wb_adr = {16'h6845, 7'b0, init_addr[0]};
    assign wb_dat = {24'b0, init_data};
    assign wb_sel = 4'b1111;
    assign wb_we = init_we;

    // ===========================================
    // MC6845 instance
    // ===========================================

    mc6845mod #(
        .WB_ADDRESS(16'h6845)
    ) mc6845_inst (
        // Wishbone Interface
        .wb_clk_i(clk_32m),
        .wb_rst_i(system_reset),
        .wb_cyc_i(wb_cyc),
        .wb_stb_i(wb_stb),
        .wb_adr_i(wb_adr),
        .wb_dat_i(wb_dat),
        .wb_sel_i(wb_sel),
        .wb_we_i(wb_we),
        .wb_ack_o(wb_ack),  // Не используем ack для инициализации
        .wb_dat_o(),
        .sel_o(),
        
        // Pixel Clock Domain  
        .pix_clk_i(clk_32m),
        .pix_en_i(clk_16m),

        // Sync Input от скандаблера
        .sync_i(scaler_sync),
        
        // Video Outputs
        .de_o(mc6845_de),
        .hsync_o(mc6845_hsync),
        .vsync_o(mc6845_vsync),
        .newline_o(mc6845_newline),
        .newframe_o(mc6845_newframe),
        .cursor_o(mc6845_cursor),
        
        // Memory Address Interface
        .ma_o(mc6845_ma),
        .ra_o(mc6845_ra)
    );

    // Pixel strobe для скандаблера
    assign mc6845_pix_stb = mc6845_de; // В 16MHz домене

    // ===========================================
    // Скандаблер
    // ===========================================

    hdmi_scaler #(
        .SRC_H_VISIBLE(720),
        .DATA_WIDTH(24),
        .V_SCALE(2),
        .HDMI_H_VISIBLE(720),
        .HDMI_V_VISIBLE(480)
    ) scaler_inst (
        // Source domain (16MHz - MC6845)
        .src_clk_i(clk_16m),
        .src_rst_i(system_reset),
        .src_pixel_data_i(cgen_pixel),
        .src_rd_i(mc6845_pix_stb),
        .src_newline_i(mc6845_newline),
        .src_newframe_i(mc6845_newframe),
        .src_sync_o(scaler_sync),
        
        // Destination domain (27MHz - HDMI)
        .dst_clk_i(clk_tdms_pixel),
        .dst_rst_i(system_reset),
        .dst_newline_i(o_newline),
        .dst_newframe_i(o_newframe),
        .dst_rd_i(o_rd),
        .dst_pixel_data_o(pixel_data)
    );

    // ===========================================
    // CGEN (используем существующий vgatestsrc или заменяем)
    // ===========================================
    
    simple_cgen cgen_inst (
        .clk_i(clk_16m),
        .reset_i(system_reset),
        .de_i(mc6845_de),
        .ma_i(mc6845_ma),
        .ra_i(mc6845_ra),
        .cursor_i(mc6845_cursor),
        .pixel_o(cgen_pixel)
    );

    // ===========================================
    // HDMI контроллер (оставить как есть)
    // ===========================================

    logic [7:0] red;
    logic [7:0] grn;
    logic [7:0] blu;

    assign red = pixel_data[23:16];
    assign grn = pixel_data[15:8];
    assign blu = pixel_data[7:0];

    llhdmi #(
        .H_VISIBLE(HDMI_H_VISIBLE),
        .H_FRONT_PORCH(HDMI_H_FRONT_PORCH),
        .H_SYNC_PULSE(HDMI_H_SYNC_PULSE),
        .H_BACK_PORCH(HDMI_H_BACK_PORCH),
        .V_VISIBLE(HDMI_V_VISIBLE),
        .V_FRONT_PORCH(HDMI_V_FRONT_PORCH),
        .V_SYNC_PULSE(HDMI_V_SYNC_PULSE),
        .V_BACK_PORCH(HDMI_V_BACK_PORCH)
    ) llhdmi_encoder (
        .i_tmdsclk(clk_tdms),
        .i_pixclk(clk_tdms_pixel),
        .i_reset(system_reset),
        .i_red(red),
        .i_grn(grn),
        .i_blu(blu),
        .o_rd(o_rd),
        .o_newline(o_newline),
        .o_newframe(o_newframe),
        .o_red(o_red),
        .o_grn(o_grn),
        .o_blu(o_blu)
    );

    // ===========================================
    // Дифференциальные выходы (оставить как есть)
    // ===========================================
    
    OBUFDS OBUFDS_red( .I(o_red), .O(gpdi_dp[2]), .OB(gpdi_dn[2]) );
    OBUFDS OBUFDS_grn( .I(o_grn), .O(gpdi_dp[1]), .OB(gpdi_dn[1]) );
    OBUFDS OBUFDS_blu( .I(o_blu), .O(gpdi_dp[0]), .OB(gpdi_dn[0]) );
    OBUFDS OBUFDS_clock( .I(clk_tdms_pixel), .O(gpdi_dp[3]), .OB(gpdi_dn[3]) );
        
    // ===========================================
    // Отладка
    // ===========================================
    assign debug_0 = mc6845_newline;  // или другой интересный сигнал
    assign debug_1 = mc6845_newframe;
    assign debug_2 = mc6845_de;

endmodule
