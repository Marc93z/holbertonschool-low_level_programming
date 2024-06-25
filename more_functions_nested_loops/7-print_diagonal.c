#include "main.h"
/**
 * print_diagonal - print diagonal
 * @n: number of time caracter
 *
 * Return: diagonal
 */
void print_diagonal(int n)
{
        int j, k;

if (n <= 0)
        {
                _putchar('\n');
                return;
        }
        for (j = 0 ; j < n ; j++)
        {
                for (k = 0 ; k < n ; k++)
                {
                        if (j == k)
                        {
                                _putchar('\\');
                                break;
                        }
                        else
                        {
                                _putchar(' ');
                        }
                }
        _putchar('\n');
        }
}
