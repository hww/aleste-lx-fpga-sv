// =============================================================================
// Dual-Port RAM with Independent Clocks
// =============================================================================
// For Aleste LX project by H2W
// =============================================================================
// Двухпортовая память с раздельными тактовыми доменами для записи и чтения.
// Предназначена для кросс-доменной буферизации данных.
// =============================================================================

module dual_port_ram #(
    parameter int DATA_WIDTH  = 24,     // Разрядность данных
    parameter int DATA_LENGTH = 640,    // Глубина памяти (количество слов)
    parameter int ADDR_WIDTH  = $clog2(DATA_LENGTH)  // Ширина адресной шины
)(
    // -------------------------------------------------------------------------
    // PORT A - Write Port (Source Domain)
    // -------------------------------------------------------------------------
    input  logic src_clk_i,                    // Тактовая частота домена записи
    input  logic src_rst_i,                    // Сброс домена записи
    input  logic src_clke_i,                   // Разрешение тактирования домена записи
    input  logic src_wr_en_i,                  // Разрешение записи
    input  logic [ADDR_WIDTH-1:0] src_wr_addr_i,  // Адрес записи
    input  logic [DATA_WIDTH-1:0] src_wr_data_i,  // Данные для записи
    
    // -------------------------------------------------------------------------
    // PORT B - Read Port (Destination Domain)  
    // -------------------------------------------------------------------------
    input  logic dst_clk_i,                    // Тактовая частота домена чтения
    input  logic dst_rst_i,                    // Сброс домена чтения
    input  logic dst_clke_i,                   // Разрешение тактирования домена чтения
    input  logic dst_rd_en_i,                  // Разрешение чтения
    input  logic [ADDR_WIDTH-1:0] dst_rd_addr_i,  // Адрес чтения
    output logic [DATA_WIDTH-1:0] dst_rd_data_o   // Прочитанные данные
);

    // =========================================================================
    // MEMORY ARRAY - массив памяти
    // =========================================================================
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
        end else if (src_clke_i && src_wr_en_i) begin
            // Запись в память по указанному адресу
            mem[src_wr_addr_i] <= src_wr_data_i;
        end
    end
    
    // =========================================================================
    // READ PROCESS - процесс чтения (синхронный, домен dst_clk_i)
    // =========================================================================
    always_ff @(posedge dst_clk_i) begin
        if (dst_rst_i) begin
            // Сброс выходных данных
            dst_rd_data_o <= {DATA_WIDTH{1'b0}};
        end else if (dst_clke_i) begin
            if (dst_rd_en_i) begin
                // Чтение из памяти по указанному адресу
                dst_rd_data_o <= mem[dst_rd_addr_i];
            end else begin
                // Поддержание нулевого выхода при отсутствии чтения
                dst_rd_data_o <= {DATA_WIDTH{1'b0}};
            end
        end
    end
    
    // =========================================================================
    // SIMULATION CHECKS - проверки для симуляции
    // =========================================================================
`ifndef SYNTHESIS
    initial begin
        // Проверка параметров
        if (DATA_WIDTH <= 0) begin
            $error("DATA_WIDTH must be positive");
        end
        if (DATA_LENGTH <= 0) begin
            $error("DATA_LENGTH must be positive");
        end
        if (ADDR_WIDTH != $clog2(DATA_LENGTH)) begin
            $error("ADDR_WIDTH must be $clog2(DATA_LENGTH)");
        end
        
        // Инициализация памяти нулями для симуляции
        for (int i = 0; i < DATA_LENGTH; i++) begin
            mem[i] = {DATA_WIDTH{1'b0}};
        end
    end
    
    // Проверка адресов записи
    always_ff @(posedge src_clk_i) begin
        if (src_clke_i && src_wr_en_i && (src_wr_addr_i >= DATA_LENGTH)) begin
            $warning("Write address out of bounds: %0d >= %0d", 
                     src_wr_addr_i, DATA_LENGTH);
        end
    end
    
    // Проверка адресов чтения
    always_ff @(posedge dst_clk_i) begin
        if (dst_clke_i && dst_rd_en_i && (dst_rd_addr_i >= DATA_LENGTH)) begin
            $warning("Read address out of bounds: %0d >= %0d", 
                     dst_rd_addr_i, DATA_LENGTH);
        end
    end
`endif
    
endmodule
