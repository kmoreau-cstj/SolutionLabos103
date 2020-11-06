// But : Demander � l'utilisateur un nombre entier et le redemander tant qu'il n'est pas compris entre 1 et 10.
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <string>				// Biblioth�que contenant les fonctions sp�cifiques aux string : getline

#include "Labo06Fonctions.h"
using namespace std;			// Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des constantes
	const int MIN = 1;
	const int MAX = 10;

	// D�claration des variables au d�but du programme
	int nombre;

	// demander le nombre � l'utilisateur
	cout << "Veuillez entrer un nombre entier :";
	//cin >> nombre;
	nombre = lireEntier();

	// Le redemander si le nombre n'est pas compris entre 1 et 10
	while (nombre < MIN || nombre >MAX)
	{
		cout << "Erreur : le nombre doit �tre compris entre " << MIN << " et " << MAX << "." << endl;
		cout << "Veuillez entrer un nombre entier :";
		//cin >> nombre;
		nombre = lireEntier();

	}


	cout << nombre << " est bien compris entre " << MIN << " et " << MAX << "." << endl;


	return 0;
}