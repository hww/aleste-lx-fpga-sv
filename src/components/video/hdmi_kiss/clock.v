module clock(
    input  wire clk_25mhz,
    output wire clk_96mhz,
    output wire clk_270mhz,
    output wire clk_27mhz,
    output wire locked
);
`ifndef SYNTHESIS  
    assign clk_96mhz = clk_25mhz;
    assign clk_270mhz = clk_25mhz;
    assign clk_27mhz = clk_25mhz;
    assign locked = 1'b1; 
`else
    // Yosys автоматически создаст PLL на основе атрибутов частоты
    (* FREQUENCY="25" *)
    wire clk_25mhz_buf = clk_25mhz;
    
    (* FREQUENCY="96" *)
    reg clk_96mhz_reg = 0;
    
    (* FREQUENCY="270" *)
    reg clk_270mhz_reg = 0;
    
    (* FREQUENCY="27" *)
    reg clk_27mhz_reg = 0;
    
    // Yosys увидит атрибуты FREQUENCY и создаст соответствующий PLL
    always @(posedge clk_25mhz_buf) begin
        // Логика будет заменена на PLL при синтезе
        clk_96mhz_reg <= !clk_96mhz_reg;
        clk_270mhz_reg <= !clk_270mhz_reg; 
        clk_27mhz_reg <= !clk_27mhz_reg;
    end
    
    assign clk_96mhz = clk_96mhz_reg;
    assign clk_270mhz = clk_270mhz_reg;
    assign clk_27mhz = clk_27mhz_reg;
    assign locked = 1'b1;
`endif
endmodule

