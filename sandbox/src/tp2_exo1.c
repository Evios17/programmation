#include <stdio.h>

int main(){

    //Je déclare ma variable
    int nombre;

    //Je répète tant que mon nombre est strictement supérieur à 50
    do{
        //Je demande à l'utilisateur d'entrer deux nombres
        printf("Donner un nombre : ");
        scanf("%d", &nombre);
    }while(nombre <= 50);
    
    //J'affiche
    printf("Bravo, vous avez entré un nombre supérieur à 50 !\n");

    return 0;
}