#include <stdio.h>

int main(){

    //Je déclare ma variable
    float nombre;

    //Je répète tant que mon nombre est supérieur à 50
    do{
        //Je demande à l'utilisateur d'entrer deux nombres
        printf("Donner un nombre : ");
        scanf("%f", &nombre);

        //Je conditionne le message à afficher
        if(nombre < 50){
            //J'affiche
            printf("Saisir un nombre plus grand!\n");
        }else if(nombre > 50){
            //j'affiche
            printf("Saisir un nombre plus petit !\n");
        }

    }while(nombre < 50 || nombre > 60);


    return 0;
}