// But : L'utilisateur est devant deux ascenseurs et il s'apprête à monter à un étage qu'il va nous indiquer. 
// s'il va à un étage pair, il doit prendre l'ascenseur pair qui dessert les étages 2, 4, 6, 8, ... 
// s'il va à un étage impair, il doit prendre l'ascenseur impair qui dessert les étages 3, 5, 7, 9, ...
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