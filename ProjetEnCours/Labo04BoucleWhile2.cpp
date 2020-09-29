// But : L'utilisateur est devant deux ascenseurs et il s'appr�te � monter � un �tage qu'il va nous indiquer. 
// s'il va � un �tage pair, il doit prendre l'ascenseur pair qui dessert les �tages 2, 4, 6, 8, ... 
// s'il va � un �tage impair, il doit prendre l'ascenseur impair qui dessert les �tages 3, 5, 7, 9, ...
// Auteur : Karine Moreau
// Date : 2020


#include <iostream>

using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	int etageArrivee;
	int compteurEtage;


	// On demande l'�tage � atteindre
	cout << "Indiquez l'�tage � atteindre -->";
	cin >> etageArrivee;

	if (etageArrivee % 2 ==0)
	{
		cout << "Vous �tes � l'�tage 1 et vous montez dans l'ascenseur pair" << endl;
		compteurEtage = 2;
	}
	else
	{
		cout << "Vous �tes � l'�tage 1 et vous montez dans l'ascenseur impair" << endl;
		compteurEtage = 3;
	}
	
	while (compteurEtage <= etageArrivee)
	{
		cout << "Vous �tes � l'�tage " << compteurEtage << endl;
		compteurEtage = compteurEtage + 2;
	}
	cout << "Vous �tes arriv�. Bonne journ�e" << endl;

	return 0;
}