module sdram_phy_ecp5 (
    // =========================================================================
    // Wishbone Interface (от твоего контроллера)
    // =========================================================================
    input wire wb_clk_i,
    input wire wb_rst_i,
    input wire wb_cyc_i,
    input wire wb_stb_i,
    output reg wb_ack_o,
    input wire wb_we_i,
    input wire [23:0] wb_adr_i,
    input wire [15:0] wb_dat_i,
    output reg [15:0] wb_dat_o,
    input wire [1:0] wb_sel_i,
    
    // =========================================================================
    // SDRAM Physical Interface (через примитивы ECP5)
    // =========================================================================
    output wire sdram_clock,
    output wire [12:0] sdram_a,
    output wire [1:0] sdram_ba,
    output wire sdram_cs_n,
    output wire sdram_ras_n,
    output wire sdram_cas_n,
    output wire sdram_we_n,
    output wire sdram_cke,
    output wire [1:0] sdram_dm,
    inout wire [15:0] sdram_dq,
    
    // =========================================================================
    // Debug
    // =========================================================================
    output wire [3:0] debug_state
);

// =============================================================================
// Внутренние сигналы между контроллером и примитивами
// =============================================================================
wire [12:0] ctrl_sdram_addr;
wire [1:0] ctrl_sdram_ba;
wire ctrl_sdram_cs_n;
wire ctrl_sdram_we_n;
wire ctrl_sdram_ras_n;
wire ctrl_sdram_cas_n;
wire ctrl_sdram_cke;
wire [1:0] ctrl_sdram_dqm;
wire [15:0] ctrl_data_to_sdram;
wire [15:0] ctrl_data_from_sdram;
wire ctrl_output_enable; // 0 = запись в SDRAM, 1 = чтение из SDRAM

// =============================================================================
// Твой SDRAM контроллер (без изменений)
// =============================================================================
sdram_ctrl_wb your_sdram_controller (
    .wb_clk_i(wb_clk_i),
    .wb_rst_i(wb_rst_i),
    .wb_cyc_i(wb_cyc_i),
    .wb_stb_i(wb_stb_i),
    .wb_ack_o(wb_ack_o),
    .wb_we_i(wb_we_i),
    .wb_adr_i(wb_adr_i),
    .wb_dat_i(wb_dat_i),
    .wb_dat_o(wb_dat_o),
    .wb_sel_i(wb_sel_i),
    
    // Физические сигналы к примитивам
    .sdram_dq(ctrl_data_from_sdram),     // Данные из SDRAM
    .sdram_addr(ctrl_sdram_addr),        // Адрес
    .sdram_dqm(ctrl_sdram_dqm),          // Data mask
    .sdram_ba(ctrl_sdram_ba),            // Bank address
    .sdram_cs_n(ctrl_sdram_cs_n),        // Chip select
    .sdram_we_n(ctrl_sdram_we_n),        // Write enable
    .sdram_ras_n(ctrl_sdram_ras_n),      // Row address strobe
    .sdram_cas_n(ctrl_sdram_cas_n),      // Column address strobe
    .sdram_cke(ctrl_sdram_cke),          // Clock enable
    
    .debug_state(debug_state)
);

// Контроль направления данных (из твоего контроллера)
assign ctrl_output_enable = ctrl_sdram_we_n; // Чтение когда WE=1, запись когда WE=0
assign ctrl_data_to_sdram = wb_dat_i;        // Данные для записи в SDRAM

// =============================================================================
// Примитивы ECP5 для тактирования SDRAM
// =============================================================================
ODDRX1F sdram_clk_oddr(
    .D0(1'b0),
    .D1(1'b1),
    .SCLK(wb_clk_i),
    .Q(sdram_clock)
);

// =============================================================================
// Примитивы ECP5 для адресных и управляющих сигналов
// =============================================================================

// Адресные линии A0-A12
OFS1P3BX sdram_addr_0  (.D(ctrl_sdram_addr[0]),  .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_a[0]));
OFS1P3BX sdram_addr_1  (.D(ctrl_sdram_addr[1]),  .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_a[1]));
OFS1P3BX sdram_addr_2  (.D(ctrl_sdram_addr[2]),  .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_a[2]));
OFS1P3BX sdram_addr_3  (.D(ctrl_sdram_addr[3]),  .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_a[3]));
OFS1P3BX sdram_addr_4  (.D(ctrl_sdram_addr[4]),  .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_a[4]));
OFS1P3BX sdram_addr_5  (.D(ctrl_sdram_addr[5]),  .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_a[5]));
OFS1P3BX sdram_addr_6  (.D(ctrl_sdram_addr[6]),  .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_a[6]));
OFS1P3BX sdram_addr_7  (.D(ctrl_sdram_addr[7]),  .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_a[7]));
OFS1P3BX sdram_addr_8  (.D(ctrl_sdram_addr[8]),  .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_a[8]));
OFS1P3BX sdram_addr_9  (.D(ctrl_sdram_addr[9]),  .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_a[9]));
OFS1P3BX sdram_addr_10 (.D(ctrl_sdram_addr[10]), .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_a[10]));
OFS1P3BX sdram_addr_11 (.D(ctrl_sdram_addr[11]), .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_a[11]));
OFS1P3BX sdram_addr_12 (.D(ctrl_sdram_addr[12]), .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_a[12]));

// Bank address
OFS1P3BX sdram_ba_0 (.D(ctrl_sdram_ba[0]), .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_ba[0]));
OFS1P3BX sdram_ba_1 (.D(ctrl_sdram_ba[1]), .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_ba[1]));

// Управляющие сигналы
OFS1P3BX sdram_cs_n_ff (.D(ctrl_sdram_cs_n),  .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_cs_n));
OFS1P3BX sdram_we_n_ff (.D(ctrl_sdram_we_n),  .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_we_n));
OFS1P3BX sdram_ras_n_ff(.D(ctrl_sdram_ras_n), .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_ras_n));
OFS1P3BX sdram_cas_n_ff(.D(ctrl_sdram_cas_n), .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_cas_n));
OFS1P3BX sdram_cke_ff  (.D(ctrl_sdram_cke),   .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_cke));

// Data mask
OFS1P3BX sdram_dm_0 (.D(ctrl_sdram_dqm[0]), .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_dm[0]));
OFS1P3BX sdram_dm_1 (.D(ctrl_sdram_dqm[1]), .PD(1'b0), .SCLK(wb_clk_i), .SP(1'b1), .Q(sdram_dm[1]));

// =============================================================================
// Примитивы ECP5 для bidirectional шины данных
// =============================================================================
genvar i;
generate
    for (i = 0; i < 16; i = i + 1) begin: sdram_data_bus
        // Output flip-flop для данных в SDRAM
        OFS1P3BX data_out_ff(
            .D(ctrl_data_to_sdram[i]),
            .PD(1'b0),
            .SCLK(wb_clk_i),
            .SP(1'b1),
            .Q(/* к TRELLIS_IO */)
        );
        
        // Input flip-flop для данных из SDRAM  
        IFS1P3BX data_in_ff(
            .D(/* от TRELLIS_IO */),
            .PD(1'b0),
            .SCLK(wb_clk_i),
            .SP(1'b1),
            .Q(ctrl_data_from_sdram[i])
        );
        
        // Bidirectional buffer
        TRELLIS_IO #(.DIR("BIDIR")) io_buffer(
            .I(ctrl_data_to_sdram[i]),      // Данные в SDRAM
            .O(/* к data_in_ff */),         // Данные из SDRAM
            .T(ctrl_output_enable),         // 0=output, 1=input
            .B(sdram_dq[i])                 // Физический вывод
        );
    end
endgenerate

endmodule
