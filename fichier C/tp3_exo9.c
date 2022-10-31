#include <stdio.h>

int main() {

    //Initialisation des variables
    char caractere[50];

    //Demande à l'utilisateur d'entrer sa chaine de caractère
    printf("Veuillez saisire votre chaine de caractère : ");
    scanf("%[^\n]", caractere);
    

    //Affiche la chaine de caractère
    printf("%s", caractere);
    

    return 0;
}