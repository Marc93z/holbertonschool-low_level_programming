#include "main.h"
/**
 * print_sign -  print sign of n
 * @n: number
 *
 * Return: 1 and print + if greater or 0 and print 0 if is zero, or -1 and prinf - if less
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else 
	{
		_putchar('-');
		return (-1);
	}
}
