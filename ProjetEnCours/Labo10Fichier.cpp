// But : D�couvrir la notion de fichier pour y stocker des informations et les r�cup�rer ou pour enregistrer un r�sultat.
// Auteur : Karine Moreau
// Date : 2020


#include <iostream>
#include <fstream>				// Biblioth�que pour utiliser les fichiers dans le programme

using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des constantes
    // But : On veut ouvrir un fichier pour y lire des informations	
	// Premi�re phase : Cr�ation d'un canal pour extraire les informations sur le disque dur et les charger en m�moire

// 1. Il faut se souvenir du nom du fichier qui se trouve sur le disque dur
	//    Le nom du fichier ne peut pas changer durant l'ex�cution du programme
	const string FICHIER_SOURCE = "Donnees.txt";
	
	// D�claration des variables
	// 1. Les informations fournies par l'utilisateur et/ou par un fichier de donn�es
	// Pour chaque champ (colonne) du fichier de donn�es, il faut cr�er une variable
	string nomEtudiant;
	string prenomEtudiant;
	int noteEval1;
	int noteEval2;
	int noteEval3;
	
	// 2. La cr�ation du canal pour faire une voie de circulation des donn�es et indiquer le sens de circulation.
	// Un canal est une variable de type sp�cifique pour pouvoir utiliser les fichiers
	ifstream ifEntree;			// i : input (entr�e) (lecture), f : file, stream : canal. 
								// Il faut donner un nom au canal, � une variable

	//3. Lier le canal � sa source : On va utiliser une fonction : open
	// Elle prend deux param�tres : 1. le nom du fichier sur le disque dur et au besoin le chemin.
	//                            : 2. le mode d'ouverture du fichier : input pour en lecture
	ifEntree.open(FICHIER_SOURCE, ios::in);

	//4. Avant de poursuivre le programme, il faut s'assurer que le canal a bien �t� ouvert sur le fichier, sinon on quitte 
	// le programme. Cela sert � rien de continuer, on n'a pas acc�s aux donn�es.
	if (!ifEntree)
	{
		cerr << "Erreur : Le fichier " << FICHIER_SOURCE << " n'a pas pu s'ouvrir correctement." << endl;
		cerr << "V�rifiez le nom du fichier sur le disque dur." << endl;
		cerr << "Ou assurez-vous d'avoir les autorisations n�cessaires pour ouvrir le fichier." << endl;
		system("pause");
		// On ne peut plus rien faire, on se sauve en courant, on quitte le programme
		//return 400;				// return quitte la fonction dans laquelle on se trouve. 
								// Si on est dans le main, on quitte bien le programme, puisque c'Est la fonction principale
								// Mais si on est dans une fonction, return qui la fonction et retourne au niveau de l'appelant
		// Pour quitter abruptement le programme, il faut utiliser le exit ou abort
		//abort();				// Quitte sans code d'erreur
		exit(400);				// Quitte avec un code d'erreur

	}

	// Ici tout va pour le mieux !!! 

	// Deuxi�me phase : Lire les informations dans le fichier

	ifEntree >> nomEtudiant;
	ifEntree >> prenomEtudiant;
	ifEntree >> noteEval1;
	ifEntree >> noteEval2;
	ifEntree >> noteEval3;


	cout << "Nom : " << nomEtudiant << endl;
	cout << "Prenom : " << prenomEtudiant << endl;
	cout << "Note 1 : " << noteEval1 << endl;
	cout << "Note 2 : " << noteEval2 << endl;
	cout << "Note 3 : " << noteEval3 << endl;














	return 0;
}