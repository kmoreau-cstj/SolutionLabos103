// But : explorer et utiliser des vecteurs 
// Un vecteur est un ensemble d'emplacements m�moire de m�me type. Il permet de regrouper plusieurs valeurs en les stockant 
// dans un seul nom de variable

// Auteur : Karine Moreau
// Date : 2020


#include <iostream>
#include <vector>				// Pour avoir acc�s aux fonctions sur les vecteurs

using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	int nbEtudiant = 24;
	double note1;
	double note2;

	vector<int> vecDEntier;				// ici on vient de cr�er un vecteur de int qui pour le moment est vide.
	vector<float> vecDeReel(15);			// On vient d'appeler le constructeur pour utiliser 8 emplacements m�moires cons�cutifs
										// de type float.

	// D�clarer et initialiser les vecteurs
	vector<double> vecNoteExamen(nbEtudiant, 100);					// cr�er un vecteur de 24 cases qui sont toutes intialis�es
																	// avec la valeur 100
	vector<char> vecDeVoyelle{ 'a', 'e', 'i','o', 'u', 'y', 'A', 'E', 'I' ,'O','U','Y' };		// cr�er un vecteur de 6 �lements de type char et chaque 
																	// �l�ment a une valeur diff�rente
	vector<string> vecNomEtudiant(nbEtudiant);


	// Afficher le contenu d'un vecteur
	// On doit parcourir chaque case du vecteur en utilisant un num�ro de case (indice, position) qui commence toujours � 0
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


	cout << "Contenu du vecteur de r�el :" << endl;
	for (int position = 0; position < vecDeReel.size(); position++)
	{
		cout << "El�ment #" << position << " : " << vecDeReel.at(position) << endl;
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
	cout << "Veuillez entrer le nombre de valeurs souhait�es : ";
	cin >> nbValeur;

	for (int i = 0; i < nbValeur; i++)
	{
		cout << "Veuillez entrer la valeur #" << i + 1 << " : ";
		cin >> contenu;
		// On va mettre � la fin du vecteur la nouvelle valeur
		vecDEntier.push_back(contenu);
	}

	// On affiche le contenu du vecteur pour v�rifier que cela fonctionne correctement
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


	cout << "Contenu du vecteur de r�el :" << endl;
	for (int position = 0; position < vecDeReel.size(); position++)
	{
		cout << "El�ment #" << position << " : " << vecDeReel.at(position) << endl;
	}







	return 0;
}