#include <stdio.h>

int main(){

	//Je déclare ma variable
	float nombre;

	//Je demande à l'utilisateur d'entrer un nombre
	printf("Saisissez un nombre : ");
	scanf("%f", &nombre);
	
	//J'établis les conditions
	if(nombre > 0){
		//J'affiche le résultat
		printf("Le nombre %f est positif.\n", nombre);
	}else if(nombre < 0){
		//J'affiche le résultat
		printf("Le cube de %f est négatif.\n", nombre);
	}else{

	}


	return 0;
}