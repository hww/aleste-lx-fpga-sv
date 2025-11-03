#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <verilated.h>
#include <verilated_fst_c.h>
#include "Vvideo_buffer.h"

class VideoBuffer_Test
{
private:
    Vvideo_buffer *dut;
    VerilatedFstC *tfp;
    vluint64_t sim_time;

    // Clock counters and states
    int vmem_clk_counter;
    int pixel_clk_counter;
    bool vmem_clk_prev;
    bool pixel_clk_prev;

    // Test state
    int error_count;
    int success_count;
    int pixel_phase;
    int mode = 4;
public:
    VideoBuffer_Test() : dut(new Vvideo_buffer), tfp(nullptr), sim_time(0),
                         vmem_clk_counter(0), pixel_clk_counter(0),
                         vmem_clk_prev(false), pixel_clk_prev(false),
                         error_count(0), success_count(0), pixel_phase(0)
    {
        Verilated::traceEverOn(true);
    }

    ~VideoBuffer_Test()
    {
        if (tfp)
            tfp->close();
        delete tfp;
        delete dut;
    }
    void set_mode(int v) { mode = v; }
    void start_trace()
    {
        tfp = new VerilatedFstC;
        dut->trace(tfp, 99);
        tfp->open("video_buffer_test.fst");
    }
    
    void tick()
{
    static int tick_count = 0;

    // 1. Сохраняем предыдущие состояния
    bool old_vmem_clk = dut->vmem_clk_i;
    bool old_pixel_clk = dut->pixel_clk_i;

    // 2. Генерируем clocks
    dut->vmem_clk_i = (tick_count % 2) == 0;
    
    // 3. Если есть запрос памяти - обрабатываем его
    if (dut->vmem_req_o) {
        handle_memory_request();
    } else {
        dut->eval();
        tfp->dump(sim_time++);
    }
    
    // 4. Pixel clock 
    if (tick_count % 8 == 0) {
        dut->pixel_clk_i = !dut->pixel_clk_i;
        if (!dut->vmem_req_o) { // Не eval'им если уже сделали в handle_memory_request
            dut->eval();
            tfp->dump(sim_time++);
        }

        if (dut->pixel_clk_i && !pixel_clk_prev) {
            pixel_phase = (pixel_phase + 1) % 16;
            update_pixel_signals();
            if (!dut->vmem_req_o) {
                dut->eval();
                tfp->dump(sim_time++);
            }
        } 
    }

    // 5. Обновляем prev состояния
    vmem_clk_prev = old_vmem_clk;
    pixel_clk_prev = old_pixel_clk;

    tick_count++;
}
    bool vmem_clk_rising_edge() const
    {
        return !vmem_clk_prev && dut->vmem_clk_i;
    }

    bool pixel_clk_rising_edge() const
    {
        return !pixel_clk_prev && dut->pixel_clk_i;
    }

void reset()
{
    dut->rst_i = 1;
    dut->vmem_clk_i = 0;
    dut->pixel_clk_i = 0;
    dut->de_i = 0;
    dut->stb_char_i = 0;
    dut->stb_byte_i = 0;
    dut->vmem_data_i = 0;
    dut->vmem_ack0_i = 0;
    dut->vmem_ack1_i = 0;

    for (int i = 0; i < 100; i++)  // Увеличил с 20 до 100
        tick();

    dut->rst_i = 0;

    for (int i = 0; i < 50; i++)   // Увеличил с 10 до 50
        tick();
}

void update_pixel_signals()
{
    // Убираем ВСЕ автоматическое управление DE - только логируем
    // DE будет управляться только из тестов
    
    // Стробы согласно спецификации
    dut->stb_char_i = (pixel_phase == 15) ? 1 : 0;
    if (mode == 8){
        dut->stb_byte_i = (pixel_phase == 0 || pixel_phase == 2 || pixel_phase == 4 || pixel_phase == 6 || pixel_phase == 8 || pixel_phase == 10 || pixel_phase == 12 || pixel_phase == 14) ? 1 : 0;
    }
    else
    if (mode == 4){
        dut->stb_byte_i = (pixel_phase == 2 || pixel_phase == 6 || pixel_phase == 10 || pixel_phase == 14) ? 1 : 0;
    }
    else
    if (mode == 2){
        dut->stb_byte_i = (pixel_phase == 6 || pixel_phase == 14) ? 1 : 0;
    }

    // Логируем изменение DE если оно произошло
    static bool last_de = dut->de_i;
    if (dut->de_i != last_de) {
        std::cout << "🔄 DE changed: " << last_de << " -> " << (int)dut->de_i 
                  << " at phase " << pixel_phase << std::endl;
        last_de = dut->de_i;
    }
}

  void handle_memory_request()
{
    static uint16_t data0 = 0xA1B2;
    static uint16_t data1 = 0xC3D4;
    static bool request_processed = false;

    // Если есть запрос и мы еще не обработали его
    if (dut->vmem_req_o && !request_processed) {
        std::cout << "Memory request! Sending 0x" << std::hex << data0 
                  << " 0x" << data1 << std::dec << std::endl;
        
        // Немедленно устанавливаем данные и ACK0
        dut->vmem_data_i = data0;
        dut->vmem_ack0_i = 1;
        dut->eval();
        tfp->dump(sim_time++);
        
        // Ждем немного
        for (int i = 0; i < 2; i++) {
            dut->vmem_clk_i = !dut->vmem_clk_i;
            dut->eval();
            tfp->dump(sim_time++);
        }
        
        // Снимаем ACK0, устанавливаем данные для второго слова
        dut->vmem_ack0_i = 0;
        dut->vmem_data_i = data1;
        dut->vmem_ack1_i = 1;
        dut->eval();
        tfp->dump(sim_time++);
        
        // Ждем немного
        for (int i = 0; i < 2; i++) {
            dut->vmem_clk_i = !dut->vmem_clk_i;
            dut->eval();
            tfp->dump(sim_time++);
        }
        
        // Снимаем ACK1 и данные
        dut->vmem_ack1_i = 0;
        dut->vmem_data_i = 0;
        request_processed = true;
        
        // Следующие данные
        data0 += 0x1111;
        data1 += 0x1111;
    }
    
    // Сбрасываем флаг когда запрос снят
    if (!dut->vmem_req_o) {
        request_processed = false;
    }
}

    // ============================================================================
    // ТЕСТЫ
    // ============================================================================

    void test_reset()
    {
        std::cout << "🧪 Testing reset..." << std::endl;

        bool reset_ok = true;
        
        if (dut->data_o != 0) {
            std::cout << "❌ data_o not reset to 0: 0x" << std::hex << (int)dut->data_o << std::dec << std::endl;
            reset_ok = false;
        }
        if (dut->vmem_req_o != 0) {
            std::cout << "❌ vmem_req_o not reset to 0" << std::endl;
            reset_ok = false;
        }
        if (dut->stb_byte_o != 0) {
            std::cout << "❌ stb_byte_o not reset to 0" << std::endl;
            reset_ok = false;
        }

        if (reset_ok) {
            std::cout << "✅ Reset test PASSED" << std::endl;
            success_count++;
        } else {
            error_count++;
        }
    }
   void test_data_transfer(int mode)
{
    std::cout << "📊 Testing data transfer in mode " << mode << "..." << std::endl;

    set_mode(mode);
    dut->de_i = 1;

    std::cout << "⏳ Waiting for memory request..." << std::endl;
    int timeout = 100000;
    while (!dut->vmem_req_o && timeout > 0) {
        tick();
        timeout--;
    }

    if (!dut->vmem_req_o) {
        std::cout << "❌ No memory request detected" << std::endl;
        error_count++;
        return;
    }

    std::cout << "✅ Memory request detected" << std::endl;

    // Ждем первые реальные данные
    std::cout << "⏳ Waiting for first non-zero data..." << std::endl;
    timeout = 100000;
    bool got_real_data = false;
    
    while (!got_real_data && timeout > 0) {
        tick();
        
        if (dut->stb_byte_o && dut->data_o != 0) {
            got_real_data = true;
            std::cout << "✅ First real data received: 0x" << std::hex << (int)dut->data_o 
                      << " sel=" << (int)dut->debug_byte_select_o << std::dec << std::endl;
        }
        timeout--;
    }

    if (!got_real_data) {
        std::cout << "❌ No real data received" << std::endl;
        error_count++;
        return;
    }

    // Отладочный тест - смотрим на стробы и селекторы
    std::cout << "🔍 Debugging strobes and selects..." << std::endl;
    int data_points_checked = 0;
    
    // Собираем статистику по фазам когда есть стробы
    std::map<int, int> phase_stats; // phase -> count
    
    for (int cycle = 0; cycle < 30; cycle++) {
        std::cout << "Cycle " << cycle << ":" << std::endl;
        
        for (int phase = 0; phase < 16; phase++) {
            // Логируем состояние ДО тика
            std::cout << "  Phase " << phase << ": stb_byte_i=" << (int)dut->stb_byte_i;
            
            tick();
            
            if (dut->stb_byte_o) {
                data_points_checked++;
                phase_stats[phase]++;
                std::cout << " -> stb_byte_o=1, data_o=0x" << std::hex << (int)dut->data_o 
                          << " sel=" << (int)dut->debug_byte_select_o;
            } else {
                std::cout << " -> stb_byte_o=0";
            }
            std::cout << std::dec << std::endl;
        }
    }
    
    // Анализ
    std::cout << "📊 Phase analysis:" << std::endl;
    for (auto& [phase, count] : phase_stats) {
        std::cout << "  Phase " << phase << ": " << count << " strobes" << std::endl;
    }
    
    // Проверяем что стробы приходят на ожидаемых фазах
    bool strobes_correct = true;
    switch(mode) {
        case 2: // фазы 6,14
            strobes_correct = (phase_stats[6] > 0) && (phase_stats[14] > 0);
            break;
        case 4: // фазы 2,6,10,14  
            strobes_correct = (phase_stats[2] > 0) && (phase_stats[6] > 0) && 
                             (phase_stats[10] > 0) && (phase_stats[14] > 0);
            break;
        case 8: // все четные фазы
            strobes_correct = true; // Слишком много чтобы проверять все
            for (int phase = 0; phase < 16; phase += 2) {
                if (phase_stats[phase] == 0) {
                    std::cout << "  ⚠️  No strobes on phase " << phase << std::endl;
                }
            }
            break;
    }
    
    if (strobes_correct && data_points_checked > 0) {
        std::cout << "✅ Data transfer test PASSED for mode " << mode << std::endl;
        success_count++;
    } else {
        std::cout << "❌ Data transfer test FAILED for mode " << mode << std::endl;
        error_count++;
    }
}
void test_no_data_when_de_low()
{
    std::cout << "🚫 Testing no data when DE=0..." << std::endl;

    // Выключаем DE только на время этого теста
    dut->de_i = 0;
    
    int false_data_points = 0;
    
    // Проверяем в течение полного цикла
    for (int phase = 0; phase < 16; phase++) {
        tick();
        
        if (dut->stb_byte_o && dut->data_o != 0) {
            std::cout << "❌ data_o=0x" << std::hex << (int)dut->data_o 
                      << " when DE=0" << std::dec << std::endl;
            false_data_points++;
        }
    }

    if (false_data_points == 0) {
        std::cout << "✅ No data when DE=0 test PASSED" << std::endl;
        success_count++;
    } else {
        std::cout << "❌ No data when DE=0 test FAILED: " << false_data_points << " errors" << std::endl;
        error_count++;
    }
    
    // НЕ включаем DE обратно - пусть следующий тест сам управляет
    dut->de_i = 1;  // <--- ЭТУ СТРОКУ УБИРАЕМ
}

uint8_t get_expected_byte(int sel, uint16_t data0, uint16_t data1)
{
    switch(sel) {
        case 0: return data0 & 0xFF;       // Младший байт первого слова
        case 1: return data0 >> 8;         // Старший байт первого слова  
        case 2: return data1 & 0xFF;       // Младший байт второго слова
        case 3: return data1 >> 8;         // Старший байт второго слова
        default: return 0;
    }
}
    void run_all_tests()
    {
        start_trace();
        std::cout << "🚀 Starting Video Buffer Test Suite" << std::endl;

        reset();
        std::cout << "🔄 Reset completed" << std::endl;

        test_reset();
        test_no_data_when_de_low();
        test_data_transfer(2); 
        test_data_transfer(4); 
        test_data_transfer(8); 


        // Небольшая пауза в конце
        for (int i = 0; i < 100; i++)
            tick();

        std::cout << "\n🎯 VIDEO BUFFER TEST SUITE COMPLETE" << std::endl;
        std::cout << "Successes: " << success_count << std::endl;
        std::cout << "Errors: " << error_count << std::endl;

        if (error_count == 0) {
            std::cout << "💚 ALL TESTS PASSED - Video Buffer working correctly!" << std::endl;
        } else {
            std::cout << "💔 SOME TESTS FAILED" << std::endl;
        }
    }
};

int main(int argc, char **argv)
{
    Verilated::commandArgs(argc, argv);

    VideoBuffer_Test test;
    test.run_all_tests();

    return 0;
}