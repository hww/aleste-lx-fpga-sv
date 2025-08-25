module z80_wb_wrapper_tb (
    output logic foo,
    output logic clk_96mhz,
    output logic reset,
    output logic nWAIT,
    output logic nINT,
    output logic nNMI,
    output logic nBUSRQ,
    output logic [7:0] wb_dat_in,
    output logic wb_ack,
    
    // Добавляем все необходимые сигналы для наблюдения
    output logic [7:0] monitor_test_memory [256],
    output logic [15:0] monitor_latched_addr,
    output logic [7:0] monitor_latched_data
);

    // Z80 signals
    logic nM1, nMREQ, nIORQ, nRD, nWR, nRFSH, nHALT, nBUSACK;
    logic [15:0] A;
    wire  [7:0] D;

    // Wishbone signals
    logic wb_cyc, wb_stb, wb_we;
    logic [23:0] wb_adr;
    logic [7:0] wb_dat_out;
    logic [0:0] wb_sel;

    // Internal signals that need monitoring
    logic [7:0] test_memory [256];
    logic [15:0] latched_addr;
    logic [7:0] latched_data;

    // Connect monitors to internal signals
    assign monitor_test_memory = test_memory;
    assign monitor_latched_addr = latched_addr;
    assign monitor_latched_data = latched_data;

    // Instantiate wrapper
    z80_wb_wrapper dut (
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
        .nRESET(reset),
        .nBUSRQ(nBUSRQ),
        .CLK(clk_96mhz),
        .A(A),
        .D(D),
        
        .wb_cyc_o(wb_cyc),
        .wb_stb_o(wb_stb),
        .wb_ack_i(wb_ack),
        .wb_we_o(wb_we),
        .wb_adr_o(wb_adr),
        .wb_dat_o(wb_dat_out),
        .wb_dat_i(wb_dat_in),
        .wb_sel_o(wb_sel)
    );

    // Clock generation
    always #5 clk_96mhz = ~clk_96mhz;

    // Инициализация памяти
    initial begin
        foreach (test_memory[i]) begin
            test_memory[i] = i[7:0];
        end
    end

    // Wishbone memory model
    always @(posedge clk_96mhz) begin
        wb_ack <= 1'b0;
        
        if (wb_cyc && wb_stb && !wb_ack) begin
            wb_ack <= 1'b1;
            if (wb_we) begin
                test_memory[wb_adr[7:0]] <= wb_dat_out;
            end else begin
                wb_dat_in <= test_memory[wb_adr[7:0]];
            end
        end
    end

    // Test sequence
    initial begin
        // Initialize outputs
        clk_96mhz = 1'b0;
        reset = 1'b1;
        nWAIT = 1'b1;
        nINT = 1'b1;
        nNMI = 1'b1;
        nBUSRQ = 1'b1;
        wb_dat_in = 8'b0;
        wb_ack = 1'b0;
        
        // Release reset after some time
        #100 reset = 1'b0;
        
        // Let it run for a while
        #10000;
        
        $display("Test completed");
    end

endmodule

