#pragma once


// Liste des toutes les biblioth�ques � inclure dans le projet
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;


// D�claration des structures n�cessaires au projet
/*
Type de mat�riel (pr�cise s�il s�agit un PC, d�une imprimante, d�un �cran, �),
Quantit� (indique le nombre de fois que ce mat�riel a �t� achet�)
Description du mat�riel, (sera limit� � un maximum de 35 caract�res)
Le co�t d�achat du mat�riel
Date de l�acquisition de ce mat�riel.

PC:2:HP Compaq Elite 8300:856.25:24-12-2015:

*/


struct Materiel
{
    string typeMateriel;
    int quantiteMateriel;
    string descriptionMateriel;
    float coutAchat;
    string dateAquisition;
};


// Liste des prototypes des fonctions pour le projet
void ecrireEnt�te(ofstream& canal);

// les param�tres de type ifstream et ofstream DOIVENT TOUJOURS �tre pass�s en r�f�rence (avec &)
// Sans &, les param�tres sont pass�s par copie : La fonction peut les modifier cela n'aura pas de cons�quence sur l'original
//           la variable dans le main ne sera pas modifi�e

// Avec &, les param�tres sont pass�s en r�f�rence. Donc le param�tre est un alias, un surmon de la variable dans le main. 
// On travaille directement avec l'original

void lireEnregistrement(ifstream& canal, Materiel& equipement);
void ecrireEnregistrement(ofstream& canal, Materiel equipement, int& nbTotalEquipement, float& montantTotalInventaire);
void ecrirePiedPage(ofstream& canal, int nbTotalEquipement, float montantTotalInventaire);
