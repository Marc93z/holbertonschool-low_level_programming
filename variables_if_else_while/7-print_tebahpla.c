#include <stdio.h>

int main(void)
{
	char i = 'z';
	for (i = 'z'; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return(0);
}
