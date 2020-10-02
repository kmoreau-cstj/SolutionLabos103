// But : �crire un programme qui affiche un menu. Le programme demande � l'utilisateur son choix et
// il confirme l'op�ration, sinon il affiche un message d'erreur "Le choix doit �tre compris entre 1 et 6. 
// Le programme s'arr�te quand l'utilisateur tape 6 pour quitter
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
	
	// 1�re v�rification : La variable de boucle choix est bien initialis�e AVANT la boucle 
	std::cout << "Votre choix --> ";
	std::cin >> choix;
	// Tant que le choix n'est pas (!) compris entre 1 et 6, le programme redemande le choix
	while (!(choix >=1 && choix <=6)) // while(choix<1 || choix >6)
	{
		std::cout << "Erreur : le choix doit �tre compris entre 1 et 6" << std::endl;
		system("pause");

		// On efface l'�cran cls (clear screen) pour afficher de nouveau le menu et demander le choix � l'utilisateur
		system("cls");

		// Le programme affiche le menu
		std::cout << "1. Addition" << std::endl;
		std::cout << "2. Soustraction" << std::endl;
		std::cout << "3. Multiplication" << std::endl;
		std::cout << "4. Division" << std::endl;
		std::cout << "5. Modulo" << std::endl;
		std::cout << "6. Quitter" << std::endl;

		// 2i�me v�rification : La variable de boucle est-elle bien r�initialis�e � LA FIN de la boucle ????
		std::cout << "Votre choix --> ";
		std::cin >> choix;
	}







	// A la sortie de la boucle, le choix est valide
	// On confirme le choix fait par l'utilisateur
	if (choix >= 1)
	{
		if (choix <= 6)
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
		}
		// sinon, le programme affiche un message d'erreur
		else
			std::cout << "Le choix doit �tre compris entre 1 et 6";
	}
	else
		std::cout << "Le choix doit �tre compris entre 1 et 6";




	return 0;
}
