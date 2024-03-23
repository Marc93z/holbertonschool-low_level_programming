#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - fonction pour sélectionner la fonction d'opération correcte
 * @s: opération donnée (+, *, -, /, %)
 * Return: pointeur vers la fonction d'opération correcte (0-4)
 */
int (*get_op_func(char *s))(int a, int b)
{
	/* Déclaration et initialisation du tableau d'opération */
	op_t ops[] = {
		{"+", op_add}, /* Addition */
		{"-", op_sub}, /* Soustraction */
		{"*", op_mul}, /* Multiplication */
		{"/", op_div}, /* Division */
		{"%", op_mod}, /* Modulo (reste de la division) */
		{NULL, NULL}  /* Marqueur de fin du tableau */
	};
	int i = 0; /* Variable pour parcourir le tableau */

	/* Parcours du tableau d'opérations*/
	while (ops[i].op != NULL)
		/**
		 * ops = tableau  avec structure de type op_t
		 * ops[i] = selectionne element i dans l'array ops
		 * .op = fait reference au champ 'op' de la structure situe a i
		 * .op = operateur de selection de champ
		 */
	{
	/* Vérf si opérateur actuel corresn celui recherche avec les pointeur */
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
	/* f = ptr de fonction declar� �dans l'en tet */
		}
		i++; /* Passage a l'élément suivant  tableau */
	}
	return (NULL); /* Renvoie NULL si aucun opérateur correspondant n'est trouv*/
}

