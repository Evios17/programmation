#include <stdio.h>

int main() {

    //Initialisation des variables
    char mot[21] = {'C', 'o', 'm', 'm', 'e', 'n', 't', ' ', 'a', 'l', 'l', 'e', 'z', ' ', 'v', 'o', 'u', 's', ' ', '?', '\0'};
    int somme;

    //Affiche le chaine de caractere
    printf("La chaine de caractere : ");
    for (int i = 0; i < 20; i++){
        printf("%c", mot[i]);
        if (i < 19){
            /* code */
        }else{
            printf("\n");
        }
        
    }
    

    //Affiche les codes ASCII
    printf("Somme des équivalents ASCII : ");
    for (int i = 0; i < 20; i++){
        somme = somme + mot[i];
    }
    printf("%d", somme);
    

    return 0;
}