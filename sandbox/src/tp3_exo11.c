#include <stdio.h>
#include <string.h>

int main() {

    //Initialisation des variables
    char caractere[50];

    //Demande à l'utilisateur d'entrer sa chaine de caratère
    printf("Veuillez saisire votre chaîne de caractères : ");
    scanf("%[^\n]", caractere);
    
    //Affiche la chaine de caractère
    printf("Chaîne de caractères dans l'ordre : %s\n", caractere);
    printf("Chaîne de caractères dans l'ordre inverse : ");
    for (int i = strlen(caractere); i >= 0; i--){
        printf("%c", caractere[i]);
        if(i > 0){
            
        }else{
            printf("\n");
        }
    }
    

    return 0;
}