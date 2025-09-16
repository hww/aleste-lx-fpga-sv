module clock_manager (
    input  logic clk_96m,
    input  logic mode_16m,    // 1 = 16MHz mode, 0 = 12MHz mode
    output logic pixel_strobe_16m,
    output logic pixel_strobe_12m
);

logic [3:0] counter = 0;

always_ff @(posedge clk_96m) begin
    counter <= counter + 1;
    
    // 96MHz / 6 = 16MHz (каждый 6-й такт)
    pixel_strobe_16m <= (counter % 6 == 0);
    
    // 96MHz / 8 = 12MHz (каждый 8-й такт)  
    pixel_strobe_12m <= (counter % 8 == 0);
end

endmodule
