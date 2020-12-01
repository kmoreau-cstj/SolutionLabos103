#pragma once

// Liste des include
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;



// La liste de toutes les constantes communes � toutes les fonctions
// Les constantes ne changeant pas de valeur, il n'y a pas de danger que le contenu de cette m�moire change
const string TITRE = "Table des mati�res";
const string TITRE_SECTION = "Chapitre";
const string SEPARATEUR_SECTION = " : ";
const char POINT_DE_SUITE = '.';
// Constantes pour bien aligner les donn�es dans le fichier de sortie
const int COL1 = TITRE_SECTION.length() +1 ;	// Pour �crire le TITRE_SECTION + un espace pour ne pas toucher la colonne suivante
const int COL2 = 2;							// Pour avoir de la place pour �crire un entier jusqu'� 2 chiffres 99
const int COL3 = SEPARATEUR_SECTION.length();
const int COL4 = 50;						// Pour le titre du chapitre
const int COL5 = 5;						// Pour le num�ro de page du chapitre et le libre pourrait avoir plus de 10 000 pages

const int LIGNE = COL1 + COL2 + COL3 + COL4 + COL5; 

// Liste des types de variables propres au programmeur en utilisant une structure : 
// une sorte de paquage ou enveloppe pour contenir plusieurs informations
struct Chapitre
{
	string titreChapitre;
	int numeroPage;
};



// Liste des prototypes des fonctions

// un canal (input ou ouput) doit IMP�RATIVEMENT �tre pass� en param�tre PAR R�F�RENCE (avec &) 
// car un canal ne peut pas �tre copi�
void ouvrirFichierEnLecture(const string NOM_FICHIER, ifstream& canal);
void creerFichierEnEcriture(const string NOM_FICHIER, ofstream& canal);

// Le param�tre chapitreLu est pass� en r�f�rence (&) car sa valeur est modifi�e dans la fonction 
// et l'appelant (main) doit �tre inform� des nouvelles valeurs
void lireEnregistrement(ifstream& canal, Chapitre& chapitreLu);
Chapitre lireEnregitrement(ifstream& canal);
void ecrireEnTete(ofstream& canal, const string TITRE, int nbLigneApresTitre);

// Le param�tre chapitreAEcrire est pass� par copie, car le contenu n'est pas modifi� par la fonction ecrire.
// La fonction a juste besoin de connaitre la valeur du titre du chapitre et son num�ro
void ecrireEnregistrement(ofstream& canal, Chapitre chapitreAEcrire, int numChapitre);
