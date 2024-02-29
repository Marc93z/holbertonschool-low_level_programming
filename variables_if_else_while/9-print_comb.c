#include <stdio.h>

int main(void) {
    int i = 0;  // Initialiser la variable i à 0

    // Boucler de 0 à 9
    do {
        putchar(i + '0');  // Afficher le chiffre actuel en convertissant i en son équivalent caractère
        if (i < 9) {
            putchar(',');  // Afficher une virgule si i est inférieur à 9
            putchar(' ');  // Afficher un espace après la virgule
        }
        i++;  // Incrémenter i
    } while (i <= 9);  // Continuer la boucle tant que i est inférieur ou égal à 9

    putchar('\n');  // Afficher un saut de ligne à la fin
    return 0;
}

 
