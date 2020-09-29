// But : L'utilisateur indique � quel �tage il se trouve et donne sa destination. 
// L'�tage de d�part peut �tre plus grand que l'�tage d'arriv�e et dans ce cas, l'ascenseur descend
// sinon l'ascenseur monte
// Auteur : Karine Moreau
// Date : 2020-09-29


#include <iostream>

using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	int etageArrivee;
	int etageDepart;
	int i;

	// On demande l'�tage de d�part
	cout << "Indiquez l'�tage o� vous �tes -->";
	cin >> etageDepart;

	// On demande l'�tage � atteindre
	cout << "Indiquez l'�tage � atteindre -->";
	cin >> etageArrivee;

	if (etageArrivee > etageDepart)
	{
		cout << "Vous �tes � l'�tage " << etageDepart << " et vous montez � l'�tage " << etageArrivee << endl;
		i = etageDepart + 1;
		while ( i <= etageArrivee)
		{
			cout << "Vous �tes � l'�tage " << i << endl;
			i++;
		}
	}
	else
	{
		cout << "Vous �tes � l'�tage " << etageDepart << " et vous descendez � l'�tage " << etageArrivee << endl;
		i = etageDepart - 1;
		
		while ( i >= etageArrivee)
		{
			cout << "Vous �tes � l'�tage " << i << endl;
		
			i--;
		}
	}
	cout << "Vous �tes arriv�. Bonne journ�e" << endl;

	return 0;
}