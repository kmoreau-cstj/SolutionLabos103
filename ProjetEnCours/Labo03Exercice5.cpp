// But : Demander � l'utilisateur une lettre et dire si c'est voyelle ou une consonne
// Auteur : Karine Moreau
// Date : 2020-09-21

// Pour d�clarer une variable de type lettre, il faut utiliser le mot cl� char
// Une lettre en C++ doit �tre plac�e entre apostrophe : 'a'

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	char lettre;


	// Demander � l'utilisateur une lettre
	std::cout << "Veuillez entrer une lettre de l'alphabet : ";
	std::cin >> lettre;


	// On s'assure que l'utilisateur a bien tap� une lettre de l'alphabet
	if (lettre >= 'A' && lettre <= 'Z' || lettre >= 'a' && lettre <= 'z')
	{


		// Dire si la lettre est une consonne ou une voyelle
		if (lettre == 'a' || lettre == 'A' || lettre == 'e' || lettre == 'E' || lettre == 'i' || lettre == 'I' ||
			lettre == 'o' || lettre == 'O' || lettre == 'u' || lettre == 'U' || lettre == 'y' || lettre == 'Y')
			std::cout << lettre << " est une voyelle";
		else
			std::cout << lettre << " est une consonne";
	}
	else
		std::cout << lettre << " n'est pas une lettre de l'alphabet";


	return 0;
}


