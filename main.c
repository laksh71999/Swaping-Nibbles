/* C program to nibble swap */

#include <stdio.h>

/* Macros for nibble swap */
// #define nibble(n) ((n & 0x0F) << 4 | (n & 0xF0) >> 4)  /* 0x12 -> 0x21 */
// #define nibble(n) ((n & 0x00F0) << 4 | (n & 0x0F00) >> 4) | (n & 0xF00F) /* 0x1234 -> 0x1324 */
#define nibble(n) ((n & 0x000F) << 12 | (n & 0xF000) >> 12) | (n & 0x0FF0) /* 0x1234 -> 0x4231 */


int main() {
    int hexValue = 0x1234;
    int swapVal = nibble(hexValue);
    printf("Swapped Value : 0x%X\n", swapVal);
    return 0;
}
