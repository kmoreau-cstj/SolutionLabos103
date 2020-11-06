// But : Demander � l'utilisateur un nombre entier et v�rifier qu'il se trouve bien entre 1 et 10.
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <string>					// Pour utiliser la fonction getline pour lire une chaine de caract�re au clavier

#include "Labo06Fonctions.h"
using namespace std;				// Pour �viter de r�p�ter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");			// pour passer de Windows � DOS(console) car pas la m�me table ascii

	// D�claration des constantes
	const int MIN = 1;
	const int MAX = 10;

	// D�claration des variables
	double nombre;
	char symbole;

	cout << "Veuillez entrer un nombre entier : ";
	// cin >> nombre;	// A la place de cin >>, on va lire toute la m�moire du clavier avec un string
	nombre = saisirReel();

	while (nombre < MIN || nombre > MAX)
	{
		cout << "Erreur : Le nombre doit �tre compris entre " << MIN << " et " << MAX << "." << endl;
		cout << "Veuillez entrer un nombre entier : ";
		// Le deuxi�me cin >> trouve encore la lettre dans la m�moire du clavier, il s'attendait � des chiffres, il met encore
		// 0 dans nombre et laisse la lettre dans la m�moire du clavier ==> boucle infinie
		//cin >> nombre;
		nombre = saisirReel();
	}
	cout << nombre << " est bien compris entre " << MIN << " et " << MAX << endl;

	cout << "Veuillez entrer un caract�re : ";
	symbole = saisirCaractere();

	cout << "Le symbole est : " << symbole << endl;


	return 0;
}