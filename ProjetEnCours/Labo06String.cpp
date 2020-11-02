// But : 
// Auteur : Karine Moreau
// Date : 2020


#include <iostream>
#include <string>

using namespace std;			// Pour éviter d'écrire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int nombre;
	float pi = 3.1415;
	// Type de base : int, float, double, char, bool. On ajoute le type string qui n'est pas un type de base, type plus complexe, composé de char 
	//                                                string est un objet qui peut être composé de plusieurs types de base
	//                                                et qui permet de mémoriser une chaine de caractères.
	string prenom;
	string adresse;
	string paragraphe;

	// Ici on déclare et on initialise la variable salutation en faisant appel à son constructeur
	string salutation("Bonjour à tous !");

	// Initialiser la variable : lui mettre une valeur
	nombre = 15;
	prenom = "Karine";		// Une chaine de caractères est entre guillemets.

	// Afficher le contenu d'un string à l'écran
	cout << nombre << endl;
	cout << salutation << " et à " << prenom << endl;

	// Lire au clavier l'information que donne  l'utilisateur et la stocker dans une variable de type string
	cout << "Veuillez entrer un nombre entier : ";
	cin >> nombre; // Atttention cin >> laisse trainer le \n de validation dans la mémoire du clavier
	cin.ignore();			// cin.ignore sans paramètre va supprimer un seul caractère dans la mémoire du clavier
	//cin.ignore(1, '\n');	// cin.ignore avec deux paramètres, le premier pour dire combien de caractères on veut ignorer 
							// et le deuxième le dernier caractère à ignorer
	cout << "Vous avez choisi le nombre " << nombre << endl;


	cout << "Veuillez entrer votre prénom : ";
	cin >> prenom;
	cin.ignore(1, '\n');
	cout << "Vous vous appelez " << prenom << endl;

	cout << "Veuillez entrer votre adresse : ";
	//cin >> adresse;

	// On constate que cin >> arrête de lire dès qu'il rencontre un espace, une tabulation, ou un enter, 
	// il arrête la lecture au clavier et stocke les caractères précédents dans la variable

	// Pour palier au cin >> on va utiliser une fonction getline qui provient de la bibliothèque string
	// getline prend trois paramètres : 1. où on lit l'information : cin
	//                                : 2. où on stocke l'information : dans la variable adresse
	//                                : 3. Quand est-ce qu'on s'arrête de lire : quand on rencontre le caractère enter '\n'
	getline(cin, adresse, '\n');
	cout << "vous habitez au " << adresse << endl;

	// On constate que le cin >> laisse dans l'espace mémoire du clavier la dernière touche de validation : le enter : '\n'
	// Si on mélange dans le programme un cin >> et un getline, on rencontre des difficultés, car il reste les \n après chaque cin >>
	// Pour résoudre le problème, il faut ignorer un caractère après chaque cin >>, cin.ignore()

	// On veut saisir quelques lignes d'écriture
	cout << "Veuillez écrire un paragraphe sur plusieurs lignes : ";
	getline(cin, paragraphe, '\t');
	cout << "Votre paragraphe est : " << paragraphe << endl;

	// Comparer des chaines de caractères entre elles
	if (nombre == 7)
	{
		cout << "Vous avez gagné !" << endl;
	}
	if (prenom == "Nat")
	{
		cout << "Vous êtes mon amie !!" << endl;
	}
	else
		cout << "Vous ne faites pas partie de mes amis !" << endl;

	if (prenom > "Arthur")
	{
		cout << prenom << " est classé après Arthur." << endl;
	}
	if (prenom < "Zoé")
	{
		cout << prenom << " est classé avant Zoé." << endl;
	}















	return 0;
}