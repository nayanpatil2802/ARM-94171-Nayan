#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t value = 5;

    printf("Original value = %d\n", value);
    
    /* Left shift */
    printf("Left shift by 2 = %d\n", value << 2);

    /* Right shift */
    printf("Right shift by 1 = %d\n", value >> 1);

    return 0;
}
