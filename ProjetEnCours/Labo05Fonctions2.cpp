// But : �crire un programme qui demande un entier � l'utilisateur. Le programme appelle une fonction pour calculer le carr� de ce 
// nombre et il affiche le r�sultat � l'�cran. Le programme appelle une fonction pour calculer le cube et affiche le r�sultat
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

	cout << "Veuillez entrer un nombre pour obtenir son carr� :";
	cin >> nombre;

	// Afficher le carr� � l'�cran
	cout << "Voici le carr� du nombre " << nombre << " : " << calculerCarre(nombre) << endl;
	// Afficher le cube � l'�cran
	cout << "Voici le cube du nombre " << nombre << " : " << calculerCube(nombre) << endl;

	/*cout << "Veuillez entrer un nombre pour obtenir son cube :";
	cin >> valeur;
	*/
	// Mettre la valeur dans une variable plus grande
	valeur = nombre;

	// Afficher le cube � l'�cran
	cout << "Voici le cube du nombre " << nombre << " : " << calculerCube(valeur) << endl;



	return 0;
}