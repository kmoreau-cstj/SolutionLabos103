// But : 
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
	int valeur1 = 5;
	int valeur2 = 100;

	/*
	cout << "Avant l'appel de la fonction :" << endl;
	cout << "Valeur 1 : " << valeur1 << endl;
	cout << "Valeur 2 : " << valeur2 << endl;

	cout << "On appelle la fonction faireUnTest :" << endl;

	faireUnTest(valeur1, valeur2);
	//faireUnTest(5, 100);								// Ne fonctionne pas pour le param�tre avec &
														// car 100 n'a pas d'espace en m�moire
	//faireUnTest(valeur1 * 2, valeur1 * 2);				// Ne fonctionne pas pour le param�tre avec &
														// car c'est un r�sultat d'un calcul qui n'est pas m�moris�	
	//faireUnTest(sqrt(valeur1), sqrt(valeur1));			// sqrt : pour calculer la racine carr�e
														// Ne fonctionne pas pour le param�tre avec &
	cout << "Apr�s l'appel de la fonction :" << endl;
	cout << "Valeur 1 : " << valeur1 << endl;
	cout << "Valeur 2 : " << valeur2 << endl;


	*/
	vector<int> vec{ 12,0,42,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0 };
	vector<int> vecVide;

	cout << " Appel de la fonction afficher contenu de vec : " << endl;
	afficherContenuDuVecteur(vec);

	cout << " Appel de la fonction ajouter � la fin de vec : " << endl;
	ajouterValeurALaFinDuVecteur(vec, 5);
	afficherContenuDuVecteur(vec);

// 	1.	�crivez une fonction qui saisit (remplace si le vecteur n'est pas vide, 
	//  ou ajoute � la fin si le vecteur n'a plus de place) les valeurs dans le vecteur 
	//  tant que l�utilisateur n�a pas entr� la valeur 
	//  pass�e en param�tre pour mettre fin � la saisie, par exemple -1.
	//  Vous appelez la fonction avec vec et vecVide.
	//  �crire l'appel de la fonction, puis son prototype dans le .h et le code dans le .cpp
	saisirValeurDansVecteur(vec, -1);
	saisirValeurDansVecteur(vecVide, -999);

	return 0;
}