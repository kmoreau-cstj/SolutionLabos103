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
#include "Labo05MesFonctions.h"			// Ici on inclut la biblioth�que de nos propres fonctions entre guillemets et pas les becs de canard

using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

// Il faut cr�er une fonction comme on cr�e une variable
//1. d�finir le type de la valeur que la fonction retourne : int, char, float, double, bool, string, void(rien)
//2. d�finir le nom de la fonction : pas commencer par un chifre, pas d'espace, pas d'accent.
//	  par convention : verbe � l'infinitif suivi d'un compl�ment : calculerSomme, calculerSalaire, calculerMax, calculerMoyenne
//																   afficherMenu, validerChoixMenu, etrePositif, etrePair, etreBissextile
//3. la fonction doit avoir une liste de param�tres entre parenth�se. Les parenth�ses sont obligatoires
//   (type nomDeParametre, type nomDuParametre, type nomDuParametre, ...)
//   ()

/*
int calculerMax(int nb1, int nb2, int nb3);
void afficherMenu();
bool etreBissextile(int annee);
*/

// 3 �tapes pour mettre en place des fonctions
// 1. cr�er un fichier pour y mettre les d�clarations des fonctions. Ce fichier s'appelle un fichier d'en-t�te (header) 
//   avec une extension .h.
// 2. �crire le code de la fonction. Le code (d�finition de la fonction) doit �tre dans un fichier .cpp. Mais VS nous rend la vie facile. On utilise le tournevis
// et il fait tout pour nous
// 3. Il faut utiliser la fonction : appeler la fonction



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

	// Appel de la fonction. il faut inclure le fichier.h au d�but du .cpp
	afficherMenu();
	// le programme demande le choix de l'utilisateur
	typeEmploye = validerChoixMenu('1', '4', 'q');

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
		afficherMenu();
		// le programme demande le choix de l'utilisateur
		typeEmploye = validerChoixMenu('1', '4', 'q');

	} // fin de la boucle principale

	return 0;
}