/*
* File        : testHarness.c
* Project     : Binary Counting
* By          : E-v7
* Date        : February 22, 2023
* Description : A program that counts in binary!
*/

#include <stdio.h>

void takeInput(char* str);

int main(void) {
    char* userInput = (char*)malloc(20);


    return 0;
}

void takeInput(char* str) {
    char* ptr = NULL; // char pointer used to find and remove a new line character

    while (str += getc(stdin) != '\n') {
        if (strlen(str) + 1 == sizeof(str)) {
            str = (char*)realloc(sizeof(str) * 2);
        }
    }
    str[strlen(str) + 1] = '\0';
    str = (char*)realloc(sizeof(str) + 1);
}