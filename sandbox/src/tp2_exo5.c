#include <stdio.h>

int main(){

    //Je déclare ma variable
    int nombre;
    int resultat;
    int i;

    //Je demande à l'utilisateur d'entrer deux nombres
    printf("Donner un nombre : ");
    scanf("%d", &nombre);

    for(i = 1; i <= 10; i++){
        resultat = nombre * i;
        printf("%d x %i = %d\n", nombre, i, resultat);
    }

    return 0;
}