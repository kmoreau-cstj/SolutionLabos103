// But : Les instructions conditionnelles 
// Si le nombre est plus grand que 10 et  qu'il est plus petit que 20 alors c'est gagné, sinon, si c'est 20 alors droit à une deuxième chance, sinon c'est perdu
// Auteur : Karine Moreau
// Date : 2020-09-15


#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	// Déclaration des variables
	int nombre = 20;				// Le nombre est initialisé grâce à l'opérateur d'affectation

	// Instructions conditionnelles  => if (condition avec un opérateur de comparaison, == != < <= > >=)
	// && (et) ou || (ou) pour lier deux conditions entre elles pour n'en former qu'une seule
	// if (nombre > 10 && <20)
	// if (10 < nombre < 20)		: incorrect car 2 opérateurs de comparaison sans && ||
	if (nombre > 10 && nombre < 20)
	{
			std::cout << "Vous avez gagné.";
			std::cout << "Félicitations !";
	}
				
	
	else
		if (nombre == 20)
		{
			std::cout << "Vous avez le droit à une deuxième chance.";
			std::cout << "Vous pouvez recommencer";
		}
		else
			std::cout << "vous avez perdu.";
		
	return 0;
}

/* 
Plan de tests

5					perdu !
10					perdu !
15					gagné !
20					deuxième chance !
25					perdu !
0					perdu !
-10					perdu !

*/