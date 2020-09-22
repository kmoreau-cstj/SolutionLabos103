// But :
// Auteur : Karine Moreau
// Date : 2020-09-22
/*
Écrire un programme pour calculer le montant qu’un individu devra débourser pour faire un voyage 
dans une automobile louée.L’algorithme tient compte du kilométrage parcouru et de la durée du voyage
qui sont soumises par le requérant.

Les différentes sources de dépenses sont :
o Coût de la location de 45$ par jour et comprend 250 km gratuits par jour.
o La consommation du véhicule est 7.6 litres aux 100 km.  
o 1 litre d’essence coûte 1.25$
o 0.05$ du kilomètre est exigé pour chaque kilomètre supplémentaire.

*/

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	// Déclaration des variables
	// Première lecture de l'énoncé pour extraire les informations que l'utilisateur doit fournir
	int nbKmParcouru;			//	kilométrage parcouru
	int nbJour;					//	la durée du voyage

	// Deuxième lecture de l'énoncé pour extraire les valeurs numériques qui peuvent dans le temps être modifiées
	// on mémorise les valeurs numériques dans des contanstes (mot clé const) dont le nom est écrit en MASJUCULES
	// et qui doivent être initialisées à leur déclaration.
	const float PRIX_LOCATION = 45;
	const int NB_KM_GRATUIT = 250;
	const float CONSO_ESSENCE = 7.6 / 100;
	const float PRIX_ESSENCE = 1.25;
	const float PRIX_KM_SUPP = 0.05;

	// Troisième lecture pour connaitre le résultat à calculer ou à afficher
	// Montant total de la dépense
	float coutTotal;				// Montant final des dépenses
	// pour mémoriser les calculs intermédiaires
	float coutLocation;
	float coutEssence;
	int nbKmSupp;
	float coutKmSupp;

	// Quatrième lecture pour déterminer comment calculer les coûts
	// coutLocation = PRIX_LOCATION * nbJour
	// coutEssence = CONSO_ESSENCE * nbKmParcouru * PRIX_ESSENCE
	// il faut d'abord calculer le nombre de km supplémentaire
	// nbKmSupp = nbKmParcouru - NB_KM_GRATUIT * nbJour
	// Si nbKmSupp > 0 coutKmSupp = nbKmSupp * PRIX_KM_SUPP 
	// Sinon coutKmSupp = 0
	// coutTotal = coutLocation + coutEssence + coutKmSupp


	/*
	plan de tests
	nbJour		nbKmParcouru	coutLocation	coutEssence				nbKmSupp		coutKmSupp	montantTotal	
	1			250				45*1=45			250*7.6/100*1.25=23.75	250-250*1= 0	0			45+23.75+0=68.75
	1			350				45*1=45			350*7.6/100*1.25=33.25	350-250*1=100	100*0.05= 5	45+33.25+5=83.25
	10			3000			45*10=450		3000*7.6/100*1.25=285	3000-250*10=500	500*0.05=25	450+285+25=760 
	1			0				45*1=45			0						0-250*1=-250	0			45+0+0=45
	1			-10				Erreur
	0			Erreur
	-10			Erreur
	
	*/

	// Demander à l'utilisateur le nombre de jour
	std::cout << "Veuillez entrer la durée de la location du véhicule : ";
	std::cin >> nbJour;

	// On valide que le nombre de jour est d'au moins 1 jour
	if (nbJour <=0)
	{
		std::cout << "Erreur : La durée de la location doit être un nombre plus grand que 0.";
		return 123;
	}
	else
	{
		// La durée est valide
		// On demande la distance parcourue
		std::cout << "Veuillez entrer la distance parcourue : ";
		std::cin >> nbKmParcouru;
		// On valide que le nombre de km n'est pas négatif
		if (nbKmParcouru < 0)
		{
			std::cout << "Erreur : Le nombre de km ne peut pas être négatif.";
			return 456;
		}
		else
		{
			// Ici on a les bonnes valeurs pour faire les calculs
			coutLocation = PRIX_LOCATION * nbJour;
			coutEssence = CONSO_ESSENCE * nbKmParcouru * PRIX_ESSENCE;
			// il faut d'abord calculer le nombre de km supplémentaire
			nbKmSupp = nbKmParcouru - NB_KM_GRATUIT * nbJour;
			// Si nbKmSupp > 0 
			if (nbKmSupp > 0)
				coutKmSupp = nbKmSupp * PRIX_KM_SUPP;
				// Sinon coutKmSupp = 0
			else
				coutKmSupp = 0;

			coutTotal = coutLocation + coutEssence + coutKmSupp;

			// On affiche le résultat à l'écran
			std::cout << "------------------------------------" << std::endl;
			std::cout << "Facture de la location d'un véhicule" << std::endl;
			std::cout << "------------------------------------" << std::endl;
			std::cout << "Détails des coûts de la location    " << std::endl;
			std::cout << "Cout du véhicule            : " << coutLocation << std::endl;
			std::cout << "Cout de l'essence           : " << coutEssence << std::endl;
			std::cout << "Cout des km supplémentaires : " << coutKmSupp << std::endl;
			std::cout << "------------------------------------" << std::endl;
			std::cout << "Montant total               : " << coutTotal << std::endl;
			std::cout << "------------------------------------" << std::endl;

		}

	}
	return 0;
}