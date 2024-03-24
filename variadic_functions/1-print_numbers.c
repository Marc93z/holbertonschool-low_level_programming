#include <stdarg.h> /* Bibliothèque pour les fonctions va_* */
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - imprimer nombres
 * @separator: délimiteu a afficher entre les nombres
 * @n: nombre total d'arguments dans la liste
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist; /* Déclaration de la liste d'arguments variables*/
	unsigned int i; /* Déclaration d'un compteur pour l'itératio*/

	/* Vérification si le nombre d'arguments est supérie a z */
	if (n > 0)
	{
		va_start(valist, n); /* Initialisation de la liste d'arguments variables */

		/* Boucle pour parcourir la liste d'arguments et imprimer les nombres */
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(valist, int));
			/* Imprime l'entier suivant dans la liste */

			/* Véri si séparateur n'est pas nul et si ce n'est pas le dernier él */
			if (i != n && separator != NULL)
				printf("%s", separator); /* Imprime le séparateur*/
		}

		va_end(valist); /* Libérationmémoire assocee �liste d'arguments variables*/
	}

	printf("\n"); /* Imprime une nouvelle ligne a la fin */
}

