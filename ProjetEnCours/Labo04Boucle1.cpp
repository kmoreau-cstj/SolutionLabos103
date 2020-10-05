// But : Demander � l'utilisateur un nombre compris entre 5 et 20. Le programme doit s'assurer que le nombre est valide
// et affiche le motif suivant
/*
Si le nombre est 8

* * * * * * * *					8 �toiles
 * * * * * * *					7 �toiles d�cal�es d'un espace
* * * * * * * *
 * * * * * * *
* * * * * * * *
 * * * * * * *
* * * * * * * *
 * * * * * * *
Votre programme ne peut utiliser que trois instructions de sortie :
cout << "* ";
cout << ' ';
cout << endl;

*/
// Auteur : Karine Moreau
// Date : 2020-10-05


#include <iostream>

using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des constantes
	const int MIN = 5;
	const int MAX = 20;
	// D�claration des variables
	int nb;


	// Demander � l'utilisateur un nombre compris entre 5 et 20
	cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
	cin >> nb;

	// Valider le nombre entr� par l'utilisateur
	while (!(nb>=MIN && nb<=MAX))
	{
		cout << "Erreur : le nb..." << endl;

		// Demander � l'utilisateur un nombre compris entre 5 et 20
		cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
		cin >> nb;

	}


	// Ici le nombre est bien compris entre 5 et 20
	// Afficher le motif en fonction du nombre que l'utilisateur a entr�
	for (size_t i = 0; i < length; i++)			// Ligne
	{
		if (true)					// Par quel caract�re on doit commencer la ligne ?
		{

		}
		
		
		for (size_t i = 0; i < length; i++)		// Colonne
		{

		}
	}




	return 0;
}