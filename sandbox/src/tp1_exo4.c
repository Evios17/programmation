#include <stdio.h>

int main(){

	//Je déclare mes variables
	char charactere;
	int acsii;

	//Je demande à l'utilisateur de donner un charactère
	printf("Enter un charactère : ");
	scanf("%c", &charactere);

	//J'attribue les mêmes valeurs aux variables
	acsii = charactere;

	//J'affiche le resultat et converti par %i la valeur decimal acsii du charactere
	printf("Le code ASCII de %c est : %i\n", charactere, acsii);


	return 0;
}