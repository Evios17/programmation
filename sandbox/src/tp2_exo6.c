#include <stdio.h>

int main(){

    //Je déclare ma variable
    int nombre;
    int resultat = 1;
    int i;

    //Je demande à l'utilisateur d'entrer deux nombres
    printf("Donner un nombre : ");
    scanf("%d", &nombre);

    printf("%d! = ", nombre);

    for(i = 1; i <= nombre; i++){
        resultat = resultat * i;
        printf("%d", i);

        if(i < nombre){
            printf(" x ");
        }
    }

    printf(" = %d", resultat);



    return 0;
}