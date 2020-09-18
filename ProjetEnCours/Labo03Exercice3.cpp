// But : Demander à l'utilisateur 3 entiers et le programme affiche lequel des trois nombres est Le plus grand
// Auteur : Karine Moreau
// Date : 2020-09-18

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int nb1, nb2, nb3;

	// Demander à l'utilisateur trois nombres entiers
	std::cout << "Entrez l'entier 1 : ";
	std::cin >> nb1;

	std::cout << "Entrez l'entier 2 : ";
	std::cin >> nb2;

	std::cout << "Entrez l'entier 3 : ";
	std::cin >> nb3;

	// Le programme compare les nombres entre eux et affiche le nombre le plus grand
	if (nb1 > nb2 && nb1 > nb3 )
		std::cout << nb1 << " est le plus grand.";
	else
		// On teste si nb2 est la plus grande valeur
		if (nb2 > nb1 && nb2 > nb3)
			std::cout << nb2 << " est le plus grand.";
		else     // Ce n'est la nb2 le plus grand, ce n'est pas nb1 le plus grand donc c'est nb3
		{
			std::cout << nb3 << " est le plus grand.";
		}




	return 0;
}

/*
plan de tests
valeur1			valeur2			valeur3					Résultat à l'écran
1				2				3						3 est le plus grand
3				1				2						3 est le plus grand
1				3				1						3 est le plus grand
-1				-2				-3					   -1 est le plus grand
-1				0				1						1 est le plus grand
1				1				3						3 est le plus grand
3				3				1						3 est le plus grand
3				3				3						3 est le plus grand




*/