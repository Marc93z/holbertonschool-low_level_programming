#include "main.h"
/**
 * print_triangle - print traingle
 * @size: lenght parameter
 *
 * Return: triangle
 */
void print_triangle(int size)

{
        int i, a;

        if(size <= 0)
        {
                _putchar('\n');
        }

        for (i = 0 ; i < size ; i++)
        {
                for (a = i ; a < size ; a++)
                        {
                                _putchar(' ');
                        }
                for (a = i ; a <= i; a++)
                        {
                                _putchar('#');
                        }
                }
                _putchar('\n');
}

