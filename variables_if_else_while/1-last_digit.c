#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n % 10) > 5)
	{
		printf("Le dernier chiffre de %d is %d la chaîne et est supérieur à 5\n", n, n % 10);
	}
	else if ((n % 10) == 0)
	{
		printf("Le dernier chiffre de %d is %d la chaine et vaut 0\n", n, n % 10);
	}
	else
	{
		printf("Le dernier chiffre de %d is %d la chaîne et est inférieur à 6 et non 0\n", n, n % 10);
	}
	return (0);
}
