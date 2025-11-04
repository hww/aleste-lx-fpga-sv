#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <string>
#include <algorithm>
#include <cmath>
#include <limits>

// ==================== СТРУКТУРЫ ДАННЫХ ====================
struct RGB {
    uint8_t r, g, b;
    RGB() : r(0), g(0), b(0) {}
    RGB(uint8_t r, uint8_t g, uint8_t b) : r(r), g(g), b(b) {}
    bool operator==(const RGB& other) const {
        return r == other.r && g == other.g && b == other.b;
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
    
    uint16_t width() const { return width_; }
    uint16_t height() const { return height_; }
    const RGB& pixel(int x, int y) const { return pixels[y * width_ + x]; }
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
    
    // Билинейная интерполяция для лучшего качества
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

// ==================== КОНВЕРТЕР ====================
class AlesteImageConverter {
private:
    bool verbose_;
    
    int findNearestColor(const RGB& color, const std::vector<RGB>& palette) {
        int bestIndex = 0;
        int bestDistance = std::numeric_limits<int>::max();
        
        for (size_t i = 0; i < palette.size(); ++i) {
            int dr = static_cast<int>(color.r) - static_cast<int>(palette[i].r);
            int dg = static_cast<int>(color.g) - static_cast<int>(palette[i].g);
            int db = static_cast<int>(color.b) - static_cast<int>(palette[i].b);
            int distance = dr*dr + dg*dg + db*db;
            
            if (distance < bestDistance) {
                bestDistance = distance;
                bestIndex = i;
            }
        }
        
        return bestIndex;
    }
    
    std::vector<RGB> extractPalette(const SimpleImage& image, int maxColors) {
        std::cout << "🎨 Extracting palette (max " << maxColors << " colors)" << std::endl;
        
        std::vector<RGB> palette;
        const std::vector<RGB>& colors = image.getPixels();
        
        // Простой алгоритм - первые уникальные цвета
        for (const auto& color : colors) {
            bool found = false;
            for (const auto& pc : palette) {
                if (color == pc) {
                    found = true;
                    break;
                }
            }
            if (!found && palette.size() < static_cast<size_t>(maxColors)) {
                palette.push_back(color);
            }
        }
        
        // Дополняем если нужно
        while (palette.size() < static_cast<size_t>(maxColors)) {
            uint8_t val = static_cast<uint8_t>((palette.size() * 255) / maxColors);
            palette.push_back(RGB(val, val, val));
        }
        
        std::cout << "✅ Palette: " << palette.size() << " colors" << std::endl;
        return palette;
    }
    
    // Улучшенный алгоритм палитры (медианный cut)
    std::vector<RGB> extractAdaptivePalette(const SimpleImage& image, int maxColors) {
        std::cout << "🎨 Extracting adaptive palette (max " << maxColors << " colors)" << std::endl;
        
        // Пока используем простой алгоритм, но можно улучшить
        return extractPalette(image, maxColors);
    }
    
    // Кодировка CPC для 1bpp (Mode 2)
    std::vector<uint8_t> encodeCPC1BPP(const SimpleImage& image, const std::vector<RGB>& palette) {
        std::cout << "🔧 Encoding: CPC 1bpp (monochrome)" << std::endl;
        
        std::vector<uint8_t> result;
        int width = image.width();
        int height = image.height();
        int bytesPerLine = width / 8;
        
        std::cout << "   Bytes per line: " << bytesPerLine << std::endl;
        std::cout << "   Total lines: " << height << std::endl;
        
        for (int y = 0; y < height; ++y) {
            for (int xByte = 0; xByte < bytesPerLine; ++xByte) {
                uint8_t byteVal = 0;
                
                // Для шашечницы: клетка 64×8 пикселей (8 байт × 8 строк)
                int cellX = xByte / 8;    // 0-9 (10 клеток по горизонтали)
                int cellY = y / 8;        // 0-24 (25 клеток по вертикали)
                bool isWhite = (cellX + cellY) % 2 == 0;
                
                // Заполняем весь байт одним цветом
                byteVal = isWhite ? 0xFF : 0x00;
                result.push_back(byteVal);
            }
        }
        
        std::cout << "✅ CPC 1bpp: " << result.size() << " bytes" << std::endl;
        return result;
    }
    
    // Кодировка CPC для 2bpp (Mode 1)
    std::vector<uint8_t> encodeCPC2BPP(const SimpleImage& image, const std::vector<RGB>& palette) {
        std::cout << "🔧 Encoding: CPC 2bpp (4 colors)" << std::endl;
        
        std::vector<uint8_t> result;
        int bytesPerLine = image.width() / 4;
        
        for (int y = 0; y < image.height(); ++y) {
            for (int x = 0; x < bytesPerLine; ++x) {
                uint8_t byteVal = 0;
                for (int pixel = 0; pixel < 4; ++pixel) {
                    int pixelX = x * 4 + pixel;
                    const RGB& color = image.pixel(pixelX, y);
                    int colorIdx = findNearestColor(color, palette);
                    
                    // CPC Mode 1 битовая упаковка
                    switch (pixel) {
                        case 0: byteVal |= ((colorIdx & 0x03) << 6); break;
                        case 1: byteVal |= ((colorIdx & 0x03) << 4); break;
                        case 2: byteVal |= ((colorIdx & 0x03) << 2); break;
                        case 3: byteVal |= ((colorIdx & 0x03) << 0); break;
                    }
                }
                result.push_back(byteVal);
            }
        }
        
        std::cout << "✅ CPC 2bpp: " << result.size() << " bytes" << std::endl;
        return result;
    }
    
    // Кодировка CPC для 4bpp (Mode 0)
    std::vector<uint8_t> encodeCPC4BPP(const SimpleImage& image, const std::vector<RGB>& palette) {
        std::cout << "🔧 Encoding: CPC 4bpp (16 colors)" << std::endl;
        
        std::vector<uint8_t> result;
        int bytesPerLine = image.width() / 2;
        
        for (int y = 0; y < image.height(); ++y) {
            for (int x = 0; x < bytesPerLine; ++x) {
                uint8_t byteVal = 0;
                for (int pixel = 0; pixel < 2; ++pixel) {
                    int pixelX = x * 2 + pixel;
                    const RGB& color = image.pixel(pixelX, y);
                    int colorIdx = findNearestColor(color, palette);
                    
                    // CPC Mode 0 битовая упаковка
                    if (pixel == 0) {
                        byteVal |= ((colorIdx & 0x0F) << 4);
                    } else {
                        byteVal |= (colorIdx & 0x0F);
                    }
                }
                result.push_back(byteVal);
            }
        }
        
        std::cout << "✅ CPC 4bpp: " << result.size() << " bytes" << std::endl;
        return result;
    }
    
    // Linear кодировка для любого BPP
    std::vector<uint8_t> encodeLinear(const SimpleImage& image, int bpp, const std::vector<RGB>& palette) {
        std::cout << "🔧 Encoding: Linear " << bpp << "bpp (" << (1 << bpp) << " colors)" << std::endl;
        
        std::vector<uint8_t> result;
        int pixelsPerByte = 8 / bpp;
        int bytesPerLine = image.width() / pixelsPerByte;
        
        std::cout << "   Pixels per byte: " << pixelsPerByte << std::endl;
        std::cout << "   Bytes per line: " << bytesPerLine << std::endl;
        
        for (int y = 0; y < image.height(); ++y) {
            for (int x = 0; x < bytesPerLine; ++x) {
                uint8_t byteVal = 0;
                for (int i = 0; i < pixelsPerByte; ++i) {
                    int pixelX = x * pixelsPerByte + i;
                    if (pixelX < image.width()) {
                        const RGB& color = image.pixel(pixelX, y);
                        int colorIdx = findNearestColor(color, palette);
                        byteVal |= (colorIdx << (bpp * (pixelsPerByte - 1 - i)));
                    }
                }
                result.push_back(byteVal);
            }
        }
        
        std::cout << "✅ Linear " << bpp << "bpp: " << result.size() << " bytes" << std::endl;
        return result;
    }
    
    // CPC адресация (чересстрочная)
    std::vector<uint8_t> applyCPCAddressing(const std::vector<uint8_t>& data, int width, int height, int bpp) {
        // CPC адресация требует 16KB буфера (8×2048)
        int cpcBufferSize = 16384; // 16KB для CPC
        std::vector<uint8_t> result(cpcBufferSize, 0); // Инициализируем нулями!
        
        int bytesPerLine = (width * bpp + 7) / 8;
        
        std::cout << "   CPC addressing: " << height << " lines, " << bytesPerLine << " bytes/line" << std::endl;
        std::cout << "   CPC buffer: " << cpcBufferSize << " bytes (16KB)" << std::endl;
        
        for (int y = 0; y < height; ++y) {
            int row = y % 8;
            int char_pos_y = (y - row) / 8;
            int dst_addr = row * 2048 + char_pos_y * bytesPerLine;
            
            int src_offset = y * bytesPerLine;
            int dst_offset = dst_addr;
            
            if (src_offset + bytesPerLine <= data.size() && dst_offset + bytesPerLine <= result.size()) {
                std::copy(data.begin() + src_offset, 
                        data.begin() + src_offset + bytesPerLine,
                        result.begin() + dst_offset);
            } else {
                std::cout << "⚠️  CPC addressing: offset out of range! y=" << y 
                        << ", src=" << src_offset << "/" << data.size()
                        << ", dst=" << dst_offset << "/" << result.size() << std::endl;
                // Заполняем нулями оставшуюся часть
                break;
            }
        }
        
        // Обрезаем до реального размера данных (если нужно)
        // Но для CPC лучше оставить 16KB
        
        return result;
    }
    
    std::vector<uint8_t> createInfoChunk(int width, int height, int bpp, 
                                        const std::string& colorEncoding,
                                        const std::string& addressEncoding,
                                        const std::string& paletteMode) {
        std::string info = 
            "Width: " + std::to_string(width) + "\n" +
            "Height: " + std::to_string(height) + "\n" + 
            "BPP: " + std::to_string(bpp) + "\n" +
            "ColorEncoding: " + colorEncoding + "\n" +
            "AddressEncoding: " + addressEncoding + "\n" +
            "PaletteMode: " + paletteMode + "\n";
        
        return std::vector<uint8_t>(info.begin(), info.end());
    }

public:
    AlesteImageConverter(bool verbose = false) : verbose_(verbose) {}
    
    bool convert(const std::string& inputFile, const std::string& outputFile,
                 int width, int height, int bpp, 
                 const std::string& colorEncoding,
                 const std::string& addressEncoding,
                 const std::string& paletteMode) {
        
        // ==================== НАЧАЛО КОНВЕРТАЦИИ ====================
        std::cout << "🚀 STARTING CONVERSION" << std::endl;
        std::cout << "📁 Input: " << inputFile << std::endl;
        std::cout << "📁 Output: " << outputFile << std::endl;
        std::cout << "🎯 Target: " << width << "x" << height << " @" << bpp << "bpp" << std::endl;
        std::cout << "⚙️  Settings: " << colorEncoding << " color, " 
                  << addressEncoding << " addressing, " << paletteMode << " palette" << std::endl;
        
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
        
        // ==================== ЗАГРУЗКА ИЗОБРАЖЕНИЯ ====================
        SimpleImage image;
        bool loaded = false;
        
        if (inputFile == "-") {
            std::cout << "📥 Loading from stdin..." << std::endl;
            loaded = image.loadFromStdin();
        } else if (inputFile.length() > 4) {
            std::string ext = inputFile.substr(inputFile.length() - 4);
            std::transform(ext.begin(), ext.end(), ext.begin(), ::tolower);
            
            if (ext == ".bmp") {
                std::cout << "📥 Loading BMP..." << std::endl;
                loaded = image.loadBMP(inputFile);
            } else if (ext == ".ppm") {
                std::cout << "📥 Loading PPM..." << std::endl;
                loaded = image.loadPPM(inputFile);
            } else {
                std::cerr << "❌ ERROR: Unsupported file format" << std::endl;
                return false;
            }
        }
        
        if (!loaded) {
            std::cerr << "❌ ERROR: Cannot load image" << std::endl;
            return false;
        }
        
        std::cout << "✅ Source image: " << image.width() << "x" << image.height() << std::endl;
        
        // ==================== ИЗМЕНЕНИЕ РАЗМЕРА ====================
        if (image.width() != width || image.height() != height) {
            if (image.width() > width || image.height() > height) {
                // Уменьшение - используем билинейную интерполяцию для лучшего качества
                image.resizeBilinear(width, height);
            } else {
                // Увеличение - простой метод
                image.resize(width, height);
            }
        }
        
        // ==================== СОЗДАНИЕ ПАЛИТРЫ ====================
        std::vector<RGB> palette;
        int maxColors = 1 << bpp;
        
        if (paletteMode == "cpc") {
            std::cout << "🎨 Using CPC palette (" << maxColors << " colors)" << std::endl;
            palette = CPC_PALETTE;
            if (maxColors < palette.size()) {
                palette.resize(maxColors);
            }
        } else if (paletteMode == "8bit") {
            palette = extractAdaptivePalette(image, maxColors);
        } else {
            palette = extractPalette(image, maxColors);
        }
        
        // ==================== КОДИРОВАНИЕ ПИКСЕЛЕЙ ====================
        std::vector<uint8_t> pixelData;
        
        if (colorEncoding == "cpc") {
            switch (bpp) {
                case 1: 
                    pixelData = encodeCPC1BPP(image, palette); 
                    break;
                case 2: 
                    pixelData = encodeCPC2BPP(image, palette); 
                    break;
                case 4: 
                    pixelData = encodeCPC4BPP(image, palette); 
                    break;
                default: 
                    std::cout << "⚠️  CPC mode not supported for " << bpp << "bpp, using linear" << std::endl;
                    pixelData = encodeLinear(image, bpp, palette); 
                    break;
            }
        } else {
            pixelData = encodeLinear(image, bpp, palette);
        }
        
        // ==================== ПРИМЕНЕНИЕ АДРЕСАЦИИ ====================
        if (addressEncoding == "cpc") {
            pixelData = applyCPCAddressing(pixelData, width, height, bpp);
        }
        
        // ==================== ПОДГОТОВКА ДАННЫХ ====================
        std::vector<uint8_t> paletteData;
        for (const auto& color : palette) {
            paletteData.push_back(color.r);
            paletteData.push_back(color.g);
            paletteData.push_back(color.b);
        }
        
        std::vector<uint8_t> infoData = createInfoChunk(width, height, bpp, colorEncoding, addressEncoding, paletteMode);
        
        // ==================== СОЗДАНИЕ СТРУКТУРЫ ФАЙЛА ====================
        std::vector<PIXChunk> chunks;
        chunks.push_back(PIXChunk("INFO", infoData.size()));
        chunks.push_back(PIXChunk("PAL ", paletteData.size()));
        chunks.push_back(PIXChunk("DATA", pixelData.size()));
        
        // Вычисляем общий размер
        uint32_t total_size = 20; // заголовок
        for (const auto& chunk : chunks) {
            total_size += 8 + chunk.data_size; // тип(4) + размер(4) + данные
        }
        
        // ==================== СОЗДАНИЕ ЗАГОЛОВКА ====================
        PIXHeader header;
        header.total_size = total_size;
        header.chunk_count = chunks.size();
        header.first_chunk_offset = 20;
        
        // ==================== ЗАПИСЬ ФАЙЛА ====================
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
        
        // Записываем заголовок (BIG-ENDIAN)
        outStream->write(header.magic, 12);
        
        uint32_t total_size_be = ((total_size >> 24) & 0xFF) | ((total_size >> 8) & 0xFF00) | 
                                ((total_size << 8) & 0xFF0000) | ((total_size << 24) & 0xFF000000);
        outStream->write(reinterpret_cast<const char*>(&total_size_be), 4);
        
        uint16_t chunk_count_be = ((chunks.size() >> 8) & 0xFF) | ((chunks.size() << 8) & 0xFF00);
        outStream->write(reinterpret_cast<const char*>(&chunk_count_be), 2);
        
        uint16_t first_offset_be = ((20 >> 8) & 0xFF) | ((20 << 8) & 0xFF00);
        outStream->write(reinterpret_cast<const char*>(&first_offset_be), 2);
        
        // Записываем чанки (BIG-ENDIAN)
        for (size_t i = 0; i < chunks.size(); ++i) {
            const auto& chunk = chunks[i];
            const std::vector<uint8_t>* chunk_data = nullptr;
            switch(i) {
                case 0: chunk_data = &infoData; break;
                case 1: chunk_data = &paletteData; break;
                case 2: chunk_data = &pixelData; break;
            }
            
            if (!chunk_data) continue;
            
            // Заголовок чанка
            outStream->write(chunk.type, 4);
            
            uint32_t data_size_be = ((chunk.data_size >> 24) & 0xFF) | ((chunk.data_size >> 8) & 0xFF00) | 
                                   ((chunk.data_size << 8) & 0xFF0000) | ((chunk.data_size << 24) & 0xFF000000);
            outStream->write(reinterpret_cast<const char*>(&data_size_be), 4);
            
            // Данные
            outStream->write(reinterpret_cast<const char*>(chunk_data->data()), chunk.data_size);
            
            std::cout << "   📦 " << std::string(chunk.type, 4) << ": " << chunk.data_size << " bytes" << std::endl;
        }
        
        // ==================== ФИНАЛЬНЫЙ ОТЧЕТ ====================
        std::cout << "🎉 CONVERSION COMPLETE" << std::endl;
        std::cout << "==========================================" << std::endl;
        std::cout << "📊 SUMMARY:" << std::endl;
        std::cout << "   📁 Output: " << outputFile << std::endl;
        std::cout << "   📐 Resolution: " << width << "x" << height << " pixels" << std::endl;
        std::cout << "   🎨 Color depth: " << bpp << "bpp (" << (1 << bpp) << " colors)" << std::endl;
        std::cout << "   🎯 Encoding: " << colorEncoding << " color, " << addressEncoding << " addressing" << std::endl;
        std::cout << "   🎨 Palette: " << paletteMode << " (" << palette.size() << " colors)" << std::endl;
        std::cout << "   💾 Pixel data: " << pixelData.size() << " bytes" << std::endl;
        std::cout << "   📄 File size: " << total_size << " bytes" << std::endl;
        
        // Расчет использования памяти
        int memory_used = pixelData.size();
        std::cout << "   🧮 Memory usage: " << memory_used << " bytes (" 
                  << (memory_used + 1023) / 1024 << "KB)" << std::endl;
        
        // Проверка ограничений
        if (addressEncoding == "cpc" && memory_used > 16384) {
            std::cout << "   ⚠️  Warning: CPC addressing designed for 16KB memory" << std::endl;
        }
        
        if (memory_used > 65536) {
            std::cout << "   ⚠️  Warning: Exceeds 64KB memory limit" << std::endl;
        }
        
        std::cout << "==========================================" << std::endl;
        
        return true;
    }
};

// ==================== MAIN ====================
void showUsage() {
    std::cout << "Aleste Image Converter v2 (FULL DIAGNOSTIC VERSION)" << std::endl;
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
    std::cout << "  --palette-mode cpc|8bit|12bit" << std::endl;
    std::cout << "  -v, --verbose           Show detailed diagnostics" << std::endl;
    std::cout << std::endl;
    std::cout << "Examples:" << std::endl;
    std::cout << "  pix_convert image.bmp output.pix --width 640 --height 200 --bpp 1" << std::endl;
    std::cout << "  cat image.ppm | pix_convert - output.pix --width 320 --height 200 --bpp 4" << std::endl;
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
    
    AlesteImageConverter converter(verbose);
    return converter.convert(inputFile, outputFile, width, height, bpp, 
                            colorEncoding, addressEncoding, paletteMode) ? 0 : 1;
}