// But : 
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
	vector<int> vec{ 12,0,42,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0 };

	cout << " Appel de la fonction afficher contenu de vec : " << endl;
	afficherContenuDuVecteur(vec);

	ajouterValeurALaFinDuVecteur(vec, 5);


	return 0;
}