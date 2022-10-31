#include <stdio.h>

int main(){

    //Je déclare ma variable
    int km;

    //Je demande à l'utilisateur d'entrer un nombre
    printf("Entrez le nombre de kilomètre : ");
    scanf("%d", &km);

    //J'établis les conditions
    if(km >= 100000){
        //J'affiche le résultat
        printf("La prime est de 1000€\n");
    }else if(km < 100000 && km > 80000){
        //J'affiche le résultat
        printf("La prime est de 800€\n");
    }else{
        //J'affiche le résultat
        printf("La prime est de 0€\n");
    }
    

    return 0;
}