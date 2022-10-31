#include <stdio.h>

int main(){

    //Je déclare ma variable
    char id;

    //Je demande à l'utilisateur d'entrer un id
    printf("Valeurs possibles (v = Master, s = Seniors, e = Espoirs, j = Junoirs, c = Cadets, m = Minimes, b = Benjamins, p = Poussins)\n");
    printf("Entrez le code : ");
    scanf("%c", &id);

    //Je liste les identifiants
    switch(id){
        case 'v':
            //J'affiche le résultat
            printf("%c : catégorie Master, de 1975 et avant\n", id);
            break;
        case 's':
            //J'affiche le résultat
            printf("%c : catégorie Seniors, de 1976 à 1995\n", id);
            break;
        case 'e':
            //J'affiche le résultat
            printf("%c : catégorie Espoirs, de 1993 à 1995", id);
            break;
        case 'j':
            //J'affiche le résultat
            printf("%c : catégorie Juniors, de 1996 à 1997\n", id);
            break;
        case 'c':
            //J'affiche le résultat
            printf("%c : catégorie Cadets, de 1998 à 1999\n", id);
            break;
        case 'm':
            //J'affiche le résultat
            printf("%c : catégorie Minimes, de 2000 à 2001\n", id);
            break;
        case 'b':
            //J'affiche le résultat
            printf("%c : catégorie Benjamins, de 2002 à 2003\n", id);
            break;
        case 'p':
            //J'affiche le résultat
            printf("%c : catégorie Poussins, de 2004 de 2005\n", id);
            break;
        default:
            //Erreur
            printf("Attention vous ne rentrez pas un code correct !\n");
    }
    

    return 0;
}