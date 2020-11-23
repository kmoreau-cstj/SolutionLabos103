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
	const string FICHIER_RESULTAT = "Resultat.txt";
	
	// D�claration des variables
	// 1. Les informations fournies par l'utilisateur et/ou par un fichier de donn�es
	// Pour chaque champ (colonne) du fichier de donn�es, il faut cr�er une variable
	string nomEtudiant;
	string prenomEtudiant;
	int noteEval1;
	int noteEval2;
	int noteEval3;
	// 2. pour les r�sultats � afficher ou � calculer. Il faut penser � initialiser ces variables au d�part
	int nbEtudiant = 0;			// Au d�part, aucun �tudiant n'a �t� lu dans le fichier. 
	int noteMax;				// On n'a pas encore de max et on ne peut pas mettre 0, car s'il y avait que des nombres n�gatifs
								// et bien 0 ne serait pas le max. 
	string prenomMax;			// Au d�part, on ne connait pas le pr�nom de l'�tudiant qui obtiendra le max
	int noteMin;				
	float moyenne = 0;			// Au d�part, pas de note donc la moyenne est � 0
	int noteFinale;				// Il faut avoir lu au moins 3 notes pour d�terminer la note finale




	
	// 2. La cr�ation du canal pour faire une voie de circulation des donn�es et indiquer le sens de circulation.
	// Un canal est une variable de type sp�cifique pour pouvoir utiliser les fichiers
	ifstream ifEntree;			// i : input (entr�e) (lecture), f : file, stream : canal. 
								// Il faut donner un nom au canal, � une variable
	ofstream ofSortie;			// o : output

	//3. Lier le canal � sa source : On va utiliser une fonction : open
	// Elle prend deux param�tres : 1. le nom du fichier sur le disque dur et au besoin le chemin.
	//                            : 2. le mode d'ouverture du fichier : input pour en lecture
	ifEntree.open(FICHIER_SOURCE, ios::in);
	// 3. Lier le canal de sortie � sa destination
	ofSortie.open(FICHIER_RESULTAT, ios::out);

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
	// ON TENTE lire un enregistrement en lisant les 5 champs � la fois pour forcer le canal � mettre � jour s'il a atteint ou 
	// non la fin du fichier
	ifEntree >> nomEtudiant;
	ifEntree >> prenomEtudiant;
	ifEntree >> noteEval1;
	ifEntree >> noteEval2;
	ifEntree >> noteEval3;
	// Ici, m�me si on n'est pas s�r que la lecture ait fonctionn�, 
	// on va initialiser le reste des variables de r�sultat, � faire une seule fois AVANT la boucle
	if (!ifEntree.eof())
	{
		// Ici on suppose que le premier etudiant a la note maximum et la note min et on va ajuster au fur et � mesure que 
		// on lit des nouvelles notes
		noteFinale = noteEval1 + noteEval2 + noteEval3;
		noteMax = noteFinale;
		noteMin = noteFinale;
		prenomMax = prenomEtudiant;
	}


	// Tant que la fin du fichier n'est pas rencontr�e, cela indique que la lecture pr�c�dente a bien fonctionn� et 
	// qu'il y a des informations dans les variables
	while (!ifEntree.eof())
	{
		// Dans la boucle les donn�es ont bien �t� lues dans le fichier

		// On peut faire un traitement sur les donn�es

		cout << "Nom : " << nomEtudiant << endl;
		cout << "Prenom : " << prenomEtudiant << endl;
		cout << "Note 1 : " << noteEval1 << endl;
		cout << "Note 2 : " << noteEval2 << endl;
		cout << "Note 3 : " << noteEval3 << endl;
		noteFinale = noteEval1 + noteEval2 + noteEval3;
		cout << "Note finale : " << noteFinale << endl;
		if (noteFinale >= 60)
		{
			cout << "Vous passez le cours !!!!" << endl;
		}
		else
		{
			cout << "Malgr� vos efforts, il faudra reprendre le cours. " << endl;
		}
		// On ajoute la note finale au total pour faire la moyenne
		moyenne = moyenne + noteFinale;
		nbEtudiant++;
		// On doit v�rifier le max et le min
		if (noteFinale > noteMax)
		{
			noteMax = noteFinale;
			prenomMax = prenomEtudiant;
		}

		if (noteFinale < noteMin)
			noteMin = noteFinale;


		// A LA FIN DE LA BOUCLE, on doit mettre � jour la variable de la condition de la boucle : il faut mettre � jour
		// la fin du fichier et pour cela il faut TENTER de lire l'enregistrement suivant
		ifEntree >> nomEtudiant;
		ifEntree >> prenomEtudiant;
		ifEntree >> noteEval1;
		ifEntree >> noteEval2;
		ifEntree >> noteEval3;
	}

	// Apr�s avoir lu tous les enregistrements, 
	// on veut trouver le maximum et le minimum et la moyenne du groupe des notes finales
	// On doit diviser pour obtenir la moyenne
	if (nbEtudiant > 0)
	{
		moyenne = moyenne / nbEtudiant;
		cout << "Le groupe a " << nbEtudiant << endl;
		cout << "La note la plus haute est " << noteMax << " obtenue par " << prenomMax << endl;
		cout << "La note la plus basse est " << noteMin << endl;
		cout << "La moyenne du groupe est " << moyenne << endl;
	}
	else
		cout << "Le fichier est vide." << endl;

	// Avant de quitter le programme, il faut fermer tous les fichiers que l'on a ouvert
	ifEntree.close();

	return 0;
}