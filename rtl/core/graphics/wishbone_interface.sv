module wishbone_interface (
    input  logic        clk_i,
    input  logic        rst_i,
    input  logic        cke_i,
    
    // Wishbone Slave signals
    input  logic        wb_cyc_i,
    input  logic        wb_stb_i,
    input  logic        wb_we_i,
    input  logic [3:0]  wb_sel_i,
    input  logic [31:0] wb_adr_i,
    input  logic [31:0] wb_dat_i,
    output logic [31:0] wb_dat_o,
    output logic        wb_ack_o,
    output logic        wb_err_o,
    
    // Internal register interface
    output logic [7:0]  reg_addr_o,
    output logic [31:0] reg_data_o,
    output logic        reg_write_o,
    input  logic [31:0] reg_data_i,
    
    // Status
    output logic        bus_error_o
);

// Internal signals
logic ack;
logic err;
logic [31:0] read_data;
logic [7:0] internal_addr;

// Address decoding (strip lower 2 bits for word alignment)
assign internal_addr = wb_adr_i[9:2]; // 256-byte address space -> 64 registers

// Write signal generation
assign reg_write_o = wb_cyc_i && wb_stb_i && wb_we_i && !ack;

// Output assignments
assign reg_addr_o = internal_addr;
assign reg_data_o = wb_dat_i;
assign wb_dat_o = read_data;

// Acknowledge generation
always_ff @(posedge clk_i or posedge rst_i) begin
    if (rst_i) begin
        ack <= 1'b0;
        err <= 1'b0;
        read_data <= 32'h0;
    end else if (cke_i) begin
        if (wb_cyc_i && wb_stb_i && !ack) begin
            ack <= 1'b1;
            read_data <= reg_data_i;
            
            // Error detection: check for valid address range
            if (internal_addr > 8'h3F) begin // Only 64 registers available
                err <= 1'b1;
            end else begin
                err <= 1'b0;
            end
        end else begin
            ack <= 1'b0;
            err <= 1'b0;
        end
    end
end

assign wb_ack_o = ack;
assign wb_err_o = err;
assign bus_error_o = err;

endmodule