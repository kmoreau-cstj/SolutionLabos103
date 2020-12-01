// But : Programmer la fonctionnalit� de g�n�rer une table des mati�res � la Word !!!!!
// Auteur : Karine Moreau
// Date : 2020


//#include <iostream>
//#include <fstream>

#include "Labo11Fonctions.h"

//using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des constantes
	const string NOM_FICHIER_LIVRE = "DonneesChapitres.txt";		// Nom du fichier qui contient les donn�es de d�part
	const string NOM_FICHIER_RESULTAT = "TDM.txt";					// Nom du fichier � cr�er pour afficher les r�sultats : TDM



	// D�claration des variables
	// Le programme va utiliser deux fichiers
	// 0. D�s que le programme a besoin d'utiliser des fichiers, cela n�cessite des variables pour ouvrir le canal vers le fichier
	ifstream canalD;	// Canal pour faire transiter les donn�es du fichier vers la m�moire. En lecture et �quivalent du cin
	ofstream canalS;	// Canal pour faire transiter les donn�es de la m�moire vers le disque dur. En �criture equivalent au cout
	// 1. les variables pour m�moriser les valeurs fournies par l'utilisateur et/ou par le fichier d'entr�e
	//string titreChapitre;
	//int numeroPage;

	Chapitre leChapitreCourant;

	// 2. Les variables pour calculer ou afficher les r�sultats sont en g�n�ral initialis�es au d�but du programme
	int numeroSection = 1;			// Au d�part, on commence � afficher le premier chapitre donc 1
	// 3. Variables interm�diaires qui n'apparaissent pas toujours comme r�sultat



	// On �crit le code en construisant le maximum de fonctions
	ouvrirFichierEnLecture(NOM_FICHIER_LIVRE, canalD);
	creerFichierEnEcriture(NOM_FICHIER_RESULTAT, canalS);

	// Ici, le fichier de sortie �tant bien cr��, on peut d�j� �crire l'en-t�te
	// Le premier param�tre est pour indiquer la voie o� vont circuler les donn�es : Canal de sortie
	// Le deuxi�me param�tre est le titre � afficher centr�
	// Le troisi�me param�tre est le nombre de lignes qui vont s�parer le titre du reste de la table des mati�res
	ecrireEnTete(canalS, TITRE, 2/* nombre de lignes � sauter apr�s le titre*/);

	// On peut TENTER de lire un premier enregistrement � l'aide d'une fonction
	//lireEnregistrement(canalD, leChapitreCourant);
	leChapitreCourant = lireEnregitrement(canalD);

	// Tant que la fin du fichier n'a pas �t� rencontr�e, dans leChapitreCourant, il y a des donn�es � traiter
	while (!canalD.eof())
	{
		
		// Formater le titre du chapitre et le num�ro de page pour �crire dans la table des mati�res
		ecrireEnregistrement(canalS, leChapitreCourant, numeroSection);
		
		// On passe au chapitre suivant 
		numeroSection++;

		// A LA FIN de la boucle, on doit r�initialiser le eof, pour cela
		// il faut TENTER de lire dans le fichier pour faire d�placer le curseur 
		// pour qu'il rencontre � un moment donn� la fin du fichier
		lireEnregistrement(canalD, leChapitreCourant);
	}



	return 0;
}