module tb_ym2149;
    // Clock and reset
    reg CLK;
    reg RESET;
    reg CE;
    
    // Bus interface
    reg BDIR;
    reg BC;
    reg [7:0] DI;
    wire [7:0] DO;
    
    // Audio outputs
    wire [7:0] CHANNEL_A;
    wire [7:0] CHANNEL_B;
    wire [7:0] CHANNEL_C;
    
    // Configuration
    reg SEL;
    reg MODE;
    
    // Activity indicator
    wire [5:0] ACTIVE;
    
    // I/O ports
    reg [7:0] IOA_in;
    wire [7:0] IOA_out;
    reg [7:0] IOB_in;
    wire [7:0] IOB_out;
    
    // Instantiate DUT
    YM2149 dut (
        .CLK(CLK),
        .CE(CE),
        .RESET(RESET),
        .BDIR(BDIR),
        .BC(BC),
        .DI(DI),
        .DO(DO),
        .CHANNEL_A(CHANNEL_A),
        .CHANNEL_B(CHANNEL_B),
        .CHANNEL_C(CHANNEL_C),
        .SEL(SEL),
        .MODE(MODE),
        .ACTIVE(ACTIVE),
        .IOA_in(IOA_in),
        .IOA_out(IOA_out),
        .IOB_in(IOB_in),
        .IOB_out(IOB_out)
    );
    
    // Clock generation
    initial begin
        CLK = 0;
        forever #5 CLK = ~CLK;
    end
    
    // Test sequence
    initial begin
        // Initialize
        RESET = 1;
        CE = 1;
        BDIR = 0;
        BC = 0;
        DI = 0;
        SEL = 0;
        MODE = 0;
        IOA_in = 8'hFF;
        IOB_in = 8'hFF;
        
        // Release reset after some time
        #100 RESET = 0;
        
        // Let test run
        #10000;
        $finish;
    end
    
    // Monitor outputs
    always @(posedge CLK) begin
        $display("Time: %t, Outputs: A=%h, B=%h, C=%h", 
                $time, CHANNEL_A, CHANNEL_B, CHANNEL_C);
    end
    
    // VCD dumping
    initial begin
        $dumpfile("tb_ym2149.vcd");
        $dumpvars(0, tb_ym2149);
    end
endmodule
