// But : Demander � l'utilisateur de taper deux nombres entiers et le programme dit s'ils sont pareils
//       ou pas
// Auteur : Karine Moreau
// Date : 2020-09-11

// Les op�rateurs de comparaison
// Math�matique						Informatique C++
// �gal =							==
// Plus grand strictement que >		>
// Plus petit strictement que <		<
// diff�rent						!=		Le point d'exclamation veut dire PAS
// Plus grand ou �gal				>=
// Plus petit ou �gal				<=

#include <iostream>					// Pour communiquer avec l'utilisateur

void main()
{
	setlocale(LC_ALL, "");			// Pour afficher correctement les accents dans la console

	// D�claration des variables
	int nombre1, nombre2;				// Pour se souvenir des deux valeurs fournies par l'utilisateur

	// Le programme doit afficher un message pour inviter l'utilisateur � entrer un nombre entier
	std::cout << "Veuillez entrer un nombre entier : ";
	// Le programme doit lire le nombre qui a �t� tap� au clavier
	std::cin >> nombre1;

	std::cout << "Veuillez entrer le deuxi�me nombre entier :";
	std::cin >> nombre2;

	// Le programme compare les deux valeurs et SI elles sont �gales, il affiche qu'elles sont pareilles
	// SINON, il dit qu'elles ne sont pas pareilles
	if (nombre1 == nombre2)							// If est suivi de parenth�ses mais ce n'est pas une fonction
							// Dans les parenth�ses on �crit la condition avec un op�rateur de comparaison
							// Apr�s la parenth�se fermante, il N'y a JAMAIS de point-virgule;
	{				// On ouvre un deuxi�me bloc d'instructions qui sera ex�cut� si la condition est vraie
		std::cout << nombre1 << " est pareil que " << nombre2 << std::endl;
	}
	else            // ATTENTION : il n'y a rien apr�s le else, pas de parenth�se
	{
		std::cout << nombre1 << " n'est pas pareil que " << nombre2 << std::endl;
	}

	if (nombre1 > nombre2)
	{
		std::cout << nombre1 << " est plus grand strictement que " << nombre2;
	}
	else
	{
		std::cout << nombre2 << " est plus grand ou �gal � " << nombre1;
	}
}

// Plan de tests
/*
nombre1						nombre2					r�sultat escompt�
15							12						15 n'est pas pareil que 12
													15 est plus grand strictement que 12
10							10						10 est pareil que 10
													10 est plus grand ou �gal � 10
-1							0						-1 n'est pas pareil que 0
													0 est plus grand ou �gal � -1
-2							-2						-2 est pareil que -2
													-2 est plus grand ou �gal � -2

*/