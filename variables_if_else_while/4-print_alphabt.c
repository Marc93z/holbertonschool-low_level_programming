#include <stdio.h>
/**
 * main - prints alphabt
 *
 * Return: always 0 success
 */
int main(void)
{
	char i = 'a';

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'e' && i != 'q')
			putchar(i);
	putchar('\n');
	return (0);
}
