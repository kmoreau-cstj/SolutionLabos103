// But : A partir d'un fichier texte contenant des contacts, �crire un programme qui g�n�re des �tiquettes 
//		dans un fichier de sortie
// Auteur : Karine Moreau
// Date : 2020-12-01


//#include <iostream>
#include "Labo11Exercice2Fonctions.h"

//using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des constantes
	const string NOM_FICHIER_INFO = "Contacts.txt";
	const string NOM_FICHIER_COUPON = "Etiquettes.txt";

	// D�claration des variables
	// 0. Des variables pour les canaux vers chaque fichier 
	ifstream canalD;
	ofstream canalS;


	// 1. variables pour m�moriser les informations fournies par l'utilisateur et/ou par un fichier de donn�es
	Contact contactCourant;

	// 2. variables pour calculer ou afficher un r�sultat (�tiquettes)


	// 3. variables interm�diaires



	// Ouvrir le fichier de donn�es
	ouvrirFichierEnLecture(NOM_FICHIER_INFO, canalD);

	// Cr�er le fichier r�sultat
	creerFichierEnEcriture(NOM_FICHIER_COUPON, canalS);


	// Il se peut qu'on ait � �crire un en-t�te dans le fichier de r�sultat


	// On TENTE de lire le premier enregistrement � l'aide d'une fonction
	lireEnregistrement ()

	// Tant que la fin du fichier de donn�es n'est pas atteinte (eof)
		
		// On traite (calcul, formater les donn�es, ...)  l'information lue dans le fichier

		// On aura � �crire les r�sultats dans le fichier de sortie

		// A LA FIN de la boucle, on doit TENTER de lire le prochain enregistrement

	// A la sortie de la boucle, on peut peut-�tre cr�er un pied de page (statistiques)

	// A la toute fin on doit fermer les fichiers (le canal)


		








	return 0;
}