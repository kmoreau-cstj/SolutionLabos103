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

void ajouterValeurALaFinDuVecteur(vector<int>& vecSource, int nbElementAAjouter)
{
	int valeurAAjouter;
	for (int i = 0; i < nbElementAAjouter; i++)
	{
		cout << "Veuillez entrer la valeur à ajouter au vecteur : ";
		cin >> valeurAAjouter;
		vecSource.push_back(valeurAAjouter);
	}
}

void saisirValeurDansVecteur(vector<int>& vecSource, int finSaisie)
{
	// Si le vecteur est vide, on doit faire des push_back

	// Si le vecteur contient déjà des cases, il faut remplacer le contenu de la case existante avec la fonction at
	// Mais si on a remplacé toutes les cases et que l'utilisateur n'a pas mis fin à la saisie, il faut
	// ajouter des nouvelles cases avec push_back

	// Tant que l'utilisateur n'a pas saisi la valeur finSaisie
		
		// s'il y a des cases existantes :	utiliser at

		// Si pas de cases existantes :	utiliser push_back







}

void faireUnTest(int paramParCopie, int& paramParReference)
{
	cout << "Dans la fonction :" << endl;
	cout << "Valeur de paramParCopie : " << paramParCopie << endl;
	cout << "Valeur de paramParReference : " << paramParReference << endl;

	paramParCopie = paramParCopie * 3;
	paramParReference = paramParReference * 3;
	cout << "Dans la fonction, après les calculs :" << endl;

	cout << "Valeur de paramParCopie : " << paramParCopie << endl;
	cout << "Valeur de paramParReference : " << paramParReference << endl;
}


// On passe le deuxième paramètre en référence pour éviter de recopier son contenu volumineux, 
// mais on ne permet pas à la fonction de modifier son contenu
void faireUnTest2(int paramParCopie, const int& paramParReferenceGrosVolume)
{

	cout << "Dans la fonction :" << endl;
	cout << "Valeur de paramParCopie : " << paramParCopie << endl;
	cout << "Valeur de paramParReference : " << paramParReferenceGrosVolume << endl;

	paramParCopie = paramParReferenceGrosVolume * 3;
	//paramParReferenceGrosVolume = paramParReferenceGrosVolume * 3;		// On ne peut pas modifier la valeur de ce paramètre
																		// car il est protégé contre l'écriture à cause du const
	cout << "Dans la fonction, après les calculs :" << endl;

	cout << "Valeur de paramParCopie : " << paramParCopie << endl;
	cout << "Valeur de paramParReference : " << paramParReferenceGrosVolume << endl;
}
