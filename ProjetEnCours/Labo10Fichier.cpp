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
	const string FICHIER_RESULTAT = "Resultat.txt";
	
	// Déclaration des variables
	// 1. Les informations fournies par l'utilisateur et/ou par un fichier de données
	// Pour chaque champ (colonne) du fichier de données, il faut créer une variable
	string nomEtudiant;
	string prenomEtudiant;
	int noteEval1;
	int noteEval2;
	int noteEval3;
	// 2. pour les résultats à afficher ou à calculer. Il faut penser à initialiser ces variables au départ
	int nbEtudiant = 0;			// Au départ, aucun étudiant n'a été lu dans le fichier. 
	int noteMax;				// On n'a pas encore de max et on ne peut pas mettre 0, car s'il y avait que des nombres négatifs
								// et bien 0 ne serait pas le max. 
	string prenomMax;			// Au départ, on ne connait pas le prénom de l'étudiant qui obtiendra le max
	int noteMin;				
	float moyenne = 0;			// Au départ, pas de note donc la moyenne est à 0
	int noteFinale;				// Il faut avoir lu au moins 3 notes pour déterminer la note finale




	
	// 2. La création du canal pour faire une voie de circulation des données et indiquer le sens de circulation.
	// Un canal est une variable de type spécifique pour pouvoir utiliser les fichiers
	ifstream ifEntree;			// i : input (entrée) (lecture), f : file, stream : canal. 
								// Il faut donner un nom au canal, à une variable
	ofstream ofSortie;			// o : output

	//3. Lier le canal à sa source : On va utiliser une fonction : open
	// Elle prend deux paramètres : 1. le nom du fichier sur le disque dur et au besoin le chemin.
	//                            : 2. le mode d'ouverture du fichier : input pour en lecture
	ifEntree.open(FICHIER_SOURCE, ios::in);
	// 3. Lier le canal de sortie à sa destination
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

	// Ici tout va pour le mieux !!! 

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
			cout << "Malgré vos efforts, il faudra reprendre le cours. " << endl;
		}
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