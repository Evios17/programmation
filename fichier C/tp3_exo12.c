#include <stdio.h>
#include <string.h>

int main() {

    //Initialisation des variables
    char caractere[50];
    char caractereiv[50];

    //Demande à l'utilisateur d'entrer sa chaine de caratère
    printf("Veuillez saisire votre chaîne de caractère : ");
    scanf("%[^\n]", caractere);

    //Attribution de la valeur du tableau inverse
    for (int i = strlen(caractere); i >= 0; i--){
        caractereiv[strlen(caractere) - i - 1] = caractere[i];
    }
    //Affiche la chaine de caractère
    printf("Chaîne de caractères dans l'ordre : %s\n", caractere);
    printf("Chaîne de caractères dans l'ordre inverse : %s\n", caractereiv);
    

    return 0;
}