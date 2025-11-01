#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <string>
#include <algorithm>
#include <cmath>

// Простая структура для RGB цвета
struct RGB {
    uint8_t r, g, b;
    
    RGB() : r(0), g(0), b(0) {}
    RGB(uint8_t r, uint8_t g, uint8_t b) : r(r), g(g), b(b) {}
};

// Заголовок .PIX файла
struct PIXHeader {
    char magic[12];
    uint16_t width;
    uint16_t height;
    uint8_t bpp;
    uint8_t color_mode;
    uint8_t layout;
    uint8_t reserved[3];
    
    PIXHeader() {
        const char* mag = "ALESTE_PIXv1";
        std::copy(mag, mag + 12, magic);
        width = 0;
        height = 0;
        bpp = 0;
        color_mode = 0;
        layout = 0;
        reserved[0] = reserved[1] = reserved[2] = 0;
    }
};

// Простой класс для работы с изображениями
class SimpleImage {
private:
    std::vector<RGB> pixels;
    uint16_t width_, height_;

public:
    SimpleImage() : width_(0), height_(0) {}
    
    bool loadPPM(const std::string& filename) {
        std::ifstream file(filename, std::ios::binary);
        if (!file) {
            std::cerr << "Cannot open file: " << filename << std::endl;
            return false;
        }
        
        std::string format;
        file >> format;
        if (format != "P6") {
            std::cerr << "Only PPM P6 format supported" << std::endl;
            return false;
        }
        
        file >> width_ >> height_;
        int maxval;
        file >> maxval;
        file.get(); // Пропускаем newline
        
        pixels.resize(width_ * height_);
        file.read(reinterpret_cast<char*>(pixels.data()), width_ * height_ * 3);
        
        return !file.fail();
    }
    
    bool loadBMP(const std::string& filename) {
        // Простая загрузка 24-bit BMP (без сжатия)
        std::ifstream file(filename, std::ios::binary);
        if (!file) {
            std::cerr << "Cannot open file: " << filename << std::endl;
            return false;
        }
        
        // Читаем заголовок BMP
        char signature[2];
        file.read(signature, 2);
        if (signature[0] != 'B' || signature[1] != 'M') {
            std::cerr << "Not a BMP file" << std::endl;
            return false;
        }
        
        file.seekg(10);
        uint32_t dataOffset;
        file.read(reinterpret_cast<char*>(&dataOffset), 4);
        
        file.seekg(18);
        int32_t width, height;
        file.read(reinterpret_cast<char*>(&width), 4);
        file.read(reinterpret_cast<char*>(&height), 4);
        
        width_ = static_cast<uint16_t>(width);
        height_ = static_cast<uint16_t>(std::abs(height)); // Обрабатываем отрицательную высоту
        
        file.seekg(28);
        uint16_t bitsPerPixel;
        file.read(reinterpret_cast<char*>(&bitsPerPixel), 2);
        
        if (bitsPerPixel != 24) {
            std::cerr << "Only 24-bit BMP supported" << std::endl;
            return false;
        }
        
        file.seekg(dataOffset);
        
        // BMP хранится bottom-to-top, выравнивание по 4 байта
        int rowSize = (width_ * 3 + 3) & ~3;
        pixels.resize(width_ * height_);
        
        bool topDown = height < 0;
        
        for (int y = 0; y < height_; ++y) {
            std::vector<uint8_t> row(rowSize);
            file.read(reinterpret_cast<char*>(row.data()), rowSize);
            
            int targetY = topDown ? y : (height_ - 1 - y);
            
            for (int x = 0; x < width_; ++x) {
                // BMP хранится как BGR
                pixels[targetY * width_ + x] = RGB(
                    row[x * 3 + 2],  // R
                    row[x * 3 + 1],  // G  
                    row[x * 3 + 0]   // B
                );
            }
        }
        
        return !file.fail();
    }
    
    uint16_t width() const { return width_; }
    uint16_t height() const { return height_; }
    const RGB& pixel(int x, int y) const { return pixels[y * width_ + x]; }
    const std::vector<RGB>& getPixels() const { return pixels; }
    
    void resize(uint16_t newWidth, uint16_t newHeight) {
        std::vector<RGB> newPixels(newWidth * newHeight);
        
        for (uint16_t y = 0; y < newHeight; ++y) {
            for (uint16_t x = 0; x < newWidth; ++x) {
                // Простая интерполяция
                uint16_t srcX = (x * width_) / newWidth;
                uint16_t srcY = (y * height_) / newHeight;
                newPixels[y * newWidth + x] = pixels[srcY * width_ + srcX];
            }
        }
        
        pixels = std::move(newPixels);
        width_ = newWidth;
        height_ = newHeight;
    }
    
    // Конвертация в grayscale
    std::vector<uint8_t> toGrayscale() const {
        std::vector<uint8_t> gray(pixels.size());
        for (size_t i = 0; i < pixels.size(); ++i) {
            gray[i] = static_cast<uint8_t>(
                pixels[i].r * 0.299 + pixels[i].g * 0.587 + pixels[i].b * 0.114
            );
        }
        return gray;
    }
};

class AlesteImageConverter {
private:
    std::vector<RGB> extractPalette(const SimpleImage& image, int maxColors) {
        // Простой алгоритм извлечения палитры
        std::vector<RGB> palette;
        const std::vector<RGB>& colors = image.getPixels();
        
        // Упрощенный подход - берем первые maxColors уникальных цветов
        std::vector<RGB> uniqueColors;
        
        for (const auto& color : colors) {
            bool found = false;
            for (const auto& uc : uniqueColors) {
                // Простая проверка схожести цветов
                if (std::abs(static_cast<int>(color.r) - static_cast<int>(uc.r)) < 32 &&
                    std::abs(static_cast<int>(color.g) - static_cast<int>(uc.g)) < 32 &&
                    std::abs(static_cast<int>(color.b) - static_cast<int>(uc.b)) < 32) {
                    found = true;
                    break;
                }
            }
            if (!found && uniqueColors.size() < static_cast<size_t>(maxColors)) {
                uniqueColors.push_back(color);
            }
        }
        
        // Дополняем до нужного количества
        while (uniqueColors.size() < static_cast<size_t>(maxColors)) {
            uint8_t val = static_cast<uint8_t>((uniqueColors.size() * 255) / maxColors);
            uniqueColors.push_back(RGB(val, val, val));
        }
        
        return uniqueColors;
    }
    
    std::vector<uint8_t> encodeMono(const SimpleImage& image) {
        auto gray = image.toGrayscale();
        std::vector<uint8_t> result;
        
        for (uint16_t y = 0; y < image.height(); ++y) {
            for (uint16_t x = 0; x < image.width(); x += 8) {
                uint8_t byteVal = 0;
                for (int bit = 0; bit < 8; ++bit) {
                    if (x + bit < image.width()) {
                        if (gray[y * image.width() + (x + bit)] > 128) {
                            byteVal |= (1 << (7 - bit));
                        }
                    }
                }
                result.push_back(byteVal);
            }
        }
        
        return result;
    }
    
    std::vector<uint8_t> encodeLinear(const SimpleImage& image, int bpp) {
        int pixelsPerByte = 8 / bpp;
        std::vector<uint8_t> result;
        
        // Простая "палитра" на основе яркости
        for (uint16_t y = 0; y < image.height(); ++y) {
            for (uint16_t x = 0; x < image.width(); x += pixelsPerByte) {
                uint8_t byteVal = 0;
                for (int i = 0; i < pixelsPerByte; ++i) {
                    if (x + i < image.width()) {
                        const RGB& pix = image.pixel(x + i, y);
                        uint8_t brightness = static_cast<uint8_t>((pix.r + pix.g + pix.b) / 3);
                        uint8_t colorIdx = static_cast<uint8_t>((brightness * ((1 << bpp) - 1)) / 255);
                        byteVal |= (colorIdx << (bpp * (pixelsPerByte - 1 - i)));
                    }
                }
                result.push_back(byteVal);
            }
        }
        
        return result;
    }
    
    int getBytesPerLine(int memorySize, int bpp) {
        switch (memorySize) {
            case 16: return 80;
            case 32: return 160; 
            case 64: return 320;
            default: return 80;
        }
    }

public:
    bool convert(const std::string& inputFile, const std::string& outputFile,
                 const std::string& layout, int memorySize, 
                 const std::string& colorMode, int bpp) {
        
        // Загружаем изображение
        SimpleImage image;
        bool loaded = false;
        
        if (inputFile.length() > 4) {
            std::string ext = inputFile.substr(inputFile.length() - 4);
            std::transform(ext.begin(), ext.end(), ext.begin(), ::tolower);
            
            if (ext == ".bmp") {
                loaded = image.loadBMP(inputFile);
            } else if (ext == ".ppm") {
                loaded = image.loadPPM(inputFile);
            }
        }
        
        if (!loaded) {
            std::cerr << "Unsupported image format or cannot load file" << std::endl;
            std::cerr << "Supported formats: BMP (24-bit), PPM (P6)" << std::endl;
            return false;
        }
        
        std::cout << "Loaded image: " << image.width() << "x" << image.height() << std::endl;
        
        // Определяем целевой размер
        int bytesPerLine = getBytesPerLine(memorySize, bpp);
        int targetWidth = bytesPerLine * 8 / bpp;
        int targetHeight = 200; // Стандартная высота для Aleste
        
        if (image.width() != targetWidth || image.height() != targetHeight) {
            std::cout << "Resizing to: " << targetWidth << "x" << targetHeight << std::endl;
            image.resize(targetWidth, targetHeight);
        }
        
        // Кодируем пиксели
        std::vector<uint8_t> pixelData;
        
        if (colorMode == "mono") {
            pixelData = encodeMono(image);
        } else {
            pixelData = encodeLinear(image, bpp);
        }
        
        // Создаем заголовок
        PIXHeader header;
        header.width = image.width();
        header.height = image.height();
        header.bpp = bpp;
        
        if (colorMode == "mono") header.color_mode = 0;
        else if (colorMode == "cpc") header.color_mode = 1;
        else if (colorMode == "linear") header.color_mode = 2;
        else header.color_mode = 2;
        
        header.layout = (layout == "cpc-block") ? 0 : 1;
        
        // Палитра (пока пустая)
        uint16_t colorsCount = 0;
        
        // Записываем файл
        std::ofstream outFile(outputFile, std::ios::binary);
        if (!outFile) {
            std::cerr << "Cannot create output file: " << outputFile << std::endl;
            return false;
        }
        
        outFile.write(reinterpret_cast<const char*>(&header), sizeof(header));
        outFile.write(reinterpret_cast<const char*>(&colorsCount), sizeof(colorsCount));
        outFile.write(reinterpret_cast<const char*>(pixelData.data()), pixelData.size());
        
        std::cout << "Converted: " << inputFile << " -> " << outputFile << std::endl;
        std::cout << "Size: " << image.width() << "x" << image.height() << std::endl;
        std::cout << "Mode: " << layout << ", Memory: " << memorySize << "KB, BPP: " << bpp << std::endl;
        std::cout << "Data: header " << sizeof(header) << "b, palette 2b, pixels " << pixelData.size() << "b" << std::endl;
        
        return true;
    }
};

void showUsage() {
    std::cout << "Aleste Image Converter (C++ version)" << std::endl;
    std::cout << "Usage: pix_convert input.bmp output.pix [options]" << std::endl;
    std::cout << "Options:" << std::endl;
    std::cout << "  --layout cpc-block|linear" << std::endl;
    std::cout << "  --memory-size 16|32|64" << std::endl;  
    std::cout << "  --color-mode mono|linear" << std::endl;
    std::cout << "  --bpp 1|2|4|8" << std::endl;
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        showUsage();
        return 1;
    }
    
    std::string inputFile = argv[1];
    std::string outputFile = argv[2];
    std::string layout = "linear";
    int memorySize = 16;
    std::string colorMode = "linear"; 
    int bpp = 4;
    
    // Парсим аргументы
    for (int i = 3; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg == "--layout" && i + 1 < argc) {
            layout = argv[++i];
        } else if (arg == "--memory-size" && i + 1 < argc) {
            memorySize = std::stoi(argv[++i]);
        } else if (arg == "--color-mode" && i + 1 < argc) {
            colorMode = argv[++i];
        } else if (arg == "--bpp" && i + 1 < argc) {
            bpp = std::stoi(argv[++i]);
        } else {
            std::cerr << "Unknown option: " << arg << std::endl;
            showUsage();
            return 1;
        }
    }
    
    AlesteImageConverter converter;
    if (converter.convert(inputFile, outputFile, layout, memorySize, colorMode, bpp)) {
        return 0;
    } else {
        return 1;
    }
}