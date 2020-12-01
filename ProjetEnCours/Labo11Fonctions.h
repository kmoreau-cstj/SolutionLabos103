#pragma once

// Liste des include
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;



// La liste de toutes les constantes communes à toutes les fonctions
// Les constantes ne changeant pas de valeur, il n'y a pas de danger que le contenu de cette mémoire change
const string TITRE = "Table des matières";
const string TITRE_SECTION = "Chapitre";
const string SEPARATEUR_SECTION = " : ";
const char POINT_DE_SUITE = '.';
// Constantes pour bien aligner les données dans le fichier de sortie
const int COL1 = TITRE_SECTION.length() +1 ;	// Pour écrire le TITRE_SECTION + un espace pour ne pas toucher la colonne suivante
const int COL2 = 2;							// Pour avoir de la place pour écrire un entier jusqu'à 2 chiffres 99
const int COL3 = SEPARATEUR_SECTION.length();
const int COL4 = 50;						// Pour le titre du chapitre
const int COL5 = 5;						// Pour le numéro de page du chapitre et le libre pourrait avoir plus de 10 000 pages

const int LIGNE = COL1 + COL2 + COL3 + COL4 + COL5; 

// Liste des types de variables propres au programmeur en utilisant une structure : 
// une sorte de paquage ou enveloppe pour contenir plusieurs informations
struct Chapitre
{
	string titreChapitre;
	int numeroPage;
};



// Liste des prototypes des fonctions

// un canal (input ou ouput) doit IMPÉRATIVEMENT être passé en paramètre PAR RÉFÉRENCE (avec &) 
// car un canal ne peut pas être copié
void ouvrirFichierEnLecture(const string NOM_FICHIER, ifstream& canal);
void creerFichierEnEcriture(const string NOM_FICHIER, ofstream& canal);

// Le paramètre chapitreLu est passé en référence (&) car sa valeur est modifiée dans la fonction 
// et l'appelant (main) doit être informé des nouvelles valeurs
void lireEnregistrement(ifstream& canal, Chapitre& chapitreLu);
Chapitre lireEnregitrement(ifstream& canal);
void ecrireEnTete(ofstream& canal, const string TITRE, int nbLigneApresTitre);

// Le paramètre chapitreAEcrire est passé par copie, car le contenu n'est pas modifié par la fonction ecrire.
// La fonction a juste besoin de connaitre la valeur du titre du chapitre et son numéro
void ecrireEnregistrement(ofstream& canal, Chapitre chapitreAEcrire, int numChapitre);
