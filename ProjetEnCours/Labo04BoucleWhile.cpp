// But : Afficher les 10 premiers entiers positifs
// Auteur: Karine Moreau
// Date: 2020-09-29

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des contantes
	const int FIN = 10;
	// D�claration des variables
	int compteur;

	/*
	for (Etape de d�claration de la variable de boucle (int i) et INITIALISATION  de la variable de boucle (=0) int i = 0;
		 cette �tape se fait une seule fois, AVANT la boucle
		 Etape de la condition vraie (i < FIN) elle est test�e AVANT de rentrer dans la boucle, AVANT d'ex�cuter le bloc d'instructions
		 Etape de REINITILISATION de la variable de boucle (i), on doit changer sa valeur i++,
		 Cette �tape est faite � la fin du bloc d'instructions)
	{
		
	}
	*/

	for (int compteur = 0; compteur < FIN; compteur++)
	{
		cout << compteur << endl;
	}



	compteur = 0;
	while (compteur < FIN)
	{
		cout << compteur << endl;

		compteur++;
	}

	





	return 0;
}