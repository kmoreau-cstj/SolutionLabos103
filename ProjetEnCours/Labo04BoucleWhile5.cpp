// But : Les conducteurs se soucient du kilométrage parcouru par leurs automobiles. 
// Un conducteur décide d'enregistrer la quantité de kilomètres parcourus et la quantité de litres utilisés à chaque plein d'essence.
// Développez un programme afin d'entrer les quantités de kilomètres parcourus et de litres utilisés à chaque plein d'essence. 
// Le programme doit calculer et afficher le taux de litres aux 100 kilomètres obtenu entre chaque plein d'essence. 
// Après avoir traité toutes les informations, le programme doit calculer le taux combiné de litres aux 100 kilomètres 
// pour les pleins d'essence. Le programme s'arrête si le conducteur entre -1 comme nombre de litres

/*
plan de tests
nb_litres			nb_km			taux aux 100km					cumul	NbFois
12.8				28				45.71							45.71	1
10.3				200				5.15							50.86	2
5					120				4.17							54.93	3
-1																	18.34 = (45.71+5.15+4.17)/3

autre plan de tests
-1
*/
// Auteur : Karine Moreau
// Date : 2020-09-15

#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	// Déclaration des variables 
	// Les informations fournies par l'utilisateur
	int nbKmParcouru;
	float nbLitre;

	// Le résultat affiché par le programme
	float tauxAux100km;				// tauxAux100km = nbLitre * 100 / nbKmParcouru 
	float moyenne;					// moyenne = somme des tauxAux100km / nbFoisPleinEssence
	// ATTENTION aux divisions par 0, le programme devra s'assurer que ces variables ne sont pas égales à 0.
	
	// Les calculs intermédiaires faits par le programme et initialisés par le programmeur au départ
	float sommeTauxAux100km = 0;		// sommeTauxAux100km = sommeTauxAux100km + tauxAux100Km
	int nbFoisPleinEssence = 0;			// A chaque passage dans la boucle le nb de fois est augmenté de 1 : nbFoisPleinEssence++

	cout << "Veuillez entrer le nombre de litres (ou -1 pour quitter) : ";
	cin >> nbLitre;

	// Tant que l'utilisateur ne veut pas quitter, nbLitre n'est égal à -1
	while (nbLitre !=-1)
	{
		cout << "Veuillez entrer le nombre de km : ";
		cin >> nbKmParcouru;

		// Calcul du taux aux 100 km
		tauxAux100km = nbLitre * 100 / nbKmParcouru;
		cout << tauxAux100km << endl;

		// On doit calculer la somme et le nb de fois

		cout << "Veuillez entrer le nombre de litres (ou -1 pour quitter) : ";
		cin >> nbLitre;

	}


	// A la fin, après la boucle, qu'on doit afficher la moyenne





	return 0;
}
