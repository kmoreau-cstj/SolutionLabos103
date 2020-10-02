// But : Les conducteurs se soucient du kilom�trage parcouru par leurs automobiles. 
// Un conducteur d�cide d'enregistrer la quantit� de kilom�tres parcourus et la quantit� de litres utilis�s � chaque plein d'essence.
// D�veloppez un programme afin d'entrer les quantit�s de kilom�tres parcourus et de litres utilis�s � chaque plein d'essence. 
// Le programme doit calculer et afficher le taux de litres aux 100 kilom�tres obtenu entre chaque plein d'essence. 
// Apr�s avoir trait� toutes les informations, le programme doit calculer le taux combin� de litres aux 100 kilom�tres 
// pour les pleins d'essence. Le programme s'arr�te si le conducteur entre -1 comme nombre de litres

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
	// D�claration des variables 
	// Les informations fournies par l'utilisateur
	int nbKmParcouru;
	float nbLitre;

	// Le r�sultat affich� par le programme
	float tauxAux100km;				// tauxAux100km = nbLitre * 100 / nbKmParcouru 
	float moyenne;					// moyenne = somme des tauxAux100km / nbFoisPleinEssence
	// ATTENTION aux divisions par 0, le programme devra s'assurer que ces variables ne sont pas �gales � 0.
	
	// Les calculs interm�diaires faits par le programme et initialis�s par le programmeur au d�part
	float sommeTauxAux100km = 0;		// sommeTauxAux100km = sommeTauxAux100km + tauxAux100Km
	int nbFoisPleinEssence = 0;			// A chaque passage dans la boucle le nb de fois est augment� de 1 : nbFoisPleinEssence++

	cout << "Veuillez entrer le nombre de litres (ou -1 pour quitter) : ";
	cin >> nbLitre;

	// Tant que l'utilisateur ne veut pas quitter, nbLitre n'est �gal � -1
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


	// A la fin, apr�s la boucle, qu'on doit afficher la moyenne





	return 0;
}
