#pragma once

// Liste des include + using
#include <iostream>
#include <fstream>

using namespace std;


// Liste des constantes pour tout le projet
const char SYMBOLE_HORIZONTAL = '-';
const char SYMBOLE_VERTICAL = '|';


// Liste des structures

//Renault;Paul;125, rue des Lilas;St-Jérôme;J7Z 2G4;QC;12-05-1990;30;450-436-8512;514-705-8745;450-435-6958;PaulRe@hotmail.com;
struct Contact
{
	string nomContact;
    string prenomContact;
    string adresseContact;
    string villeContact;
    string codePostalContact;
    string provinceContact;
    string dateNaissanceContact;
    int ageContact;
    string numTel1Contact;
    string numTel2Contact;
    string numTel3Contact;
    string emailContact;

};


// Liste des prototypes des fonctions

// un canal (input ou ouput) doit IMPÉRATIVEMENT être passé en paramètre PAR RÉFÉRENCE (avec &) 
// car un canal ne peut pas être copié
void ouvrirFichierEnLecture(const string NOM_FICHIER, ifstream& canal);
void creerFichierEnEcriture(const string NOM_FICHIER, ofstream& canal);



