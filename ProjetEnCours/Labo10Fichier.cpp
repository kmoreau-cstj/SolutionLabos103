// But : Découvrir la notion de fichier pour y stocker des informations et les récupérer ou pour enregistrer un résultat.
// Auteur : Karine Moreau
// Date : 2020


#include <iostream>
#include <iomanip>				// Bibliothèque qui fournit des fonctions pour formater l'affichage
								// (alignement (à droite, à gauche), préciser le nombre de chiffres après la virgule, 
								// choisir le caractère de remplissage, ...)
#include <fstream>				// Bibliothèque pour utiliser les fichiers dans le programme

using namespace std;			// Pour éviter d'écrire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des constantes
	/*
----------------------------------------------------------------------------------
				  Résultats du cours de programmation structurée
----------------------------------------------------------------------------------
Nom             Prénom              Eval 1    Eval 2    Eval 3     Total Résultats
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
	const string TITRE = "Résultats du cours de programmation structurée";


    // But : On veut ouvrir un fichier pour y lire des informations	
	// Première phase : Création d'un canal pour extraire les informations sur le disque dur et les charger en mémoire

// 1. Il faut se souvenir du nom du fichier qui se trouve sur le disque dur
	//    Le nom du fichier ne peut pas changer durant l'exécution du programme
	const string FICHIER_SOURCE = "Donnees.txt";
	const string FICHIER_RESULTAT = "Resultat.txt";
	
	// Déclaration des variables
	// 1. Les informations fournies par l'utilisateur et/ou par un fichier de données
	// Pour chaque champ (colonne) du fichier de données, il faut créer une variable
	string nomEtudiant;
	string prenomEtudiant;
	float noteEval1;
	float noteEval2;
	float noteEval3;
	// 2. pour les résultats à afficher ou à calculer. Il faut penser à initialiser ces variables au départ
	int nbEtudiant = 0;			// Au départ, aucun étudiant n'a été lu dans le fichier. 
	float noteMax;				// On n'a pas encore de max et on ne peut pas mettre 0, car s'il y avait que des nombres négatifs
								// et bien 0 ne serait pas le max. 
	string prenomMax;			// Au départ, on ne connait pas le prénom de l'étudiant qui obtiendra le max
	float noteMin;				
	float moyenne = 0;			// Au départ, pas de note donc la moyenne est à 0
	float noteFinale;				// Il faut avoir lu au moins 3 notes pour déterminer la note finale
	string resultat;



	
	// 2. La création du canal pour faire une voie de circulation des données et indiquer le sens de circulation.
	// Un canal est une variable de type spécifique pour pouvoir utiliser les fichiers
	ifstream ifEntree;			// i : input (entrée) (lecture), f : file, stream : canal. 
								// Il faut donner un nom au canal, à une variable
	ofstream ofSortie;			// o : output

	//3. Lier le canal à sa source : On va utiliser une fonction : open
	// Elle prend deux paramètres : 1. le nom du fichier sur le disque dur et au besoin le chemin.
	//                            : 2. le mode d'ouverture du fichier : input pour en lecture
	ifEntree.open(FICHIER_SOURCE, ios::in);
	// 3. Lier le canal de sortie à sa destination : 
	// le mode ios::out : permet de créer le fichier et ensuite de l'ouvrir. ATTENTION ios::out écrase le fichier s'il existe déjà
	ofSortie.open(FICHIER_RESULTAT, ios::out);

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

	if (!ofSortie)
	{
		cerr << "Erreur : Le fichier " << FICHIER_RESULTAT << " n'a pas été créé." << endl;
		cerr << "Vérifiez l'espace disponible sur le disque dur." << endl;
		cerr << "Ou assurez-vous d'avoir les autorisations nécessaires pour créer le fichier." << endl;
		system("pause");
		exit(911);
	}



	// Ici tout va pour le mieux !!! 
	// On a maintenant deux nouveaux canaux, un pour lire les informations, ifEntree qui substituera le cin
	// un autre ofSortie qui remplacera le cout, au lieu d'afficher à l'écran on écrit dans un fichier.

	// Comme le fichier Résultat.txt vient d'être créé, on peut tout de suite écrire l'en-tête du fichier
	/*
----------------------------------------------------------------------------------
				  Résultats du cours de programmation structurée
----------------------------------------------------------------------------------
Nom             Prénom              Eval 1    Eval 2    Eval 3     Total Résultats
----------------------------------------------------------------------------------
	*/
	// set permet de définir, w pour width, la largeur d'une colonne et l'information qui suit juste après le setw, sera contenu
	// dans cette colonne.
	ofSortie << left << setfill('-') << setw(LIGNE) << "-" << right << setfill(' ') << endl;
	ofSortie << setw((LIGNE - TITRE.length()) / 2) << " " << TITRE << endl;
	ofSortie << left << setfill('-') << setw(LIGNE) << "-" <<  right << setfill(' ')<< endl;
	ofSortie << left << setw(COL1) << "Nom" << setw(COL2) << "Prénom" << right << setw(COL3) << "Eval 1" << setw(COL4) << "Eval 2";
	ofSortie << setw(COL5) << "Eval 3" << setw(COL6) << "Total" << left << setw(COL7) << " Résultats" << right << endl;
	ofSortie << left << setfill('-') << setw(LIGNE) << "-" << right << setfill(' ') << endl;






	// Deuxième phase : Lire les informations dans le fichier
	// ON TENTE lire un enregistrement en lisant les 5 champs à la fois pour forcer le canal à mettre à jour s'il a atteint ou 
	// non la fin du fichier
	ifEntree >> nomEtudiant;
	ifEntree >> prenomEtudiant;
	ifEntree >> noteEval1;
	ifEntree >> noteEval2;
	ifEntree >> noteEval3;
	// Ici, même si on n'est pas sûr que la lecture ait fonctionné, 
	// on va initialiser le reste des variables de résultat, à faire une seule fois AVANT la boucle
	if (!ifEntree.eof())
	{
		// Ici on suppose que le premier etudiant a la note maximum et la note min et on va ajuster au fur et à mesure que 
		// on lit des nouvelles notes
		noteFinale = noteEval1 + noteEval2 + noteEval3;
		noteMax = noteFinale;
		noteMin = noteFinale;
		prenomMax = prenomEtudiant;
	}


	// Tant que la fin du fichier n'est pas rencontrée, cela indique que la lecture précédente a bien fonctionné et 
	// qu'il y a des informations dans les variables
	while (!ifEntree.eof())
	{
		// Dans la boucle les données ont bien été lues dans le fichier

		// On peut faire un traitement sur les données

		noteFinale = noteEval1 + noteEval2 + noteEval3;
		if (noteFinale >= 60)
		{
			resultat = " Succès";
		}
		else
		{
			resultat = " Echec";
		}
		// On veut mettre deux chiffres après la virgule pour les nombres réels
		// Première chose, il faut que la virgule des nombres flottant soit fixe, qu'elle ne bouge plus
		// Alors utiliser setprecision(2) pour mettre 2 chiffres après la virgule
		ofSortie << fixed << setprecision(2);
		ofSortie << left << setw(COL1) << nomEtudiant << setw(COL2) << prenomEtudiant << right << setw(COL3) << noteEval1 << setw(COL4) << noteEval2;
		ofSortie << setw(COL5) << noteEval3 << setw(COL6) << noteFinale << left << setw(COL7) << resultat << right << endl;




		// On ajoute la note finale au total pour faire la moyenne
		moyenne = moyenne + noteFinale;
		nbEtudiant++;
		// On doit vérifier le max et le min
		if (noteFinale > noteMax)
		{
			noteMax = noteFinale;
			prenomMax = prenomEtudiant;
		}

		if (noteFinale < noteMin)
			noteMin = noteFinale;


		// A LA FIN DE LA BOUCLE, on doit mettre à jour la variable de la condition de la boucle : il faut mettre à jour
		// la fin du fichier et pour cela il faut TENTER de lire l'enregistrement suivant
		ifEntree >> nomEtudiant;
		ifEntree >> prenomEtudiant;
		ifEntree >> noteEval1;
		ifEntree >> noteEval2;
		ifEntree >> noteEval3;
	}

	// Après avoir lu tous les enregistrements, 
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