module clk_gen (
    input  wire clk25,
    input  wire rst,
    output wire clk_sys,
    output wire clk_sdram, 
    output wire clk_hdmi,
    output wire locked,
    output reg ce_4m,
    output reg ce_8m,
    output reg ce_16m,
    output reg ce_7_16m
);

// Для симуляции и синтеза
`ifdef VERILATOR
    // Симуляция - простые делители
    assign clk_sys = clk25;
    assign clk_sdram = clk25;
    assign clk_hdmi = clk25;
    assign locked = ~rst;
    
    // Делители частот для симуляции
    reg [4:0] counter = 0;
    always @(posedge clk25) begin
        counter <= counter + 1;
        ce_4m <= (counter % 6 == 0);
        ce_8m <= (counter % 3 == 0);
        ce_16m <= (counter % 1 == 0);
        ce_7_16m <= (counter % 3 == 0);
    end

`else
    // РЕАЛЬНЫЙ СИНТЕЗ ДЛЯ ECP5
    
    // 1. Используем примитив PLL для ECP5
    wire clk_sys_int, clk_sdram_int, clk_hdmi_int;
    
    // Пример параметров PLL (подберите под свои частоты!)
    EHXPLLL #(
        .CLKI_DIV(1),
        .CLKFB_DIV(24),     // Для 96 MHz из 25 MHz
        .CLKOP_DIV(1),
        .CLKOS_DIV(1),
        .CLKOS2_DIV(32),    // Для ~74.25 MHz
        .CLKOS3_DIV(1),
        .FEEDBACK_PATH("SIMPLE")
    ) pll_inst (
        .CLKI(clk25),
        .CLKFB(1'b0),
        .CLKOP(clk_sys_int),
        .CLKOS(clk_sdram_int),
        .CLKOS2(clk_hdmi_int),
        .LOCK(locked)
    );
    
    // 2. Глобальные буферы
    wire clk_sys_gb, clk_sdram_gb, clk_hdmi_gb;
    SB_GB sys_gb (.USER_SIGNAL_TO_GLOBAL_BUFFER(clk_sys_int), .GLOBAL_BUFFER_OUTPUT(clk_sys_gb));
    SB_GB sdram_gb (.USER_SIGNAL_TO_GLOBAL_BUFFER(clk_sdram_int), .GLOBAL_BUFFER_OUTPUT(clk_sdram_gb));
    SB_GB hdmi_gb (.USER_SIGNAL_TO_GLOBAL_BUFFER(clk_hdmi_int), .GLOBAL_BUFFER_OUTPUT(clk_hdmi_gb));
    
    assign clk_sys = clk_sys_gb;
    assign clk_sdram = clk_sdram_gb;
    assign clk_hdmi = clk_hdmi_gb;
    
    // 3. Делители для CE (работают на clk_sys)
    reg [4:0] ce_counter = 0;
    always @(posedge clk_sys or posedge rst) begin
        if (rst) begin
            ce_counter <= 0;
            {ce_4m, ce_8m, ce_16m, ce_7_16m} <= 0;
        end else begin
            ce_counter <= ce_counter + 1;
            
            // 96 / 24 = 4 MHz
            ce_4m <= (ce_counter == 23);
            
            // 96 / 12 = 8 MHz  
            ce_8m <= (ce_counter % 11 == 0);
            
            // 96 / 6 = 16 MHz
            ce_16m <= (ce_counter % 5 == 0);
            
            // ~7.16 MHz
            ce_7_16m <= (ce_counter % 13 == 0);
        end
    end
`endif

endmodule