#include <stdio.h>

int main(){

    //Je déclare ma variable
    int n;
    int i;

    //Je demandeun nombre à l'utilisateur
    printf("Donner un nombre : ");
    scanf("%d", &n);

    //j'affiche
    printf("Les nombres paires sont : \n");

    //Je repète
    for(i = 1; i <= n; i++){
        if(i%2==0){
            printf("%d\n", i);
        }
    }

    return 0;
}