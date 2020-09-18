// But : �crire un programme qui affiche un menu. Le programme demande � l'utilisateur son choix et
// il confirme l'op�ration, sinon il affiche un message d'erreur "Le choix doit �tre compris entre 1 et 6.
/*
	1. Addition
	2. Soustraction
	3. Multiplication
	4. Division
	5. Modulo
	6. Quitter !!!
*/

// Auteur : Karine Moreau
// Date : 2020-09-15

#include<iostream>


int main()
{
	setlocale(LC_ALL, "");
	// D�claration des variables
	int choix;

	// Le programme affiche le menu
	std::cout << "1. Addition" << std::endl;
	std::cout << "2. Soustraction" << std::endl;
	std::cout << "3. Multiplication" << std::endl;
	std::cout << "4. Division" << std::endl;
	std::cout << "5. Modulo" << std::endl;
	std::cout << "6. Quitter" << std::endl;

	// Le programme demande le choix � l'utilisateur
	std::cout << "Votre choix --> ";
	std::cin >> choix;
	// Si le choix est compris entre 1 et 6, le programme confirme le choix en toute lettre
	// Pour lier deux conditions dans un m�me if, il faut ajouter un op�rateur logique  : && (et), || (ou)
	if (choix >= 1 && choix <= 6)
	{
		
			if (choix == 1)
			{
				std::cout << "Addition";
			}
			if (choix == 2)
			{
				std::cout << "Soustraction";
			}
			if (choix == 3)
			{
				std::cout << "Multiplication";
			}
			if (choix == 4)
			{
				std::cout << "Division";
			}
			if (choix == 5)
			{
				std::cout << "Modulo";
			}
			if (choix == 6)
			{
				std::cout << "Quitter";
			}
		
			// L'int�ret du switch c'est que la variable choix n'est �valu�e qu'une seule fois et on regarde l'�galit� 

			switch (choix)
			{
			case 1 :
				std::cout << "L'addition";
				break;
			case 2 :
				std::cout << "La soustraction";
				//break;
			case 3:
				std::cout << "La multiplication";
				break;
			case 4:
				std::cout << "La division";
				break;
			case 5:
				std::cout << "Le modulo";
				break;
			case 6:
				std::cout << "Quitter";
				break;

			}


	}
	else
		std::cout << "Le choix doit �tre compris entre 1 et 6";

	return 0;
}
