// =============================================================================
// HDMI Scaler Core 
// =============================================================================
// For Aleste LX project by H2W
// =============================================================================

module tmds_encoder #(
    parameter int data_width = 8,
    parameter int tmds_width = 10
)(
    input  logic clk_i,
    input  logic rst_i,
    input  logic [data_width-1:0] data_i,
    input  logic [1:0] control_i,
    input  logic data_enable_i,
    output logic [tmds_width-1:0] tmds_o
);

    logic [3:0] balance_acc = 0;
    
    // Count number of ones in input data
    logic [3:0] num_ones;
    assign num_ones = {3'b0, data_i[0]} + {3'b0, data_i[1]} + {3'b0, data_i[2]}
                    + {3'b0, data_i[3]} + {3'b0, data_i[4]} + {3'b0, data_i[5]}
                    + {3'b0, data_i[6]} + {3'b0, data_i[7]};
    
    // Determine encoding type
    logic use_xnor;
    assign use_xnor = (num_ones > 4'd4) || (num_ones == 4'd4 && data_i[0] == 1'b0);
    
    // Create individual wires for q_m bits
    logic q_m0, q_m1, q_m2, q_m3, q_m4, q_m5, q_m6, q_m7, q_m8;
    assign q_m0 = data_i[0];
    assign q_m1 = q_m0 ^ data_i[1] ^ use_xnor;
    assign q_m2 = q_m1 ^ data_i[2] ^ use_xnor;
    assign q_m3 = q_m2 ^ data_i[3] ^ use_xnor;
    assign q_m4 = q_m3 ^ data_i[4] ^ use_xnor;
    assign q_m5 = q_m4 ^ data_i[5] ^ use_xnor;
    assign q_m6 = q_m5 ^ data_i[6] ^ use_xnor;
    assign q_m7 = q_m6 ^ data_i[7] ^ use_xnor;
    assign q_m8 = ~use_xnor;
    
    // Combine into q_m vector
    logic [8:0] q_m;
    assign q_m = {q_m8, q_m7, q_m6, q_m5, q_m4, q_m3, q_m2, q_m1, q_m0};
    
    // Calculate balance
    logic [3:0] balance;
    assign balance = {3'b0, q_m[0]} + {3'b0, q_m[1]} + {3'b0, q_m[2]}
                   + {3'b0, q_m[3]} + {3'b0, q_m[4]} + {3'b0, q_m[5]}
                   + {3'b0, q_m[6]} + {3'b0, q_m[7]} - 4'd4;
    
    // DC balancing logic
    logic balance_sign_equal;
    logic invert_q_m;
    logic [3:0] balance_acc_increment;
    logic [3:0] balance_acc_new;
    
    assign balance_sign_equal = (balance[3] == balance_acc[3]);
    assign invert_q_m = (balance == 0 || balance_acc == 0) ? ~q_m[8] : balance_sign_equal;
    
    assign balance_acc_increment = balance - {3'b0, ((q_m[8] ^ ~balance_sign_equal) & ~(balance == 0 || balance_acc == 0))};
    assign balance_acc_new = invert_q_m ? balance_acc - balance_acc_increment : balance_acc + balance_acc_increment;
    
    // TMDS data and control codes
    logic [9:0] tmds_data;
    logic [9:0] tmds_control;
    
    assign tmds_data = {invert_q_m, q_m[8], q_m[7:0] ^ {8{invert_q_m}}};
    assign tmds_control = control_i[1] ? (control_i[0] ? 10'b1010101011 : 10'b0101010100) 
                                     : (control_i[0] ? 10'b0010101011 : 10'b1101010100);
    
    // Output registers with reset
    always_ff @(posedge clk_i) begin
        if (rst_i) begin
            tmds_o <= '0;
            balance_acc <= '0;
        end else begin
            tmds_o <= data_enable_i ? tmds_data : tmds_control;
            balance_acc <= data_enable_i ? balance_acc_new : '0;
        end
    end

endmodule
