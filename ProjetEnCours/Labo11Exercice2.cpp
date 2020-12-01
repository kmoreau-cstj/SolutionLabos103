// But : A partir d'un fichier texte contenant des contacts, écrire un programme qui génère des étiquettes 
//		dans un fichier de sortie
// Auteur : Karine Moreau
// Date : 2020-12-01


//#include <iostream>
#include "Labo11Exercice2Fonctions.h"

//using namespace std;			// Pour éviter d'écrire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des constantes
	const string NOM_FICHIER_INFO = "Contacts.txt";
	const string NOM_FICHIER_COUPON = "Etiquettes.txt";

	// Déclaration des variables
	// 0. Des variables pour les canaux vers chaque fichier 
	ifstream canalD;
	ofstream canalS;


	// 1. variables pour mémoriser les informations fournies par l'utilisateur et/ou par un fichier de données
	Contact contactCourant;

	// 2. variables pour calculer ou afficher un résultat (étiquettes)


	// 3. variables intermédiaires



	// Ouvrir le fichier de données
	ouvrirFichierEnLecture(NOM_FICHIER_INFO, canalD);

	// Créer le fichier résultat
	creerFichierEnEcriture(NOM_FICHIER_COUPON, canalS);


	// Il se peut qu'on ait à écrire un en-tête dans le fichier de résultat


	// On TENTE de lire le premier enregistrement à l'aide d'une fonction
	lireEnregistrement ()

	// Tant que la fin du fichier de données n'est pas atteinte (eof)
		
		// On traite (calcul, formater les données, ...)  l'information lue dans le fichier

		// On aura à écrire les résultats dans le fichier de sortie

		// A LA FIN de la boucle, on doit TENTER de lire le prochain enregistrement

	// A la sortie de la boucle, on peut peut-être créer un pied de page (statistiques)

	// A la toute fin on doit fermer les fichiers (le canal)


		








	return 0;
}