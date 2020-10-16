#include "Labo05MesFonctions.h"
#include <iostream>
using namespace std;

void afficherMenu()
{
	cout << "1. cadres" << endl;
	cout << "2. travailleurs � tarif horaire" << endl;
	cout << "3. travailleurs � la commission" << endl;
	cout << "4. travailleurs � la pi�ce" << endl;
	cout << "q. quitter le programme" << endl;
}

char validerChoixMenu(char min, char max, char quitter)
{
	// D�claration des variables
	char choix;
	
	// le programme demande le choix de l'utilisateur
	cout << "Votre choix --> ";
	cin >> choix;

	// Le programme doit v�rifier que le choix fait par l'utilisateur est un choix correct
	// Le choix doit �tre compris entre 1 et 4 ou �tre la lettre q ou Q. L'utilisateur peut se tromper plusieurs fois => boucle
	while (!(choix >= min && choix <= max || choix == quitter))
	{
		cout << "Erreur : ..." << endl;

		// A LA FIN de la boucle, la variable de boucle, ici typeEmploye, doit �tre r�initialis�e
		afficherMenu();
		// le programme demande le choix de l'utilisateur
		cout << "Votre choix --> ";
		cin >> choix;
	}
	
	return choix;
}
