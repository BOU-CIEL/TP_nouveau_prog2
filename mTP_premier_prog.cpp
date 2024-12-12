// Nom du projet : TP_premier_prog
// Nom de l'auteur : Adel
// Date de création : 09/09/2024
// Révision ou version : (facultatif pour les Tps)
// Version du compilateur : (facultatif)
// Résumé : TP sur les premiers programmes

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "TP_premier_prog.h"

int main()
{
	
	printf("Premier programme\n");
	printf("\nSection %s promotion %d\n", "CIEL", 2026);
	printf("\nLe point de fusion du mercure est de %f \xF8 C soit environ %f \xF8 C \n", -38.842, -38.842);
	printf("Total : %d \n ", printf("Premier programme\n"));
	int nbCara;
	nbCara = printf("Le nombre de caracteres\n");

	int jour, mois, annee;
	printf("Date : %f / %f / %f \n", jour, mois, annee);
	scanf_s("%f %f %f", &jour, &mois, &annee);
	_getch();

	char c;
	do {
		c = getchar();
	} while (c != EOF && c != '\n');

	char nomSaisi[10];
	int ageSaisi, nbHex;
	printf("Entrer votre nom: ");
	scanf_s("%9s", nomSaisi, _countof(nomSaisi));
	printf("Entrer votre age: ");
	scanf_s("%d", &ageSaisi);
	printf("Mr. %s a %d ans\n", nomSaisi, ageSaisi);

	

	return(0);
	
	
}

