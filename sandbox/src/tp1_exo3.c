#include <stdio.h>
#include <math.h> //J'importe la librairie math pour pouvoir réaliser des calcules complexes

int main(){

	//Je déclare mes variables
	float nombre = 0;
	float resultat = 0;

	//Je demande à l'utilisateur d'entrer un chiffre
	printf("Entrer un nombre : ");
	scanf("%f", &nombre);
	
	//Je réalise le calcule à l'aide de la fonction pow
	resultat = pow(nombre, 3);

	//J'affiche le résultat
	printf("Le cube de %f est : %f\n", nombre, resultat);


	return 0;
}