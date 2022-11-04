#include <stdio.h>

int main() {
    int valeur;

    printf("Entrez votre valeur 0/1 : ");
    scanf("%d", &valeur);

    if (valeur == 0)
    {
        return 0;
    }else{
        return 1;
    }
    
}
//Hello
//Faire un "echo $?" pour afficher la valeur de retour du programme précedement éxecuté (dans un terminal linux).