// But : Description du programme
// Auteur : Karine Moreau
// Date : 2019



#include "Labo11-ListeMateriel.h"



int main()
{
	setlocale(LC_ALL, "");

	//d�claration des variables locales
	// le nom des fichiers sur le disque dur
	const string NOM_FICHIER_ENTREE="ListeMateriel.txt";
	const string NOM_FICHIER_SORTIE="Inventaire.txt";

	// Les canaux de communication en entr�e et en sortie
	ifstream ifFichierEntree;
	ofstream ofFichierSortie;

	// D�clare les variables pour lire l'enregistrement dans le fichier
	Materiel leMateriel;

	// Variables pour le total et la quantit� d'�quipements
	float total = 0;
    int nbQuantite = 0;


	// On tente d'ouvrir le fichier d'entr�e
	ifFichierEntree.open(NOM_FICHIER_ENTREE, ios::in);
	if(!ifFichierEntree)
	{
		cerr << "Erreur : Le fichier " << NOM_FICHIER_ENTREE << " n'a pas pu s'ouvrir" << endl;
		system("pause");
		exit (1);
	}

	// On tente de cr�er le fichier de sortie
	ofFichierSortie.open(NOM_FICHIER_SORTIE, ios::out);
	if(!ofFichierSortie)
	{
		cerr << "Erreur : Le fichier " << NOM_FICHIER_SORTIE << " n'a pas pu se cr�er" << endl;
		system("pause");
		exit (2);
	}

	// �crit l'en-t�te du fichier de sortie
	ecrireEnt�te(ofFichierSortie);

	// Lire le premier enregistrement
	lireEnregistrement(ifFichierEntree, leMateriel);

	while(!ifFichierEntree.eof())
	{
		
		cout << leMateriel.typeMateriel << " " << leMateriel.quantiteMateriel << " " << leMateriel.descriptionMateriel << endl;
		// �crire l'enregistrement dans le fichier de sortie
		ecrireEnregistrement(ofFichierSortie, leMateriel,  nbQuantite, total);

		// Lire l'enregistrement suivant
		lireEnregistrement(ifFichierEntree, leMateriel);

	}

	// �crire le pied de l'�tat avec le total de l'inventaire et le nombre total d'�quipements
	//ecrirePiedPage(ofFichierSortie, nbQuantite, total);

	cout << "la fin du fichier d'entr�e est atteinte" <<endl;
	
	// Fermeture des fichiers
	ifFichierEntree.close();
	ofFichierSortie.close();

	system("PAUSE");
	return 0;

}












