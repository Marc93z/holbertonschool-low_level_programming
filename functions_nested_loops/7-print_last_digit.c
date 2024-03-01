#include "main.h"
/**
 * Return: value of last digit
 */

int print_last_digit(int c)
{
	int n = c % 10;

	if (n < 0)
	{
		n *= -1;
	}
	_putchar(n + '0');

	return (c % 10);
}
