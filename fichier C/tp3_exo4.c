#include <stdio.h>

int main() {

    //Initialisation des variables
    int n, notes[1], somme, moyenne, numerateur, denominateur;

    //Je demande à l'utilisateur d'entrer le nombre de notes
    printf("Combien de note avez vous ? : ");
    scanf("%d", &n);

    //Je demande à l'utilisateur d'entrer ses valeurs
    for(int i = 0; i < n; i++) {
        printf("Veuillez saisire vos notes : ");
        scanf("%d", &notes[i]);
    }
    
    //Je réalise les calculs
    for (int i = 0; i < n; i++) {
        somme = somme + notes[i];
    }

    numerateur = somme;
    denominateur = n;

    moyenne = numerateur / denominateur;
    
    //J'affiche l'enssemble des notes
    printf("Voici les notes : ");
    for (int i = 0; i < n; i++){
        printf("%d", notes[i]);
        if (i < n--){
            printf(", ");
        }else{
            printf(".\n");
        }
    }

    //J'affiche les résultats
    printf("La somme des notes est : %d\nLa moyenne des notes est : %d\n", somme, moyenne);


    return 0;
}