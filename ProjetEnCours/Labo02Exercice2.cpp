// But : Le programme demande deux entiers � l'utilisateur et indique lequel des deux nombres est le 
//       plus grand

// 12 et 15 : 15 est le plus grand
// 18 et 22 : 22 est le plus grand
// -2 et 5  : 5 est le plus grand
// -6 et -9 : -6 est le plus grand
// 5 et 5   : 5 est le plus grand

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	int entier1;
	int entier2;

	// Demander � l'utilisateur deux nombres entiers
	std::cout << "Veuillez entrer un entier :";
	std::cin >> entier1;
	std::cout << "Veuillez entrer un deuxi�me entier :";
	std::cin >> entier2;

	// On doit comparer l'entier1 avec l'entier2
	if (entier1 > entier2)
	{
		std::cout << entier1 << "est le plus grand.";
	}
	else    // entier1 est plus petit ou �gal que entier2
	{
		std::cout << entier2 << "est le plus grand.";
	}


	return 0;
}