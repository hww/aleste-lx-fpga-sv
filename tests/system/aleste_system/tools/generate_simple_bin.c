#include <stdio.h>
#include <stdlib.h>
int main(void) {
    const unsigned char data[] = {0xC3, 0x05, 0x00, 0x00, 0x3E, 0x55, 0x32, 0x03, 0x00, 0x76};
    //const unsigned char data[] = {0xC3, 0x05, 0x00, 0x00, 0x00, 0x76};
    FILE *f = fopen("../memory/default.bin", "wb");
    if (!f) { perror("fopen"); return 1; }
    if (fwrite(data, 1, sizeof(data), f) != sizeof(data)) { perror("fwrite"); fclose(f); return 2; }
    fclose(f);
    printf("Wrote %zu bytes to ../memory/default.bin\n", sizeof(data));
    return 0;
}
