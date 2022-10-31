#include <stdio.h>

int main(){

    //Je déclare ma variable
    int nombre;
    int compteur;
    int i;

    //Je demandeun nombre à l'utilisateur
    printf("Donner un nombre : ");
    scanf("%d", &nombre);

    compteur = nombre + 5;

    //Je répète 5 fois
    for(i = nombre; i < compteur; i++){
        nombre++;
        printf("%d\n", nombre);
    }

    return 0;
}