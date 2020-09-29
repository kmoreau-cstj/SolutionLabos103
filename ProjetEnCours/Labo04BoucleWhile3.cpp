// But : L'utilisateur indique à quel étage il se trouve et donne sa destination. 
// L'étage de départ peut être plus grand que l'étage d'arrivée et dans ce cas, l'ascenseur descend
// sinon l'ascenseur monte
// Auteur : Karine Moreau
// Date : 2020-09-29


#include <iostream>

using namespace std;			// Pour éviter d'écrire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int etageArrivee;
	int etageDepart;
	int i;

	// On demande l'étage de départ
	cout << "Indiquez l'étage où vous êtes -->";
	cin >> etageDepart;

	// On demande l'étage à atteindre
	cout << "Indiquez l'étage à atteindre -->";
	cin >> etageArrivee;

	if (etageArrivee > etageDepart)
	{
		cout << "Vous êtes à l'étage " << etageDepart << " et vous montez à l'étage " << etageArrivee << endl;
		i = etageDepart + 1;
		while ( i <= etageArrivee)
		{
			cout << "Vous êtes à l'étage " << i << endl;
			i++;
		}
	}
	else
	{
		cout << "Vous êtes à l'étage " << etageDepart << " et vous descendez à l'étage " << etageArrivee << endl;
		i = etageDepart - 1;
		
		while ( i >= etageArrivee)
		{
			cout << "Vous êtes à l'étage " << i << endl;
		
			i--;
		}
	}
	cout << "Vous êtes arrivé. Bonne journée" << endl;

	return 0;
}