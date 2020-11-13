// But : Demander � l'utilisateur deux valeurs enti�res que le programme stocke dans valeur1 et valeur2. 
//       Le programme appelle une fonction qui �change les valeurs donc dans valeur1 on aura la valeur2 
//       et dans valeur2 on aura valeur1

// Auteur : Karine Moreau
// Date : 2020


#include <iostream>
#include <vector>				// Pour avoir acc�s aux fonctions sur les vecteurs
#include "Labo06Fonctions.h"
#include "Labo09Fonctions.h"

using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			



int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	int valeur1;
	int valeur2;

	cout << "Veuillez entrer la valeur 1 : ";
	//cin >> valeur1;
	valeur1 = saisirEntier();

	cout << "Veuillez entrer la valeur 2 : ";
	valeur2 = saisirEntier();


	cout << "Valeur1 : " << valeur1 << endl;
	cout << "Valeur2 : " << valeur2 << endl;

	cout << "Appel de la fonction pour �changer les valeurs" << endl;

	echangerValeur(valeur1, valeur2);					// L'appel de la fonction pour l'utiliser, pour l'ex�cuter

	cout << "Apr�s la fonction �changerValeur" << endl;
	cout << "Valeur1 : " << valeur1 << endl;
	cout << "Valeur2 : " << valeur2 << endl;

	return 0;
}