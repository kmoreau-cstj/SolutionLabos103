// But : Demander à l'utilisateur un nombre de motifs à afficher à l'écran compris entre 1 et 70.
// Si il indique 4 le programme affiche 4 motifs
/*
4 : ****
10 : **********
-1 : erreur
0 : erreur
71 : erreur
*/
// Auteur: Mathieu Soucy
// Date: 2020

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int choisi;
	const int MAX = 70;
	const int MIN = 1;
	const char MOTIF = '*';

	

	cout << "Veuillez entrez un nombre : ";
	cin >> choisi;

	if (choisi >= MIN && choisi <= MAX)
	{
		
		cout << choisi << " : ";
		for (int compte = 0; compte < choisi; compte++)
		{
			//if (compte == 0)
			//cout << choisi << " : ";
			cout << MOTIF;
		}
	}
	else
	{
		if (choisi > MAX)
			cout << choisi << ": Erreur, nombre trop grand, le nombre doit etre entre " << MIN << " et " << MAX;
		if (choisi < MIN)
			cout << choisi << ": Erreur, nombre trop petit, le nombre doit etre entre " << MIN << " et " << MAX;
	}

	return 0;
}