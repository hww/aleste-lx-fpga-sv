`timescale 1ns / 1ps

module hdmi_analyzer_tb;

    // Testbench signals
    reg clk_25mhz, rst;
    reg [3:0] gpdi_dp, gpdi_dn;
    wire tmds_clock;
    wire [2:0] tmds_data;
    
    // HDMI decoder signals
    wire [7:0] red, green, blue;
    wire hsync, vsync, de;
    wire [11:0] h_pos, v_pos;
    
    // DUT instantiation
    hdmi_kiss_test dut (
        .clk_25mhz(clk_25mhz),
        .rst(rst),
        .gpdi_dp(gpdi_dp),
        .gpdi_dn(gpdi_dn),
        .led_r_o(), .led_g_o(), .led_b_o()
    );

    assign tmds_clock = gpdi_dp[3];
    assign tmds_data = gpdi_dp[2:0];

    // =========================================================================
    // HDMI DECODER MODULE
    // =========================================================================
    logic clk_270M;
    always #1.85 clk_270M = ~clk_270M;

    hdmi_decoder decoder (
        .rst(rst),
        .tmds_clk(clk_270M),
        .pix_clk(tmds_clock),
        .tmds_data(tmds_data),
        .red(red),
        .green(green), 
        .blue(blue),
        .hsync(hsync),
        .vsync(vsync),
        .de(de)
    );



    // Clock generation
    initial begin
        clk_25mhz = 0;
        forever #20 clk_25mhz = ~clk_25mhz;
    end

    // Main test sequence
    initial begin
        $display("=== HDMI Diagnostic Test with Decoder ===");
        clk_270M = 0;
        rst = 1;
        #1000 rst = 0;
        
        // Wait for stable signal
        #100000;
        
        // Run diagnostic tests
        //test_clock_frequency();
        //test_sync_signals();
        //test_data_enable();
        //test_pixel_data();
        //test_video_timing();

        generate_report();
        #500000 $finish;
    end


    // Test 1: Clock Frequency
    task test_clock_frequency;
        integer i;
        real start_time, total_time, avg_period, freq_mhz;
        begin
            $display("\n[TEST 1] TMDS Clock Frequency");
            
            @(posedge tmds_clock);
            start_time = $realtime;
            for (i = 0; i < 100; i = i + 1) begin
                @(posedge tmds_clock);
            end
            total_time = $realtime - start_time;
            avg_period = total_time / 100.0;
            freq_mhz = 1000.0 / avg_period;
            
            $display("Measured: %.3f MHz (Expected: 27.000 MHz)", freq_mhz);
            
            if (freq_mhz > 25.65 && freq_mhz < 28.35) begin
                $display("✅ PASS");
            end else begin
                $display("❌ FAIL");
            end
        end
    endtask

    // Test 2: Sync Signals
    task test_sync_signals;
        integer h_sync_count, v_sync_count;
        integer h_sync_width, v_sync_width;
        begin
            $display("\n[TEST 2] Sync Signals Detection");
            
            // Wait for VSYNC
            @(posedge vsync);
            v_sync_count = 1;
            
            // Measure VSYNC width
            v_sync_width = 0;
            while (vsync) begin
                @(posedge tmds_clock);
                v_sync_width = v_sync_width + 1;
            end
            
            // Count HSYNC pulses for one frame
            h_sync_count = 0;
            while (!vsync) begin
                @(posedge hsync);
                h_sync_count = h_sync_count + 1;
                
                if (h_sync_count == 1) begin
                    // Measure first HSYNC width
                    h_sync_width = 0;
                    while (hsync) begin
                        @(posedge tmds_clock);
                        h_sync_width = h_sync_width + 1;
                    end
                end
            end
            
            $display("HSYNC pulses per frame: %0d", h_sync_count);
            $display("HSYNC width: %0d TMDS clocks", h_sync_width);
            $display("VSYNC width: %0d TMDS clocks", v_sync_width);
            
            if (h_sync_count > 700 && h_sync_count < 800 && 
                h_sync_width > 30 && h_sync_width < 50 &&
                v_sync_width > 3 && v_sync_width < 10) begin
                $display("✅ PASS - Valid sync signals detected");
            end else begin
                $display("❌ FAIL - Invalid sync timing");
            end
        end
    endtask

    // Test 3: Data Enable Signal
    task test_data_enable;
        integer de_active, de_inactive;
        integer total_samples;
        real de_duty_cycle;
        begin
            $display("\n[TEST 3] Data Enable Signal");
            
            total_samples = 10000;
            de_active = 0;
            de_inactive = 0;
            
            repeat(total_samples) begin
                @(posedge tmds_clock);
                if (de) begin
                    de_active = de_active + 1;
                end else begin
                    de_inactive = de_inactive + 1;
                end
            end
            
            de_duty_cycle = de_active * 100.0 / total_samples;
            
            $display("DE active: %0d cycles", de_active);
            $display("DE inactive: %0d cycles", de_inactive);
            $display("DE duty cycle: %.1f%%", de_duty_cycle);
            
            // For 1280x720 in 1650x750 total, DE should be ~77.6%
            if (de_duty_cycle > 70.0 && de_duty_cycle < 85.0) begin
                $display("✅ PASS - Reasonable DE timing");
            end else begin
                $display("❌ FAIL - Abnormal DE timing");
            end
        end
    endtask

    // Test 4: Pixel Data Analysis (CRITICAL)
    task test_pixel_data;
        integer i, pixel_changes;
        integer total_pixels;
        reg [23:0] last_pixel; // RGB combined
        real variation_percent;
        begin
            $display("\n[TEST 4] Pixel Data Content");
            $display("Testing if image pixels are changing...");
            
            pixel_changes = 0;
            total_pixels = 2000;
            last_pixel = {red, green, blue};
            
            for (i = 0; i < total_pixels; i = i + 1) begin
                // Wait for active video
                wait(de);
                @(posedge tmds_clock);
                
                if ({red, green, blue} !== last_pixel) begin
                    pixel_changes = pixel_changes + 1;
                end
                last_pixel = {red, green, blue};
                
                // Wait for next pixel (simplified)
                @(posedge tmds_clock);
                
                if (i % 500 == 0 && i > 0) begin
                    $display("  Analyzed %0d pixels...", i);
                end
            end
            
            variation_percent = pixel_changes * 100.0 / total_pixels;
            
            $display("Results:");
            $display("  Pixels sampled: %0d", total_pixels);
            $display("  Pixels changed: %0d", pixel_changes);
            $display("  Variation: %.1f%%", variation_percent);
            $display("  Current pixel: R=%h G=%h B=%h", red, green, blue);
            
            if (variation_percent > 30.0) begin
                $display("✅ PASS - Healthy image content");
            end else if (variation_percent > 5.0) begin
                $display("⚠️  WARNING - Low image variation");
            end else begin
                $display("❌ FAIL - NO IMAGE CONTENT DETECTED");
                $display("   Pixels are not changing - this explains why monitor shows no picture!");
            end
        end
    endtask

    // Test 5: Video Timing
    task test_video_timing;
        integer frame_time, line_time;
        real frame_rate, line_rate;
        begin
            $display("\n[TEST 5] Video Timing Analysis");
            
            // Measure frame time
            @(posedge vsync);
            frame_time = $time;
            @(posedge vsync);
            frame_time = $time - frame_time;
            
            // Measure line time
            @(posedge hsync);
            line_time = $time;
            @(posedge hsync);
            line_time = $time - line_time;
            
            frame_rate = 1000000000.0 / frame_time; // Convert ns to Hz
            line_rate = 1000000000.0 / line_time;
            
            $display("Frame time: %0d ns", frame_time);
            $display("Line time: %0d ns", line_time);
            $display("Frame rate: %.1f Hz", frame_rate);
            $display("Line rate: %.1f kHz", line_rate / 1000.0);
            
            if (frame_rate > 55.0 && frame_rate < 65.0) begin
                $display("✅ PASS - Valid 60Hz timing");
            end else begin
                $display("❌ FAIL - Abnormal frame rate");
            end
        end
    endtask

    task generate_report;
        begin
            $display("\n==========================================");
            $display("HDMI DECODER DIAGNOSTIC REPORT");
            $display("==========================================");
            $display("Decoder outputs:");
            $display("  HSYNC: %b, VSYNC: %b, DE: %b", hsync, vsync, de);
            $display("  Position: H=%0d, V=%0d", h_pos, v_pos);
            $display("  Pixel: R=%h, G=%h, B=%h", red, green, blue);
            $display("");
            $display("If DE=1 but pixels don't change:");
            $display("  → Problem in video source generation");
            $display("  → Check test pattern generator in FPGA");
            $display("");
            $display("If DE=0 always:");
            $display("  → Problem in video timing generator");
            $display("  → Check sync signal generation");
            $display("==========================================");
        end
    endtask

    // VCD dump for detailed analysis
    initial begin
        $dumpfile("hdmi_analyzer.fst");
        $dumpvars(0, hdmi_analyzer_tb);
        #500000 $dumpoff;
    end

endmodule