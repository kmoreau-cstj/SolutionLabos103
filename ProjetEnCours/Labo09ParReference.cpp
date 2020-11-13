// But : Demander à l'utilisateur deux valeurs entières que le programme stocke dans valeur1 et valeur2. 
//       Le programme appelle une fonction qui échange les valeurs donc dans valeur1 on aura la valeur2 
//       et dans valeur2 on aura valeur1

// Auteur : Karine Moreau
// Date : 2020


#include <iostream>
#include <vector>				// Pour avoir accès aux fonctions sur les vecteurs
#include "Labo06Fonctions.h"
#include "Labo09Fonctions.h"

using namespace std;			// Pour éviter d'écrire std:: dans les instructions comme cout, cin, endl, ...			



int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int valeur1;
	int valeur2;

	cout << "Veuillez entrer la valeur 1 : ";
	//cin >> valeur1;
	valeur1 = saisirEntier();

	cout << "Veuillez entrer la valeur 2 : ";
	valeur2 = saisirEntier();


	cout << "Valeur1 : " << valeur1 << endl;
	cout << "Valeur2 : " << valeur2 << endl;

	cout << "Appel de la fonction pour échanger les valeurs" << endl;

	echangerValeur(valeur1, valeur2);					// L'appel de la fonction pour l'utiliser, pour l'exécuter

	cout << "Après la fonction échangerValeur" << endl;
	cout << "Valeur1 : " << valeur1 << endl;
	cout << "Valeur2 : " << valeur2 << endl;

	return 0;
}