// But : Demander à l'utilisateur d'entrer deux nombres entiers et le programme calcule et affiche 
//       la somme des deux nombres
// Auteur : Karine Moreau
// Date : 2020-09-08

#include <iostream>


int main()
{
	// Pour additionner deux nombres, il faut réserver deux emplacements en mémoire vive de l'ordinateur
	// Déclarer des variables : 2 informations à fournir
	// 1. type de la variable : indique au système d'exploitation combien d'octet il doit réserver en mémoire
	//       entier : int (integer) : 4 octets : 10
	//		 réel :	float (flottant, 10.99 = 1.099*10 à la 1 = 0.1099 10 à la 2) : 4 octets : 10.99
	//				double (deux fois plus gros qu'un float) : 8 octets : 302 chiffres : 10.99
	//       caractère : char (character) : 1 octet : 'A', 'y', '0', '1', '$', ' '
	//       texte : string (chaine de caractères) : 32 octets : "Bienvenue à tous !"
	//       oui/non : vrai/faux : bool (booléen) : 1 octet : true(tout ce qui est différent de 0) ou false(0)
	// 2. Nom de la variable : le nom ne doit pas commencer par un chiffre
	//							le nom ne doit pas avoir d'espace 
	//     règle du prof : la première lettre du nom doit être une minuscule, pas de caractère accentué
	//                     Le deuxième mot commence par une lettre majuscule. 

	// Déclaration de variables de type entier
	int premierNombre;
	int deuxiemeNombre;
	int somme;
	/*
	float reel1;
	double reel2;
	char lettre;
	//string message;
	bool quitterProgramme;

	// Initialiser la variable : lui donner une valeur de départ
	premierNombre = 10;
	deuxiemeNombre = 5;
	reel1 = 10.99;
	lettre = 'y';
	quitterProgramme = false;

	// la partie de gauche du signe égal est la destination, qui reçoit la valeur, c'est une variable
	// la partie de droite du signe égal est la source, la valeur
	deuxiemeNombre = premierNombre;
	reel1 = 3.1415 * 2;
	// Le signe = est une affectation : Destination <- source
	*/

	// Poser la question à l'utilisateur en affichant un message à l'écran
	std::cout << "Veuillez entrer un nombre entier :";
	std::cin >> premierNombre;

	// On affiche la demande pour le deuxième nombre
	std::cout << "Veuillez entrer le deuxième nombre : ";
	std::cin >> deuxiemeNombre;
	
	// Le programme doit calculer la somme
	somme = premierNombre + deuxiemeNombre;

	// On affiche le résultat
	std::cout << "La somme de " << premierNombre << " + " << deuxiemeNombre << " = " << somme;

	return 0;
}