#include  <stdio.h>
/**
 * main - print alphabet
 *
 * Return: always 0 succes
 */
int main(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
