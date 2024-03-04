#include <stdio.h>

void times_table(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            int result = i * j;
            // Affichage du résultat avec putchar
            if (result < 10) {
                putchar(' '); // Ajoute un espace pour l'alignement
                putchar(result + '0'); // Affiche le chiffre directement
            } else {
                putchar((result / 10) + '0'); // Affiche la dizaine
                putchar((result % 10) + '0'); // Affiche l'unité
            }
            putchar(' '); // Ajoute un espace pour l'alignement
        }
        putchar('\n'); // Nouvelle ligne après chaque ligne de la table
    }
}

int main() {
    times_table(10); // Affiche une table de multiplication jusqu'à 10x10
    return 0;
}
