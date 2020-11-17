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
	int valeur1 = 5;
	int valeur2 = 100;

	/*
	cout << "Avant l'appel de la fonction :" << endl;
	cout << "Valeur 1 : " << valeur1 << endl;
	cout << "Valeur 2 : " << valeur2 << endl;

	cout << "On appelle la fonction faireUnTest :" << endl;

	faireUnTest(valeur1, valeur2);
	//faireUnTest(5, 100);								// Ne fonctionne pas pour le paramètre avec &
														// car 100 n'a pas d'espace en mémoire
	//faireUnTest(valeur1 * 2, valeur1 * 2);				// Ne fonctionne pas pour le paramètre avec &
														// car c'est un résultat d'un calcul qui n'est pas mémorisé	
	//faireUnTest(sqrt(valeur1), sqrt(valeur1));			// sqrt : pour calculer la racine carrée
														// Ne fonctionne pas pour le paramètre avec &
	cout << "Après l'appel de la fonction :" << endl;
	cout << "Valeur 1 : " << valeur1 << endl;
	cout << "Valeur 2 : " << valeur2 << endl;


	*/
	vector<int> vec{ 12,0,42, 0, 0, 68, 0, -15, 89, 0, 0, 0, 13, 27, 52, 2, 0, 7, 0, 0 };
	vector<int> vecVide;

	cout << " Appel de la fonction afficher contenu de vec : " << endl;
	afficherContenuDuVecteur(vec);
	/*
	cout << " Appel de la fonction ajouter à la fin de vec : " << endl;
	ajouterValeurALaFinDuVecteur(vec, 5);
	afficherContenuDuVecteur(vec);
	*/

// 	1.	Écrivez une fonction qui saisit (remplace si le vecteur n'est pas vide, 
	//  ou ajoute à la fin si le vecteur n'a plus de place) les valeurs dans le vecteur 
	//  tant que l’utilisateur n’a pas entré la valeur 
	//  passée en paramètre pour mettre fin à la saisie, par exemple -1.
	//  Vous appelez la fonction avec vec et vecVide.
	//  écrire l'appel de la fonction, puis son prototype dans le .h et le code dans le .cpp
	
	/*
	saisirValeurDansVecteur(vec, -1);
	afficherContenuDuVecteur(vec);
	saisirValeurDansVecteur(vecVide, -999);
	afficherContenuDuVecteur(vecVide);

	*/

	//2.Écrivez une fonction qui fait la somme des éléments du vecteur.
	cout << "La somme des éléments de vec est : " << calculerSommeVecteur(vec) << endl;
	cout << "La somme des éléments de vecVide est : " << calculerSommeVecteur(vecVide) << endl;

	//3.Écrivez une fonction qui fait la moyenne des éléments du vecteur.
	cout << "La moyenne des éléments de vec est : " << calculerMoyenneVecteur(vec) << endl;
	cout << "La moyenne des éléments de vecVide est : " << calculerMoyenneVecteur(vecVide) << endl;



	return 0;
}