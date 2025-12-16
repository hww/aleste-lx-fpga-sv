// ipc_mailbox.sv
// Simple IPC Mailbox Controller for Wishbone Bus
// KISS Principle: 4 registers, interrupt generation

module ipc_mailbox #(
    parameter BASE_ADDR = 24'hFC_00_40  // Base address in Wishbone space
) (
    // Wishbone System Interface
    input  logic        clk_i,          // System clock
    input  logic        rst_i,          // System reset (active high)
    
    // Wishbone Slave Interface
    input  logic        cs_i,           // Chips select signal
    input  logic        stb_i,          // Strobe signal
    input  logic        cyc_i,          // Cycle signal
    input  logic        we_i,           // Write enable
    input  logic [23:0] adr_i,          // Address bus
    input  logic [7:0]  dat_i,          // Data input (8-bit)
    output logic [7:0]  dat_o,          // Data output
    output logic        ack_o,          // Acknowledge
    output logic        sel_o,
    // IPC Interrupt Output
    output logic        irq_o          // Interrupt request (active high)
);

    // Local registers
    logic [7:0] ipc_cmd;       // Command register
    logic [7:0] ipc_data;      // Data register
    logic [7:0] ipc_status;    // Status register
    logic [7:0] ipc_return;    // Return value register
    
    // Internal signals
    logic       write_strobe;  // Write operation detected
    logic       read_strobe;   // Read operation detected
    logic       busy;          // Internal busy flag

    // Address detection
    assign sel_o = cs_i && stb_i && cyc_i;
    
    // Strobe signals
    assign write_strobe = sel_o && we_i;
    assign read_strobe = sel_o && !we_i;

    // Status register bits
    assign ipc_status = {7'b0000000, busy}; // Bit 0 = BUSY flag
    assign irq_o = busy; // Generate interrupt while busy

    // Write handling
    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            ipc_cmd    <= 8'h00;
            ipc_data   <= 8'h00;
            ipc_return <= 8'h00;
            busy       <= 1'b0;
        end else begin
            if (write_strobe) begin
                case (adr_i[1:0])
                    2'b00: ipc_cmd  <= dat_i;    // Write to CMD
                    2'b01: ipc_data <= dat_i;    // Write to DATA
                    2'b10: busy     <= 1'b1;     // Any write to STATUS sets BUSY
                    2'b11: ipc_return <= dat_i;  // Write to RETURN
                endcase
            end
            
            // Clear busy when kernel finishes processing
            // (This would typically be done by kernel software)
            if (!busy && write_strobe && adr_i[1:0] == 2'b10) begin
                busy <= 1'b1; // Set busy on any write to status
            end
        end
    end

    // Read handling
    always_comb begin
        dat_o = 8'hFF;
        if (read_strobe) begin
            case (adr_i[1:0])
                2'b00: dat_o = ipc_cmd;
                2'b01: dat_o = ipc_data;
                2'b10: dat_o = ipc_status;
                2'b11: dat_o = ipc_return;
            endcase
        end
    end

    // Acknowledge generation
    always_ff @(posedge clk_i or posedge rst_i) begin
        if (rst_i) begin
            ack_o <= 1'b0;
        end else begin
            ack_o <= sel_o && !ack_o;
        end
    end

endmodule
