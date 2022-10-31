#include <stdio.h>
#include <math.h>

int main() {
    //Initialisation des variables
    int angle;
    
    //Demande à l'utilisateur d'entrer un angle
    printf("Saisissez un angle (format suivant : 10) : ");
    scanf("%d", &angle);

    //Affiche les résultats et appel les fonctions
    printf("Le cosinus de l'angle %d est %f et son cosinus est %f", angle, cosf(angle), sinf(angle));


    return 0;
}