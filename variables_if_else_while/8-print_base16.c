#include <stdio.h>

int main(void)
{
	int i = 0;
	char b = 'a';

	for (i = 0 ; i <= 10 ; i++)
		 putchar ('0' + i);
	for (b = 'a' ; b <= 'f' ; b++)
		putchar (b);
			putchar('\n');
	return(0);
}
