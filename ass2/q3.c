#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t reg = 0xABCD;

    uint8_t lower4;
    uint8_t upper4;

    /* Extract lower 4 bits */
    lower4 = reg & 0x0F;

    /* Extract upper 4 bits of lower byte */
    upper4 = (reg & 0xF0) >> 4;

    printf("Lower 4 bits  = 0x%X\n", lower4);
    printf("Upper 4 bits  = 0x%X\n", upper4);

    return 0;
}
