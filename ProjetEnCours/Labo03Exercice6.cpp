// But : 
/*Ecrire un programme qui permet lire entier nb et affiche, selon sa valeur, le message suivant, un seul des 4 messages :
• nb est un multiple de 2.
• nb est un multiple de 3.
• nb est a la fois multiple de 2 et de 3.
• nb n'est ni multiple de 2, ni de 3

*/

/* plan de tests
entier A			résultat
2					multiple de 2  => l'entier doit être divisible par 2 
									  et donc le reste de la division(% modulo) par 2 doit être 0
3					multiple de 3
4					multiple de 2
5					ni multiple de 2 ni de 3
6= 3*2				a la fois multiple de 2 et de 3	
12
9
11
8
-8
0
*/

#include <iostream>

void main()
{

	setlocale(LC_ALL, "");
	// Déclaration des variables
	int nb;

	// Demander à l'utilisateur un entier
	std::cout << "Veuillez entrer un entier :";
	std::cin >> nb;


	// Dire s'il est multiple de 2 ou 3 ou les deux ou pas du tout
	if (nb % 2 == 0)
	{
		std::cout << nb << " est multiple 2";
	}
	if (nb % 3 == 0)
	{
		std::cout << nb << " est multiple de 3";
	}
	if (nb % 2 == 0 && nb % 3 == 0)
	{
		std::cout << nb << " est multiple de 2 et de 3";
	}
	if (nb % 2 != 0 || nb % 3 != 0)
	{
		std::cout << nb << " n'est ni multiple de 2 ni de 3";
	}



	
}
