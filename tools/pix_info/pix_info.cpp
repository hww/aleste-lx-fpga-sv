// pix_info.cpp - Показывает информацию о .PIX файле
#include <iostream>
#include <fstream>
#include <cstdint>
#include <vector>
#include <iomanip>

struct PIXHeader {
    char magic[12];
    uint16_t width;
    uint16_t height;
    uint8_t bpp;
    uint8_t color_mode;
    uint8_t layout;
    uint8_t reserved[3];
};

std::string getColorModeName(uint8_t mode) {
    switch(mode) {
        case 0: return "mono (1bpp)";
        case 1: return "cpc (special)";
        case 2: return "linear";
        case 3: return "rgb12";
        default: return "unknown";
    }
}

std::string getLayoutName(uint8_t layout) {
    switch(layout) {
        case 0: return "cpc-block";
        case 1: return "linear";
        default: return "unknown";
    }
}

void showPIXInfo(const std::string& filename) {
    std::ifstream file(filename, std::ios::binary);
    if (!file) {
        std::cerr << "❌ Cannot open: " << filename << std::endl;
        return;
    }
    
    PIXHeader header;
    file.read(reinterpret_cast<char*>(&header), sizeof(header));
    
    // Проверяем magic
    if (std::string(header.magic, 12) != "ALESTE_PIXv1") {
        std::cerr << "❌ Not a valid .PIX file" << std::endl;
        return;
    }
    
    std::cout << "📁 " << filename << std::endl;
    std::cout << "📐 " << header.width << " × " << header.height << " pixels" << std::endl;
    std::cout << "🎨 " << getColorModeName(header.color_mode) << " (" << (int)header.bpp << "bpp)" << std::endl;
    std::cout << "📦 Layout: " << getLayoutName(header.layout) << std::endl;
    
    // Читаем палитру
    uint16_t colors_count;
    file.read(reinterpret_cast<char*>(&colors_count), 2);
    std::cout << "🌈 Colors in palette: " << colors_count << std::endl;
    
    // Размер данных
    file.seekg(0, std::ios::end);
    size_t total_size = file.tellg();
    size_t data_size = total_size - sizeof(header) - 2 - (colors_count * 2);
    
    std::cout << "💾 Data: " << data_size << " bytes" << std::endl;
    std::cout << "📊 Expected: " << (header.width * header.height * header.bpp / 8) << " bytes" << std::endl;
    
    // Проверяем целостность
    if (data_size == (header.width * header.height * header.bpp / 8)) {
        std::cout << "✅ Size validation: PASS" << std::endl;
    } else {
        std::cout << "❌ Size validation: FAIL" << std::endl;
    }
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <file.pix>" << std::endl;
        std::cout << "Shows detailed information about .PIX file" << std::endl;
        return 1;
    }
    
    showPIXInfo(argv[1]);
    return 0;
}