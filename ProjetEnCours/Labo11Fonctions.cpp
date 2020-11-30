#include "Labo11Fonctions.h"

void ouvrirFichierEnLecture(const string NOM_FICHIER, ifstream& canal)
{
	// ON TENTE d'ouvrir le fichier et de l'associer au canal
	canal.open(NOM_FICHIER, ios::in);
	// On s'assure que le canal est bien ouvert, sinon on affiche un message d'erreur et on quitte le programme
	if (!canal)
	{
		cerr << "Le fichier " << NOM_FICHIER << " n'a pas pu s'ouvrir correctement." << endl;
		cerr << "Il se peut qu'il n'existe pas sur le disque dur et donc vérifiez le nom." << endl;
		cerr << "Il se peut que vous n'ayez pas les droits nécessaires." << endl;
		exit(123);			// On quitte la fonction, on quitte la fonction qui nous a appelé (ici le main) et on quitte le programme
	}
}

void creerFichierEnEcriture(const string NOM_FICHIER, ofstream& canal)
{
	// ON TENTE de créer le fichier et de l'associer au canal
	canal.open(NOM_FICHIER, ios::out);
	// On s'assure que le canal est bien créé, sinon on affiche un message d'erreur et on quitte le programme
	if (!canal)
	{
		cerr << "Le fichier " << NOM_FICHIER << " n'a pas pu être créé." << endl;
		cerr << "Il se peut qu'il n'y ait plus d'espace sur le disque dur." << endl;
		cerr << "Il se peut que vous n'ayez pas les droits nécessaires." << endl;
		exit(321);			// On quitte la fonction, on quitte la fonction qui nous a appelé (ici le main) et on quitte le programme
	}

}

void lireEnregistrement(ifstream& canal, Chapitre& chapitreLu)
{
	// On lit en premier le titre du chapitre qui contient des espaces et donc on doit utiliser le getline
	// On précise le délimitateur comme troisième paramètre
	getline(canal, chapitreLu.titreChapitre, ';');
	// On doit lire le numéro de la page. C'est un entier donc on peut utiliser le >>. Normalement, le fichier de données
	// ne doit pas contenir d'erreur.
	canal >> chapitreLu.numeroPage;
}

Chapitre lireEnregitrement(ifstream& canal)
{
	// Déclaration des variables
	Chapitre chapitreALire;
	// On lit le titre du chapitre. Où va-t-on le stocker ? dans une variable locale à la fonction
	getline(canal, chapitreALire.titreChapitre, ';');
	// On lit le deuxième champ
	canal >> chapitreALire.numeroPage;

	// On a fini la lecture de toute la ligne dans le fichier, on retourne l'enveloppe du chapitreALire
	return chapitreALire;
}

void ecrireEnTete(ofstream& canal, const string TITRE, int nbLigneApresTitre)
{
	// Il faut centrer le titre sur la ligne
	// On calcule la place pour y mettre des espaces avant le titre
	canal << setw((LIGNE - TITRE.length()) / 2) << " " << TITRE << endl;
	for (int i = 1; i <= nbLigneApresTitre; i++)
	{
		canal << endl;
	}
}
