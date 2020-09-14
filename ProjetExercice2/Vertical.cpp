// But : Demander un entier de 5 chiffres et l'afficher verticalement sinon afficher un message d'erreur
// Auteur :
// Date


#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int entier;

	std::cout << "Veuillez entrer un entier positif composé de 5 chiffres :";
	std::cin >> entier;

	// On vérifie que le nombre a bien 5 chiffres. On commence par les cas qui ne fonctionnent pas
	if (entier < 10000)
	{
		std::cout << entier << " ne contient pas 5 chiffres ou n'est pas positif.";
		return 5;
	}
	else          // Le nombre est plus grand ou égal à 10000
	{
		if (entier > 99999)
		{
			std::cout << entier << " ne contient pas 5 chiffres ou n'est pas positif.";
			return 5;
		}
		else          // Le nombre est compris entre 10 000 et 99 999
 		{
			std::cout << entier << " est bien un nombre à 5 chiffres.";
		}
	}

	// Si on est ici dans le code, alors le nombre a bien 5 chiffres
	// On peut le décomposer
	// 12345 : 1 * 10 000 + 2 * 1 000 + 3 * 100 + 4 * 10 + 5 * 1
	std::cout << std::endl << entier / 10000 ;
	std::cout << std::endl << entier / 1000 % 10;
	std::cout << std::endl << entier / 100 % 10 ;
	std::cout << std::endl << entier / 10 % 10;
	std::cout << std::endl << entier / 1 % 10;

	return 0;

}

/*
Plan de test
entier					Affichage à l'écran
15						15 ne contient pas 5 chiffres ou n'est pas positif
123						123 ne contient pas 5 chiffres ou n'est pas positif
123456					123456 ne contient pas 5 chiffres ou n'est pas positif
-12345					-12345 ne contient pas 5 chiffres ou n'est pas positif
12345					12345 contient bien 5 chiffres
						1
23456					23456	contient bien 5 chiffres
						2


*/