#include <stdio.h>

int main(){

    //Je déclare mes variables
    int nombre1;
    int nombre2;
    int resultat1;
    int resultat2;

    //Je demande à l'utilisateur d'entrer deux nombres
    printf("Saisissez deux entiers (à suivre) : ");
    scanf("%d %d", &nombre1, &nombre2);

    //Je calcule
    resultat1 = nombre1 * nombre2;

    if(resultat1 > 0){
        //J'affiche le résultat
        printf("Le produit de %d * %d est positif\n", nombre1, nombre2);
    }else if(resultat1 < 0){
        //J'affiche le résultat
        printf("Le produit de %d * %d est negatif\n", nombre1, nombre2);
    }else{
        //J'affiche le résultat
        printf("Le produit de %d * %d est zéro\n", nombre1, nombre2);
    }

    resultat2 = nombre1 + nombre2;

    if(resultat2 > 0){
        //J'affiche le résultat
        printf("La somme de %d + %d est positif\n", nombre1, nombre2);
    }else if(resultat2 < 0){
        //J'affiche le résultat
        printf("La somme de %d + %d est negatif\n", nombre1, nombre2);
    }else{
        //J'affiche le résultat
        printf("La somme de %d + %d est zéro\n", nombre1, nombre2);
    }
    

    return 0;
}