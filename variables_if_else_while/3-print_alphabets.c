#include  <stdio.h>
/**
 * main - print alphabet
 *
 * Return: always 0 succes
 */
int main(void)
{
	char i = 'a';
	char b = 'A';
	
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar (i);
	} 
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar (b);
	}
	putchar ('\n');
	return (0);
}
