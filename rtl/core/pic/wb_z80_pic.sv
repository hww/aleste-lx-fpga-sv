`timescale 1ns/1ps

// =============================================================================
// Module: wb_z80_pic_16bit
// Description: 16-bit Z80-Compatible Interrupt Controller with Wishbone Interface
// Supports: IM 0, IM 1, IM 2 (via vector register)
// =============================================================================

module wb_z80_pic_16bit (
    // Clock and Reset
    input wire         wb_clk_i,
    input wire         wb_rst_i,
    
    // Wishbone Slave Interface
    input  wire [7:0]  wb_adr_i,     // Address bus
    input  wire [7:0]  wb_dat_i,     // Data input
    output reg  [7:0]  wb_dat_o,     // Data output
    input  wire        wb_we_i,      // Write enable
    input  wire        wb_stb_i,     // Strobe
    input  wire        wb_cyc_i,     // Cycle valid
    output reg         wb_ack_o,     // Acknowledge
    output wire        wb_sel_o,     // Address select (decoded)
    
    // IRQ Input Lines (16-bit)
    input  wire [15:0] irq_i,        // IRQ lines [15:0]
    
    // CPU Interface
    output reg         int_req_o,    // INT output to CPU
    input  wire        int_ack_i,    // INT Acknowledge (M1_n & IORQ_n)

    // Debug/Status outputs
    output wire [3:0]  highest_irq_o // Highest priority IRQ [3:0]
);

    // =========================================================================
    // Internal Registers
    // =========================================================================
    reg [15:0] irq_status;     // Status Register (RO) - latched IRQ state
    reg [15:0] irq_pending;    // Pending interrupts (edge-sensitive)
    reg [15:0] irq_mask;       // Mask Register (RW) - 1=enabled
    reg [7:0]  irq_vector;     // Base Vector Register (RW) - for IM 2
    
    // Priority encoder variables
    reg [3:0]  highest_irq;
    reg        any_irq;
    
    // =========================================================================
    // Address Decoding Logic
    // =========================================================================
    // PIC registers are mapped to I/O addresses 0xD0-0xDF
    assign wb_sel_o = wb_cyc_i && wb_stb_i && (wb_adr_i[7:4] == 4'hD);
    
    // Internal register select
    wire reg_sel_mask     = (wb_adr_i[3:0] == 4'h0); // Mask register (low)
    wire reg_sel_mask_hi  = (wb_adr_i[3:0] == 4'h1); // Mask register (high)
    wire reg_sel_vector   = (wb_adr_i[3:0] == 4'h2); // Vector register
    wire reg_sel_status   = (wb_adr_i[3:0] == 4'h3); // Status register (low)
    wire reg_sel_status_hi= (wb_adr_i[3:0] == 4'h4); // Status register (high)
    wire reg_sel_pending  = (wb_adr_i[3:0] == 4'h5); // Pending interrupts (low)
    wire reg_sel_pending_hi=(wb_adr_i[3:0] == 4'h6); // Pending interrupts (high)
    wire reg_sel_clear    = (wb_adr_i[3:0] == 4'h7); // Clear pending (low)
    wire reg_sel_clear_hi = (wb_adr_i[3:0] == 4'h8); // Clear pending (high)

    // =========================================================================
    // IRQ Detection and Latching
    // =========================================================================
    reg [15:0] irq_i_prev;
    wire [15:0] irq_edge;
    
    always @(posedge wb_clk_i or posedge wb_rst_i) begin
        if (wb_rst_i) begin
            irq_i_prev <= 16'h0000;
        end else begin
            irq_i_prev <= irq_i;
        end
    end
    
    // Detect rising edges on IRQ lines
    assign irq_edge = irq_i & ~irq_i_prev;
    
    // Latch pending interrupts on rising edges
    always @(posedge wb_clk_i or posedge wb_rst_i) begin
        if (wb_rst_i) begin
            irq_pending <= 16'h0000;
            irq_status  <= 16'h0000;
        end else begin
            // Set pending bits on rising edges
            irq_pending <= irq_pending | irq_edge;
            
            // Update status register (level-sensitive)
            irq_status <= irq_i;
        end
    end
    
    // =========================================================================
    // Clear Pending Interrupts Logic
    // =========================================================================
    always @(posedge wb_clk_i or posedge wb_rst_i) begin
        if (wb_rst_i) begin
            // Reset handled in main block
        end else if (wb_sel_o && wb_we_i) begin
            if (reg_sel_clear) begin
                irq_pending[7:0] <= irq_pending[7:0] & ~wb_dat_i;
            end
            if (reg_sel_clear_hi) begin
                irq_pending[15:8] <= irq_pending[15:8] & ~wb_dat_i;
            end
        end
    end
    
    // =========================================================================
    // Priority Encoding and INT Generation
    // =========================================================================
    wire [15:0] active_irqs = irq_pending & irq_mask;
    
    // Simple priority encoder: bit 15 has highest priority
    always @(*) begin
        highest_irq = 4'b0000;
        any_irq = |active_irqs;
        
        casez (active_irqs)
            16'b1???????????????: highest_irq = 4'b1111;
            16'b01??????????????: highest_irq = 4'b1110;
            16'b001?????????????: highest_irq = 4'b1101;
            16'b0001????????????: highest_irq = 4'b1100;
            16'b00001???????????: highest_irq = 4'b1011;
            16'b000001??????????: highest_irq = 4'b1010;
            16'b0000001?????????: highest_irq = 4'b1001;
            16'b00000001????????: highest_irq = 4'b1000;
            16'b000000001???????: highest_irq = 4'b0111;
            16'b0000000001??????: highest_irq = 4'b0110;
            16'b00000000001?????: highest_irq = 4'b0101;
            16'b000000000001????: highest_irq = 4'b0100;
            16'b0000000000001???: highest_irq = 4'b0011;
            16'b00000000000001??: highest_irq = 4'b0010;
            16'b000000000000001?: highest_irq = 4'b0001;
            16'b0000000000000001: highest_irq = 4'b0000;
            default: highest_irq = 4'b0000;
        endcase
    end
    
    // INT signal generation
    always @(posedge wb_clk_i or posedge wb_rst_i) begin
        if (wb_rst_i) begin
            int_req_o <= 1'b0;
        end else begin
            if (any_irq) begin
                int_req_o <= 1'b1;
            end else if (int_ack_i) begin
                int_req_o <= 1'b0;
            end
        end
    end
    
    // =========================================================================
    // Wishbone Register Interface
    // =========================================================================
    always @(posedge wb_clk_i or posedge wb_rst_i) begin
        if (wb_rst_i) begin
            wb_ack_o    <= 1'b0;
            wb_dat_o    <= 8'h00;
            irq_mask    <= 16'h0000;  // All interrupts masked by default
            irq_vector  <= 8'hFF;     // Default vector for RST 38h
        end else begin
            wb_ack_o <= 1'b0;
            wb_dat_o <= 8'h00;
            
            if (wb_sel_o && !wb_ack_o) begin
                wb_ack_o <= 1'b1;
                
                if (wb_we_i) begin
                    // Write operations
                    case (1'b1)
                        reg_sel_mask:     irq_mask[7:0]   <= wb_dat_i;
                        reg_sel_mask_hi:  irq_mask[15:8]  <= wb_dat_i;
                        reg_sel_vector:   irq_vector      <= wb_dat_i;
                        default: ; // Clear handled separately
                    endcase
                end else begin
                    // Read operations
                    case (1'b1)
                        reg_sel_mask:      wb_dat_o <= irq_mask[7:0];
                        reg_sel_mask_hi:   wb_dat_o <= irq_mask[15:8];
                        reg_sel_vector:    wb_dat_o <= irq_vector;
                        reg_sel_status:    wb_dat_o <= irq_status[7:0];
                        reg_sel_status_hi: wb_dat_o <= irq_status[15:8];
                        reg_sel_pending:   wb_dat_o <= irq_pending[7:0];
                        reg_sel_pending_hi:wb_dat_o <= irq_pending[15:8];
                        default:           wb_dat_o <= 8'h00;
                    endcase
                end
            end
        end
    end

    assign highest_irq_o = highest_irq;

endmodule
