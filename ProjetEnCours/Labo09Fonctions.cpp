#include "Labo09Fonctions.h"
#include <iostream>

using namespace std;

void echangerValeur(int& nb1, int& nb2)
{
	int change;

	cout << "dans la fonction :" << endl;
	cout << "nb1 : " << nb1 << endl;
	cout << "nb2 : " << nb2 << endl;


	change = nb1;
	nb1 = nb2;
	nb2 = change;


	cout << "après l'échange, dans la fonction :" << endl;
	cout << "nb1 : " << nb1 << endl;
	cout << "nb2 : " << nb2 << endl;

}

void afficherContenuDuVecteur(vector<int> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << "vec[" << i << "] : " << vec.at(i) << endl;
	}


}
