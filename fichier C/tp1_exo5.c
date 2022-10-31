#include <stdio.h>

int main() {

	//Je déclare mes variables
	float prixHT;
	float prixTTC;
	float tTVA;

	//Je demande à l'utilisateur de me donner un prix HT et la TVA
	printf("Saisissez le prix HT : ");
	scanf("%f", &prixHT);
	printf("Saisissez le taux de la TVA : ");
	scanf("%f", &tTVA);

	//Je calcule
	prixTTC = prixHT + (prixHT * (tTVA / 100));

	//J'affiche le resultat
	printf("Le prix TTC est de : %f€\n", prixTTC);


	return 0;
}