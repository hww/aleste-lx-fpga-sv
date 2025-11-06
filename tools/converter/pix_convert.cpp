#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <string>
#include <algorithm>
#include <cmath>
#include <limits>
#include <unordered_map>
#include <random>
#include <cassert>
// ==================== СТРУКТУРЫ ДАННЫХ ====================
struct RGB {
    uint8_t r, g, b;
    RGB() : r(0), g(0), b(0) {}
    RGB(uint8_t r, uint8_t g, uint8_t b) : r(r), g(g), b(b) {}
    bool operator==(const RGB& other) const {
        return r == other.r && g == other.g && b == other.b;
    }
    
    RGB operator+(const RGB& other) const {
        return RGB(
            std::min(255, int(r) + int(other.r)),
            std::min(255, int(g) + int(other.g)), 
            std::min(255, int(b) + int(other.b))
        );
    }
    
    RGB operator*(float factor) const {
        return RGB(
            std::max(0, std::min(255, int(r * factor))),
            std::max(0, std::min(255, int(g * factor))),
            std::max(0, std::min(255, int(b * factor)))
        );
    }
};

// Палитра CPC (27 цветов)
const std::vector<RGB> CPC_PALETTE = {
    RGB(0x00, 0x00, 0x00), RGB(0x00, 0x00, 0x80), RGB(0x00, 0x00, 0xFF),
    RGB(0x00, 0x80, 0x00), RGB(0x00, 0x80, 0x80), RGB(0x00, 0x80, 0xFF),
    RGB(0x00, 0xFF, 0x00), RGB(0x00, 0xFF, 0x80), RGB(0x00, 0xFF, 0xFF),
    RGB(0x80, 0x00, 0x00), RGB(0x80, 0x00, 0x80), RGB(0x80, 0x00, 0xFF),
    RGB(0x80, 0x80, 0x00), RGB(0x80, 0x80, 0x80), RGB(0x80, 0x80, 0xFF),
    RGB(0x80, 0xFF, 0x00), RGB(0x80, 0xFF, 0x80), RGB(0x80, 0xFF, 0xFF),
    RGB(0xFF, 0x00, 0x00), RGB(0xFF, 0x00, 0x80), RGB(0xFF, 0x00, 0xFF),
    RGB(0xFF, 0x80, 0x00), RGB(0xFF, 0x80, 0x80), RGB(0xFF, 0x80, 0xFF),
    RGB(0xFF, 0xFF, 0x00), RGB(0xFF, 0xFF, 0x80), RGB(0xFF, 0xFF, 0xFF)
};

// Правильная палитра MSX согласно спецификации
const std::vector<RGB> MSX_PALETTE = {
    RGB(0x00, 0x00, 0x00), RGB(0x00, 0x00, 0x00), RGB(0x3E, 0xB8, 0x49), RGB(0x74, 0xD0, 0x7D),
    RGB(0x59, 0x55, 0xE0), RGB(0x80, 0x76, 0xF1), RGB(0xB9, 0x5E, 0x51), RGB(0x65, 0xDB, 0xEF),
    RGB(0xDB, 0x65, 0x59), RGB(0xFF, 0x89, 0x7D), RGB(0xCC, 0xC3, 0x5E), RGB(0xDE, 0xD0, 0x87),
    RGB(0x3A, 0xA2, 0x41), RGB(0xB7, 0x66, 0xB5), RGB(0xCC, 0xCC, 0xCC), RGB(0xFF, 0xFF, 0xFF)
};

// Функция для конвертации MSX цветового значения в RGB
RGB msxToRGB(uint8_t msxColor) {
    // Распаковка компонентов из MSX формата: RRRGGGBB
    uint8_t r_bits = (msxColor >> 5) & 0x07;
    uint8_t g_bits = (msxColor >> 2) & 0x07; 
    uint8_t b_bits = msxColor & 0x03;
    
    // Конвертация в 8-битные значения согласно таблице
    static const uint8_t r_table[8] = {0, 36, 72, 109, 145, 182, 218, 255};
    static const uint8_t g_table[8] = {0, 36, 72, 109, 145, 182, 218, 255};
    static const uint8_t b_table[4] = {0, 85, 170, 255};
    
    return RGB(r_table[r_bits], g_table[g_bits], b_table[b_bits]);
}

struct PIXHeader {
    char magic[12];
    uint32_t total_size;
    uint16_t chunk_count;
    uint16_t first_chunk_offset;
    
    PIXHeader() {
        const char* mag = "ALESTE_PIXv2";
        std::copy(mag, mag + 12, magic);
        total_size = 0;
        chunk_count = 0;
        first_chunk_offset = 20;
    }
};

struct PIXChunk {
    char type[4];
    uint32_t data_size;
    
    PIXChunk(const char* chunk_type, uint32_t size) {
        std::copy(chunk_type, chunk_type + 4, type);
        data_size = size;
    }
};

// ==================== КЛАСС ИЗОБРАЖЕНИЯ ====================
class SimpleImage {
private:
    std::vector<RGB> pixels;
    uint16_t width_, height_;

public:
    SimpleImage() : width_(0), height_(0) {}
    SimpleImage(uint16_t w, uint16_t h) : width_(w), height_(h) {
        pixels.resize(w * h);
    }
    
    bool loadPPM(const std::string& filename) {
        std::ifstream file(filename, std::ios::binary);
        if (!file) {
            std::cerr << "❌ Cannot open PPM file: " << filename << std::endl;
            return false;
        }
        
        std::string format;
        file >> format;
        if (format != "P6") {
            std::cerr << "❌ Only PPM P6 format supported" << std::endl;
            return false;
        }
        
        file >> width_ >> height_;
        int maxval;
        file >> maxval;
        file.get();
        
        pixels.resize(width_ * height_);
        file.read(reinterpret_cast<char*>(pixels.data()), width_ * height_ * 3);
        
        bool success = !file.fail();
        if (success) {
            std::cout << "✅ PPM loaded: " << width_ << "x" << height_ << std::endl;
        }
        return success;
    }
    
    bool loadBMP(const std::string& filename) {
        std::ifstream file(filename, std::ios::binary);
        if (!file) {
            std::cerr << "❌ Cannot open BMP file: " << filename << std::endl;
            return false;
        }
        
        char signature[2];
        file.read(signature, 2);
        if (signature[0] != 'B' || signature[1] != 'M') {
            std::cerr << "❌ Not a BMP file" << std::endl;
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
        height_ = static_cast<uint16_t>(std::abs(height));
        
        file.seekg(28);
        uint16_t bitsPerPixel;
        file.read(reinterpret_cast<char*>(&bitsPerPixel), 2);
        
        if (bitsPerPixel != 24) {
            std::cerr << "❌ Only 24-bit BMP supported" << std::endl;
            return false;
        }
        
        file.seekg(dataOffset);
        int rowSize = (width_ * 3 + 3) & ~3;
        pixels.resize(width_ * height_);
        
        bool topDown = height < 0;
        for (int y = 0; y < height_; ++y) {
            std::vector<uint8_t> row(rowSize);
            file.read(reinterpret_cast<char*>(row.data()), rowSize);
            int targetY = topDown ? y : (height_ - 1 - y);
            for (int x = 0; x < width_; ++x) {
                pixels[targetY * width_ + x] = RGB(
                    row[x * 3 + 2],
                    row[x * 3 + 1], 
                    row[x * 3 + 0]
                );
            }
        }
        
        bool success = !file.fail();
        if (success) {
            std::cout << "✅ BMP loaded: " << width_ << "x" << height_ << std::endl;
        }
        return success;
    }
    
    bool loadFromStdin() {
        std::string format;
        std::cin >> format;
        if (format != "P6") {
            std::cerr << "❌ Only PPM P6 format supported from stdin" << std::endl;
            return false;
        }
        
        std::cin >> width_ >> height_;
        int maxval;
        std::cin >> maxval;
        std::cin.get();
        
        pixels.resize(width_ * height_);
        std::cin.read(reinterpret_cast<char*>(pixels.data()), width_ * height_ * 3);
        
        bool success = !std::cin.fail();
        if (success) {
            std::cout << "✅ PPM from stdin: " << width_ << "x" << height_ << std::endl;
        }
        return success;
    }
    
    bool saveBMP(const std::string& filename) {
        std::ofstream file(filename, std::ios::binary);
        if (!file) {
            std::cerr << "❌ Cannot create BMP file: " << filename << std::endl;
            return false;
        }
        
        // Вычисляем размер строки с выравниванием
        uint32_t width = width_;
        uint32_t height = height_;
        uint32_t bytesPerPixel = 3;
        uint32_t rowSize = (width * bytesPerPixel + 3) & ~3; // Выравнивание до 4 байт
        uint32_t imageSize = rowSize * height;
        uint32_t fileSize = 54 + imageSize; // 54 байта заголовок
        
        std::cout << "   BMP details: " << width << "x" << height 
                << ", rowSize=" << rowSize << ", imageSize=" << imageSize 
                << ", fileSize=" << fileSize << std::endl;
        
        // === BMP FILE HEADER (14 bytes) ===
        // Signature
        file.put('B');
        file.put('M');
        
        // File size
        file.write(reinterpret_cast<const char*>(&fileSize), 4);
        
        // Reserved
        uint16_t reserved1 = 0;
        uint16_t reserved2 = 0;
        file.write(reinterpret_cast<const char*>(&reserved1), 2);
        file.write(reinterpret_cast<const char*>(&reserved2), 2);
        
        // Data offset
        uint32_t dataOffset = 54;
        file.write(reinterpret_cast<const char*>(&dataOffset), 4);
        
        // === BMP INFO HEADER (40 bytes) ===
        uint32_t headerSize = 40;
        file.write(reinterpret_cast<const char*>(&headerSize), 4);
        
        // Width
        file.write(reinterpret_cast<const char*>(&width), 4);
        
        // Height (положительное для bottom-up)
        int32_t signedHeight = height;
        file.write(reinterpret_cast<const char*>(&signedHeight), 4);
        
        // Planes
        uint16_t planes = 1;
        file.write(reinterpret_cast<const char*>(&planes), 2);
        
        // Bits per pixel
        uint16_t bitsPerPixel = 24;
        file.write(reinterpret_cast<const char*>(&bitsPerPixel), 2);
        
        // Compression
        uint32_t compression = 0; // BI_RGB
        file.write(reinterpret_cast<const char*>(&compression), 4);
        
        // Image size
        file.write(reinterpret_cast<const char*>(&imageSize), 4);
        
        // Resolution
        uint32_t xPixelsPerM = 0;
        uint32_t yPixelsPerM = 0;
        file.write(reinterpret_cast<const char*>(&xPixelsPerM), 4);
        file.write(reinterpret_cast<const char*>(&yPixelsPerM), 4);
        
        // Colors
        uint32_t colorsUsed = 0;
        uint32_t importantColors = 0;
        file.write(reinterpret_cast<const char*>(&colorsUsed), 4);
        file.write(reinterpret_cast<const char*>(&importantColors), 4);
        
        // === PIXEL DATA ===
        std::vector<uint8_t> rowBuffer(rowSize, 0);
        
        // Bottom-up: начинаем с последней строки
        for (int y = height - 1; y >= 0; --y) {
            // Заполняем строку пикселями в формате BGR
            for (int x = 0; x < width; ++x) {
                const RGB& pixel = pixels[y * width_ + x];
                rowBuffer[x * 3 + 0] = pixel.b; // Blue
                rowBuffer[x * 3 + 1] = pixel.g; // Green  
                rowBuffer[x * 3 + 2] = pixel.r; // Red
            }
            // Записываем строку
            file.write(reinterpret_cast<const char*>(rowBuffer.data()), rowSize);
            
            if (file.fail()) {
                std::cerr << "❌ Error writing row " << y << std::endl;
                return false;
            }
        }
        
        bool success = !file.fail();
        if (success) {
            std::cout << "✅ BMP saved: " << filename << " (" << width_ << "x" << height_ << ", 24-bit)" << std::endl;
            
            // Проверяем содержимое
            std::cout << "   First few pixels: ";
            for (int i = 0; i < std::min(3, width_ * height_); i++) {
                const RGB& p = pixels[i];
                std::cout << "(" << (int)p.r << "," << (int)p.g << "," << (int)p.b << ") ";
            }
            std::cout << std::endl;
        } else {
            std::cerr << "❌ Error writing BMP file" << std::endl;
        }
        return success;
    }
    
    uint16_t width() const { return width_; }
    uint16_t height() const { return height_; }
    RGB& pixel(int x, int y) { return pixels[y * width_ + x]; }
    const RGB& pixel(int x, int y) const { return pixels[y * width_ + x]; }
    std::vector<RGB>& getPixels() { return pixels; }
    const std::vector<RGB>& getPixels() const { return pixels; }
    
    void resize(uint16_t newWidth, uint16_t newHeight) {
        std::cout << "🔄 Resizing: " << width_ << "x" << height_ 
                  << " → " << newWidth << "x" << newHeight << std::endl;
        
        std::vector<RGB> newPixels(newWidth * newHeight);
        
        for (uint16_t y = 0; y < newHeight; ++y) {
            for (uint16_t x = 0; x < newWidth; ++x) {
                uint16_t srcX = (x * width_) / newWidth;
                uint16_t srcY = (y * height_) / newHeight;
                newPixels[y * newWidth + x] = pixels[srcY * width_ + srcX];
            }
        }
        
        pixels = std::move(newPixels);
        width_ = newWidth;
        height_ = newHeight;
    }
    
    void resizeBilinear(uint16_t newWidth, uint16_t newHeight) {
        std::cout << "🔄 Resizing (bilinear): " << width_ << "x" << height_ 
                  << " → " << newWidth << "x" << newHeight << std::endl;
        
        std::vector<RGB> newPixels(newWidth * newHeight);
        
        for (uint16_t y = 0; y < newHeight; ++y) {
            for (uint16_t x = 0; x < newWidth; ++x) {
                float srcX = (x * (width_ - 1)) / static_cast<float>(newWidth - 1);
                float srcY = (y * (height_ - 1)) / static_cast<float>(newHeight - 1);
                
                int x1 = static_cast<int>(srcX);
                int y1 = static_cast<int>(srcY);
                int x2 = std::min(x1 + 1, width_ - 1);
                int y2 = std::min(y1 + 1, height_ - 1);
                
                float dx = srcX - x1;
                float dy = srcY - y1;
                
                const RGB& c11 = pixels[y1 * width_ + x1];
                const RGB& c21 = pixels[y1 * width_ + x2];
                const RGB& c12 = pixels[y2 * width_ + x1];
                const RGB& c22 = pixels[y2 * width_ + x2];
                
                uint8_t r = static_cast<uint8_t>(
                    c11.r * (1-dx) * (1-dy) + c21.r * dx * (1-dy) +
                    c12.r * (1-dx) * dy + c22.r * dx * dy
                );
                uint8_t g = static_cast<uint8_t>(
                    c11.g * (1-dx) * (1-dy) + c21.g * dx * (1-dy) +
                    c12.g * (1-dx) * dy + c22.g * dx * dy
                );
                uint8_t b = static_cast<uint8_t>(
                    c11.b * (1-dx) * (1-dy) + c21.b * dx * (1-dy) +
                    c12.b * (1-dx) * dy + c22.b * dx * dy
                );
                
                newPixels[y * newWidth + x] = RGB(r, g, b);
            }
        }
        
        pixels = std::move(newPixels);
        width_ = newWidth;
        height_ = newHeight;
    }
};

// ================== УЛУЧШЕННЫЙ КОНВЕРТОР ЦВЕТОВ ==================
class AdvancedColorProcessor {
private:
    struct ColorStats {
        RGB color;
        int count;

        ColorStats(const RGB& c, int cnt) : color(c), count(cnt) {}
        
        uint16_t to12bit() const {
            return ((color.r >> 4) << 8) | ((color.g >> 4) << 4) | (color.b >> 4);
        }
        
        uint8_t toMSX() const {
            // Конвертация RGB в MSX формат: RRRGGGBB
            uint8_t r = (color.r >> 5) & 0x07;  // 3 бита
            uint8_t g = (color.g >> 5) & 0x07;  // 3 бита  
            uint8_t b = (color.b >> 6) & 0x03;  // 2 бита
            return (r << 5) | (g << 2) | b;
        }
        
        uint8_t to6bit() const {
            return ((color.r >> 6) << 4) | ((color.g >> 6) << 2) | (color.b >> 6);
        }
        
        uint16_t toCPC() const {
            int bestIndex = 0;
            int bestDist = 255 * 255 * 3;
            
            for (int i = 0; i < CPC_PALETTE.size(); i++) {
                const RGB& cpcColor = CPC_PALETTE[i];
                int dr = color.r - cpcColor.r;
                int dg = color.g - cpcColor.g;
                int db = color.b - cpcColor.b;
                int dist = dr*dr + dg*dg + db*db;
                
                if (dist < bestDist) {
                    bestDist = dist;
                    bestIndex = i;
                }
            }
            
            const RGB& bestColor = CPC_PALETTE[bestIndex];
            return ((bestColor.r >> 4) << 8) | ((bestColor.g >> 4) << 4) | (bestColor.b >> 4);
        }
    };

public:
    // Улучшенный поиск ближайшего цвета с учетом особенностей аппаратуры
    static int findBestColorCPC(const RGB& color, const std::vector<RGB>& palette) {
        int bestIndex = 0;
        double bestDist = std::numeric_limits<double>::max();
        
        for (int i = 0; i < palette.size(); i++) {
            const RGB& palColor = palette[i];
            
            // Взвешенное расстояние (человеческое восприятие)
            double dr = color.r - palColor.r;
            double dg = color.g - palColor.g;
            double db = color.b - palColor.b;
            
            // Коэффициенты восприятия (стандартные для RGB)
            double dist = 0.299 * dr*dr + 0.587 * dg*dg + 0.114 * db*db;
            
            if (dist < bestDist) {
                bestDist = dist;
                bestIndex = i;
            }
        }
        
        return bestIndex;
    }
    
    static int findBestColorMSX(const RGB& color, const std::vector<RGB>& palette) {
        int bestIndex = 0;
        double bestDist = std::numeric_limits<double>::max();
        
        for (int i = 0; i < palette.size(); i++) {
            const RGB& palColor = palette[i];
            
            // MSX имеет специфическую палитру, учитываем это
            double dr = color.r - palColor.r;
            double dg = color.g - palColor.g;
            double db = color.b - palColor.b;
            
            // Усиливаем важность зеленого для MSX
            double dist = 0.25 * dr*dr + 0.60 * dg*dg + 0.15 * db*db;
            
            if (dist < bestDist) {
                bestDist = dist;
                bestIndex = i;
            }
        }
        
        return bestIndex;
    }

    // Улучшенный подбор палитры с учетом аппаратных ограничений
    static std::vector<RGB> selectAdaptivePalette(const SimpleImage& image, int maxColors, const std::string& paletteMode) {
        std::cout << "🎨 Selecting adaptive palette for " << paletteMode << " (" << maxColors << " colors)" << std::endl;
        
        if (paletteMode == "cpc") {
            // Фиксированная CPC палитра
            std::vector<RGB> palette = CPC_PALETTE;
            if (maxColors <= 16) {
                // Для 4bpp (16 цветов) выбираем лучшие 16 цветов из CPC палитры
                palette = selectBestCPCSubset(image, maxColors);
            } else if (maxColors <= 4) {
                // Для 2bpp (4 цвета) выбираем лучшие 4 цвета
                palette = selectBestCPCSubset(image, maxColors);
            } else {
                // Для других случаев используем всю CPC палитру
                palette = CPC_PALETTE;
                if (maxColors < palette.size()) {
                    palette.resize(maxColors);
                }
            }
            return palette;
        }
        else if (paletteMode == "msx") {
            // Фиксированная MSX палитра
            std::vector<RGB> palette = MSX_PALETTE;
            if (maxColors < palette.size()) {
                palette.resize(maxColors);
            }
            return palette;
        }
        
        // Для других режимов - медианный cut алгоритм (упрощенный)
        return selectMedianCutPalette(image, maxColors);
    }
    // Функция для выбора лучших цветов CPC палитры
    static std::vector<RGB> selectBestCPCSubset(const SimpleImage& image, int numColors) {
        std::cout << "   Selecting best " << numColors << " CPC colors from image..." << std::endl;
        
        // Собираем все цвета изображения
        std::vector<RGB> imageColors = image.getPixels();
        
        // Уникальные цвета
        std::sort(imageColors.begin(), imageColors.end(), [](const RGB& a, const RGB& b) {
            return (a.r << 16 | a.g << 8 | a.b) < (b.r << 16 | b.g << 8 | b.b);
        });
        auto last = std::unique(imageColors.begin(), imageColors.end());
        imageColors.erase(last, imageColors.end());
        
        std::cout << "   Unique colors in image: " << imageColors.size() << std::endl;
        
        // Если уникальных цветов меньше нужного, добавляем из CPC палитры
        std::vector<RGB> result;
        
        // Сначала берем цвета из изображения, которые есть в CPC палитре
        for (const RGB& imgColor : imageColors) {
            for (const RGB& cpcColor : CPC_PALETTE) {
                if (colorDistance(imgColor, cpcColor) < 1000) { // Близкий цвет
                    if (std::find(result.begin(), result.end(), cpcColor) == result.end()) {
                        result.push_back(cpcColor);
                        if (result.size() >= numColors) break;
                    }
                }
            }
            if (result.size() >= numColors) break;
        }
        
        // Если не набрали, добавляем контрастные цвета из CPC палитры
        if (result.size() < numColors) {
            std::vector<RGB> remainingColors = CPC_PALETTE;
            // Убираем уже выбранные цвета
            remainingColors.erase(
                std::remove_if(remainingColors.begin(), remainingColors.end(),
                    [&](const RGB& c) {
                        return std::find(result.begin(), result.end(), c) != result.end();
                    }),
                remainingColors.end()
            );
            
            // Добавляем недостающие
            while (result.size() < numColors && !remainingColors.empty()) {
                result.push_back(remainingColors.back());
                remainingColors.pop_back();
            }
        }
        
        std::cout << "   Final palette: " << result.size() << " colors" << std::endl;
        return result;
    }
    static int colorDistance(const RGB& a, const RGB& b) {
        int dr = a.r - b.r;
        int dg = a.g - b.g;
        int db = a.b - b.b;
        return dr*dr + dg*dg + db*db;
    }
    
    // Упрощенный алгоритм медианного cut
    static std::vector<RGB> selectMedianCutPalette(const SimpleImage& image, int maxColors) {
        std::cout << "🎨 Using Median Cut algorithm for better contrast" << std::endl;
        
        // Собираем все уникальные цвета
        std::vector<RGB> allColors = image.getPixels();
        
        // Убираем дубликаты
        std::sort(allColors.begin(), allColors.end(), [](const RGB& a, const RGB& b) {
            return (a.r << 16 | a.g << 8 | a.b) < (b.r << 16 | b.g << 8 | b.b);
        });
        auto last = std::unique(allColors.begin(), allColors.end());
        allColors.erase(last, allColors.end());
        
        std::cout << "   Unique colors: " << allColors.size() << std::endl;
        
        if (allColors.size() <= maxColors) {
            return allColors;
        }
        
        // Median Cut: рекурсивно разбиваем цветовое пространство
        std::vector<std::vector<RGB>> colorBoxes = {allColors};
        
        while (colorBoxes.size() < maxColors) {
            // Находим коробку с наибольшим диапазоном
            int splitBox = 0;
            float maxRange = -1;
            
            for (int i = 0; i < colorBoxes.size(); i++) {
                if (colorBoxes[i].size() < 2) continue;
                
                // Находим диапазон по R, G, B
                uint8_t minR = 255, maxR = 0, minG = 255, maxG = 0, minB = 255, maxB = 0;
                for (const RGB& c : colorBoxes[i]) {
                    minR = std::min(minR, c.r); maxR = std::max(maxR, c.r);
                    minG = std::min(minG, c.g); maxG = std::max(maxG, c.g);
                    minB = std::min(minB, c.b); maxB = std::max(maxB, c.b);
                }
                
                float rangeR = maxR - minR;
                float rangeG = maxG - minG;
                float rangeB = maxB - minB;
                
                // Выбираем канал с наибольшим диапазоном
                float maxChannelRange = std::max({rangeR, rangeG, rangeB});
                if (maxChannelRange > maxRange) {
                    maxRange = maxChannelRange;
                    splitBox = i;
                }
            }
            
            if (maxRange <= 0) break; // Нечего разбивать
            
            // Сортируем по выбранному каналу
            uint8_t minR = 255, maxR = 0, minG = 255, maxG = 0, minB = 255, maxB = 0;
            for (const RGB& c : colorBoxes[splitBox]) {
                minR = std::min(minR, c.r); maxR = std::max(maxR, c.r);
                minG = std::min(minG, c.g); maxG = std::max(maxG, c.g);
                minB = std::min(minB, c.b); maxB = std::max(maxB, c.b);
            }
            
            float rangeR = maxR - minR;
            float rangeG = maxG - minG;
            float rangeB = maxB - minB;
            
            // Сортируем по каналу с наибольшим диапазоном
            if (rangeR >= rangeG && rangeR >= rangeB) {
                std::sort(colorBoxes[splitBox].begin(), colorBoxes[splitBox].end(),
                        [](const RGB& a, const RGB& b) { return a.r < b.r; });
            } else if (rangeG >= rangeR && rangeG >= rangeB) {
                std::sort(colorBoxes[splitBox].begin(), colorBoxes[splitBox].end(),
                        [](const RGB& a, const RGB& b) { return a.g < b.g; });
            } else {
                std::sort(colorBoxes[splitBox].begin(), colorBoxes[splitBox].end(),
                        [](const RGB& a, const RGB& b) { return a.b < b.b; });
            }
            
            // Разбиваем пополам
            int median = colorBoxes[splitBox].size() / 2;
            std::vector<RGB> leftBox(colorBoxes[splitBox].begin(), colorBoxes[splitBox].begin() + median);
            std::vector<RGB> rightBox(colorBoxes[splitBox].begin() + median, colorBoxes[splitBox].end());
            
            // Заменяем старую коробку двумя новыми
            colorBoxes[splitBox] = leftBox;
            colorBoxes.push_back(rightBox);
        }
        
        // Берем средний цвет из каждой коробки
        std::vector<RGB> palette;
        for (const auto& box : colorBoxes) {
            if (box.empty()) continue;
            
            uint32_t sumR = 0, sumG = 0, sumB = 0;
            for (const RGB& c : box) {
                sumR += c.r; sumG += c.g; sumB += c.b;
            }
            
            RGB avgColor(
                static_cast<uint8_t>(sumR / box.size()),
                static_cast<uint8_t>(sumG / box.size()),
                static_cast<uint8_t>(sumB / box.size())
            );
            palette.push_back(avgColor);
        }
        
        std::cout << "   Median Cut palette: " << palette.size() << " colors" << std::endl;
        return palette;
    }
    

    static std::vector<uint8_t> savePalette(const std::vector<RGB>& palette, const std::string& paletteMode) {
        std::vector<uint8_t> paletteData;
        
        for (const auto& color : palette) {
            ColorStats stats(color, 0);
            
            if (paletteMode == "cpc" || paletteMode == "12bit") {
                uint16_t color12 = stats.to12bit();
                paletteData.push_back(color12 & 0xFF);
                paletteData.push_back((color12 >> 8) & 0xFF);
            } else if (paletteMode == "msx") {
                paletteData.push_back(stats.toMSX());
            } else if (paletteMode == "6bit") {
                paletteData.push_back(stats.to6bit());
            } else {
                uint16_t color12 = stats.to12bit();
                paletteData.push_back(color12 & 0xFF);
                paletteData.push_back((color12 >> 8) & 0xFF);
            }
        }
        
        return paletteData;
    }
    
    // Квантование с дитерингом
    static SimpleImage quantizeWithDithering(const SimpleImage& image, const std::vector<RGB>& palette, 
                                           const std::string& ditherType, const std::string& paletteMode) {
        SimpleImage result(image.width(), image.height());
        
        if (ditherType == "none") {
            // Простое квантование
            std::cout << "   MODE: No dithering - direct quantization" << std::endl;
            
            // ДОБАВИМ ОТЛАДКУ
            std::cout << "   DEBUG: First few source pixels: ";
            for (int i = 0; i < 3; i++) {
                const RGB& p = image.pixel(i, 0);
                std::cout << "(" << (int)p.r << "," << (int)p.g << "," << (int)p.b << ") ";
            }
            std::cout << std::endl;
            
            for (int y = 0; y < image.height(); y++) {
                for (int x = 0; x < image.width(); x++) {
                    const RGB& original = image.pixel(x, y);
                    int bestIndex = findBestColor(original, palette, paletteMode);
                    
                    // ДОБАВИМ ПРОВЕРКУ
                    if (bestIndex < 0 || bestIndex >= palette.size()) {
                        std::cout << "⚠️  INVALID COLOR INDEX: " << bestIndex << " at (" << x << "," << y << ")" << std::endl;
                        bestIndex = 0;
                    }
                    
                    result.pixel(x, y) = palette[bestIndex];
                }
            }
            
            // ДОБАВИМ ПРОВЕРКУ РЕЗУЛЬТАТА
            std::cout << "   DEBUG: First few result pixels: ";
            for (int i = 0; i < 3; i++) {
                const RGB& p = result.pixel(i, 0);
                std::cout << "(" << (int)p.r << "," << (int)p.g << "," << (int)p.b << ") ";
            }
            std::cout << std::endl;
        }
        else if (ditherType == "ordered") {
            // Упорядоченный дитеринг (Bayer 4x4)
            const int bayerMatrix[4][4] = {
                { 0, 8, 2, 10 },
                { 12, 4, 14, 6 },
                { 3, 11, 1, 9 },
                { 15, 7, 13, 5 }
            };
            
            for (int y = 0; y < image.height(); y++) {
                for (int x = 0; x < image.width(); x++) {
                    RGB original = image.pixel(x, y);
                    
                    // Добавляем шум based on Bayer matrix
                    int threshold = bayerMatrix[y % 4][x % 4] - 8;
                    original.r = std::max(0, std::min(255, original.r + threshold));
                    original.g = std::max(0, std::min(255, original.g + threshold));
                    original.b = std::max(0, std::min(255, original.b + threshold));
                    
                    int bestIndex = findBestColor(original, palette, paletteMode);
                    result.pixel(x, y) = palette[bestIndex];
                }
            }
        }
        else if (ditherType == "floyd") {
            std::cout << "   MODE: Floyd-Steinberg dithering with error limiting" << std::endl;
            
            struct FloatRGB { float r, g, b; };
            std::vector<std::vector<FloatRGB>> temp(image.height(), 
                                                std::vector<FloatRGB>(image.width()));
            
            // Инициализируем
            for (int y = 0; y < image.height(); y++) {
                for (int x = 0; x < image.width(); x++) {
                    const RGB& p = image.pixel(x, y);
                    temp[y][x] = {static_cast<float>(p.r), static_cast<float>(p.g), static_cast<float>(p.b)};
                }
            }
            
            // Floyd-Steinberg дитеринг с ограничением ошибки
            for (int y = 0; y < image.height(); y++) {
                for (int x = 0; x < image.width(); x++) {
                    FloatRGB& current = temp[y][x];
                    
                    // ОГРАНИЧИВАЕМ значения перед квантованием
                    current.r = std::max(0.0f, std::min(255.0f, current.r));
                    current.g = std::max(0.0f, std::min(255.0f, current.g));
                    current.b = std::max(0.0f, std::min(255.0f, current.b));
                    
                    // Находим ближайший цвет в палитре
                    RGB original(static_cast<uint8_t>(current.r), 
                                static_cast<uint8_t>(current.g), 
                                static_cast<uint8_t>(current.b));
                    int bestIndex = findBestColor(original, palette, paletteMode);
                    RGB quantized = palette[bestIndex];
                    result.pixel(x, y) = quantized;
                    
                    // Вычисляем ошибку
                    float errorR = current.r - quantized.r;
                    float errorG = current.g - quantized.g;
                    float errorB = current.b - quantized.b;
                    
                    // ОГРАНИЧИВАЕМ максимальную ошибку (это ключевое исправление!)
                    errorR = std::max(-32.0f, std::min(32.0f, errorR));
                    errorG = std::max(-32.0f, std::min(32.0f, errorG));
                    errorB = std::max(-32.0f, std::min(32.0f, errorB));
                    
                    // Распространяем ошибку
                    if (x + 1 < image.width()) {
                        temp[y][x + 1].r += errorR * (7.0f / 16.0f);
                        temp[y][x + 1].g += errorG * (7.0f / 16.0f);
                        temp[y][x + 1].b += errorB * (7.0f / 16.0f);
                    }
                    if (y + 1 < image.height()) {
                        if (x > 0) {
                            temp[y + 1][x - 1].r += errorR * (3.0f / 16.0f);
                            temp[y + 1][x - 1].g += errorG * (3.0f / 16.0f);
                            temp[y + 1][x - 1].b += errorB * (3.0f / 16.0f);
                        }
                        temp[y + 1][x].r += errorR * (5.0f / 16.0f);
                        temp[y + 1][x].g += errorG * (5.0f / 16.0f);
                        temp[y + 1][x].b += errorB * (5.0f / 16.0f);
                        if (x + 1 < image.width()) {
                            temp[y + 1][x + 1].r += errorR * (1.0f / 16.0f);
                            temp[y + 1][x + 1].g += errorG * (1.0f / 16.0f);
                            temp[y + 1][x + 1].b += errorB * (1.0f / 16.0f);
                        }
                    }
                }
            }
        }
 
        else {
            std::cout << "🔧 Unknown dither type '" << ditherType << "'" << std::endl;
            exit(0);
        }
        return result;
    }
    static uint8_t clamp(int value) {
        return static_cast<uint8_t>(std::max(0, std::min(255, value)));
    }
private:

    static int findBestColor(const RGB& color, const std::vector<RGB>& palette, const std::string& paletteMode) {
        if (paletteMode == "cpc") {
            return findBestColorCPC(color, palette);
        }
        else if (paletteMode == "msx") {
            return findBestColorMSX(color, palette);
        }
        else {
            // Стандартный поиск
            int bestIndex = 0;
            int bestDist = 255 * 255 * 3;
            
            for (int i = 0; i < palette.size(); i++) {
                const RGB& palColor = palette[i];
                int dr = color.r - palColor.r;
                int dg = color.g - palColor.g;
                int db = color.b - palColor.b;
                int dist = dr*dr + dg*dg + db*db;
                
                if (dist < bestDist) {
                    bestDist = dist;
                    bestIndex = i;
                }
            }
            return bestIndex;
        }
    }
};

// ==================== УЛУЧШЕННЫЙ КОНВЕРТЕР ====================
class AlesteImageConverter {
private:
    bool verbose_;
    std::string dumpBmpPath_;
    
    // [Остальные методы остаются такими же...]
std::vector<uint8_t> encodeCPC1BPP(const SimpleImage& image, const std::vector<RGB>& palette) {
    std::cout << "🔧 Encoding: CPC 1bpp (2 colors) - Mode 2" << std::endl;
    
    if (palette.size() < 2) {
        std::cerr << "❌ ERROR: 1bpp requires exactly 2 colors in palette" << std::endl;
        return std::vector<uint8_t>();
    }
    
    std::vector<uint8_t> result;
    int width = image.width();
    int height = image.height();
    int bytesPerLine = width / 8; // 640px / 8 = 80 bytes
    assert(bytesPerLine == 80);
    
    std::cout << "   Mode 2: 640x200, 80 bytes/line" << std::endl;
    
    for (int y = 0; y < height; ++y) {
        for (int xByte = 0; xByte < bytesPerLine; ++xByte) {
            uint8_t byteVal = 0;
            
            for (int bit = 0; bit < 8; ++bit) {
                int pixelX = xByte * 8 + bit;
                if (pixelX >= width) continue;
                
                const RGB& color = image.pixel(pixelX, y);
                int colorIdx = AdvancedColorProcessor::findBestColorCPC(color, palette);
                
                // Mode 2: прямой порядок - бит 7 = pixel 0, бит 0 = pixel 7
                if (colorIdx == 1) {
                    byteVal |= (1 << (7 - bit));
                }
            }
            result.push_back(byteVal);
        }
    }
    
    std::cout << "✅ CPC 1bpp Mode 2: " << result.size() << " bytes" << std::endl;
    return result;
}

std::vector<uint8_t> encodeCPC2BPP(const SimpleImage& image, const std::vector<RGB>& palette) {
    std::cout << "🔧 Encoding: CPC 2bpp (4 colors) - Mode 1" << std::endl;
    
    std::vector<uint8_t> result;
    int width = image.width();
    int height = image.height();
    int bytesPerLine = width / 4; // 320px / 4 = 80 bytes
    assert(bytesPerLine == 80);

    std::cout << "   Mode 1: 320x200, 80 bytes/line" << std::endl;
    
    for (int y = 0; y < height; ++y) {
        for (int xByte = 0; xByte < bytesPerLine; ++xByte) {
            uint8_t byteVal = 0;
            
            // Собираем 4 пикселя
            int colorIndices[4];
            for (int pixel = 0; pixel < 4; ++pixel) {
                int pixelX = xByte * 4 + pixel;
                if (pixelX >= width) {
                    colorIndices[pixel] = 0;
                    continue;
                }
                
                const RGB& color = image.pixel(pixelX, y);
                colorIndices[pixel] = AdvancedColorProcessor::findBestColorCPC(color, palette);
            }
            
            // Mode 1: сложная упаковка:
            // bit7 = pixel0.bit1, bit6 = pixel1.bit1, bit5 = pixel2.bit1, bit4 = pixel3.bit1
            // bit3 = pixel0.bit0, bit2 = pixel1.bit0, bit1 = pixel2.bit0, bit0 = pixel3.bit0
            
            byteVal |= ((colorIndices[0] & 0x02) ? 0x80 : 0); // pixel0 bit1 -> bit7
            byteVal |= ((colorIndices[1] & 0x02) ? 0x40 : 0); // pixel1 bit1 -> bit6  
            byteVal |= ((colorIndices[2] & 0x02) ? 0x20 : 0); // pixel2 bit1 -> bit5
            byteVal |= ((colorIndices[3] & 0x02) ? 0x10 : 0); // pixel3 bit1 -> bit4
            
            byteVal |= ((colorIndices[0] & 0x01) ? 0x08 : 0); // pixel0 bit0 -> bit3
            byteVal |= ((colorIndices[1] & 0x01) ? 0x04 : 0); // pixel1 bit0 -> bit2
            byteVal |= ((colorIndices[2] & 0x01) ? 0x02 : 0); // pixel2 bit0 -> bit1
            byteVal |= ((colorIndices[3] & 0x01) ? 0x01 : 0); // pixel3 bit0 -> bit0
            
            result.push_back(byteVal);
        }
    }
    
    std::cout << "✅ CPC 2bpp Mode 1: " << result.size() << " bytes" << std::endl;
    return result;
}

std::vector<uint8_t> encodeCPC4BPP(const SimpleImage& image, const std::vector<RGB>& palette) {
    std::cout << "🔧 Encoding: CPC 4bpp (16 colors) - Mode 0" << std::endl;
    
    std::vector<uint8_t> result;
    int width = image.width();
    int height = image.height();
    int bytesPerLine = width / 2; // 160px / 2 = 80 bytes
    assert(bytesPerLine == 80);
 
    std::cout << "   Mode 0: 160x200, 80 bytes/line" << std::endl;
    
    for (int y = 0; y < height; ++y) {
        for (int xByte = 0; xByte < bytesPerLine; ++xByte) {
            uint8_t byteVal = 0;
            
            // Собираем 2 пикселя
            int colorIndices[2];
            for (int pixel = 0; pixel < 2; ++pixel) {
                int pixelX = xByte * 2 + pixel;
                if (pixelX >= width) {
                    colorIndices[pixel] = 0;
                    continue;
                }
                
                const RGB& color = image.pixel(pixelX, y);
                colorIndices[pixel] = AdvancedColorProcessor::findBestColorCPC(color, palette);
            }
            
            // Mode 0: самая сложная упаковка:
            // bit7 = pixel0.bit0, bit6 = pixel1.bit0
            // bit5 = pixel0.bit2, bit4 = pixel1.bit2  
            // bit3 = pixel0.bit1, bit2 = pixel1.bit1
            // bit1 = pixel0.bit3, bit0 = pixel1.bit3
            
            byteVal |= ((colorIndices[0] & 0x01) ? 0x80 : 0); // pixel0 bit0 -> bit7
            byteVal |= ((colorIndices[1] & 0x01) ? 0x40 : 0); // pixel1 bit0 -> bit6
            
            byteVal |= ((colorIndices[0] & 0x04) ? 0x20 : 0); // pixel0 bit2 -> bit5
            byteVal |= ((colorIndices[1] & 0x04) ? 0x10 : 0); // pixel1 bit2 -> bit4
            
            byteVal |= ((colorIndices[0] & 0x02) ? 0x08 : 0); // pixel0 bit1 -> bit3
            byteVal |= ((colorIndices[1] & 0x02) ? 0x04 : 0); // pixel1 bit1 -> bit2
            
            byteVal |= ((colorIndices[0] & 0x08) ? 0x02 : 0); // pixel0 bit3 -> bit1
            byteVal |= ((colorIndices[1] & 0x08) ? 0x01 : 0); // pixel1 bit3 -> bit0
            
            result.push_back(byteVal);
        }
    }
    
    std::cout << "✅ CPC 4bpp Mode 0: " << result.size() << " bytes" << std::endl;
    return result;
}
        
std::vector<uint8_t> encodeLinear(const SimpleImage& image, int bpp, const std::vector<RGB>& palette) {
    std::cout << "🔧 Encoding: Linear " << bpp << "bpp (" << (1 << bpp) << " colors)" << std::endl;
    
    std::vector<uint8_t> result;
    int width = image.width();
    int height = image.height();
    int pixelsPerByte = 8 / bpp;
    int bytesPerLine = (width + pixelsPerByte - 1) / pixelsPerByte;
    
    std::cout << "   Pixels per byte: " << pixelsPerByte << std::endl;
    std::cout << "   Bytes per line: " << bytesPerLine << std::endl;
    
    for (int y = 0; y < height; ++y) {
        for (int xByte = 0; xByte < bytesPerLine; ++xByte) {
            uint8_t byteVal = 0;
            
            for (int i = 0; i < pixelsPerByte; ++i) {
                int pixelX = xByte * pixelsPerByte + i;
                if (pixelX < width) {
                    const RGB& color = image.pixel(pixelX, y);
                    int colorIdx = findBestColor(color, palette);
                    
                    // ПРАВИЛЬНО: пиксель 0 = старшие биты
                    // pixelsPerByte-1-i даст обратный порядок (неправильный)
                    // i даст прямой порядок (пиксель 0 = младшие биты) - НЕПРАВИЛЬНО
                    // НУЖНО: пиксель 0 = старшие биты
                    int shift = (pixelsPerByte - 1 - i) * bpp;
                    byteVal |= (colorIdx << shift);
                }
            }
            result.push_back(byteVal);
        }
    }
    
    std::cout << "✅ Linear " << bpp << "bpp: " << result.size() << " bytes" << std::endl;
    return result;
}

std::vector<uint8_t> applyCPCAddressing(const std::vector<uint8_t>& data, int width, int height, int bpp) {
    std::cout << "🔄 Applying CPC addressing for " << width << "x" << height << " @" << bpp << "bpp" << std::endl;
    
    int bytesPerLine = 80;
    
    // CPC требует буфер 16KB (16384 байт) из-за адресации 0x800
    int bufferSize = 16384;  // 16KB CPC buffer
    std::vector<uint8_t> result(bufferSize, 0);
    
    std::cout << "   CPC buffer: " << bufferSize << " bytes (16KB)" << std::endl;
    
    for (int y = 0; y < height; ++y) {
        int character_row = y / 8;
        int line_in_char = y % 8;
        
        int dst_offset = line_in_char * 0x800 + character_row * bytesPerLine;
        int src_offset = y * bytesPerLine;
        
        if (dst_offset + bytesPerLine <= result.size() && 
            src_offset + bytesPerLine <= data.size()) {
            std::copy(data.begin() + src_offset,
                     data.begin() + src_offset + bytesPerLine,
                     result.begin() + dst_offset);
        } else {
            std::cout << "⚠️  CPC addressing overflow at line " << y 
                     << " (src: " << src_offset << ".." << (src_offset + bytesPerLine)
                     << ", dst: " << dst_offset << ".." << (dst_offset + bytesPerLine) 
                     << ", max: " << result.size() << ")" << std::endl;
        }
    }
    
    return result;
}
    
    std::vector<uint8_t> createInfoChunk(int width, int height, int bpp, 
                                        const std::string& colorEncoding,
                                        const std::string& addressEncoding,
                                        const std::string& paletteMode,
                                        const std::string& ditherType) {
        std::string info = 
            "Width: " + std::to_string(width) + "\n" +
            "Height: " + std::to_string(height) + "\n" + 
            "BPP: " + std::to_string(bpp) + "\n" +
            "ColorEncoding: " + colorEncoding + "\n" +
            "AddressEncoding: " + addressEncoding + "\n" +
            "PaletteMode: " + paletteMode + "\n" +
            "Dithering: " + ditherType + "\n";
        
        return std::vector<uint8_t>(info.begin(), info.end());
    }
    
    int findBestColor(const RGB& color, const std::vector<RGB>& palette) {
        int bestIndex = 0;
        int bestDist = 255 * 255 * 3;
        
        for (int i = 0; i < palette.size(); i++) {
            const RGB& palColor = palette[i];
            int dr = color.r - palColor.r;
            int dg = color.g - palColor.g;
            int db = color.b - palColor.b;
            int dist = dr*dr + dg*dg + db*db;
            
            if (dist < bestDist) {
                bestDist = dist;
                bestIndex = i;
            }
        }
        return bestIndex;
    }

public:
    AlesteImageConverter(bool verbose = false) : verbose_(verbose) {}
    
    void setDumpBmpPath(const std::string& path) {
        dumpBmpPath_ = path;
    }
    
    bool convert(const std::string& inputFile, const std::string& outputFile,
                 int width, int height, int bpp, 
                 const std::string& colorEncoding,
                 const std::string& addressEncoding,
                 const std::string& paletteMode,
                 const std::string& ditherType) {
        
        std::cout << "🚀 STARTING CONVERSION" << std::endl;
        std::cout << "📁 Input: " << inputFile << std::endl;
        std::cout << "📁 Output: " << outputFile << std::endl;
        std::cout << "🎯 Target: " << width << "x" << height << " @" << bpp << "bpp" << std::endl;
        std::cout << "⚙️  Settings: " << colorEncoding << " color, " 
                  << addressEncoding << " addressing, " << paletteMode << " palette" << std::endl;
        std::cout << "🎨 Dithering: " << ditherType << std::endl;
        
        // Проверка параметров
        if (width != 160 && width != 320 && width != 640) {
            std::cerr << "❌ ERROR: Width must be 160, 320 or 640" << std::endl;
            return false;
        }
        if (height != 200) {
            std::cerr << "❌ ERROR: Height must be 200" << std::endl;
            return false;
        }
        if (bpp != 1 && bpp != 2 && bpp != 4 && bpp != 8) {
            std::cerr << "❌ ERROR: BPP must be 1, 2, 4 or 8" << std::endl;
            return false;
        }
        
        // Загрузка изображения
        SimpleImage image;
        bool loaded = false;
        
        if (inputFile == "-") {
            loaded = image.loadFromStdin();
        } else if (inputFile.length() > 4) {
            std::string ext = inputFile.substr(inputFile.length() - 4);
            std::transform(ext.begin(), ext.end(), ext.begin(), ::tolower);
            
            if (ext == ".bmp") {
                loaded = image.loadBMP(inputFile);
            } else if (ext == ".ppm") {
                loaded = image.loadPPM(inputFile);
            }
        }
        
        if (!loaded) {
            std::cerr << "❌ ERROR: Cannot load image" << std::endl;
            return false;
        }
        
        std::cout << "✅ Source image: " << image.width() << "x" << image.height() << std::endl;
        
        // Изменение размера
        if (image.width() != width || image.height() != height) {
            if (image.width() > width || image.height() > height) {
                image.resizeBilinear(width, height);
            } else {
                image.resize(width, height);
            }
        }
        
        // Создание палитры
        std::vector<RGB> palette;
        int maxColors = 1 << bpp;
        
        // ИСПОЛЬЗУЕМ УЛУЧШЕННЫЙ ПРОЦЕССОР
        palette = AdvancedColorProcessor::selectAdaptivePalette(image, maxColors, paletteMode);
        
        // Квантование с дитерингом
        SimpleImage quantizedImage = AdvancedColorProcessor::quantizeWithDithering(
            image, palette, ditherType, paletteMode);
        
        // Сохраняем BMP для оценки качества (если указано)
        if (!dumpBmpPath_.empty()) {
            std::cout << "💾 Saving quality check BMP: " << dumpBmpPath_ << std::endl;
            std::cout << "   Colors in quantized image: ";
            
            // Проверяем уникальные цвета в квантованном изображении
            std::unordered_map<uint32_t, int> uniqueColors;
            for (const auto& pixel : quantizedImage.getPixels()) {
                uint32_t key = (pixel.r << 16) | (pixel.g << 8) | pixel.b;
                uniqueColors[key]++;
            }
            std::cout << uniqueColors.size() << " unique colors" << std::endl;
            
            bool saved = quantizedImage.saveBMP(dumpBmpPath_);
            if (!saved) {
                std::cerr << "❌ Failed to save BMP for quality check" << std::endl;
            }
        }
        
        // Кодирование пикселей
        std::vector<uint8_t> pixelData;
        
        if (colorEncoding == "cpc") {
            switch (bpp) {
                case 1: pixelData = encodeCPC1BPP(quantizedImage, palette); break;
                case 2: pixelData = encodeCPC2BPP(quantizedImage, palette); break;
                case 4: pixelData = encodeCPC4BPP(quantizedImage, palette); break;
                default: pixelData = encodeLinear(quantizedImage, bpp, palette); break;
            }
        } else {
            pixelData = encodeLinear(quantizedImage, bpp, palette);
        }
        
        // Применение адресации
        if (addressEncoding == "cpc") {
            pixelData = applyCPCAddressing(pixelData, width, height, bpp);
        }
        
        // Подготовка данных
        std::vector<uint8_t> paletteData = AdvancedColorProcessor::savePalette(palette, paletteMode);
        std::vector<uint8_t> infoData = createInfoChunk(width, height, bpp, colorEncoding, addressEncoding, paletteMode, ditherType);
        
        // Создание структуры файла
        std::vector<PIXChunk> chunks;
        chunks.push_back(PIXChunk("INFO", infoData.size()));
        chunks.push_back(PIXChunk("PAL ", paletteData.size()));
        chunks.push_back(PIXChunk("DATA", pixelData.size()));
        
        uint32_t total_size = 20;
        for (const auto& chunk : chunks) {
            total_size += 8 + chunk.data_size;
        }
        
        // Создание заголовка
        PIXHeader header;
        header.total_size = total_size;
        header.chunk_count = chunks.size();
        header.first_chunk_offset = 20;
        
        // Запись файла
        std::ostream* outStream = &std::cout;
        std::ofstream fileStream;
        
        if (outputFile != "-") {
            fileStream.open(outputFile, std::ios::binary);
            if (!fileStream) {
                std::cerr << "❌ ERROR: Cannot create output file: " << outputFile << std::endl;
                return false;
            }
            outStream = &fileStream;
        }
        
        std::cout << "💾 Writing file..." << std::endl;
        
        // [Запись файла - без изменений]
        outStream->write(header.magic, 12);
        
        uint32_t total_size_be = ((total_size >> 24) & 0xFF) | ((total_size >> 8) & 0xFF00) | 
                                ((total_size << 8) & 0xFF0000) | ((total_size << 24) & 0xFF000000);
        outStream->write(reinterpret_cast<const char*>(&total_size_be), 4);
        
        uint16_t chunk_count_be = ((chunks.size() >> 8) & 0xFF) | ((chunks.size() << 8) & 0xFF00);
        outStream->write(reinterpret_cast<const char*>(&chunk_count_be), 2);
        
        uint16_t first_offset_be = ((20 >> 8) & 0xFF) | ((20 << 8) & 0xFF00);
        outStream->write(reinterpret_cast<const char*>(&first_offset_be), 2);
        
        for (size_t i = 0; i < chunks.size(); ++i) {
            const auto& chunk = chunks[i];
            const std::vector<uint8_t>* chunk_data = nullptr;
            switch(i) {
                case 0: chunk_data = &infoData; break;
                case 1: chunk_data = &paletteData; break;
                case 2: chunk_data = &pixelData; break;
            }
            
            if (!chunk_data) continue;
            
            outStream->write(chunk.type, 4);
            
            uint32_t data_size_be = ((chunk.data_size >> 24) & 0xFF) | ((chunk.data_size >> 8) & 0xFF00) | 
                                   ((chunk.data_size << 8) & 0xFF0000) | ((chunk.data_size << 24) & 0xFF000000);
            outStream->write(reinterpret_cast<const char*>(&data_size_be), 4);
            
            outStream->write(reinterpret_cast<const char*>(chunk_data->data()), chunk.data_size);
            
            std::cout << "   📦 " << std::string(chunk.type, 4) << ": " << chunk.data_size << " bytes" << std::endl;
        }
        
        // Финальный отчет
        std::cout << "🎉 CONVERSION COMPLETE" << std::endl;
        std::cout << "==========================================" << std::endl;
        std::cout << "📊 SUMMARY:" << std::endl;
        std::cout << "   📁 Output: " << outputFile << std::endl;
        std::cout << "   📐 Resolution: " << width << "x" << height << " pixels" << std::endl;
        std::cout << "   🎨 Color depth: " << bpp << "bpp (" << (1 << bpp) << " colors)" << std::endl;
        std::cout << "   🎯 Encoding: " << colorEncoding << " color, " << addressEncoding << " addressing" << std::endl;
        std::cout << "   🎨 Palette: " << paletteMode << " (" << palette.size() << " colors)" << std::endl;
        std::cout << "   ✨ Dithering: " << ditherType << std::endl;
        std::cout << "   💾 Pixel data: " << pixelData.size() << " bytes" << std::endl;
        std::cout << "   📄 File size: " << total_size << " bytes" << std::endl;
        
        if (!dumpBmpPath_.empty()) {
            std::cout << "   🔍 Quality check: " << dumpBmpPath_ << std::endl;
        }
        
        std::cout << "==========================================" << std::endl;
        
        return true;
    }
};

// ==================== MAIN ====================
void showUsage() {
    std::cout << "Aleste Image Converter v2 (ENHANCED VERSION)" << std::endl;
    std::cout << "Usage: pix_convert input output [options]" << std::endl;
    std::cout << std::endl;
    std::cout << "Arguments:" << std::endl;
    std::cout << "  input          Input file (BMP, PPM) or '-' for stdin" << std::endl;
    std::cout << "  output         Output .PIX file or '-' for stdout" << std::endl;
    std::cout << std::endl;
    std::cout << "Options:" << std::endl;
    std::cout << "  --width 160|320|640     Output width (required)" << std::endl;
    std::cout << "  --height 200            Output height (required)" << std::endl;  
    std::cout << "  --bpp 1|2|4|8           Bits per pixel (required)" << std::endl;
    std::cout << "  --color-encoding cpc|linear" << std::endl;
    std::cout << "  --address-encoding cpc|linear" << std::endl;
    std::cout << "  --palette-mode cpc|msx|8bit|12bit" << std::endl;
    std::cout << "  --dither none|ordered|floyd|random  Dithering algorithm" << std::endl;
    std::cout << "  --dump-bmp file.bmp     Save quality check BMP" << std::endl;
    std::cout << "  -v, --verbose           Show detailed diagnostics" << std::endl;
    std::cout << std::endl;
    std::cout << "CPC Mode Compatibility:" << std::endl;
    std::cout << "  Mode 0 (4bpp): 160x200, 16 colors" << std::endl;
    std::cout << "  Mode 1 (2bpp): 320x200, 4 colors" << std::endl;
    std::cout << "  Mode 2 (1bpp): 640x200, 2 colors" << std::endl;
    std::cout << std::endl;
    std::cout << "Examples:" << std::endl;
    std::cout << "  pix_convert image.bmp output.pix --width 320 --height 200 --bpp 4 --dither floyd" << std::endl;
    std::cout << "  pix_convert image.ppm game.pix --width 640 --height 200 --bpp 1 --palette-mode msx --dump-bmp check.bmp" << std::endl;
}

bool validateParameters(int width, int height, int bpp, 
                       const std::string& colorEncoding,
                       const std::string& addressEncoding,
                       const std::string& paletteMode) {
    // Проверка разрешения
    if (width != 160 && width != 320 && width != 640) {
        std::cerr << "❌ ERROR: Width must be 160, 320 or 640 pixels" << std::endl;
        return false;
    }
    
    if (height != 200) {
        std::cerr << "❌ ERROR: Height must be 200 pixels" << std::endl;
        return false;
    }
    
    // Проверка битности
    if (bpp != 1 && bpp != 2 && bpp != 4 && bpp != 8) {
        std::cerr << "❌ ERROR: BPP must be 1, 2, 4 or 8" << std::endl;
        return false;
    }
    
    // Проверка совместимости CPC режимов
    if (colorEncoding == "cpc") {
        switch (bpp) {
            case 1:
                if (width != 640) {
                    std::cerr << "❌ ERROR: CPC Mode 2 (1bpp) requires 640px width" << std::endl;
                    return false;
                }
                break;
            case 2:
                if (width != 320) {
                    std::cerr << "❌ ERROR: CPC Mode 1 (2bpp) requires 320px width" << std::endl;
                    return false;
                }
                break;
            case 4:
                if (width != 160) {
                    std::cerr << "❌ ERROR: CPC Mode 0 (4bpp) requires 160px width" << std::endl;
                    return false;
                }
                break;
            case 8:
                std::cerr << "❌ ERROR: CPC does not support 8bpp mode" << std::endl;
                return false;
        }
        
        // Проверка палитры для CPC
        if (paletteMode != "cpc") {
            std::cerr << "⚠️  WARNING: CPC color encoding works best with CPC palette mode" << std::endl;
        }
    }
    
    // Проверка MSX палитры
    if (paletteMode == "msx") {
        if (bpp > 4) {
            std::cerr << "❌ ERROR: MSX palette supports maximum 4bpp (16 colors)" << std::endl;
            return false;
        }
    }
    
    // Проверка кодировок
    if (colorEncoding != "cpc" && colorEncoding != "linear") {
        std::cerr << "❌ ERROR: Color encoding must be 'cpc' or 'linear'" << std::endl;
        return false;
    }
    
    if (addressEncoding != "cpc" && addressEncoding != "linear") {
        std::cerr << "❌ ERROR: Address encoding must be 'cpc' or 'linear'" << std::endl;
        return false;
    }
    
    if (paletteMode != "cpc" && paletteMode != "msx" && paletteMode != "8bit" && paletteMode != "12bit") {
        std::cerr << "❌ ERROR: Palette mode must be 'cpc', 'msx', '8bit' or '12bit'" << std::endl;
        return false;
    }
    
    return true;
}

int main(int argc, char* argv[]) {
    if (argc < 3) {
        showUsage();
        return 1;
    }
    
    std::string inputFile = argv[1];
    std::string outputFile = argv[2];
    
    // Параметры по умолчанию
    int width = 0;
    int height = 0;
    int bpp = 0;
    std::string colorEncoding = "linear";
    std::string addressEncoding = "linear";
    std::string paletteMode = "cpc";
    std::string ditherType = "none";
    std::string dumpBmpPath = "";
    bool verbose = false;
    
    // Парсим аргументы
    for (int i = 3; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg == "--width" && i + 1 < argc) {
            width = std::stoi(argv[++i]);
        } else if (arg == "--height" && i + 1 < argc) {
            height = std::stoi(argv[++i]);
        } else if (arg == "--bpp" && i + 1 < argc) {
            bpp = std::stoi(argv[++i]);
        } else if (arg == "--color-encoding" && i + 1 < argc) {
            colorEncoding = argv[++i];
        } else if (arg == "--address-encoding" && i + 1 < argc) {
            addressEncoding = argv[++i];
        } else if (arg == "--palette-mode" && i + 1 < argc) {
            paletteMode = argv[++i];
        } else if (arg == "--dither" && i + 1 < argc) {
            ditherType = argv[++i];
        } else if (arg == "--dump-bmp" && i + 1 < argc) {
            dumpBmpPath = argv[++i];
        } else if (arg == "-v" || arg == "--verbose") {
            verbose = true;
        } else {
            std::cerr << "❌ Unknown option: " << arg << std::endl;
            showUsage();
            return 1;
        }
    }
    
    // Проверка обязательных параметров
    if (width == 0 || height == 0 || bpp == 0) {
        std::cerr << "❌ ERROR: --width, --height, and --bpp are required" << std::endl;
        showUsage();
        return 1;
    }
    
    // Валидация параметров
    if (!validateParameters(width, height, bpp, colorEncoding, addressEncoding, paletteMode)) {
        std::cerr << std::endl;
        showUsage();
        return 1;
    }
    
    // Дополнительные предупреждения
    if (colorEncoding == "cpc" && addressEncoding != "cpc") {
        std::cout << "⚠️  NOTE: CPC color encoding works best with CPC address encoding" << std::endl;
    }
    
    if (ditherType != "none" && ditherType != "ordered" && ditherType != "floyd" && ditherType != "random") {
        std::cerr << "❌ ERROR: Dither type must be 'none', 'ordered', 'floyd' or 'random'" << std::endl;
        return 1;
    }
    
    AlesteImageConverter converter(verbose);
    if (!dumpBmpPath.empty()) {
        converter.setDumpBmpPath(dumpBmpPath);
    }
    
    return converter.convert(inputFile, outputFile, width, height, bpp, 
                            colorEncoding, addressEncoding, paletteMode, ditherType) ? 0 : 1;
}