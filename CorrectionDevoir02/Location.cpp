// But :
// Auteur : Karine Moreau
// Date : 2020-09-22
/*
�crire un programme pour calculer le montant qu�un individu devra d�bourser pour faire un voyage 
dans une automobile lou�e.L�algorithme tient compte du kilom�trage parcouru et de la dur�e du voyage
qui sont soumises par le requ�rant.

Les diff�rentes sources de d�penses sont :
o Co�t de la location de 45$ par jour et comprend 250 km gratuits par jour.
o La consommation du v�hicule est 7.6 litres aux 100 km.  
o 1 litre d�essence co�te 1.25$
o 0.05$ du kilom�tre est exig� pour chaque kilom�tre suppl�mentaire.

*/

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	// D�claration des variables
	// Premi�re lecture de l'�nonc� pour extraire les informations que l'utilisateur doit fournir
	int nbKmParcouru;			//	kilom�trage parcouru
	int nbJour;					//	la dur�e du voyage

	// Deuxi�me lecture de l'�nonc� pour extraire les valeurs num�riques qui peuvent dans le temps �tre modifi�es
	// on m�morise les valeurs num�riques dans des contanstes (mot cl� const) dont le nom est �crit en MASJUCULES
	// et qui doivent �tre initialis�es � leur d�claration.
	const float PRIX_LOCATION = 45;
	const int NB_KM_GRATUIT = 250;
	const float CONSO_ESSENCE = 7.6 / 100;
	const float PRIX_ESSENCE = 1.25;
	const float PRIX_KM_SUPP = 0.05;

	// Troisi�me lecture pour connaitre le r�sultat � calculer ou � afficher
	// Montant total de la d�pense
	float coutTotal;				// Montant final des d�penses
	// pour m�moriser les calculs interm�diaires
	float coutLocation;
	float coutEssence;
	int nbKmSupp;
	float coutKmSupp;

	// Quatri�me lecture pour d�terminer comment calculer les co�ts
	// coutLocation = PRIX_LOCATION * nbJour
	// coutEssence = CONSO_ESSENCE * nbKmParcouru * PRIX_ESSENCE
	// il faut d'abord calculer le nombre de km suppl�mentaire
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

	// Demander � l'utilisateur le nombre de jour
	std::cout << "Veuillez entrer la dur�e de la location du v�hicule : ";
	std::cin >> nbJour;

	// On valide que le nombre de jour est d'au moins 1 jour
	if (nbJour <=0)
	{
		std::cout << "Erreur : La dur�e de la location doit �tre un nombre plus grand que 0.";
		return 123;
	}
	else
	{
		// La dur�e est valide
		// On demande la distance parcourue
		std::cout << "Veuillez entrer la distance parcourue : ";
		std::cin >> nbKmParcouru;
		// On valide que le nombre de km n'est pas n�gatif
		if (nbKmParcouru < 0)
		{
			std::cout << "Erreur : Le nombre de km ne peut pas �tre n�gatif.";
			return 456;
		}
		else
		{
			// Ici on a les bonnes valeurs pour faire les calculs
			coutLocation = PRIX_LOCATION * nbJour;
			coutEssence = CONSO_ESSENCE * nbKmParcouru * PRIX_ESSENCE;
			// il faut d'abord calculer le nombre de km suppl�mentaire
			nbKmSupp = nbKmParcouru - NB_KM_GRATUIT * nbJour;
			// Si nbKmSupp > 0 
			if (nbKmSupp > 0)
				coutKmSupp = nbKmSupp * PRIX_KM_SUPP;
				// Sinon coutKmSupp = 0
			else
				coutKmSupp = 0;

			coutTotal = coutLocation + coutEssence + coutKmSupp;

			// On affiche le r�sultat � l'�cran
			std::cout << "------------------------------------" << std::endl;
			std::cout << "Facture de la location d'un v�hicule" << std::endl;
			std::cout << "------------------------------------" << std::endl;
			std::cout << "D�tails des co�ts de la location    " << std::endl;
			std::cout << "Cout du v�hicule            : " << coutLocation << std::endl;
			std::cout << "Cout de l'essence           : " << coutEssence << std::endl;
			std::cout << "Cout des km suppl�mentaires : " << coutKmSupp << std::endl;
			std::cout << "------------------------------------" << std::endl;
			std::cout << "Montant total               : " << coutTotal << std::endl;
			std::cout << "------------------------------------" << std::endl;

		}

	}
	return 0;
}