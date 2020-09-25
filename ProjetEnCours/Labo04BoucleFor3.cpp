// But : L'utilisateur indique � quel �tage il se trouve et donne sa destination. 
// L'�tage de d�part peut �tre plus grand que l'�tage d'arriv�e et dans ce cas, l'ascenseur descend
// sinon l'ascenseur monte
// Auteur : Karine Moreau
// Date : 2020


#include <iostream>

using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	int etageArrivee;

	// On demande l'�tage � atteindre
	cout << "Indiquez l'�tage � atteindre -->";
	cin >> etageArrivee;

	if (etageArrivee % 2 ==0)
	{
		cout << "Vous �tes � l'�tage 1 et vous montez dans l'ascenseur pair" << endl;
		for (int compteurEtage = 2; compteurEtage <= etageArrivee; compteurEtage = compteurEtage +2)
		{
			cout << "Vous �tes � l'�tage " << compteurEtage << endl;
		}
	}
	else
	{
		cout << "Vous �tes � l'�tage 1 et vous montez dans l'ascenseur impair" << endl;
		for (int compteurEtage = 3; compteurEtage <= etageArrivee; compteurEtage = compteurEtage + 2)
		{
			cout << "Vous �tes � l'�tage " << compteurEtage << endl;
		}
	}
	cout << "Vous �tes arriv�. Bonne journ�e" << endl;


	return 0;
}