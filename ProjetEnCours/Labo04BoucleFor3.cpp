// But : L'utilisateur indique à quel étage il se trouve et donne sa destination. 
// L'étage de départ peut être plus grand que l'étage d'arrivée et dans ce cas, l'ascenseur descend
// sinon l'ascenseur monte
// Auteur : Karine Moreau
// Date : 2020


#include <iostream>

using namespace std;			// Pour éviter d'écrire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int etageArrivee;

	// On demande l'étage à atteindre
	cout << "Indiquez l'étage à atteindre -->";
	cin >> etageArrivee;

	if (etageArrivee % 2 ==0)
	{
		cout << "Vous êtes à l'étage 1 et vous montez dans l'ascenseur pair" << endl;
		for (int compteurEtage = 2; compteurEtage <= etageArrivee; compteurEtage = compteurEtage +2)
		{
			cout << "Vous êtes à l'étage " << compteurEtage << endl;
		}
	}
	else
	{
		cout << "Vous êtes à l'étage 1 et vous montez dans l'ascenseur impair" << endl;
		for (int compteurEtage = 3; compteurEtage <= etageArrivee; compteurEtage = compteurEtage + 2)
		{
			cout << "Vous êtes à l'étage " << compteurEtage << endl;
		}
	}
	cout << "Vous êtes arrivé. Bonne journée" << endl;


	return 0;
}