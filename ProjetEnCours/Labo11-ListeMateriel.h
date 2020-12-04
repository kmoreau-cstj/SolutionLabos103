#pragma once


// Liste des toutes les bibliothèques à inclure dans le projet
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;


// Déclaration des structures nécessaires au projet
/*
Type de matériel (précise s’il s’agit un PC, d’une imprimante, d’un écran, …),
Quantité (indique le nombre de fois que ce matériel a été acheté)
Description du matériel, (sera limité à un maximum de 35 caractères)
Le coût d’achat du matériel
Date de l’acquisition de ce matériel.

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
void ecrireEntête(ofstream& canal);

// les paramètres de type ifstream et ofstream DOIVENT TOUJOURS être passés en référence (avec &)
// Sans &, les paramètres sont passés par copie : La fonction peut les modifier cela n'aura pas de conséquence sur l'original
//           la variable dans le main ne sera pas modifiée

// Avec &, les paramètres sont passés en référence. Donc le paramètre est un alias, un surmon de la variable dans le main. 
// On travaille directement avec l'original

void lireEnregistrement(ifstream& canal, Materiel& equipement);
void ecrireEnregistrement(ofstream& canal, Materiel equipement, int& nbTotalEquipement, float& montantTotalInventaire);
void ecrirePiedPage(ofstream& canal, int nbTotalEquipement, float montantTotalInventaire);
