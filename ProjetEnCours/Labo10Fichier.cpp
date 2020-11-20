// But : Découvrir la notion de fichier pour y stocker des informations et les récupérer ou pour enregistrer un résultat.
// Auteur : Karine Moreau
// Date : 2020


#include <iostream>
#include <fstream>				// Bibliothèque pour utiliser les fichiers dans le programme

using namespace std;			// Pour éviter d'écrire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des constantes
    // But : On veut ouvrir un fichier pour y lire des informations	
	// Première phase : Création d'un canal pour extraire les informations sur le disque dur et les charger en mémoire

// 1. Il faut se souvenir du nom du fichier qui se trouve sur le disque dur
	//    Le nom du fichier ne peut pas changer durant l'exécution du programme
	const string FICHIER_SOURCE = "Donnees.txt";
	
	// Déclaration des variables
	// 1. Les informations fournies par l'utilisateur et/ou par un fichier de données
	// Pour chaque champ (colonne) du fichier de données, il faut créer une variable
	string nomEtudiant;
	string prenomEtudiant;
	int noteEval1;
	int noteEval2;
	int noteEval3;
	
	// 2. La création du canal pour faire une voie de circulation des données et indiquer le sens de circulation.
	// Un canal est une variable de type spécifique pour pouvoir utiliser les fichiers
	ifstream ifEntree;			// i : input (entrée) (lecture), f : file, stream : canal. 
								// Il faut donner un nom au canal, à une variable

	//3. Lier le canal à sa source : On va utiliser une fonction : open
	// Elle prend deux paramètres : 1. le nom du fichier sur le disque dur et au besoin le chemin.
	//                            : 2. le mode d'ouverture du fichier : input pour en lecture
	ifEntree.open(FICHIER_SOURCE, ios::in);

	//4. Avant de poursuivre le programme, il faut s'assurer que le canal a bien été ouvert sur le fichier, sinon on quitte 
	// le programme. Cela sert à rien de continuer, on n'a pas accès aux données.
	if (!ifEntree)
	{
		cerr << "Erreur : Le fichier " << FICHIER_SOURCE << " n'a pas pu s'ouvrir correctement." << endl;
		cerr << "Vérifiez le nom du fichier sur le disque dur." << endl;
		cerr << "Ou assurez-vous d'avoir les autorisations nécessaires pour ouvrir le fichier." << endl;
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

	// Deuxième phase : Lire les informations dans le fichier

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