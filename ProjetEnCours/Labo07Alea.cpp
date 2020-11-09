// But : Comprendre comment g�n�rer un nombre al�atoire compris entre un min et un max
// Auteur : Karine Moreau
// Date : 2020-11-09


#include <iostream>
#include <ctime>

using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	int alea;

	// On va choisir la ligne de nombres al�atoires
	srand(time(NULL));

	// On met une valeur al�atoire dans alea en utilisant la fonction rand() pour random
	alea = rand();

	cout << "Le nombre al�atoire est : " << alea << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "Al�a" << i + 1 << " : " << rand() << endl;
	}
	
	cout << "Maximum d'un nombre al�atoire : " << RAND_MAX << endl;

	// On veut obtenir 10 nombres al�atoires entre 1 et 6

	for (int i = 0; i < 20; i++)
	{
		// %2 les r�ponses possibles sont 0 ou 1
		// %3 les r�ponses possibles sont 0 ou 1 ou 2
		// %n les r�ponses possibles sont 0 � (n-1)
		cout << "Alea #" << i << " : " << rand() % 6 +1 << endl;
	}


	// on veut jouer au monopoly : 2 d�s : 2 � 12 : 1+1 1+2 2+1 1+3 3+1 2+2 7 : 1+6 6+1 2+5 5+2 3+4 4+3

	for (int  i = 0; i < 20; i++)
	{
		cout << "somme des deux d�s : " << (rand() % 6 + 1) + (rand() %6 +1) << endl;
		// rand %11 : 0 et 10 +2 => 2 � 12
	}



	return 0;
}