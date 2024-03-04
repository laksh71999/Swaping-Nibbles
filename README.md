# Swaping-Nibbles

## Overview
This C program swaps the nibbles of a given hexadecimal value and prints the swapped value. Nibbles are groups of 4 bits. For instance, in the hexadecimal value `0x1234`, `1` and `2` form one nibble, and `3` and `4` form another nibble.

The code defines a macro `nibble(n)` to perform the nibble swapping operation.

## Macro Explanation
The macro `nibble(n)` is defined with bitwise operations to swap the nibbles of the given hexadecimal value `n`.

```c
#define nibble(n) ((n & 0x0F) << 4 | (n & 0xF0) >> 4) /* 0x12 -> 0x21 */
#define nibble(n) ((n & 0x00F0) << 4 | (n & 0x0F00) >> 4) | (n & 0xF00F) /* 0x1234 -> 0x1324 */
#define nibble(n) ((n & 0x000F) << 12 | (n & 0xF000) >> 12) | (n & 0x0FF0) /* 0x1234 -> 0x4231 */
