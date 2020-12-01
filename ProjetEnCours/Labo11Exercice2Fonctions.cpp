#include "Labo11Exercice2Fonctions.h"

void ouvrirFichierEnLecture(const string NOM_FICHIER, ifstream& canal)
{
	// ON TENTE d'ouvrir le fichier et de l'associer au canal
	canal.open(NOM_FICHIER, ios::in);
	// On s'assure que le canal est bien ouvert, sinon on affiche un message d'erreur et on quitte le programme
	if (!canal)
	{
		cerr << "Le fichier " << NOM_FICHIER << " n'a pas pu s'ouvrir correctement." << endl;
		cerr << "Il se peut qu'il n'existe pas sur le disque dur et donc v�rifiez le nom." << endl;
		cerr << "Il se peut que vous n'ayez pas les droits n�cessaires." << endl;
		exit(123);			// On quitte la fonction, on quitte la fonction qui nous a appel� (ici le main) et on quitte le programme
	}
}

void creerFichierEnEcriture(const string NOM_FICHIER, ofstream& canal)
{
	// ON TENTE de cr�er le fichier et de l'associer au canal
	canal.open(NOM_FICHIER, ios::out);
	// On s'assure que le canal est bien cr��, sinon on affiche un message d'erreur et on quitte le programme
	if (!canal)
	{
		cerr << "Le fichier " << NOM_FICHIER << " n'a pas pu �tre cr��." << endl;
		cerr << "Il se peut qu'il n'y ait plus d'espace sur le disque dur." << endl;
		cerr << "Il se peut que vous n'ayez pas les droits n�cessaires." << endl;
		exit(321);			// On quitte la fonction, on quitte la fonction qui nous a appel� (ici le main) et on quitte le programme
	}

}