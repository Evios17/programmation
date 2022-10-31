#include <stdio.h>

char fonction_caractere(char x) {
    printf("$%x\n", x);

    return x;
}

int main() {
    //Déclaration de variable
    char x;

    //Demande à l'utilisateur de saisir un caractère
    printf("Saisissez un charactère : ");
    scanf("%c", &x);

    //Affiche le résultat et fait appel de la fonction
    printf("Le code ASCII du caractère %c est : ", x);
    fonction_caractere(x);


    return 0;
}