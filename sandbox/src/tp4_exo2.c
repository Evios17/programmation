#include <stdio.h>

void simple_affichage_1() {
    puts("Bonjour ");
}

void simple_affichage_2(int rep) {
    for (int i = 0; i < rep; i++) {
        puts("Bonne journée ");
    }
}

int simple_affichage_3(int rep) {
    for (int i = 0; i < rep; i++) {
        puts("Bonne soirée ");
    }


    return 0;
}

int main() {
    //Initialisation des varables
    int rep;

    //Demande à l'utilisateur d'entrer le nomnbre de répétition
    printf("Saisissez le nombre de répétition : ");
    scanf("%d", &rep);

    //Appel des fonctions
    simple_affichage_1();
    simple_affichage_2(rep);
    int ret = simple_affichage_3(rep);

    if (ret == 0) {
        puts("Tout va bien\n");
    }else{
        puts("Erreur\n");
    }
    

    return 0;
}