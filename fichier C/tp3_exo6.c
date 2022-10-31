#include <stdio.h>

int main() {

    //Initialisation des variables
    char mot[21] = {'C', 'o', 'm', 'm', 'e', 'n', 't', ' ', 'a', 'l', 'l', 'e', 'z', ' ', 'v', 'o', 'u', 's', ' ', '?', '\0'};

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
    printf("Les équivalents ASCII : ");
    for (int i = 0; i < 20; i++){
        printf("'%c' = %i", mot[i], mot[i]);
        if (i < 19){
            printf(", ");
        }else{
            printf(".\n");
        }
    }
    

    return 0;
}