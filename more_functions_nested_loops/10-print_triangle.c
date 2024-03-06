#include "main.h"
/**
 * print_triangle - print traingle
 * @size: lenght parameter
 *
 * Return: triangle
 */
void print_triangle(int size)
{
	int i, j, k, l;

	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			for (k = 0 ; k < (size - 2) ; k++)
			{
					_putchar(' ');
			}
			for (l = 0 ; l < (size - k) ; l++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
