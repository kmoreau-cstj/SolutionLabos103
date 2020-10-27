// But : �crire un programme qui demande un entier � l'utilisateur. Le programme appelle une fonction pour calculer le carr� de ce 
// nombre et il affiche le r�sultat � l'�cran. Le programme appelle une fonction pour calculer le cube et affiche le r�sultat.
// Le programme demande � l'utilisateur un nombre entier positif et il appelle une fonction pour calculer la factorielle de ce nombre.
// � la fin il affiche le r�sulat de la factorielle.
// 3! = 1*2*3 = 6 = 3*2*1
// 4! = 1*2*3*4 =24
// 0! = 1

// Auteur : Karine Moreau
// Date : 2020-10-26


#include <iostream>
#include "Labo05MesFonctions2.h"


using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	int nombre;
	double valeur;
	/*
	cout << "Veuillez entrer un nombre pour obtenir son carr� :";
	cin >> nombre;

	// Afficher le carr� � l'�cran
	cout << "Voici le carr� du nombre " << nombre << " : " << calculerCarre(nombre) << endl;
	// Afficher le cube � l'�cran
	cout << "Voici le cube du nombre " << nombre << " : " << calculerCube(nombre) << endl;

	cout << "Veuillez entrer un nombre pour obtenir son cube :";
	cin >> valeur;

	// Mettre la valeur dans une variable plus grande
	valeur = nombre;

	// Afficher le cube � l'�cran
	cout << "Voici le cube du nombre " << nombre << " : " << calculerCube(valeur) << endl;
	*/

	cout << "Veuillez entrer un entier positif pour calculer sa factorielle : ";
	cin >> nombre;

	nombre = validerNombrePositif(nombre);

	cout << nombre << "! = " << calculerFactorielle(nombre) ;


	return 0;
}