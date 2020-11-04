// But : 
// Auteur : Karine Moreau
// Date : 2020


#include <iostream>
#include <string>				// pour avoir accès à des fonctions spécifiques sur les chaines de caractères : getline

using namespace std;			// Pour éviter d'écrire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int nombre;
	string salutation;
	// initialiser un string, on utilise l'opérateur d'affectation =
	// comparer des string : == != > >= < <= comme avec des int

	
	// Le problème avec l'utilisation des string c'est quand on veut y mettre des espaces, car cin >> ne peut pas 
	// mettre des espaces ou des tabulations ou enter dans un string. Car il utilise les espaces, les tabulations et les enter
	// comme séparateur entre deux valeurs. si on veut lire des espaces dans les string, il faut utiliser getline.
	// Mais getline et cin >> ne fonctionnent pas bien ensemble dans le même programme, car cin >> laisse dans la mémoire du
	// clavier les séparateurs (espace, \t, \n). Après chaque cin >>, il faut faire le ménage en utilisant cin.ignore() ou 
	// cin.ignore(1, '\n');
	// 
	
	// cout << "Juste après la déclaration, nombre vaut : " << nombre << endl;

	cout << "Juste après la déclaration, salutation vaut : " << salutation << endl;
	cout << "Quelle place en mémoire elle occupe : " << salutation.capacity() << endl;
	cout << "Combien de caractères il y a dans la variable salutation : " << salutation.length() << endl;
	cout << "Combien de caractères il y a dans la variable salutation : " << salutation.size() << endl;

	// On initialise la variable salutation
	salutation = "Bonjour";
	nombre = 50;
	cout << endl;
	cout << "Juste après l'initialisation, salutation vaut : " << salutation << endl;
	cout << "Quelle place en mémoire elle occupe : " << salutation.capacity() << endl;
	cout << "Combien de caractères il y a dans la variable salutation : " << salutation.length() << endl;
	cout << "Combien de caractères il y a dans la variable salutation : " << salutation.size() << endl;


	// Je voudrais ajouter des caractères à la fin de la variable salutation : concatener
	nombre = nombre + 5;
	salutation = salutation + " à tous !";
	cout << endl;
	cout << "Juste après la concaténation, salutation vaut : " << salutation << endl;
	cout << "Quelle place en mémoire elle occupe : " << salutation.capacity() << endl;
	cout << "Combien de caractères il y a dans la variable salutation : " << salutation.length() << endl;
	cout << "Combien de caractères il y a dans la variable salutation : " << salutation.size() << endl;
	cout << "Quelle est la taille maximum pour une string :" << salutation.max_size() << endl;

	// On voudrait effacer le contenu de salutation
	salutation.clear();
	cout << endl;
	cout << "Juste après le clear, salutation vaut : " << salutation << endl;
	cout << "Quelle place en mémoire elle occupe : " << salutation.capacity() << endl;
	cout << "Combien de caractères il y a dans la variable salutation : " << salutation.length() << endl;
	cout << "Combien de caractères il y a dans la variable salutation : " << salutation.size() << endl;

	salutation = "Bienvenue";
	salutation.erase();
	
	cout << endl;
	cout << "Juste après le erase, salutation vaut : " << salutation << endl;
	cout << "Quelle place en mémoire elle occupe : " << salutation.capacity() << endl;
	cout << "Combien de caractères il y a dans la variable salutation : " << salutation.length() << endl;
	cout << "Combien de caractères il y a dans la variable salutation : " << salutation.size() << endl;


	salutation = "Bienvenue";
	salutation.erase(5,2);

	cout << endl;
	cout << "Juste après le erase, salutation vaut : " << salutation << endl;
	cout << "Quelle place en mémoire elle occupe : " << salutation.capacity() << endl;
	cout << "Combien de caractères il y a dans la variable salutation : " << salutation.length() << endl;
	cout << "Combien de caractères il y a dans la variable salutation : " << salutation.size() << endl;


	salutation = "Salut";
	cout << endl;
	cout << "Afficher le premier caractère de salutation avec front: " << salutation.front() << endl;
	cout << "Afficher le premier caractère de salutation avec at : " << salutation.at(0) << endl;
	cout << "Afficher le dernier caractère de salutation back : " << salutation.back() << endl;
	cout << "Afficher le dernier caractère de salutation at : " << salutation.at(salutation.length()-1) << endl;
	cout << "Afficher le troisième caractère de salutation : " << salutation.at(3-1) << endl;

	// défi : afficher le contenu de la variable salutation à la verticale
	/*
	S			at(0)
	a			at(1)
	l			at(2)
	u			at(3)
	t			at(length()-1 = 4)
	
	*/
	

	for (int position = 0; position < salutation.length(); position++)
	{
		cout << salutation.at(position) << endl;
	}


	return 0;
}