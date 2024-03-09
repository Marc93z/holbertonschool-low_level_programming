#include <stdio.h>

void _puts(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
putchar(str[i]);
    }
