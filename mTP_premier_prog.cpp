// Nom du projet : TP_premier_prog
// Nom de l'auteur : Adel
// Date de création : 09/09/2024
// Révision ou version : (facultatif pour les Tps)
// Version du compilateur : (facultatif)
// Résumé : TP sur les premiers programmes

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
#include "TP_premier_prog.h"

using namespace std;

int main()
{
	
	cout << "Premier programme\n";
	cout << "\nSection %s promotion %d\n", "CIEL", 2026;
	cout << "\nLe point de fusion du mercure est de %f \xF8 C soit environ %f \xF8 C \n", -38.842, -38.842;
	cout <<"Total : %d \n ", printf("Premier programme\n");
	int nbCara;
	nbCara = printf("Le nombre de caracteres\n");

	int jour, mois, annee;
	cout << "Date : %f / %f / %f \n" << jour <<  mois << annee;
	cout <<" % f % f % f" <<  &jour <<  &mois <<  &annee;

	char c;
	do {
		c = getchar();
	} while (c != EOF && c != '\n');

	char nomSaisi[10];
	int ageSaisi, nbHex;
	cout << "Entrer votre nom: ";
	cin >> nomSaisi, _countof(nomSaisi);
	cout << "Entrer votre age: ";
	cin>>  ageSaisi;
	cout <<"Mr. %s a %d ans\n" << nomSaisi <<  ageSaisi;
	cout << "Entrer un nombre en hexadecimal: ";
	cin >> nbHex;
	cout << "Vous avez saisi %#x (%d).\n" << nbHex << nbHex;

	

	return(0);
	
	
}

