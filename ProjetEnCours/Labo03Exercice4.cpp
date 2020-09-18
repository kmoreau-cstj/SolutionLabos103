// But : Demander à l'utilisateur 5 entiers et le programme affiche lequel des cinq nombres est Le plus grand
//       en utilisant seulement 4 opérateurs de comparaison (>=)
// Auteur : Karine Moreau
// Date : 2020-09-18

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int nb1, nb2, nb3, nb4, nb5;
	int lePlusGrand;				// Pour se souvenir du résultat à afficher


	// Demander à l'utilisateur cinq nombres entiers
	std::cout << "Entrez l'entier 1 : ";
	std::cin >> nb1;

	std::cout << "Entrez l'entier 2 : ";
	std::cin >> nb2;

	std::cout << "Entrez l'entier 3 : ";
	std::cin >> nb3;

	std::cout << "Entrez l'entier 4 : ";
	std::cin >> nb4;

	std::cout << "Entrez l'entier 5 : ";
	std::cin >> nb5;

	// On envisage que le nb1 soit le plus grand. C'est une hypothèse
	lePlusGrand = nb1;

	// On va vérifier que l'hypothèse est correcte, sinon on la change
	if (nb2 > lePlusGrand)
		lePlusGrand = nb2;
	if (nb3 > lePlusGrand)
		lePlusGrand = nb3;
	if (nb4 > lePlusGrand)
		lePlusGrand = nb4;
	if (nb5 > lePlusGrand)
		lePlusGrand = nb5;

	std::cout << lePlusGrand << " est le plus grand.";

	return 0;
}

/*
plan de tests
valeur1			valeur2			valeur3		valeur4 	valeur5		Résultat à l'écran
1				2				3				4			5		5 est le plus grand
5				1				2				3			4		5 est le plus grand
1				5				1				2			2		5 est le plus grand
-1				-2				5				2			3		5 est le plus grand
-1				0				1				5			-5		5 est le plus grand
1				1				3				5			5		5 est le plus grand
3				5				5				3			1		5 est le plus grand
5				5				5				5			5		5 est le plus grand




*/