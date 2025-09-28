module pal_timing #(
    parameter H_WIDTH = 11,
    parameter V_WIDTH = 9
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

    // Параметры для PAL 720x288 (активная область может быть меньше)
    localparam H_ACTIVE  = 720;    // Активная часть строки PAL
    localparam H_FRONT   = 12;
    localparam H_BACK    = 64;     // Back porch
    localparam H_SYNC    = 228;    // Длительность синхроимпульса
    
    localparam V_ACTIVE  = 288;    // Активные строки PAL
    localparam V_FRONT   = 2;
    localparam V_SYNC    = 3;      // Синхроимпульс по вертикали  
    localparam V_BACK    = 19;     // Back porch

    localparam H_TOTAL   = H_ACTIVE + H_FRONT + H_SYNC + H_BACK;  // 800   
    localparam V_TOTAL   = V_ACTIVE + V_FRONT + V_SYNC + V_BACK;  // 281

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
    assign rd_o       = (hpos < H_ACTIVE) && (vpos < V_ACTIVE);
    assign newline_o  = (hpos == H_ACTIVE - 1);
    assign newframe_o = (vpos == V_ACTIVE - 1) && (hpos == H_ACTIVE - 1);
    assign resline_o  = (hpos == H_TOTAL - 1);
    assign resframe_o = (vpos == V_TOTAL - 1) && (hpos == H_TOTAL - 1);

    // Синхроимпульсы (отрицательные для VGA)
    assign hsync_o = !((hpos >= H_ACTIVE + H_FRONT) && 
                       (hpos < H_ACTIVE + H_FRONT + H_SYNC));
    assign vsync_o = !((vpos >= V_ACTIVE + V_FRONT) && 
                       (vpos < V_ACTIVE + V_FRONT + V_SYNC));

    assign hpos_o = hpos;
    assign vpos_o = vpos;

endmodule