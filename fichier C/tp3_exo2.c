#include <stdio.h>

int main() {

    //Initialisation des variables
    int valeur[5] = {23, 2.62, 45, 75, 18.4};
    int i = 0;

    printf("Le contenu du tableau (normal) est : ");
    for(i = 0; i < 5; i++){
        printf("%d", valeur[i]);
        if(i < 4){
            printf(", ");
        }else{
            printf("\n");
        }
    }

    printf("Le contenu du tableau (inverse) est : ");
    for(i = 4; i > -1; i--){
        printf("%d", valeur[i]);
        if(i > 0){
            printf(", ");
        }else{
            printf("\n");
        }
    }
    


    return 0;
}