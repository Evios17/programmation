#include <stdio.h>

int main() {

    //Initialisation des variables
    int notes[1];
    int somme;
    int moyenne;
    int numerateur;
    int denominateur;

    //Je demande à l'utilisateur d'entrer ses valeurs
    for(int i = 0; i < 5; i++) {
        printf("Veuillez saisire vos notes : ");
        scanf("%d", &notes[i]);
    }
    
    //Je réalise les calculs
    for (int i = 0; i < 5; i++) {
        somme = somme + notes[i];
    }

    numerateur = somme;
    denominateur = 5;

    moyenne = numerateur / denominateur;
    
    //J'affiche l'enssemble des notes
    printf("Voici les notes : ");
    for (int i = 0; i < 5; i++){
        printf("%d", notes[i]);
        if (i < 4){
            printf(", ");
        }else{
            printf(".\n");
        }
    }

    //J'affiche les résultats
    printf("La somme des notes est : %d\nLa moyenne des notes est : %d\n", somme, moyenne);


    return 0;
}