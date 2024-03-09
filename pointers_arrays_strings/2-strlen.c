#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - string length
 * @s: parameter
 *
 * Return: lenght
 */


int _strlen(char *s) {
    int length = 0;
	int i;
    // Iterate over the string until the null terminator is encountered
    for (i = 0; s[i] != '\0'; i++) {

        length++;
}
return length;
}

