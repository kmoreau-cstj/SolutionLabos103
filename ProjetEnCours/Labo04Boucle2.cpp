// But : 

/*
Une compagnie rémunère ses employés selon leur fonction. Ils peuvent être
1. cadres (recevant un salaire hebdomadaire fixe),
2. travailleurs à tarif horaire (recevant un taux horaire fixe régulier pour les 40 premières heures
   et un taux horaire temps et demi soit 1.5 fois le taux horaire régulier pour les heures supplémentaires)
3. travailleurs à la commission (recevant 250$ plus 5.7% de leurs ventes hebdomadaires brutes)
4. travailleur à la pièce (recevant un taux fixe d'argent pour chaque article produit;
   chaque travailleur à la pièce de cette compagnie ne travaille que sur un seul type d'article)



Écrivez un programme qui calcule la paie pour chaque employé.
Vous ne connaissez pas à l'avance le nombre d'employés.
Chaque type d'employés possède son propre code de paie : le code de paie 1 représente les cadres,
														 le code de paie 2 représente les travailleurs à tarif horaire,
														 le code de paie 3 représente les travailleurs à la commission et
														 le code de paie 4 représente les travailleurs à la pièce.
														 Le code de paie q pour quitter le programme


Utilisez une structure switch pour calculer la paie de chaque employé en fonction du code de paie de cet employé.
A l'intérieur du switch, invitez l'utilisateur à entrer les faits appropriés requis par votre programme pour calculer
la paie de chaque employé en fonction du code de paie de l'employé.


*/
// Auteur : Karine Moreau
// Date : 2020


#include <iostream>

using namespace std;			// Pour éviter d'écrire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des constantes
	const float HEURES_SUPP = 40;
	const float TAUX_HEURES_SUPP = 1.5;
	const float SALAIRE_FIXE = 250;
	const float TAUX_VENTES = 5.7 / 100;
	const char CODE_MIN = '1';
	const char CODE_MAX = '4';

	// Déclaration des variables pour mémoriser les valeurs fournies par l'utilisateur
	char typeEmploye;
	float salaireCadre;
	float nbHeures;
	float tauxHoraire;
	float ventes;
	float prixArticle;
	int nbArticles;

	// Déclaration des variables dans le but de mémoriser le résultat que le programme doit calculer 
	// ou afficher à la fin du programme
	float paieEmploye;


	// On va déterminer les calculs qu'il faut faire pour obtenir la paie de l'employé
	// 1. cadres : paieEmploye = salaireCadre ,
	// 2. travailleurs à tarif horaire : 
	// si nbHeures <= HEURES_SUPP alors paieEmploye = nbHeures * tauxHoraire
	// sinon paieEmploye =  HEURES_SUPP * tauxHoraire + (nbHeures - HEURES_SUPP) * tauxHoraire * TAUX_HEURES_SUPP
	// 3. travailleurs à la commission : paieEmploye = SALAIRE_FIXE + TAUX_VENTES * ventes   
	// 4. travailleur à la pièce : paieEmploye = prixArticle * nbArticles     



	// Le programme doit demander à l'utilisateur le type d'employé pour lequel on doit calculer le salaire
	// Pour cela le programme va afficher le menu offrant les types d'employé ou la possiblité de quitter le programme
	cout << 


	// le programme demande le choix de l'utilisateur
	cout << 
	cin >> 
	// Le programme doit vérifier que le choix fait par l'utilisateur est un choix correct
	// Le choix doit être compris entre 1 et 4 ou être la lettre q ou Q. L'utilisateur peut se tromper plusieurs fois => boucle
		while (true)
		{

		}

	// ici on sait que le choix est valide

	// Si l'utilisateur ne demande pas de quitter le programme
	while (true)
	{
		// le programme doit calculer le montant de la paie
			
			// selon le type d'employé
		switch (switch_on)
		{

			// calcul pour le cas 1 . les cadres

	// calcul pour le cas 2 . 

	// calcul pour le cas 3 . 

	// calcul pour le cas 4 . 
		default:
			break;
		}

	

			// Le programme peut afficher le montant de la paie

			// Le programme offre à l'utilisateur la possibilité de recommencer pour un autre type d'employé

	}



	return 0;
}