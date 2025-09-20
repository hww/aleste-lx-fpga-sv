module tmds_encoder #(
    parameter int DATA_WIDTH = 8,
    parameter int TMDS_WIDTH = 10
)(
    input  logic clk,
    input  logic rst,
    input  logic [DATA_WIDTH-1:0] data,
    input  logic [1:0] c,
    input  logic de,
    output logic [TMDS_WIDTH-1:0] tmds
);

    logic [3:0] balance_acc = 0;
    
    // Count number of ones in input data
    logic [3:0] Nb1s;
    assign Nb1s = {3'b0, data[0]} + {3'b0, data[1]} + {3'b0, data[2]}
                + {3'b0, data[3]} + {3'b0, data[4]} + {3'b0, data[5]}
                + {3'b0, data[6]} + {3'b0, data[7]};
    
    // Determine encoding type
    logic XNOR;
    assign XNOR = (Nb1s > 4'd4) || (Nb1s == 4'd4 && data[0] == 1'b0);
    
    // Create individual wires for q_m bits
    logic QM0, QM1, QM2, QM3, QM4, QM5, QM6, QM7, QM8;
    assign QM0 = data[0];
    assign QM1 = QM0 ^ data[1] ^ XNOR;
    assign QM2 = QM1 ^ data[2] ^ XNOR;
    assign QM3 = QM2 ^ data[3] ^ XNOR;
    assign QM4 = QM3 ^ data[4] ^ XNOR;
    assign QM5 = QM4 ^ data[5] ^ XNOR;
    assign QM6 = QM5 ^ data[6] ^ XNOR;
    assign QM7 = QM6 ^ data[7] ^ XNOR;
    assign QM8 = ~XNOR;
    
    // Combine into q_m vector
    logic [8:0] q_m;
    assign q_m = {QM8, QM7, QM6, QM5, QM4, QM3, QM2, QM1, QM0};
    
    // Calculate balance
    logic [3:0] balance;
    assign balance = {3'b0, q_m[0]} + {3'b0, q_m[1]} + {3'b0, q_m[2]}
                  + {3'b0, q_m[3]} + {3'b0, q_m[4]} + {3'b0, q_m[5]}
                  + {3'b0, q_m[6]} + {3'b0, q_m[7]} - 4'd4;
    
    // DC balancing logic
    logic balance_sign_eq;
    logic invert_q_m;
    logic [3:0] balance_acc_inc;
    logic [3:0] balance_acc_new;
    
    assign balance_sign_eq = (balance[3] == balance_acc[3]);
    assign invert_q_m = (balance == 0 || balance_acc == 0) ? ~q_m[8] : balance_sign_eq;
    
    assign balance_acc_inc = balance - {3'b0, ((q_m[8] ^ ~balance_sign_eq) & ~(balance == 0 || balance_acc == 0))};
    assign balance_acc_new = invert_q_m ? balance_acc - balance_acc_inc : balance_acc + balance_acc_inc;
    
    // TMDS data and control codes
    logic [9:0] TMDS_data;
    logic [9:0] TMDS_code;
    
    assign TMDS_data = {invert_q_m, q_m[8], q_m[7:0] ^ {8{invert_q_m}}};
    assign TMDS_code = c[1] ? (c[0] ? 10'b1010101011 : 10'b0101010100) 
                         : (c[0] ? 10'b0010101011 : 10'b1101010100);
    
    // Output registers with reset
    always_ff @(posedge clk or negedge rst) begin
        if (rst) begin
            tmds <= '0;
            balance_acc <= '0;
        end else begin
            tmds <= de ? TMDS_data : TMDS_code;
            balance_acc <= de ? balance_acc_new : '0;
        end
    end

endmodule

