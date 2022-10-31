#include <stdio.h>

int main() {

    //Initialisation des variables
    int valeur[4] = {12, 23, 4, 75};
    int i = 0;

    printf("Le troisième éléments du tableau est : %d\n", valeur[3]);

    valeur[1] = 32;

    printf("Le contenu du tableau est : ");
    for(i = 0; i < 4; i++){
        printf("%d", valeur[i]);
        if(i < 3){
            printf(", ");
        }else{
            printf("\n");
        }
    }
    


    return 0;
}