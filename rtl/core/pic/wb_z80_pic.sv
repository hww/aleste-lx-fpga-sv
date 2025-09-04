`timescale 1ns/1ps  // ← ДОБАВЛЯЕМ ЭТУ СТРОЧКУ

// =============================================================================
// Module: wb_z80_pic
// Description: Z80-Compatible Interrupt Controller with Wishbone Interface
// Supports: IM 0, IM 1, IM 2 (via vector register)
// =============================================================================

module wb_z80_pic (
    // Clock and Reset
    input wire        wb_clk_i,
    input wire        wb_rst_i,
    
    // Wishbone Slave Interface
    input  wire [7:0] wb_adr_i,     // Address bus
    input  wire [7:0] wb_dat_i,     // Data input
    output reg  [7:0] wb_dat_o,     // Data output
    input  wire       wb_we_i,      // Write enable
    input  wire       wb_stb_i,     // Strobe
    input  wire       wb_cyc_i,     // Cycle valid
    output reg        wb_ack_o,     // Acknowledge
    output wire       wb_sel_o,     // Address select (decoded)
    
    // IRQ Input Lines
    input  wire [7:0] irq_i,        // IRQ lines [7:EXT_SLOT, 6:BUS_CRASH, ... 0:STORAGE]
    
    // CPU Interface
    output reg        int_req_o,    // INT output to CPU
    input  wire       int_ack_i,     // INT Acknowledge (M1_n & IORQ_n)

    // Debug/Status outputs (optional)
    output wire [2:0] highest_irq_o // Highest priority IRQ for debugging
);

    // =========================================================================
    // Internal Registers
    // =========================================================================
    reg [7:0] irq_status;      // Status Register (RO) - latched IRQ state
    reg [7:0] irq_pending;     // Pending interrupts (edge-sensitive)
    reg [7:0] irq_mask;        // Mask Register (RW) - 1=enabled
    reg [7:0] irq_vector;      // Base Vector Register (RW) - for IM 2
    
    // Priority encoder variables
    reg [2:0] highest_irq;
    reg       any_irq;
    
    // =========================================================================
    // Address Decoding Logic
    // =========================================================================
    // PIC registers are mapped to I/O addresses 0xD0-0xDF
    // We decode the upper nibble to generate wb_sel_o
    assign wb_sel_o = wb_cyc_i && wb_stb_i && (wb_adr_i[7:4] == 4'hD);
    
    // Internal register select based on lower address bits
    wire reg_sel_mask     = (wb_adr_i[3:0] == 4'h0); // Mask register
    wire reg_sel_vector   = (wb_adr_i[3:0] == 4'h1); // Vector register
    wire reg_sel_status   = (wb_adr_i[3:0] == 4'h2); // Status register
    wire reg_sel_pending  = (wb_adr_i[3:0] == 4'h3); // Pending interrupts
    wire reg_sel_clear    = (wb_adr_i[3:0] == 4'h4); // Clear pending
    
    // =========================================================================
    // IRQ Detection and Latching
    // =========================================================================
    reg [7:0] irq_i_prev;
    wire [7:0] irq_edge;
    
    always @(posedge wb_clk_i or posedge wb_rst_i) begin
        if (wb_rst_i) begin
            irq_i_prev <= 8'h00;
        end else begin
            irq_i_prev <= irq_i;
        end
    end
    
    // Detect rising edges on IRQ lines
    assign irq_edge = irq_i & ~irq_i_prev;
    
    // Latch pending interrupts on rising edges
    always @(posedge wb_clk_i or posedge wb_rst_i) begin
        if (wb_rst_i) begin
            irq_pending <= 8'h00;
            irq_status  <= 8'h00;
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
        end else if (wb_sel_o && wb_we_i && reg_sel_clear) begin
            // Clear pending bits when written to clear register
            irq_pending <= irq_pending & ~wb_dat_i;
        end
    end
    
    // =========================================================================
    // Priority Encoding and INT Generation
    // =========================================================================
    wire [7:0] active_irqs = irq_pending & irq_mask;
    
    // Priority encoder: find highest priority active IRQ
    always @(*) begin
        highest_irq = 3'b000;
        any_irq = |active_irqs;
        
        if (active_irqs[7]) highest_irq = 3'b111;
        else if (active_irqs[6]) highest_irq = 3'b110;
        else if (active_irqs[5]) highest_irq = 3'b101;
        else if (active_irqs[4]) highest_irq = 3'b100;
        else if (active_irqs[3]) highest_irq = 3'b011;
        else if (active_irqs[2]) highest_irq = 3'b010;
        else if (active_irqs[1]) highest_irq = 3'b001;
        else if (active_irqs[0]) highest_irq = 3'b000;
    end
    
    // INT signal generation (level-sensitive)
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
            irq_mask    <= 8'h00;    // All interrupts masked by default
            irq_vector  <= 8'hFF;    // Default vector for RST 38h
        end else begin
            wb_ack_o <= 1'b0;
            wb_dat_o <= 8'h00;
            
            if (wb_sel_o && !wb_ack_o) begin
                wb_ack_o <= 1'b1;
                
                if (wb_we_i) begin
                    // Write operations
                    case (1'b1)
                        reg_sel_mask:    irq_mask   <= wb_dat_i;
                        reg_sel_vector:  irq_vector <= wb_dat_i;
                        // reg_sel_clear handled in separate always block
                        default: ; // No operation for other registers
                    endcase
                end else begin
                    // Read operations
                    case (1'b1)
                        reg_sel_mask:    wb_dat_o <= irq_mask;
                        reg_sel_vector:  wb_dat_o <= irq_vector;
                        reg_sel_status:  wb_dat_o <= irq_status;
                        reg_sel_pending: wb_dat_o <= irq_pending;
                        default:         wb_dat_o <= 8'h00;
                    endcase
                end
            end
        end
    end

    // Добавляем выход
    assign highest_irq_o = highest_irq;

endmodule
