// But : demander deux entiers à l'utilisateur et dire si le premier entier est le multiple du deuxième entier
// exemple : 6 et 2 : 6 multiple de 2 : 6 = 3*2
// exemple : 7 et 3 : 7 n'est pas un multiple de 3 : 7 = ?*3
// exemple : 9 et 3 : 9 est multiple  : 9 = 3*3
// exemple : 11 et 5 : 11 n'est pas un multiple de 5 : 11 = ?*5

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables


	// Demander à l'utilisateur deux nombres entiers
	std::cout << "Veuillez entrer un entier :";
	std::cin >> entier1;
	std::cout << "Veuillez entrer un deuxième entier :";
	std::cin >> entier2;

	// On doit diviser le nombre 1 par le nombre 2 et regarder si le reste de la division est égale à zéro


	return 0;
}