// But : Demander � l'utilisateur d'entrer deux nombres entiers et le programme calcule et affiche 
//       la somme des deux nombres
// Auteur : Karine Moreau
// Date : 2020-09-08

#include <iostream>


int main()
{
	// Pour additionner deux nombres, il faut r�server deux emplacements en m�moire vive de l'ordinateur
	// D�clarer des variables : 2 informations � fournir
	// 1. type de la variable : indique au syst�me d'exploitation combien d'octet il doit r�server en m�moire
	//       entier : int (integer) : 4 octets : 10
	//		 r�el :	float (flottant, 10.99 = 1.099*10 � la 1 = 0.1099 10 � la 2) : 4 octets : 10.99
	//				double (deux fois plus gros qu'un float) : 8 octets : 302 chiffres : 10.99
	//       caract�re : char (character) : 1 octet : 'A', 'y', '0', '1', '$', ' '
	//       texte : string (chaine de caract�res) : 32 octets : "Bienvenue � tous !"
	//       oui/non : vrai/faux : bool (bool�en) : 1 octet : true(tout ce qui est diff�rent de 0) ou false(0)
	// 2. Nom de la variable : le nom ne doit pas commencer par un chiffre
	//							le nom ne doit pas avoir d'espace 
	//     r�gle du prof : la premi�re lettre du nom doit �tre une minuscule, pas de caract�re accentu�
	//                     Le deuxi�me mot commence par une lettre majuscule. 

	// D�claration de variables de type entier
	int premierNombre;
	int deuxiemeNombre;
	int somme;
	/*
	float reel1;
	double reel2;
	char lettre;
	//string message;
	bool quitterProgramme;

	// Initialiser la variable : lui donner une valeur de d�part
	premierNombre = 10;
	deuxiemeNombre = 5;
	reel1 = 10.99;
	lettre = 'y';
	quitterProgramme = false;

	// la partie de gauche du signe �gal est la destination, qui re�oit la valeur, c'est une variable
	// la partie de droite du signe �gal est la source, la valeur
	deuxiemeNombre = premierNombre;
	reel1 = 3.1415 * 2;
	// Le signe = est une affectation : Destination <- source
	*/

	// Poser la question � l'utilisateur en affichant un message � l'�cran
	std::cout << "Veuillez entrer un nombre entier :";
	std::cin >> premierNombre;

	// On affiche la demande pour le deuxi�me nombre
	std::cout << "Veuillez entrer le deuxi�me nombre : ";
	std::cin >> deuxiemeNombre;
	
	// Le programme doit calculer la somme
	somme = premierNombre + deuxiemeNombre;

	// On affiche le r�sultat
	std::cout << "La somme de " << premierNombre << " + " << deuxiemeNombre << " = " << somme;

	return 0;
}