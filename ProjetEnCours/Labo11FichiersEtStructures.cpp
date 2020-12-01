// But : Programmer la fonctionnalité de générer une table des matières à la Word !!!!!
// Auteur : Karine Moreau
// Date : 2020


//#include <iostream>
//#include <fstream>

#include "Labo11Fonctions.h"

//using namespace std;			// Pour éviter d'écrire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des constantes
	const string NOM_FICHIER_LIVRE = "DonneesChapitres.txt";		// Nom du fichier qui contient les données de départ
	const string NOM_FICHIER_RESULTAT = "TDM.txt";					// Nom du fichier à créer pour afficher les résultats : TDM



	// Déclaration des variables
	// Le programme va utiliser deux fichiers
	// 0. Dès que le programme a besoin d'utiliser des fichiers, cela nécessite des variables pour ouvrir le canal vers le fichier
	ifstream canalD;	// Canal pour faire transiter les données du fichier vers la mémoire. En lecture et équivalent du cin
	ofstream canalS;	// Canal pour faire transiter les données de la mémoire vers le disque dur. En écriture equivalent au cout
	// 1. les variables pour mémoriser les valeurs fournies par l'utilisateur et/ou par le fichier d'entrée
	//string titreChapitre;
	//int numeroPage;

	Chapitre leChapitreCourant;

	// 2. Les variables pour calculer ou afficher les résultats sont en général initialisées au début du programme
	int numeroSection = 1;			// Au départ, on commence à afficher le premier chapitre donc 1
	// 3. Variables intermédiaires qui n'apparaissent pas toujours comme résultat



	// On écrit le code en construisant le maximum de fonctions
	ouvrirFichierEnLecture(NOM_FICHIER_LIVRE, canalD);
	creerFichierEnEcriture(NOM_FICHIER_RESULTAT, canalS);

	// Ici, le fichier de sortie étant bien créé, on peut déjà écrire l'en-tête
	// Le premier paramètre est pour indiquer la voie où vont circuler les données : Canal de sortie
	// Le deuxième paramètre est le titre à afficher centré
	// Le troisième paramètre est le nombre de lignes qui vont séparer le titre du reste de la table des matières
	ecrireEnTete(canalS, TITRE, 2/* nombre de lignes à sauter après le titre*/);

	// On peut TENTER de lire un premier enregistrement à l'aide d'une fonction
	//lireEnregistrement(canalD, leChapitreCourant);
	leChapitreCourant = lireEnregitrement(canalD);

	// Tant que la fin du fichier n'a pas été rencontrée, dans leChapitreCourant, il y a des données à traiter
	while (!canalD.eof())
	{
		
		// Formater le titre du chapitre et le numéro de page pour écrire dans la table des matières
		ecrireEnregistrement(canalS, leChapitreCourant, numeroSection);
		
		// On passe au chapitre suivant 
		numeroSection++;

		// A LA FIN de la boucle, on doit réinitialiser le eof, pour cela
		// il faut TENTER de lire dans le fichier pour faire déplacer le curseur 
		// pour qu'il rencontre à un moment donné la fin du fichier
		lireEnregistrement(canalD, leChapitreCourant);
	}



	return 0;
}