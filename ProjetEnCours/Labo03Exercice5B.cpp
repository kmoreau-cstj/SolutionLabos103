// But : Demander à l'utilisateur une lettre et dire si c'est voyelle ou une consonne
// Auteur : Karine Moreau
// Date : 2020-09-21

// Pour déclarer une variable de type lettre, il faut utiliser le mot clé char
// Une lettre en C++ doit être placée entre apostrophe : 'a'

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	char lettre;


	// Demander à l'utilisateur une lettre
	std::cout << "Veuillez entrer une lettre de l'alphabet : ";
	std::cin >> lettre;


	// On s'assure que l'utilisateur a bien tapé une lettre de l'alphabet
	if (lettre >= 'A' && lettre <= 'Z' || lettre >= 'a' && lettre <= 'z')
	{


		// Dire si la lettre est une consonne ou une voyelle avec un switch
		switch (lettre)
		{
		case 'A' :
		case 'a' :
		case 'E' :
		case 'e' :
		case 'I' :
		case 'i' :
		case 'O' :
		case 'o' :
		case 'U' :
		case 'u' :
		case 'Y' :
		case 'y' :
			std::cout << lettre << " est une voyelle";
			break;

		default:
			std::cout << lettre << " est une consonne";
			break;
		}	// fin du switch
		
	} // fin du if est une lettre de l'alphabet
	else
		std::cout << lettre << " n'est pas une lettre de l'alphabet";
	return 0;
}


