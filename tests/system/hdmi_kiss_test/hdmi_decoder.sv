module hdmi_decoder(
    input rst,
    input tmds_clk,        // 270 MHz - serial clock
    input [2:0] tmds_data, // 3 serial bits (one per channel)
    
    output reg pix_clk,    // 27 MHz - pixel clock (270/10)
    output reg [7:0] red,
    output reg [7:0] green,
    output reg [7:0] blue,
    output reg hsync,
    output reg vsync,
    output reg de
);

    // Serial-to-parallel shift registers
    reg [9:0] tmds_shift [2:0];  // 10-bit shift registers for each channel
    reg [3:0] bit_counter;
    reg word_ready;
    
    // Parallel data after deserialization
    reg [9:0] tmds_word [2:0];
    
    // Video timing counters
    reg [11:0] h_count;
    reg [11:0] v_count;
    reg [11:0] active_h_count;
    reg [11:0] active_v_count;
    
    // Control signal registers
    reg ctrl_period;
    reg [1:0] sync_signals;
    
    // Real TMDS decoding function
    function [7:0] tmds_decode(input [9:0] encoded);
        begin
            // Simplified 8b/10b decoding - in real implementation use proper algorithm
            // This just reverses the encoding process approximately
            tmds_decode = encoded[7:0];
        end
    endfunction

    // Initialize all registers
    initial begin
        bit_counter = 0;
        tmds_shift[0] = 0;
        tmds_shift[1] = 0;
        tmds_shift[2] = 0;
        word_ready = 0;
        tmds_word[0] = 0;
        tmds_word[1] = 0;
        tmds_word[2] = 0;
        pix_clk = 0;
        red = 0;
        green = 0;
        blue = 0;
        hsync = 0;
        vsync = 0;
        de = 0;
        h_count = 0;
        v_count = 0;
        active_h_count = 0;
        active_v_count = 0;
        ctrl_period = 0;
        sync_signals = 0;
    end
    
    // Serial-to-parallel conversion
    always @(posedge tmds_clk or posedge rst) begin
        if (rst) begin
            bit_counter <= 0;
            tmds_shift[0] <= 0;
            tmds_shift[1] <= 0;
            tmds_shift[2] <= 0;
            word_ready <= 0;
            tmds_word[0] <= 0;
            tmds_word[1] <= 0;
            tmds_word[2] <= 0;
            ctrl_period <= 0;
            sync_signals <= 0;
        end else begin
            // Shift in serial bits
            tmds_shift[0] <= {tmds_shift[0][8:0], tmds_data[0]};
            tmds_shift[1] <= {tmds_shift[1][8:0], tmds_data[1]};
            tmds_shift[2] <= {tmds_shift[2][8:0], tmds_data[2]};
            
            bit_counter <= bit_counter + 1;
            word_ready <= 0;
            
            // After 10 bits, we have a complete word
            if (bit_counter == 9) begin
                word_ready <= 1;
                tmds_word[0] <= tmds_shift[0];
                tmds_word[1] <= tmds_shift[1];
                tmds_word[2] <= tmds_shift[2];
                bit_counter <= 0;
                
                // Detect control period (preamble)
                if (tmds_shift[0] == 10'b1101010100 &&
                    tmds_shift[1] == 10'b1101010100 &&
                    tmds_shift[2] == 10'b1101010100) begin
                    ctrl_period <= 1;
                    sync_signals <= 2'b00; // Leading guard band
                end else if (tmds_shift[0] == 10'b0010101011 &&
                          tmds_shift[1] == 10'b0010101011 &&
                          tmds_shift[2] == 10'b0010101011) begin
                    ctrl_period <= 1;
                    sync_signals <= tmds_shift[0][3:2]; // Actual HSYNC/VSYNC
                end else begin
                    ctrl_period <= 0;
                end
            end
        end
    end
    
    // Pixel clock generation (270 MHz / 10 = 27 MHz)
    always @(posedge tmds_clk or posedge rst) begin
        if (rst) begin
            pix_clk <= 0;
        end else begin
            pix_clk <= (bit_counter == 9);  // Pulse every 10 cycles
        end
    end
    
    // Video data processing and timing generation
    always @(posedge tmds_clk or posedge rst) begin
        if (rst) begin
            red <= 0;
            green <= 0;
            blue <= 0;
            hsync <= 0;
            vsync <= 0;
            de <= 0;
            h_count <= 0;
            v_count <= 0;
            active_h_count <= 0;
            active_v_count <= 0;
        end else if (word_ready) begin  // Process at pixel rate (27 MHz effectively)
            
            // Handle control period vs data period
            if (ctrl_period) begin
                // Control period - extract sync signals
                hsync <= sync_signals[0];
                vsync <= sync_signals[1];
                
                // Reset counters on VSYNC
                if (vsync) begin
                    h_count <= 0;
                    v_count <= 0;
                    active_h_count <= 0;
                    active_v_count <= 0;
                end else begin
                    // Increment counters
                    if (h_count == 1649) begin // 1650 total pixels for 720p
                        h_count <= 0;
                        active_h_count <= 0;
                        if (v_count == 749) begin // 750 total lines
                            v_count <= 0;
                            active_v_count <= 0;
                        end else begin
                            v_count <= v_count + 1;
                            if (v_count >= 25 && v_count < 745) begin // Active video lines
                                active_v_count <= active_v_count + 1;
                            end
                        end
                    end else begin
                        h_count <= h_count + 1;
                        if (h_count >= 110 && h_count < 1390) begin // Active video pixels
                            active_h_count <= active_h_count + 1;
                        end
                    end
                end
                
                // Data enable - active during video data period
                de <= 0;
                
            end else begin
                // Data period - decode to RGB
                red   <= tmds_decode(tmds_word[2]);
                green <= tmds_decode(tmds_word[1]);
                blue  <= tmds_decode(tmds_word[0]);
                
                // Data enable based on active video area (1280x720 for 720p)
                de <= (h_count >= 110 && h_count < 1390) &&  // 110-1390 = 1280 active pixels
                      (v_count >= 25 && v_count < 745);       // 25-745 = 720 active lines
            end
        end
    end

endmodule