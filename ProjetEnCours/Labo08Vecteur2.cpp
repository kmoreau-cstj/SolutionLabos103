// But : explorer et utiliser des vecteurs 
// Un vecteur est un ensemble d'emplacements mémoire de même type. Il permet de regrouper plusieurs valeurs en les stockant 
// dans un seul nom de variable

// Auteur : Karine Moreau
// Date : 2020


#include <iostream>
#include <vector>				// Pour avoir accès aux fonctions sur les vecteurs

using namespace std;			// Pour éviter d'écrire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	vector<int> vec{ 12,0,42,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0 };

	//1.	Afficher la taille du vecteur.
	cout << "La taille du vecteur est : " << vec.size() <<endl;


	//2.	Afficher le contenu de la première case.
	cout << "Façon #1 : Le contenu de la première case est : " << vec.at(0) << endl;
	cout << "Façon #2 : Le contenu de la première case est : " << vec.front() << endl;
	cout << "Façon #3 : Le contenu de la première case est : " << vec[0] << endl;


	//3.	Afficher le contenu de la dernière case.
	cout << "Façon #1 : Le contenu de la dernière case est : " << vec.at(vec.size()-1) << endl;
	cout << "Façon #2 : Le contenu de la dernière case est : " << vec.back() << endl;
	cout << "Façon #3 : Le contenu de la dernière case est : " << vec[vec.size()-1] << endl;
	
	//4.	Afficher le nombre de cases qui contiennent une valeur nulle.
	int compteVide = 0;
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec.at(i) == 0)
		{
			compteVide++;
		}
	}

	cout << "nombre de cases qui contiennent la valeur 0 : " << compteVide << endl;
	return 0;
}