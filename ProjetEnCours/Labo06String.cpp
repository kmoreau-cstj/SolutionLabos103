// But : 
// Auteur : Karine Moreau
// Date : 2020


#include <iostream>
#include <string>

using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	int nombre;
	float pi = 3.1415;
	// Type de base : int, float, double, char, bool. On ajoute le type string qui n'est pas un type de base, type plus complexe, compos� de char 
	//                                                string est un objet qui peut �tre compos� de plusieurs types de base
	//                                                et qui permet de m�moriser une chaine de caract�res.
	string prenom;
	string adresse;
	string paragraphe;

	// Ici on d�clare et on initialise la variable salutation en faisant appel � son constructeur
	string salutation("Bonjour � tous !");

	// Initialiser la variable : lui mettre une valeur
	nombre = 15;
	prenom = "Karine";		// Une chaine de caract�res est entre guillemets.

	// Afficher le contenu d'un string � l'�cran
	cout << nombre << endl;
	cout << salutation << " et � " << prenom << endl;

	// Lire au clavier l'information que donne  l'utilisateur et la stocker dans une variable de type string
	cout << "Veuillez entrer un nombre entier : ";
	cin >> nombre; // Atttention cin >> laisse trainer le \n de validation dans la m�moire du clavier
	cin.ignore();			// cin.ignore sans param�tre va supprimer un seul caract�re dans la m�moire du clavier
	//cin.ignore(1, '\n');	// cin.ignore avec deux param�tres, le premier pour dire combien de caract�res on veut ignorer 
							// et le deuxi�me le dernier caract�re � ignorer
	cout << "Vous avez choisi le nombre " << nombre << endl;


	cout << "Veuillez entrer votre pr�nom : ";
	cin >> prenom;
	cin.ignore(1, '\n');
	cout << "Vous vous appelez " << prenom << endl;

	cout << "Veuillez entrer votre adresse : ";
	//cin >> adresse;

	// On constate que cin >> arr�te de lire d�s qu'il rencontre un espace, une tabulation, ou un enter, 
	// il arr�te la lecture au clavier et stocke les caract�res pr�c�dents dans la variable

	// Pour palier au cin >> on va utiliser une fonction getline qui provient de la biblioth�que string
	// getline prend trois param�tres : 1. o� on lit l'information : cin
	//                                : 2. o� on stocke l'information : dans la variable adresse
	//                                : 3. Quand est-ce qu'on s'arr�te de lire : quand on rencontre le caract�re enter '\n'
	getline(cin, adresse, '\n');
	cout << "vous habitez au " << adresse << endl;

	// On constate que le cin >> laisse dans l'espace m�moire du clavier la derni�re touche de validation : le enter : '\n'
	// Si on m�lange dans le programme un cin >> et un getline, on rencontre des difficult�s, car il reste les \n apr�s chaque cin >>
	// Pour r�soudre le probl�me, il faut ignorer un caract�re apr�s chaque cin >>, cin.ignore()

	// On veut saisir quelques lignes d'�criture
	cout << "Veuillez �crire un paragraphe sur plusieurs lignes : ";
	getline(cin, paragraphe, '\t');
	cout << "Votre paragraphe est : " << paragraphe << endl;

	// Comparer des chaines de caract�res entre elles
	if (nombre == 7)
	{
		cout << "Vous avez gagn� !" << endl;
	}
	if (prenom == "Nat")
	{
		cout << "Vous �tes mon amie !!" << endl;
	}
	else
		cout << "Vous ne faites pas partie de mes amis !" << endl;

	if (prenom > "Arthur")
	{
		cout << prenom << " est class� apr�s Arthur." << endl;
	}
	if (prenom < "Zo�")
	{
		cout << prenom << " est class� avant Zo�." << endl;
	}















	return 0;
}