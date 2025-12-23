/* bin2font.c - Конвертер бинарных файлов в ассемблер */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Использование: bin2font input.bin output.asm\n");
        return 1;
    }
    
    FILE *input = fopen(argv[1], "rb");
    if (!input) {
        printf("Ошибка: не могу открыть %s\n", argv[1]);
        return 1;
    }
    
    FILE *output = fopen(argv[2], "w");
    if (!output) {
        printf("Ошибка: не могу создать %s\n", argv[2]);
        fclose(input);
        return 1;
    }
    
    // Получаем размер файла
    fseek(input, 0, SEEK_END);
    long size = ftell(input);
    fseek(input, 0, SEEK_SET);
    
    printf("Конвертация %s (%ld байт) в %s\n", argv[1], size, argv[2]);
    
    // Заголовок
    fprintf(output, "; %s - Сконвертированный шрифт\n", argv[2]);
    fprintf(output, "SECTION data_user\n");
    fprintf(output, "PUBLIC _font_data\n\n");
    fprintf(output, "_font_data:\n");
    
    // Читаем и конвертируем
    unsigned char buffer[16];
    size_t total = 0;
    size_t bytes_read;
    
    while ((bytes_read = fread(buffer, 1, sizeof(buffer), input)) > 0) {
        fprintf(output, "    defb ");
        
        for (size_t i = 0; i < bytes_read; i++) {
            fprintf(output, "0x%02X", buffer[i]);
            if (i < bytes_read - 1) {
                fprintf(output, ", ");
            }
        }
        
        fprintf(output, "\n");
        total += bytes_read;
    }
    
    fprintf(output, "\n_font_end:\n");
    fprintf(output, "_font_size = _font_end - _font_data\n");
    fprintf(output, "; Всего байт: %ld\n", total);
    
    fclose(input);
    fclose(output);
    
    printf("Готово! Сконвертировано %ld байт\n", total);
    return 0;
}