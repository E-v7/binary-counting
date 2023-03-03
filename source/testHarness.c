/*
* File        : testHarness.c
* Project     : Binary Counting
* By          : E-v7
* Date        : February 22, 2023
* Description : A program that counts in binary!
*/

#include <stdio.h>
#define BITMAX 4

void printBinary(unsigned long num);

int main(void) {
    unsigned long currentNum = 0b0;
    unsigned long maxCount = 0b1 << BITMAX - 1;

    // Set maxCount to highest possible binary number up to BITMAX
    for (int i = BITMAX - 2; i >= 0; i--){
        maxCount |= 1 << i;
    }

    // Print out numbers 1 by 1
    do {
        printBinary(currentNum++);
    } while (currentNum ^ maxCount);
    printBinary(currentNum); // Print last number

    return 0;
}

/*
    Function        : printBinary()
    Description     : Use to take a decimal number then print in it's binary representation
    Parameters      : unsigned long num - The decimal number to be printed as binary
    Return Value(s) : None
*/
void printBinary(unsigned long num) {
    for (int i = BITMAX - 1; i >= 0; i--){
        if (num & 1 << i) {
          printf("1");
        } else {
          printf("0");
        }
    }
   printf("\n");
}