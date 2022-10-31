#include <stdio.h>

int main(){

    //Je déclare ma variable
    int nombre;

    //Je demande à l'utilisateur d'entrer un nombre
    printf("Saisissez un nombre : ");
    scanf("%d", &nombre);

    //J'établis les conditions
    if(nombre%2==0){
        //J'affiche le résultat
        printf("Le nombre %d est paire\n", nombre);
    }else{
        //J'affiche le résultat
        printf("Le nombre %d est impaire\n", nombre);
    }
    

    return 0;
}