// But : L'utilisateur indique � quel �tage il se trouve et donne sa destination. 
// L'�tage de d�part peut �tre plus grand que l'�tage d'arriv�e et dans ce cas, l'ascenseur descend
// sinon l'ascenseur monte
// Auteur : Karine Moreau
// Date : 2020


/*
si on veut compter en augmentant le compteur de 1


Si la valeur de d�part est plus petite que la valeur de fin, le compteur doit augmenter et la comparaison doit �tre plus petit que

for (int compteur = valeurDeDepart; compteur < valeurDeFin; compteur++)
{

}

compte de 0 � 4 : la boucle s'excute 5 fois
for (int compteur = 0; compteur < 5; compteur++)
{

}
compte de 1 � 5 : La boucle s'ex�cute 5 fois
for (int compteur = 1; compteur <= 5; compteur++)
{

}

Si la valeur de d�part est plus grande que la valeur de fin, le compteur doit diminuer et la comparaison doit �tre plus grand que
for (int compteur = valeurDeDepart; compteur > valeurDeFin; compteur--)
{

}

compte de 5 � 1 : la boucle s'excute 5 fois
for (int compteur = 5; compteur > 0; compteur--)
{

}
compte de 5 � 1 : La boucle s'ex�cute 5 fois
for (int compteur = 5; compteur >= 1; compteur--)
{

}

On augmente de bond, si bond vaut 2, on va de deux en deux
for (int compteur = valeurDeDepart; compteur < valeurDeFin; compteur = compteur + bond)
{

}

*/


#include <iostream>

using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	int etageArrivee;
	int etageDepart;

	// On demande l'�tage � atteindre
	cout << "Indiquez l'�tage � atteindre -->";
	cin >> etageArrivee;

	if (etageArrivee > etageDepart)
	{
		cout << "Vous �tes � l'�tage " << etageDepart << " et vous montez � l'�tage " << etageArrivee << endl;
		for (int i = etageDepart + 1; i <= etageArrivee; i++)
		{
			cout << "Vous �tes � l'�tage " << i << endl;
		}
	}
	else
	{
		cout << "Vous �tes � l'�tage " << etageDepart << " et vous descendez � l'�tage " << etageArrivee << endl;
		for (int i = etageDepart - 1; i >= etageArrivee; i--)
		{
			cout << "Vous �tes � l'�tage " << i << endl;
		}
	}
	cout << "Vous �tes arriv�. Bonne journ�e" << endl;







	return 0;
}