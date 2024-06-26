#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap two values
 * @a: first value at swap
 * @b: second value at swap
 *
 * Return: swapping
 */
void swap_int(int *a, int *b)
{
        int i = *a;
        int j = *b;
       *a = j;
        *b = i;
}
