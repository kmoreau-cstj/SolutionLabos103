// But : �crire un programme qui affiche un message � l'�cran et apprendre � g�rer les versions du code
// avec l'application git et de le publier dans le nuage avec GitHub
// Auteur : Karine Moreau
// Date : 2020-09-03

#include <iostream>				// Int�gre un coffre � outils (cout, cin, ...) pour communiquer avec l'utilisateur 

int main(/*liste des param�tres �ventuels*/)
{			// Un bloc d'instructions

	// Pour g�rer efficacement la conversion des caract�res accentu�s
	setlocale(LC_ALL, "");

	// Afficher le message � l'�cran
	std::cout << "Bienvenue � tous !";

	return 0;
}
