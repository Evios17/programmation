#include <stdio.h>
#include <math.h>

float fonction_tri(int x, int y) {
    float z = (x * y) / 2;

    return z;
}

int main() {
    //Déclaration de variable
    int x, y;

    //Affichage custom
    printf("==============================\n");
    printf("Calcul de l'aire d'un triangle\n");
    printf("==============================\n");
    printf("\n");

    //Demande à l'utilisateur de saisir la base et hauteur du triangle
    printf("Saisissez la base et la hauteur du triangle (format suivant : x y) : ");
    scanf("%d%d", &x, &y);

    //Affiche le résultat et fait appel de la fonction
    printf("L'aire du triangle est : %.2f\n", fonction_tri(x, y));


    return 0;
}