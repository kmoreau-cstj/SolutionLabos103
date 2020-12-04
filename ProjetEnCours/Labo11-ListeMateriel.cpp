#include "Labo11-ListeMateriel.h"

void lireEnregistrement(ifstream& canal, Materiel& equipement)
{
	// PC:2:HP Compaq Elite 8300:856.25:24-12-2015:

	// Quand le champ est de type string : pas le choix si le string contient des espaces, il faut un getline
	// Quand le champ n'est pas de type string, donc un int, float, char, double, ... on doit utiliser les becs de canard >>
	

	// le getline ne laisse pas trainer le délimiteur
	// les becs de canard laissent trainer leur délimiteur et tous les caractères qui n'entrent pas dans le type de la variable
	// Il faut donc utiliser la fonction ignore après chaque utilisation des becs de canard >>
	getline(canal, equipement.typeMateriel, ':');
	canal >> equipement.quantiteMateriel;
	// On fait avancer le curseur après le délimiteur laissé par les becs de canard
	canal.ignore(1, ':');
	getline(canal, equipement.descriptionMateriel, ':');
	canal >> equipement.coutAchat;
	canal.ignore(1, ':');
	getline(canal, equipement.dateAquisition, ':');
	// A la fin de chaque enregistrement dans le fichier de données, il faut ignorer le \n
	canal.ignore(1, '\n');







}
