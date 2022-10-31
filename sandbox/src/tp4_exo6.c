#include <stdio.h>
#include <string.h>
#include <stdbool.h>

static int compteur = 0;

int cpt() {
    compteur ++;

    return compteur;
}


int main() {


    char rep[4], oui[4] = "oui";
    int res;


    puts("Souhaitez-vous appeler la fonction ?");
    printf("Oui / Non : ");
    scanf("%s", &rep);

    res = strcmp(rep, oui);

    if (res == 0){
        do
        {
            printf("Fonction appelée %d fois\n\n", cpt());
            puts("Souhaitez-vous rappeler la fonction ?");
            printf("Oui / Non : ");
            scanf("%s", &rep);

            res = strcmp(rep, oui);

        } while (res == 0);
    }else{


        return 0;
    }
    

    return 0;
}