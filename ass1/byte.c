#include <stdio.h>

int main() {
    unsigned char byte = 0x35;   // Example byte
    int count = 0;
    int i;

    printf("Original byte: 0x%02X\n", byte);

    // Count number of 1s
    for (i = 0; i < 8; i++) {
        if (byte & (1 << i)) {
            count++;
        }
    }

    // If number of 1s is odd, set MSB for even parity
    if (count % 2 != 0) {
        byte = byte | 0x80;   // Set MSB
    }

    printf("Byte after even parity: 0x%02X\n", byte);

    return 0;
}
