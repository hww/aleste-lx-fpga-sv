#include <stdio.h>
#include <stdlib.h>
int main(void) {
    const unsigned char data[] = {0xC3, 0x05, 0x00, 0x00, 0x00, 0x76};
    FILE *f = fopen("sdram_dumps/simple_test.bin", "wb");
    if (!f) { perror("fopen"); return 1; }
    if (fwrite(data, 1, sizeof(data), f) != sizeof(data)) { perror("fwrite"); fclose(f); return 2; }
    fclose(f);
    printf("Wrote %zu bytes to ../sdram_dumps/simple_test.bin\n", sizeof(data));
    return 0;
}
