#include "Labo09Fonctions.h"
#include "Labo06Fonctions.h"

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
	//Déclaration des variables
	//1. les informations que donne l'utilisateur
	int valeur;
	//2. pour calculer le résultat

	//3. variables intermédiaires : pour des calculs pour le code 
	// Ici on doit connaitre l'état du vecteur (Si vide ou pas) plus précisément combien de cases il y a de disponibles 
	// dans le vecteur
	int nbCaseDispo = vecSource.size();
	int numeroCase = 0;						// La première case porte le numéro 0.
	
	// Si le vecteur est vide, on doit faire des push_back

	// Si le vecteur contient déjà des cases, il faut remplacer le contenu de la case existante avec la fonction at
	// Mais si on a remplacé toutes les cases et que l'utilisateur n'a pas mis fin à la saisie, il faut
	// ajouter des nouvelles cases avec push_back

	// On demande la valeur à l'utilisateur
	cout << "Veuillez entrer la valeur à ajouter au vecteur ou tapez " << finSaisie << " pour mettre fin à la saisie.";
	valeur = saisirEntier();

	// Tant que l'utilisateur n'a pas saisi la valeur finSaisie
	while (valeur !=finSaisie)
	{
		// s'il y a des cases existantes :	utiliser at
		if (nbCaseDispo > 0)
		{
			// Il faut mettre la valeur dans la case du vecteur
			vecSource.at(numeroCase) = valeur;
			// On doit mettre à jour le nb de cases qui restent disponibles et le prochain numéro de la case libre
			nbCaseDispo--;
			numeroCase++;

		}
		// Si pas de cases existantes :	utiliser push_back
		else
		{
			vecSource.push_back(valeur);
		}

		// A LA FIN de la boucle, on doit réinitialiser la variable de boucle
		// On demande la valeur à l'utilisateur
		cout << "Veuillez entrer la valeur à ajouter au vecteur ou tapez " << finSaisie << " pour mettre fin à la saisie.";
		valeur = saisirEntier();

	}
}

int calculerSommeVecteur(const vector<int>& vecSource)
{
	// Déclaration des variables
	// int nb;
	// Pour le calcul du résultat
	int total = 0;					// Au départ, on n'a additionné aucun nombre donc le total est à 0.

	// Pour parcourir chaque case du vecteur, on fait une boucle où i sera le numéro de chacune des cases
	for (int i = 0; i < vecSource.size(); i++)
	{
		// nb = vecSource.at(i);
		total = total + vecSource.at(i);
	}
	return total;
}

float calculerMoyenneVecteur(vector<int> vecSource)
{
	if (vecSource.empty())
	{
		cerr << "Erreur : Résultat indéfini" << endl;
		system("pause");
		// Il faut mettre fin à la fonction, on doit utiliser le return;
		return -9999999999999.99;
	}


	// Le temps de la division, on fait croire que somme est de type float en castant 
	// en mettant entre parenthèse le type (float) devant la variable
	return (float)calculerSommeVecteur(vecSource) / vecSource.size();
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
