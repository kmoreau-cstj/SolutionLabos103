#pragma once

// Liste des include + using
#include <iostream>
#include <fstream>

using namespace std;


// Liste des constantes pour tout le projet
const char SYMBOLE_HORIZONTAL = '-';
const char SYMBOLE_VERTICAL = '|';


// Liste des structures

//Renault;Paul;125, rue des Lilas;St-J�r�me;J7Z 2G4;QC;12-05-1990;30;450-436-8512;514-705-8745;450-435-6958;PaulRe@hotmail.com;
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

// un canal (input ou ouput) doit IMP�RATIVEMENT �tre pass� en param�tre PAR R�F�RENCE (avec &) 
// car un canal ne peut pas �tre copi�
void ouvrirFichierEnLecture(const string NOM_FICHIER, ifstream& canal);
void creerFichierEnEcriture(const string NOM_FICHIER, ofstream& canal);



