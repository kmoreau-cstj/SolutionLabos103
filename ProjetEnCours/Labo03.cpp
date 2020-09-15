// But : Les instructions conditionnelles 
// Si le nombre est plus grand que 10 et  qu'il est plus petit que 20 alors c'est gagn�, sinon, si c'est 20 alors droit � une deuxi�me chance, sinon c'est perdu
// Auteur : Karine Moreau
// Date : 2020-09-15


#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	// D�claration des variables
	int nombre = 20;				// Le nombre est initialis� gr�ce � l'op�rateur d'affectation

	// Instructions conditionnelles  => if (condition avec un op�rateur de comparaison, == != < <= > >=)
	// && (et) ou || (ou) pour lier deux conditions entre elles pour n'en former qu'une seule
	// if (nombre > 10 && <20)
	// if (10 < nombre < 20)		: incorrect car 2 op�rateurs de comparaison sans && ||
	if (nombre > 10 && nombre < 20)
	{
			std::cout << "Vous avez gagn�.";
			std::cout << "F�licitations !";
	}
				
	
	else
		if (nombre == 20)
		{
			std::cout << "Vous avez le droit � une deuxi�me chance.";
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
15					gagn� !
20					deuxi�me chance !
25					perdu !
0					perdu !
-10					perdu !

*/