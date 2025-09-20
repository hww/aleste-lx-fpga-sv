`timescale 1ns/1ps

module tb_hdmi_scaler();


    // REALISTIC PARAMETERS для 60 Гц
    parameter int SRC_WIDTH  = 1280;    // Input visible width
    parameter int SRC_HEIGHT = 200;     // Input visible height  
    parameter int DATA_WIDTH = 24;
    parameter int V_SCALE    = 2;       // Vertical scale factor

    // Output timing - HDMI 1280x400@60Hz
    parameter int DST_WIDTH  = 1280;    // Output visible width
    parameter int DST_HEIGHT = 400;     // Output visible height
    parameter int DST_TOTAL_WIDTH = 1650;
    parameter int DST_TOTAL_HEIGHT = 750;
    parameter int DST_HSYNC_START = 1280 + 110;
    parameter int DST_HSYNC_END = DST_HSYNC_START + 40;
    parameter int DST_VSYNC_START = 400 + 5;
    parameter int DST_VSYNC_END = DST_VSYNC_START + 5;

    // Clock parameters
    parameter real SRC_CLK_FREQ = 96.0;      // MHz
    parameter real DST_CLK_FREQ = 148.5;     // MHz (74.25×2)
    parameter real SRC_CLK_PERIOD = 1000.0/SRC_CLK_FREQ;
    parameter real DST_CLK_PERIOD = 1000.0/DST_CLK_FREQ;
    parameter int PIXEL_RATIO = 3;           // 96MHz / 3 = 32MHz


    // Clock and Reset
    logic src_clk_i = 0;
    logic dst_clk_i = 0;
    logic src_rst_i = 1;
    logic dst_rst_i = 1;

    // Input video signals
    logic src_pixel_valid_i;
    logic [DATA_WIDTH-1:0] src_pixel_data_i;
    logic src_hsync_i;
    logic src_vsync_i;

    // Output video signals
    logic dst_pixel_valid_o;
    logic [DATA_WIDTH-1:0] dst_pixel_data_o;
    logic dst_hsync_o;
    logic dst_vsync_o;

    // Control
    logic [10:0] v_shift_i = 0;

    // Debug
    logic [1:0] debug_dst_buf_ready;
    logic [11:0] debug_dst_x_count_o;
    logic [10:0] debug_dst_y_count_o;
    logic [$clog2(SRC_WIDTH)-1:0] debug_dst_buf_addr_o;
    logic debug_dst_buf_sel_o;
    logic [$clog2(SRC_WIDTH)-1:0] debug_src_buf_addr_o;
    logic debug_src_buf_sel_o;

    // Clock generation
    always #(SRC_CLK_PERIOD/2.0) src_clk_i = ~src_clk_i;
    always #(DST_CLK_PERIOD/2.0) dst_clk_i = ~dst_clk_i;

    // Device Under Test
    hdmi_scaler_core #(
        .SRC_WIDTH(SRC_WIDTH),
        .SRC_HEIGHT(SRC_HEIGHT),
        .DATA_WIDTH(DATA_WIDTH),
        .V_SCALE(V_SCALE),
        .DST_WIDTH(DST_WIDTH),
        .DST_HEIGHT(DST_HEIGHT),
        .DST_TOTAL_WIDTH(DST_TOTAL_WIDTH),
        .DST_TOTAL_HEIGHT(DST_TOTAL_HEIGHT),
        .DST_HSYNC_START(DST_HSYNC_START),
        .DST_HSYNC_END(DST_HSYNC_END),
        .DST_VSYNC_START(DST_VSYNC_START),
        .DST_VSYNC_END(DST_VSYNC_END)
    ) dut (
        .*
    );

    // Test scenario
    initial begin
        $dumpfile("tb_hdmi_scaler.vcd");
        $dumpvars(0, tb_hdmi_scaler);
        $display("=== ПАРАМЕТРЫ МОДУЛЯ ===");
        $display("SRC_CLK_FREQ: %.2f MHz", SRC_CLK_FREQ);
        $display("DST_CLK_FREQ: %.2f MHz", DST_CLK_FREQ);
        $display("Pixel ratio: 1 valid every %0d clocks", PIXEL_RATIO);
        $display("SRC: %0dx%0d -> DST: %0dx%0d", SRC_WIDTH, SRC_HEIGHT, DST_WIDTH, DST_HEIGHT);

        // Initialize
        src_pixel_valid_i = 0;
        src_pixel_data_i = 0;
        src_hsync_i = 0;  // HSYNC inactive (активный уровень - 1)
        src_vsync_i = 0;  // VSYNC inactive (активный уровень - 1)
        
        // Release reset
        #100;
        src_rst_i = 0;
        dst_rst_i = 0;
        #100;

        // Generate test frames with proper synchronization
        generate_test_frame();
        
        // Wait before second frame to ensure output completes
        #(DST_CLK_PERIOD * DST_TOTAL_WIDTH * DST_TOTAL_HEIGHT * 1.5);
        
        generate_test_frame();

        // Wait for output to complete
        #(DST_CLK_PERIOD * DST_TOTAL_WIDTH * DST_TOTAL_HEIGHT * 2);
        $display("Test completed");
        $finish;
    end

    // Task to generate one test frame
    task generate_test_frame();
        $display("Generating test frame at time %0t", $time);
        
        // VSYNC pulse (active HIGH) - 2 линии
        src_vsync_i = 1;  // Active high
        #(SRC_CLK_PERIOD * 2);
        src_vsync_i = 0;  // Back to inactive
        
        // Back porch - 2 линии после VSYNC
        #(SRC_CLK_PERIOD * 2);
        
        // Generate active lines
        for (int y = 0; y < SRC_HEIGHT; y++) begin
            generate_line(y);
            
            // Wait for output to process two lines
            #(DST_CLK_PERIOD * DST_TOTAL_WIDTH * 2 * 0.9); // 90% of 2 output lines
        end
        
        // Front porch - 2 линии перед следующим VSYNC
        #(SRC_CLK_PERIOD * 2);
        
        $display("Frame generation complete at time %0t", $time);
    endtask

    // Task to generate one line
    task generate_line(int y);
        // HSYNC pulse (4 пикселя = 12 тактов при PIXEL_RATIO=3)
        src_hsync_i = 1;
        #(SRC_CLK_PERIOD * 4 * PIXEL_RATIO);
        src_hsync_i = 0;
        
        // Back porch (110 пикселей = 330 тактов)
        #(SRC_CLK_PERIOD * 110 * PIXEL_RATIO);
        
        // Active pixels (1280 пикселей)
        for (int x = 0; x < SRC_WIDTH; x++) begin
            src_pixel_data_i = {8'(x % 256), 8'(y % 256), 8'((x + y) % 256)};
            src_pixel_valid_i = 1;
            #(SRC_CLK_PERIOD);
            src_pixel_valid_i = 0;
            #(SRC_CLK_PERIOD * (PIXEL_RATIO - 1));
        end
        
        // Front porch (216 пикселей = 648 тактов)
        #(SRC_CLK_PERIOD * 216 * PIXEL_RATIO);
    endtask

// Глобальные переменные для статистики
int frame_count = 0;
int line_count = 0;
int pixel_count = 0;
real last_frame_time = 0;
real frame_time = 0;

// Monitor output - ТОЛЬКО ключевые события
always @(posedge dst_clk_i) begin
    if (dst_pixel_valid_o) begin
        pixel_count++;
        
        // Печатаем только первые несколько пикселей каждой десятой строки
        if (debug_dst_x_count_o < 5 && debug_dst_y_count_o % 10 == 0 && debug_dst_y_count_o < 50) begin
            $display("OUT: L%04d P%04d RGB=%02x%02x%02x", 
                    debug_dst_y_count_o, 
                    debug_dst_x_count_o,
                    dst_pixel_data_o[23:16],
                    dst_pixel_data_o[15:8],
                    dst_pixel_data_o[7:0]);
        end
    end
    
    // Печатаем начало каждой строки
    if (dst_pixel_valid_o && debug_dst_x_count_o == 0) begin
        line_count++;
        if (line_count % 50 == 0) begin // Каждую 50-ю строку
            $display("LINE: %04d started at %0t", line_count, $time);
        end
    end
end

// Monitor state machine transitions - ТОЛЬКО изменения
logic [2:0] prev_sync_state;
always @(posedge dst_clk_i) begin
    if (dut.sync_state != prev_sync_state) begin
        $display("STATE: %0d -> %0d at %0t", 
                prev_sync_state, 
                dut.sync_state, 
                $time);
        prev_sync_state = dut.sync_state;
    end
end

// Monitor buffer status - СТАТИСТИКА вместо каждого записи
int write_count[2]; // Счетчики для двух буферов
always @(posedge src_clk_i) begin
    if (dut.buf_wr_en) begin
        write_count[dut.src_buf_sel]++;
    end
end

// Monitor sync signals - ТОЛЬКО фронты
always @(posedge src_clk_i) begin
    if (dut.src_vsync_rise) begin
        $display("=== FRAME START: SRC at %0t ===", $time);
    end
    if (dut.src_hsync_rise) begin
        // Тихая печать HSYNC
    end
end

always @(posedge dst_clk_i) begin
    if (dut.cds_vsync_rise) begin
        frame_count++;
        frame_time = $time - last_frame_time;
        last_frame_time = $time;
        
        $display("=== FRAME %04d: DST at %0t (%.1f fps) ===", 
                frame_count, $time, 1e9/frame_time);
        $display("BUFFER STATS: Buf0=%d writes, Buf1=%d writes",
                write_count[0], write_count[1]);
        
        // Сброс счетчиков
        write_count[0] = 0;
        write_count[1] = 0;
    end
end

// Monitor frame timing - Сводная информация
initial begin
    #100;
    forever begin
        @(posedge dst_vsync_o);
        #1000; // Небольшая задержка для стабилизации
        $display("TIMING: Frame %04d - %0d pixels, %0d lines", 
                frame_count, pixel_count, line_count);
        pixel_count = 0;
        line_count = 0;
    end
end

// Мониторинг ошибок
always @(posedge dst_clk_i) begin
    if (dst_pixel_valid_o) begin
        if ((debug_dst_x_count_o-1) >= DST_WIDTH || debug_dst_y_count_o >= DST_HEIGHT) begin
            $display("ERROR: Pixel out of bounds! X=%0d/%0d, Y=%0d/%0d at %0t",
                    debug_dst_x_count_o, DST_WIDTH-1,
                    debug_dst_y_count_o, DST_HEIGHT-1,
                    $time);
        end
    end
end

endmodule
