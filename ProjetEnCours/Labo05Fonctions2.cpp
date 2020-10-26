// But : Écrire un programme qui demande un entier à l'utilisateur. Le programme appelle une fonction pour calculer le carré de ce 
// nombre et il affiche le résultat à l'écran. Le programme appelle une fonction pour calculer le cube et affiche le résultat
// Auteur : Karine Moreau
// Date : 2020-10-26


#include <iostream>
#include "Labo05MesFonctions2.h"


using namespace std;			// Pour éviter d'écrire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int nombre;
	double valeur;

	cout << "Veuillez entrer un nombre pour obtenir son carré :";
	cin >> nombre;

	// Afficher le carré à l'écran
	cout << "Voici le carré du nombre " << nombre << " : " << calculerCarre(nombre) << endl;
	// Afficher le cube à l'écran
	cout << "Voici le cube du nombre " << nombre << " : " << calculerCube(nombre) << endl;

	/*cout << "Veuillez entrer un nombre pour obtenir son cube :";
	cin >> valeur;
	*/
	// Mettre la valeur dans une variable plus grande
	valeur = nombre;

	// Afficher le cube à l'écran
	cout << "Voici le cube du nombre " << nombre << " : " << calculerCube(valeur) << endl;



	return 0;
}