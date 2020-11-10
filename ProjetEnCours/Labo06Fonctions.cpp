
#include <iostream>
#include <string>
using namespace std;
#include "Labo06Fonctions.h"

int saisirEntier()
{
	string clavier;
	
	getline(cin, clavier, '\n');		// getline permet de lire et nettoyer toute la mémoire du clavier

// Si l'utilisateur tape une lettre à la place des chiffres attendus par la variable int nombre, cin >> met 0 dans nombre
// Mais il laisse la lettre dans la mémoire du clavier. Il ne fait pas le ménage.

// Après le getline, il faut convertir le texte dans le bon type : string vers un int
//nombre = stoi(clavier);
// Le convertisseur stoi plante le programme si la variable ne commence pas par des chiffres
// Avant d'appeler stoi, il faut s'assurer que clavier commence par des chiffres

// Tant que clavier est 1. clavier est vide OU
//                      2. clavier ne commence pas par des chiffres (positif) 
//                         OU clavier commence par le signe moins mais n'est pas suivi de chiffres




	/*while (!(!clavier.empty() && ((clavier.front() >= '0' && clavier.front() <= '9')
			|| (clavier.length() > 1 && clavier.front() == '-' && clavier.at(1) >= '0' && clavier.at(1) <= '9'))))*/


	while ((clavier.empty() || ((clavier.front() < '0' || clavier.front() > '9')
			&& (clavier.length() <= 1 || clavier.front() != '-' || clavier.at(1) < '0' || clavier.at(1) > '9'))))
	{
		cout << "Erreur : Vous devez taper des chiffres pour entrer un nombre entier." << endl;
		cout << "Veuillez entrer un nombre entier : ";
		getline(cin, clavier, '\n');
	}
	// Ici, quand on sort de la boucle, on sait que clavier contient des chiffres, on peut convertir
	return stoi(clavier);
}

double saisirReel()
{
	string clavier;

	getline(cin, clavier, '\n');		// getline permet de lire et nettoyer toute la mémoire du clavier

// Si l'utilisateur tape une lettre à la place des chiffres attendus par la variable int nombre, cin >> met 0 dans nombre
// Mais il laisse la lettre dans la mémoire du clavier. Il ne fait pas le ménage.

// Après le getline, il faut convertir le texte dans le bon type : string vers un int
//nombre = stoi(clavier);
// Le convertisseur stoi plante le programme si la variable ne commence pas par des chiffres
// Avant d'appeler stoi, il faut s'assurer que clavier commence par des chiffres

// Tant que clavier est 1. clavier est vide OU
//                      2. clavier ne commence pas par des chiffres (positif) OU clavier commence par le signe moins mais n'est pas suivi de chiffres



	while (!(!clavier.empty() && ((clavier.front() >= '0' && clavier.front() <= '9')
		|| (clavier.length() > 1 && clavier.front() == '-' && clavier.at(1) >= '0' && clavier.at(1) <= '9'))))
	{
		cout << "Erreur : Vous devez taper des chiffres pour entrer un nombre entier." << endl;
		cout << "Veuillez entrer un nombre entier : ";
		getline(cin, clavier, '\n');
	}
	// Ici, quand on sort de la boucle, on sait que clavier contient des chiffres, on peut convertir
	return stod(clavier);
	
	
}

char saisirCaractere()
{
	string clavier;

	getline(cin, clavier, '\n');
	
	while (clavier.empty())
	{
		cout << "Erreur : vous devez taper au moins un caractère." << endl;
		cout << "Veuillez entrer un caractère :";
		getline(cin, clavier, '\n');
	}

	return clavier.front();
}
