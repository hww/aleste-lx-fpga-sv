module tmds_decoder(
    input logic rst,
    input logic tmds_clk,        // 270 MHz - serial clock (внутренняя высокая частота)
    input logic pix_clk,         // 27 MHz - pixel clock ИЗ КАБЕЛЯ HDMI
    input logic [2:0] tmds_data, // 3 serial bits (one per channel)
    
    output logic [7:0] red,
    output logic [7:0] green,
    output logic [7:0] blue,
    output logic hsync,
    output logic vsync, 
    output logic de
);

    // Serial-to-parallel shift registers
    logic [9:0] tmds_shift_0;
    logic [9:0] tmds_shift_1;
    logic [9:0] tmds_shift_2;
    logic [3:0] bit_counter;
    logic word_ready;
    
    // Parallel data after deserialization
    logic [9:0] tmds_word_0,tmds_word_1,tmds_word_2;
    
    // Video timing counters
    logic [11:0] h_count;
    logic [11:0] v_count;
    
    // Control signal registers
    logic ctrl_period;
    logic [1:0] sync_signals;

    // Real TMDS decoding function
    function [7:0] tmds_decode(input [9:0] encoded);
        reg [7:0] data;
        reg [3:0] ones_count;
        integer i;
        begin
            // 1. Count ones in first 8 bits
            ones_count = 0;
            for (i = 0; i < 8; i = i + 1) begin
                if (encoded[i]) ones_count = ones_count + 1;
            end
            
            // 2. XOR/XNOR decoding based on 9th bit
            if (encoded[8]) begin // XNOR decoding
                data = 8'b0;
                for (i = 0; i < 8; i = i + 1) begin
                    data[i] = encoded[i] ~^ (ones_count > 4 || (ones_count == 4 && !encoded[i]));
                end
            end else begin // XOR decoding
                data = 8'b0;
                for (i = 0; i < 8; i = i + 1) begin
                    data[i] = encoded[i] ^ (ones_count > 4 || (ones_count == 4 && !encoded[i]));
                end
            end
            
            // 3. Invert if 10th bit is 1
            if (encoded[9]) data = ~data;
            
            tmds_decode = data;
        end
    endfunction

    // Initialize
    initial begin
        bit_counter = 0;
        tmds_shift_0 = 0;
        tmds_shift_1 = 0;
        tmds_shift_2 = 0;
        word_ready = 0;
        tmds_word_0 = 0;
        tmds_word_1 = 0;
        tmds_word_2 = 0;
        red = 0; green = 0; blue = 0;
        hsync = 0; vsync = 0; de = 0;
        h_count = 0; v_count = 0;
        ctrl_period = 0;
        sync_signals = 0;
    end
    
    // Serial-to-parallel conversion на высокой частоте (270 MHz)
    always @(posedge tmds_clk or posedge rst) begin
        if (rst) begin
            bit_counter <= 0;
            tmds_shift_0 <= 0;
            tmds_shift_1 <= 0;
            tmds_shift_2 <= 0;
            word_ready <= 0;
            ctrl_period <= 0;
            sync_signals <= 0;
        end else begin
            // Shift in serial bits
            tmds_shift_0 <= {tmds_data[0], tmds_shift_0[9:1]};
            tmds_shift_1 <= {tmds_data[1], tmds_shift_1[9:1]};
            tmds_shift_2 <= {tmds_data[2], tmds_shift_2[9:1]};

            bit_counter <= bit_counter + 1;
            word_ready <= 0;
            
            if (bit_counter == 9) begin
                word_ready <= 1;
                tmds_word_0 <= tmds_shift_0;
                tmds_word_1 <= tmds_shift_1;
                tmds_word_2 <= tmds_shift_2;
                bit_counter <= 0;
                
                // Detect control period
                if (tmds_shift_0 == 10'b1101010100 &&
                    tmds_shift_1 == 10'b1101010100 &&
                    tmds_shift_2 == 10'b1101010100) begin
                    ctrl_period <= 1;
                    sync_signals <= 2'b00;
                end else if (tmds_shift_0 == 10'b0010101011 &&
                          tmds_shift_1 == 10'b0010101011 &&
                          tmds_shift_2 == 10'b0010101011) begin
                    ctrl_period <= 1;
                    sync_signals <= tmds_shift_0[3:2];
                end else begin
                    ctrl_period <= 0;
                end
            end
        end
    end
    
    // Video processing на низкой частоте (27 MHz - pix_clk из кабеля)
    always @(posedge pix_clk or posedge rst) begin
        if (rst) begin
            red <= 0; green <= 0; blue <= 0;
            hsync <= 0; vsync <= 0; de <= 0;
            h_count <= 0; v_count <= 0;
        end else begin
            // Здесь нужна синхронизация word_ready из домена 270 MHz в 27 MHz
            // Для симуляции упрощаем - предполагаем синхронность
            
            if (word_ready) begin
                if (ctrl_period) begin
                    // Control period
                    hsync <= sync_signals[0];
                    vsync <= sync_signals[1];
                    
                    // Timing counters
                    if (vsync) begin
                        h_count <= 0;
                        v_count <= 0;
                    end else begin
                        if (h_count == 1649) begin
                            h_count <= 0;
                            if (v_count == 749) v_count <= 0;
                            else v_count <= v_count + 1;
                        end else begin
                            h_count <= h_count + 1;
                        end
                    end
                    
                    de <= 0;
                end else begin
                    // Data period
                    red   <= tmds_decode(tmds_word_2);
                    green <= tmds_decode(tmds_word_1);
                    blue  <= tmds_decode(tmds_word_0);
                    de <= (h_count >= 110 && h_count < 1390) &&
                          (v_count >= 25 && v_count < 745);
                end
            end
        end
    end

endmodule

