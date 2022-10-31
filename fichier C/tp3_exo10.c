#include <stdio.h>
#include <string.h>

/*
    strlen pour calculer la longueur d'une chaîne.
    strcpy pour copier une chaîne dans une autre.
    strcat pour concaténer 2 chaînes.
    strcmp pour comparer 2 chaînes.
    strchr pour rechercher un caractère.
    strpbrk pour rechercher le premier caractère de la liste.
    strstr pour rechercher une chaîne dans une autre.
    sprintf pour écrire dans une chaîne.
*/

int main() {

    //Initialisation des variables
    char caractere[50];
    int resultat = 0;
    int resultatstr = 0;

    //Demande à l'utilisateur d'entrer sa chaine de caratère
    printf("Veuillez saisire votre chaine de charactère : ");
    scanf("%[^\n]", caractere);

    //Je calcule
    for (int i = 0; caractere[i] != '\0'; i++){
        resultat++;
    }

    //J'utilise la fonction strlen de la lib "string.h"
    resultatstr = strlen(caractere);

    //J'affiche le résultat
    printf("Le nombre de charactère calculé avant passage dans la fonction 'strlen' : %d\n", resultat);
    printf("Le nombre de charactère calculé après passage dans la fonction 'strlen' : %d\n", resultatstr);
    

    return 0;
}