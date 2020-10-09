// But : 

/*
Une compagnie r�mun�re ses employ�s selon leur fonction. Ils peuvent �tre
1. cadres (recevant un salaire hebdomadaire fixe),
2. travailleurs � tarif horaire (recevant un taux horaire fixe r�gulier pour les 40 premi�res heures
   et un taux horaire temps et demi soit 1.5 fois le taux horaire r�gulier pour les heures suppl�mentaires)
3. travailleurs � la commission (recevant 250$ plus 5.7% de leurs ventes hebdomadaires brutes)
4. travailleur � la pi�ce (recevant un taux fixe d'argent pour chaque article produit;
   chaque travailleur � la pi�ce de cette compagnie ne travaille que sur un seul type d'article)



�crivez un programme qui calcule la paie pour chaque employ�.
Vous ne connaissez pas � l'avance le nombre d'employ�s.
Chaque type d'employ�s poss�de son propre code de paie : le code de paie 1 repr�sente les cadres,
														 le code de paie 2 repr�sente les travailleurs � tarif horaire,
														 le code de paie 3 repr�sente les travailleurs � la commission et
														 le code de paie 4 repr�sente les travailleurs � la pi�ce.
														 Le code de paie q pour quitter le programme


Utilisez une structure switch pour calculer la paie de chaque employ� en fonction du code de paie de cet employ�.
A l'int�rieur du switch, invitez l'utilisateur � entrer les faits appropri�s requis par votre programme pour calculer
la paie de chaque employ� en fonction du code de paie de l'employ�.


*/
// Auteur : Karine Moreau
// Date : 2020


#include <iostream>

using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des constantes
	const float HEURES_SUPP = 40;
	const float TAUX_HEURES_SUPP = 1.5;
	const float SALAIRE_FIXE = 250;
	const float TAUX_VENTES = 5.7 / 100;
	const char CODE_MIN = '1';
	const char CODE_MAX = '4';

	// D�claration des variables pour m�moriser les valeurs fournies par l'utilisateur
	char typeEmploye;
	float salaireCadre;
	float nbHeures;
	float tauxHoraire;
	float ventes;
	float prixArticle;
	int nbArticles;

	// D�claration des variables dans le but de m�moriser le r�sultat que le programme doit calculer 
	// ou afficher � la fin du programme
	float paieEmploye;


	// On va d�terminer les calculs qu'il faut faire pour obtenir la paie de l'employ�
	// 1. cadres : paieEmploye = salaireCadre ,
	// 2. travailleurs � tarif horaire : 
	// si nbHeures <= HEURES_SUPP alors paieEmploye = nbHeures * tauxHoraire
	// sinon paieEmploye =  HEURES_SUPP * tauxHoraire + (nbHeures - HEURES_SUPP) * tauxHoraire * TAUX_HEURES_SUPP
	// 3. travailleurs � la commission : paieEmploye = SALAIRE_FIXE + TAUX_VENTES * ventes   
	// 4. travailleur � la pi�ce : paieEmploye = prixArticle * nbArticles     



	// Le programme doit demander � l'utilisateur le type d'employ� pour lequel on doit calculer le salaire
	// Pour cela le programme va afficher le menu offrant les types d'employ� ou la possiblit� de quitter le programme
	cout << "1. cadres" << endl;
	cout << "2. travailleurs � tarif horaire" << endl;
	cout << "3. travailleurs � la commission" << endl;
	cout << "4. travailleurs � la pi�ce" << endl;
	cout << "q. quitter le programme" << endl;
	// le programme demande le choix de l'utilisateur
	cout << "Votre choix --> ";
	cin >> typeEmploye;

	// Le programme doit v�rifier que le choix fait par l'utilisateur est un choix correct
	// Le choix doit �tre compris entre 1 et 4 ou �tre la lettre q ou Q. L'utilisateur peut se tromper plusieurs fois => boucle
	while (!(typeEmploye >= '1' && typeEmploye <= '4' || typeEmploye == 'q' || typeEmploye == 'Q'))
	{
		cout << "Erreur : ..." << endl;

		// A LA FIN de la boucle, la variable de boucle, ici typeEmploye, doit �tre r�initialis�e
		cout << "1. cadres" << endl;
		cout << "2. travailleurs � tarif horaire" << endl;
		cout << "3. travailleurs � la commission" << endl;
		cout << "4. travailleurs � la pi�ce" << endl;
		cout << "q. quitter le programme" << endl;
		// le programme demande le choix de l'utilisateur
		cout << "Votre choix --> ";
		cin >> typeEmploye;
	}

	// ici on sait que le choix est valide

	// Si l'utilisateur ne demande pas de quitter le programme
	while (typeEmploye != 'q' && typeEmploye !='Q')
	{
		// ici, le typeEmploye vaut 1, 2, 3 ou 4
				
		// le programme doit calculer le montant de la paie
			
		// selon le type d'employ�
		switch (typeEmploye)
		{

		// calcul pour le cas 1 . les cadres
		case '1' :
			cout << "Entrez le salaire du cadre :";
			cin >> salaireCadre;
			paieEmploye = salaireCadre;
			break;
	// calcul pour le cas 2 .
		case '2':
			cout << "Entrez le nombre d'heures travaill�es :";
			cin >> nbHeures;
			cout << "Entrez le taux horaire :";
			cin >> tauxHoraire;

			if (nbHeures <= HEURES_SUPP)
			{
				paieEmploye = nbHeures * tauxHoraire;
			}
			else
			{
				paieEmploye = HEURES_SUPP * tauxHoraire + (nbHeures - HEURES_SUPP) * tauxHoraire * TAUX_HEURES_SUPP;
			}
			break;

	// calcul pour le cas 3 .
		case '3' : 
			cout << "Entrez le montant des ventes : ";
			cin >> ventes;
			paieEmploye = SALAIRE_FIXE + TAUX_VENTES * ventes;
			break;
	// calcul pour le cas 4 .
		case '4' :
			cout << "Entrez le nombre d'articles :";
			cin >> nbArticles;
			cout << "Entrez le taux pour l'article fabriqu� :";
			cin >> prixArticle;
			paieEmploye = prixArticle * nbArticles;
			break;
		}// fin du switch

		// Le programme peut afficher le montant de la paie
		cout << "L'employ� a un salaire de : " << paieEmploye << endl;
		
		// Le programme offre � l'utilisateur la possibilit� de recommencer pour un autre type d'employ�
		// Le programme doit demander � l'utilisateur le type d'employ� pour lequel on doit calculer le salaire
	// Pour cela le programme va afficher le menu offrant les types d'employ� ou la possiblit� de quitter le programme
		cout << "1. cadres" << endl;
		cout << "2. travailleurs � tarif horaire" << endl;
		cout << "3. travailleurs � la commission" << endl;
		cout << "4. travailleurs � la pi�ce" << endl;
		cout << "q. quitter le programme" << endl;
		// le programme demande le choix de l'utilisateur
		cout << "Votre choix --> ";
		cin >> typeEmploye;

		// Le programme doit v�rifier que le choix fait par l'utilisateur est un choix correct
		// Le choix doit �tre compris entre 1 et 4 ou �tre la lettre q ou Q. L'utilisateur peut se tromper plusieurs fois => boucle
		while (!(typeEmploye >= '1' && typeEmploye <= '4' || typeEmploye == 'q' || typeEmploye == 'Q'))
		{
			cout << "Erreur : ..." << endl;

			// A LA FIN de la boucle, la variable de boucle, ici typeEmploye, doit �tre r�initialis�e
			cout << "1. cadres" << endl;
			cout << "2. travailleurs � tarif horaire" << endl;
			cout << "3. travailleurs � la commission" << endl;
			cout << "4. travailleurs � la pi�ce" << endl;
			cout << "q. quitter le programme" << endl;
			// le programme demande le choix de l'utilisateur
			cout << "Votre choix --> ";
			cin >> typeEmploye;
		}

		// ici on sait que le choix est valide


	} // fin de la boucle principale

	return 0;
}