#include <stdio.h>
#include "main.h"

int _strlen(char *s) {
    int length = 0;

    // Iterate over the string until the null terminator is encountered
    while (*s != '\0') {
        length++;
        s++; // Move to the next character in the string
    }

    return length;
} 

