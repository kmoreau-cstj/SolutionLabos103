#include "Labo05MesFonctions.h"
#include <iostream>
using namespace std;

void afficherMenu()
{
	cout << "1. cadres" << endl;
	cout << "2. travailleurs à tarif horaire" << endl;
	cout << "3. travailleurs à la commission" << endl;
	cout << "4. travailleurs à la pièce" << endl;
	cout << "q. quitter le programme" << endl;
}

char validerChoixMenu(char min, char max, char quitter)
{
	// Déclaration des variables
	char choix;
	
	// le programme demande le choix de l'utilisateur
	cout << "Votre choix --> ";
	cin >> choix;

	// Le programme doit vérifier que le choix fait par l'utilisateur est un choix correct
	// Le choix doit être compris entre 1 et 4 ou être la lettre q ou Q. L'utilisateur peut se tromper plusieurs fois => boucle
	while (!(choix >= min && choix <= max || choix == quitter))
	{
		cout << "Erreur : ..." << endl;

		// A LA FIN de la boucle, la variable de boucle, ici typeEmploye, doit être réinitialisée
		afficherMenu();
		// le programme demande le choix de l'utilisateur
		cout << "Votre choix --> ";
		cin >> choix;
	}
	
	return choix;
}
