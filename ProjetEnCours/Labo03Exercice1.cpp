// But : Le programme affiche un menu et demande le choix à l'utilisateur. Le programme valide le choix 
// et confirme l'opération choisie ou affiche un message d'erreur
/*
	1. Addition
	2. Soustraction
	3. Multiplication
	4. Division
	5. Modulo
	6. Quitter
*/

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	// Déclaration des variables
	int choix;


	// Le programme affiche le menu
	std::cout << "1. Addition" << std::endl;
	std::cout << "2. Soustraction" << std::endl;
	std::cout << "3. Multiplication" << std::endl;
	std::cout << "4. Division" << std::endl;
	std::cout << "5. Modulo" << std::endl;
	std::cout << "6. Quitter" << std::endl;

	// Le programme demande le choix à l'utilisateur
	std::cout << "Votre choix -->";
	std::cin >> choix;

	// Le programme confirme le choix de l'utilisateur
	// Je commence par me débarrasser des erreurs
	if  (!(choix >=1 && choix <=6)) //(choix < 1 || choix > 6)
	{
		std::cout << "Erreur : Le choix doit être compris entre 1 et 6.";
	}
	else     // Ici le choix est bien compris entre 1 et 6 : Tous les signes de la condition du if sont inversés
		// choix >=1 && choix <=6
	{
		switch (choix)
		{
		case 1 :
			std::cout << "L'addition";
			break;
		case 2:
			std::cout << "La soustraction";
		case 3 :
			std::cout << "La multiplication";
		case 4:
			std::cout << "La division";
			break;
		case 5:
			std::cout << "Le modulo";
		case 6:
			std::cout << "Quitter";
		default:
			std::cout << "Erreur :...";
			break;
		}
		
		
		// Ici on a six cas possibles
		if (choix == 1)
		{
			std::cout << "vous avez choisi l'addition.";
		}
		if (choix == 2)
		{
			std::cout << "vous avez choisi la soustraction.";
		}
		if (choix == 3)
		{
			std::cout << "vous avez choisi la multiplication.";
		}
		if (choix == 4)
		{
			std::cout << "vous avez choisi la division.";
		}
		if (choix == 5)
		{
			std::cout << "vous avez choisi le modulo.";
		}
		if (choix == 6)
		{
			std::cout << "vous avez choisi de quitter.";
		}
	}


	return 0;
}