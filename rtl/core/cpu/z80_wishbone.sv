module z80_wishbone (
    // Wishbone Interface
    input  wire        wb_clk_i,
    input  wire        wb_rst_i,
    output reg  [15:0] wb_adr_o,
    output reg  [7:0]  wb_dat_o,
    input  wire [7:0]  wb_dat_i,
    output reg         wb_we_o,
    output reg         wb_stb_o,
    output reg         wb_cyc_o,
    input  wire        wb_ack_i,
    
    // Z80 control signals
    input  wire        z80_clk_i,
    input  wire        z80_rst_i,
    output wire        z80_busy_o
);

    // Z80 instance
    z80_top_direct_n z80_inst (
        .nM1(nM1),
        .nMREQ(nMREQ),
        .nIORQ(nIORQ),
        .nRD(nRD),
        .nWR(nWR),
        .nRFSH(nRFSH),
        .nHALT(nHALT),
        .nBUSACK(nBUSACK),
        
        .nWAIT(nWAIT),
        .nINT(nINT),
        .nNMI(nNMI),
        .nRESET(nRESET),
        .nBUSRQ(nBUSRQ),
        
        .CLK(z80_clk_i),
        .A(A),
        .D(D)
    );

    // Internal signals
    wire nM1, nMREQ, nIORQ, nRD, nWR, nRFSH, nHALT, nBUSACK;
    wire nWAIT = 1'b1; // No wait states
    wire nINT = 1'b1;  // No interrupts
    wire nNMI = 1'b1;  // No NMI
    wire nRESET = !z80_rst_i;
    wire nBUSRQ = 1'b1; // No bus requests
    
    wire [15:0] A;
    wire [7:0] D;
    
    // Tri-state buffer for data bus
    reg [7:0] d_out;
    reg d_oe;
    assign D = d_oe ? d_out : 8'bzzzz_zzzz;
    
    // State machine
    reg [2:0] state;
    localparam IDLE     = 3'd0;
    localparam MEM_READ = 3'd1;
    localparam MEM_WRITE = 3'd2;
    localparam IO_READ  = 3'd3;
    localparam IO_WRITE = 3'd4;
    localparam WAIT_ACK = 3'd5;
    
    // Synchronize Z80 signals to Wishbone clock
    reg nMREQ_sync, nRD_sync, nWR_sync, nIORQ_sync;
    reg [15:0] A_sync;
    
    always @(posedge wb_clk_i) begin
        nMREQ_sync <= nMREQ;
        nRD_sync <= nRD;
        nWR_sync <= nWR;
        nIORQ_sync <= nIORQ;
        A_sync <= A;
    end
    
    // Main state machine
    always @(posedge wb_clk_i or posedge wb_rst_i) begin
        if (wb_rst_i) begin
            state <= IDLE;
            wb_adr_o <= 16'h0000;
            wb_dat_o <= 8'h00;
            wb_we_o <= 1'b0;
            wb_stb_o <= 1'b0;
            wb_cyc_o <= 1'b0;
            d_oe <= 1'b0;
            d_out <= 8'h00;
        end else begin
            case (state)
                IDLE: begin
                    wb_stb_o <= 1'b0;
                    wb_cyc_o <= 1'b0;
                    d_oe <= 1'b0;
                    
                    if (!nMREQ_sync) begin // Memory access
                        if (!nRD_sync) begin // Memory read
                            state <= MEM_READ;
                            wb_adr_o <= A_sync;
                            wb_we_o <= 1'b0;
                            wb_stb_o <= 1'b1;
                            wb_cyc_o <= 1'b1;
                        end else if (!nWR_sync) begin // Memory write
                            state <= MEM_WRITE;
                            wb_adr_o <= A_sync;
                            wb_dat_o <= D;
                            wb_we_o <= 1'b1;
                            wb_stb_o <= 1'b1;
                            wb_cyc_o <= 1'b1;
                        end
                    end else if (!nIORQ_sync) begin // IO access
                        if (!nRD_sync) begin // IO read
                            state <= IO_READ;
                            wb_adr_o <= {8'h00, A_sync[7:0]}; // 8-bit IO address
                            wb_we_o <= 1'b0;
                            wb_stb_o <= 1'b1;
                            wb_cyc_o <= 1'b1;
                        end else if (!nWR_sync) begin // IO write
                            state <= IO_WRITE;
                            wb_adr_o <= {8'h00, A_sync[7:0]}; // 8-bit IO address
                            wb_dat_o <= D;
                            wb_we_o <= 1'b1;
                            wb_stb_o <= 1'b1;
                            wb_cyc_o <= 1'b1;
                        end
                    end
                end
                
                MEM_READ, IO_READ: begin
                    if (wb_ack_i) begin
                        d_out <= wb_dat_i;
                        d_oe <= 1'b1;
                        wb_stb_o <= 1'b0;
                        wb_cyc_o <= 1'b0;
                        state <= IDLE;
                    end
                end
                
                MEM_WRITE, IO_WRITE: begin
                    if (wb_ack_i) begin
                        wb_stb_o <= 1'b0;
                        wb_cyc_o <= 1'b0;
                        state <= IDLE;
                    end
                end
            endcase
        end
    end
    
    assign z80_busy_o = (state != IDLE);

endmodule
