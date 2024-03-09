#include <stdio.h>

void _puts(char *str) {
	int i;
    for (int i = 0; str[i] != '\0'; i++) 
{
	putchar(str[i]);
}
_putchar('\n');
}
