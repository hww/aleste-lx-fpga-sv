module dual_port_ram #(
    parameter int DATA_WIDTH = 24,
    parameter int DEPTH      = 640,
    parameter int ADDR_WIDTH = $clog2(DEPTH)
)(
    // Write Port (Source - src_)
    input  logic src_clk_i,
    input  logic src_rst_i,
    input  logic src_wr_en_i,
    input  logic [ADDR_WIDTH-1:0] src_wr_addr_i,
    input  logic [DATA_WIDTH-1:0] src_wr_data_i,

    // Read Port (Destination - dst_)
    input  logic dst_clk_i,
    input  logic dst_rst_i,
    input  logic dst_rd_en_i,
    input  logic [ADDR_WIDTH-1:0] dst_rd_addr_i,
    output logic [DATA_WIDTH-1:0] dst_rd_data_o
);

    logic [DATA_WIDTH-1:0] mem [0:DEPTH-1];

    // Write Process (synchronous, src_clk_i)
    always_ff @(posedge src_clk_i or posedge src_rst_i) begin
        if (src_rst_i) begin
             // Опционально: очистка памяти при сбросе
        end else if (src_wr_en_i) begin
            mem[src_wr_addr_i] <= src_wr_data_i;
        end
    end

    // Read Process (synchronous, dst_clk_i)
    always_ff @(posedge dst_clk_i or posedge dst_rst_i) begin
        if (dst_rst_i) begin
              dst_rd_data_o <= 0;
        end else if (dst_rd_en_i) begin
            dst_rd_data_o <= mem[dst_rd_addr_i];
        end else begin
            dst_rd_data_o <= 0;
        end
    end
   
endmodule
