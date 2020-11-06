// But : Demander à l'utilisateur un nombre entier et vérifier qu'il se trouve bien entre 1 et 10.
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <string>					// Pour utiliser la fonction getline pour lire une chaine de caractère au clavier

#include "Labo06Fonctions.h"
using namespace std;				// Pour éviter de répéter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");			// pour passer de Windows à DOS(console) car pas la même table ascii

	// Déclaration des constantes
	const int MIN = 1;
	const int MAX = 10;

	// Déclaration des variables
	double nombre;
	char symbole;

	cout << "Veuillez entrer un nombre entier : ";
	// cin >> nombre;	// A la place de cin >>, on va lire toute la mémoire du clavier avec un string
	nombre = saisirReel();

	while (nombre < MIN || nombre > MAX)
	{
		cout << "Erreur : Le nombre doit être compris entre " << MIN << " et " << MAX << "." << endl;
		cout << "Veuillez entrer un nombre entier : ";
		// Le deuxième cin >> trouve encore la lettre dans la mémoire du clavier, il s'attendait à des chiffres, il met encore
		// 0 dans nombre et laisse la lettre dans la mémoire du clavier ==> boucle infinie
		//cin >> nombre;
		nombre = saisirReel();
	}
	cout << nombre << " est bien compris entre " << MIN << " et " << MAX << endl;

	cout << "Veuillez entrer un caractère : ";
	symbole = saisirCaractere();

	cout << "Le symbole est : " << symbole << endl;


	return 0;
}