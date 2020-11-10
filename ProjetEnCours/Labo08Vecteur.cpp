// But : explorer et utiliser des vecteurs 
// Un vecteur est un ensemble d'emplacements mémoire de même type. Il permet de regrouper plusieurs valeurs en les stockant 
// dans un seul nom de variable

// Auteur : Karine Moreau
// Date : 2020


#include <iostream>
#include <vector>				// Pour avoir accès aux fonctions sur les vecteurs

using namespace std;			// Pour éviter d'écrire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int nbEtudiant = 24;
	double note1;
	double note2;

	vector<int> vecDEntier;				// ici on vient de créer un vecteur de int qui pour le moment est vide.
	vector<float> vecDeReel(15);			// On vient d'appeler le constructeur pour utiliser 8 emplacements mémoires consécutifs
										// de type float.

	// Déclarer et initialiser les vecteurs
	vector<double> vecNoteExamen(nbEtudiant, 100);					// créer un vecteur de 24 cases qui sont toutes intialisées
																	// avec la valeur 100
	vector<char> vecDeVoyelle{ 'a', 'e', 'i','o', 'u', 'y', 'A', 'E', 'I' ,'O','U','Y' };		// créer un vecteur de 6 élements de type char et chaque 
																	// élément a une valeur différente
	vector<string> vecNomEtudiant(nbEtudiant);


	// Afficher le contenu d'un vecteur
	// On doit parcourir chaque case du vecteur en utilisant un numéro de case (indice, position) qui commence toujours à 0
	cout << "Contenu du vecteur des notes de l'examen :" << endl;
	for (int numCase = 0; numCase < vecNoteExamen.size(); numCase++)
	{
		cout << "Note #" << numCase << " : " << vecNoteExamen.at(numCase) << endl;
	}

	cout << "Contenu du vecteur de voyelles : " << endl;
	for (int indice = 0; indice < vecDeVoyelle.size(); indice++)
	{
		cout << "Case #" << indice << " : " << vecDeVoyelle[indice] << endl;
	}


	cout << "Contenu du vecteur de réel :" << endl;
	for (int position = 0; position < vecDeReel.size(); position++)
	{
		cout << "Elément #" << position << " : " << vecDeReel.at(position) << endl;
	}


	// On va tenter d'afficher le contenu d'un vecteur vide
	if (vecDEntier.empty())
	{
		cout << "Le contenu du vecteur d'entier est vide" << endl;
	}
	else
	{
		cout << "Contenu du vecteur d'Entier :" << endl;
		for (int i = 0; i < vecDEntier.size(); i++)
		{
			cout << "Case #" << i << " : " << vecDEntier[i] << endl;
		}
	}

	// Mettre des valeurs dans le vecteur
	int nbValeur;
	int contenu;
	cout << "Veuillez entrer le nombre de valeurs souhaitées : ";
	cin >> nbValeur;

	for (int i = 0; i < nbValeur; i++)
	{
		cout << "Veuillez entrer la valeur #" << i + 1 << " : ";
		cin >> contenu;
		// On va mettre à la fin du vecteur la nouvelle valeur
		vecDEntier.push_back(contenu);
	}

	// On affiche le contenu du vecteur pour vérifier que cela fonctionne correctement
	for (int i = 0; i < vecDEntier.size(); i++)
	{
		cout << "Case #" << i << " : " << vecDEntier.at(i) << endl;
	}



	// Modifier des valeurs dans le vecteur
	for (int i = 0; i < vecDeReel.size(); i++)
	{
		cout << "Entrez la valeur #" << i + 1 << " : ";
		cin >> vecDeReel.at(i);

	}


	cout << "Contenu du vecteur de réel :" << endl;
	for (int position = 0; position < vecDeReel.size(); position++)
	{
		cout << "Elément #" << position << " : " << vecDeReel.at(position) << endl;
	}







	return 0;
}