#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - string length
 * @s: parameter
 *
 * Return: _strlen
 */


int _strlen(char *s) {
    int _strlen = 0;
	int i;
    // Iterate over the string until the null terminator is encountered
    for (i = 0; s[i] != '\0'; i++) {

        _strlen++;
}
return _strlen;
}
