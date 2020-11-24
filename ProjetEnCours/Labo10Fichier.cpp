// But : D�couvrir la notion de fichier pour y stocker des informations et les r�cup�rer ou pour enregistrer un r�sultat.
// Auteur : Karine Moreau
// Date : 2020


#include <iostream>
#include <iomanip>				// Biblioth�que qui fournit des fonctions pour formater l'affichage
								// (alignement (� droite, � gauche), pr�ciser le nombre de chiffres apr�s la virgule, 
								// choisir le caract�re de remplissage, ...)
#include <fstream>				// Biblioth�que pour utiliser les fichiers dans le programme

using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des constantes
	/*
----------------------------------------------------------------------------------
				  R�sultats du cours de programmation structur�e
----------------------------------------------------------------------------------
Nom             Pr�nom              Eval 1    Eval 2    Eval 3     Total R�sultats
----------------------------------------------------------------------------------
	*/
	const int COL1 = 20;
	const int COL2 = 20;
	const int COL3 = 10;
	const int COL4 = 10;
	const int COL5 = 10;
	const int COL6 = 10;
	const int COL7 = 10;

	const int LIGNE = COL1 + COL2 + COL3 + COL4 + COL5 + COL6 + COL7;
	const string TITRE = "R�sultats du cours de programmation structur�e";


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
	float noteEval1;
	float noteEval2;
	float noteEval3;
	// 2. pour les r�sultats � afficher ou � calculer. Il faut penser � initialiser ces variables au d�part
	int nbEtudiant = 0;			// Au d�part, aucun �tudiant n'a �t� lu dans le fichier. 
	float noteMax;				// On n'a pas encore de max et on ne peut pas mettre 0, car s'il y avait que des nombres n�gatifs
								// et bien 0 ne serait pas le max. 
	string prenomMax;			// Au d�part, on ne connait pas le pr�nom de l'�tudiant qui obtiendra le max
	float noteMin;				
	float moyenne = 0;			// Au d�part, pas de note donc la moyenne est � 0
	float noteFinale;				// Il faut avoir lu au moins 3 notes pour d�terminer la note finale
	string resultat;



	
	// 2. La cr�ation du canal pour faire une voie de circulation des donn�es et indiquer le sens de circulation.
	// Un canal est une variable de type sp�cifique pour pouvoir utiliser les fichiers
	ifstream ifEntree;			// i : input (entr�e) (lecture), f : file, stream : canal. 
								// Il faut donner un nom au canal, � une variable
	ofstream ofSortie;			// o : output

	//3. Lier le canal � sa source : On va utiliser une fonction : open
	// Elle prend deux param�tres : 1. le nom du fichier sur le disque dur et au besoin le chemin.
	//                            : 2. le mode d'ouverture du fichier : input pour en lecture
	ifEntree.open(FICHIER_SOURCE, ios::in);
	// 3. Lier le canal de sortie � sa destination : 
	// le mode ios::out : permet de cr�er le fichier et ensuite de l'ouvrir. ATTENTION ios::out �crase le fichier s'il existe d�j�
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

	if (!ofSortie)
	{
		cerr << "Erreur : Le fichier " << FICHIER_RESULTAT << " n'a pas �t� cr��." << endl;
		cerr << "V�rifiez l'espace disponible sur le disque dur." << endl;
		cerr << "Ou assurez-vous d'avoir les autorisations n�cessaires pour cr�er le fichier." << endl;
		system("pause");
		exit(911);
	}



	// Ici tout va pour le mieux !!! 
	// On a maintenant deux nouveaux canaux, un pour lire les informations, ifEntree qui substituera le cin
	// un autre ofSortie qui remplacera le cout, au lieu d'afficher � l'�cran on �crit dans un fichier.

	// Comme le fichier R�sultat.txt vient d'�tre cr��, on peut tout de suite �crire l'en-t�te du fichier
	/*
----------------------------------------------------------------------------------
				  R�sultats du cours de programmation structur�e
----------------------------------------------------------------------------------
Nom             Pr�nom              Eval 1    Eval 2    Eval 3     Total R�sultats
----------------------------------------------------------------------------------
	*/
	// set permet de d�finir, w pour width, la largeur d'une colonne et l'information qui suit juste apr�s le setw, sera contenu
	// dans cette colonne.
	ofSortie << left << setfill('-') << setw(LIGNE) << "-" << right << setfill(' ') << endl;
	ofSortie << setw((LIGNE - TITRE.length()) / 2) << " " << TITRE << endl;
	ofSortie << left << setfill('-') << setw(LIGNE) << "-" <<  right << setfill(' ')<< endl;
	ofSortie << left << setw(COL1) << "Nom" << setw(COL2) << "Pr�nom" << right << setw(COL3) << "Eval 1" << setw(COL4) << "Eval 2";
	ofSortie << setw(COL5) << "Eval 3" << setw(COL6) << "Total" << left << setw(COL7) << " R�sultats" << right << endl;
	ofSortie << left << setfill('-') << setw(LIGNE) << "-" << right << setfill(' ') << endl;






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

		noteFinale = noteEval1 + noteEval2 + noteEval3;
		if (noteFinale >= 60)
		{
			resultat = " Succ�s";
		}
		else
		{
			resultat = " Echec";
		}
		// On veut mettre deux chiffres apr�s la virgule pour les nombres r�els
		// Premi�re chose, il faut que la virgule des nombres flottant soit fixe, qu'elle ne bouge plus
		// Alors utiliser setprecision(2) pour mettre 2 chiffres apr�s la virgule
		ofSortie << fixed << setprecision(2);
		ofSortie << left << setw(COL1) << nomEtudiant << setw(COL2) << prenomEtudiant << right << setw(COL3) << noteEval1 << setw(COL4) << noteEval2;
		ofSortie << setw(COL5) << noteEval3 << setw(COL6) << noteFinale << left << setw(COL7) << resultat << right << endl;




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
		ofSortie << "Le groupe a " << nbEtudiant << endl;
		ofSortie << "La note la plus haute est " << noteMax << " obtenue par " << prenomMax << endl;
		ofSortie << "La note la plus basse est " << noteMin << endl;
		ofSortie << "La moyenne du groupe est " << moyenne << endl;
	}
	else
		cout << "Le fichier est vide." << endl;

	// Avant de quitter le programme, il faut fermer tous les fichiers que l'on a ouvert
	ifEntree.close();

	return 0;
}