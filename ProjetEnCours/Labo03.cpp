// But : utiliser les instructions conditionnelles
// Exemple : Si le nombre est 10 alors c'est gagn�, sinon c'Est c'est 20 alors deuxi�me chance,
//           sinon c'est perdu
// Auteur : Karine Moreau
// Date : 2020-09-15

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	// D�clarer une variable et on l'initialise avec l'op�rateur = d'affectation
	int nombre = 25;

	// Instructions conditionnelles : if ... else en utilisant des op�rateurs de comparaison (< > <= >= == !=)
	if (nombre == 10)
	{
		std::cout << "Vous avez gagn� !";
		std::cout << "F�licitations";
	}
	else
		if (nombre == 20)
			std::cout << "Vous avez droit � une seconde chance.";
		else
			std::cout << "Vous avez perdu.";


	return 0;
}

/*
Plan de tests
Nombre							Affichage � l'�cran
5								perdu
10								gagn� !
15								perdu
20								seconde chance
25								perdu
0								perdu
-5								perdu

*/