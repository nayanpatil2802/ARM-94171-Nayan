#include <stdio.h>

int main() {
    char ch = 'A';
    char xorValue = 0x20;  // XOR value to change case
    char result;

    // Check if character is a letter
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        result = ch ^ xorValue;  // Toggle case
    } else {
        result = ch;  // Non-letter stays the same
    }

    printf("Original: %c, Result: %c\n", ch, result);
    return 0;
}
