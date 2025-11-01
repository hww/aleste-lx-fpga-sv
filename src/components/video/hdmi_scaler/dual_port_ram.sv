// =============================================================================
// Dual-Port RAM with Independent Clocks
// =============================================================================
// For Aleste LX project by H2W
// =============================================================================
// Двухпортовая память с раздельными тактовыми доменами для записи и чтения.
// Предназначена для кросс-доменной буферизации данных.
// =============================================================================

`default_nettype none

module dual_port_ram #(
    parameter int DATA_WIDTH  = 24,     // Разрядность данных
    parameter int DATA_LENGTH = 720,    // Глубина памяти (количество слов)
    parameter int ADDR_WIDTH  = $clog2(DATA_LENGTH)  // Ширина адресной шины
)(
    // -------------------------------------------------------------------------
    // PORT A - Write Port (Source Domain)
    // -------------------------------------------------------------------------
    input  logic src_clk_i,                    // Тактовая частота домена записи
    input  logic src_rst_i,                    // Сброс домена записи
    input  logic src_wr_en_i,                  // Разрешение записи
    input  logic [ADDR_WIDTH-1:0] src_wr_addr_i,  // Адрес записи
    input  logic [DATA_WIDTH-1:0] src_wr_data_i,  // Данные для записи
    
    // -------------------------------------------------------------------------
    // PORT B - Read Port (Destination Domain)  
    // -------------------------------------------------------------------------
    input  logic dst_clk_i,                    // Тактовая частота домена чтения
    input  logic dst_rst_i,                    // Сброс домена чтения
    input  logic dst_rd_en_i,                  // Разрешение чтения
    input  logic [ADDR_WIDTH-1:0] dst_rd_addr_i,  // Адрес чтения
    output logic [DATA_WIDTH-1:0] dst_rd_data_o   // Прочитанные данные
);

    // =========================================================================
    // MEMORY ARRAY - массив памяти
    // =========================================================================
        
    // КРИТИЧЕСКИ ВАЖНЫЙ АТРИБУТ!
    (* no_rw_check *)
    logic [DATA_WIDTH-1:0] mem [0:DATA_LENGTH-1];
    
    // =========================================================================
    // WRITE PROCESS - процесс записи (синхронный, домен src_clk_i)
    // =========================================================================
    always_ff @(posedge src_clk_i) begin
        if (src_rst_i) begin
            // При сбросе можно очистить память, но обычно это не делается
            // для экономии ресурсов и сохранения данных
            // for (int i = 0; i < DATA_LENGTH; i++) begin
            //     mem[i] <= {DATA_WIDTH{1'b0}};
            // end
        end else if (src_wr_en_i) begin
            // Запись в память по указанному адресу
            mem[src_wr_addr_i] <= src_wr_data_i;
        end
    end
    
    // =========================================================================
    // READ PROCESS - процесс чтения (синхронный, домен dst_clk_i)
    // =========================================================================

    logic [ADDR_WIDTH-1:0] read_addr_ff = 0;
    logic [DATA_WIDTH-1:0] read_data_ff = 0;

    // СИНХРОННОЕ чтение с 1 тактом латентности
    always_ff @(posedge dst_clk_i) begin
        // Original varian with synchronous address
        read_addr_ff <= dst_rd_addr_i;
        read_data_ff <= mem[read_addr_ff];
        // New variant w/o synchronous address
        //read_data_ff <= mem[dst_rd_addr_i];
    end
    
    assign dst_rd_data_o = dst_rd_en_i ? read_data_ff : {DATA_WIDTH{1'b0}};
 
endmodule
