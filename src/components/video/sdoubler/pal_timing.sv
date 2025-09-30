`default_nettype none

module pal_timing #(
    parameter H_WIDTH = 11,
    parameter V_WIDTH = 9,
    // Параметры для PAL 720x288 (активная область может быть меньше)
    parameter H_VISIBLE       = 720,    // Активная часть строки PAL
    parameter H_FRONT_PORCH   = 12,
    parameter H_SYNC_PULSE    = 228,    // Длительность синхроимпульса
    parameter H_BACK_PORCH    = 64,     // Back porch
    
    parameter V_VISIBLE       = 288,    // Активные строки PAL
    parameter V_FRONT_PORCH   = 2,
    parameter V_SYNC_PULSE    = 3,      // Синхроимпульс по вертикали  
    parameter V_BACK_PORCH    = 19     // Back porch
)(
    input  logic clk_i,
    input  logic pixclk_i,
    input  logic reset_i,
    output logic [H_WIDTH-1:0] hpos_o,
    output logic [V_WIDTH-1:0] vpos_o,
    output logic rd_o,
    output logic newline_o, 
    output logic newframe_o,
    output logic resline_o, 
    output logic resframe_o,
    output logic hsync_o,
    output logic vsync_o
);



    localparam H_TOTAL   = H_VISIBLE + H_FRONT_PORCH + H_SYNC_PULSE + H_BACK_PORCH;  // 800   
    localparam V_TOTAL   = V_VISIBLE + V_FRONT_PORCH + V_SYNC_PULSE + V_BACK_PORCH;  // 281

    logic [H_WIDTH-1:0] hpos;
    logic [V_WIDTH-1:0] vpos;

    initial begin
        hpos = '0;
        vpos = '0;
    end

    // Горизонтальный счетчик
    always @(posedge clk_i) begin
        if (reset_i) begin
            hpos <= 0;
        end else begin
            if (pixclk_i) begin
                if (hpos == H_TOTAL - 1) begin
                    hpos <= 0;
                end else begin
                    hpos <= hpos + 1;
                end
            end
        end
    end

    // Вертикальный счетчик  
    always @(posedge clk_i) begin
        if (reset_i) begin
            vpos <= 0;
        end else if (hpos == H_TOTAL - 1) begin
            if (pixclk_i) begin            
                if (vpos == V_TOTAL - 1) begin
                    vpos <= 0;
                end else begin
                    vpos <= vpos + 1;
                end
            end
        end
    end

    // Управляющие сигналы
    assign rd_o       = (hpos < H_VISIBLE) && (vpos < V_VISIBLE);
    assign newline_o  = (hpos == H_VISIBLE - 1);
    assign newframe_o = (vpos == V_VISIBLE - 1) && (hpos == H_VISIBLE - 1);
    assign resline_o  = (hpos == H_TOTAL - 1);
    assign resframe_o = (vpos == V_TOTAL - 1) && (hpos == H_TOTAL - 1);

    // Синхроимпульсы (отрицательные для VGA)
    assign hsync_o = !((hpos >= H_VISIBLE + H_FRONT_PORCH) && 
                       (hpos < H_VISIBLE + H_FRONT_PORCH + H_SYNC_PULSE));
    assign vsync_o = !((vpos >= V_VISIBLE + V_FRONT_PORCH) && 
                       (vpos < V_VISIBLE + V_FRONT_PORCH + V_SYNC_PULSE));

    assign hpos_o = hpos;
    assign vpos_o = vpos;

endmodule