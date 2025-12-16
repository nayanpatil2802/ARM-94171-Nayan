#include <stdio.h>

int main() {
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    // XOR swap directly in main
    if (x != y) {  // Avoid swapping same variable
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
    }

    printf("After swap:  x = %d, y = %d\n", x, y);

    return 0;
}
