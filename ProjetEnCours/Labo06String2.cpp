// But : 
// Auteur : Karine Moreau
// Date : 2020


#include <iostream>
#include <string>				// pour avoir acc�s � des fonctions sp�cifiques sur les chaines de caract�res : getline

using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	int nombre;
	string salutation;
	// initialiser un string, on utilise l'op�rateur d'affectation =
	// comparer des string : == != > >= < <= comme avec des int

	
	// Le probl�me avec l'utilisation des string c'est quand on veut y mettre des espaces, car cin >> ne peut pas 
	// mettre des espaces ou des tabulations ou enter dans un string. Car il utilise les espaces, les tabulations et les enter
	// comme s�parateur entre deux valeurs. si on veut lire des espaces dans les string, il faut utiliser getline.
	// Mais getline et cin >> ne fonctionnent pas bien ensemble dans le m�me programme, car cin >> laisse dans la m�moire du
	// clavier les s�parateurs (espace, \t, \n). Apr�s chaque cin >>, il faut faire le m�nage en utilisant cin.ignore() ou 
	// cin.ignore(1, '\n');
	// 
	
	// cout << "Juste apr�s la d�claration, nombre vaut : " << nombre << endl;

	cout << "Juste apr�s la d�claration, salutation vaut : " << salutation << endl;
	cout << "Quelle place en m�moire elle occupe : " << salutation.capacity() << endl;
	cout << "Combien de caract�res il y a dans la variable salutation : " << salutation.length() << endl;
	cout << "Combien de caract�res il y a dans la variable salutation : " << salutation.size() << endl;

	// On initialise la variable salutation
	salutation = "Bonjour";
	nombre = 50;
	cout << endl;
	cout << "Juste apr�s l'initialisation, salutation vaut : " << salutation << endl;
	cout << "Quelle place en m�moire elle occupe : " << salutation.capacity() << endl;
	cout << "Combien de caract�res il y a dans la variable salutation : " << salutation.length() << endl;
	cout << "Combien de caract�res il y a dans la variable salutation : " << salutation.size() << endl;


	// Je voudrais ajouter des caract�res � la fin de la variable salutation : concatener
	nombre = nombre + 5;
	salutation = salutation + " � tous !";
	cout << endl;
	cout << "Juste apr�s la concat�nation, salutation vaut : " << salutation << endl;
	cout << "Quelle place en m�moire elle occupe : " << salutation.capacity() << endl;
	cout << "Combien de caract�res il y a dans la variable salutation : " << salutation.length() << endl;
	cout << "Combien de caract�res il y a dans la variable salutation : " << salutation.size() << endl;
	cout << "Quelle est la taille maximum pour une string :" << salutation.max_size() << endl;

	// On voudrait effacer le contenu de salutation
	salutation.clear();
	cout << endl;
	cout << "Juste apr�s le clear, salutation vaut : " << salutation << endl;
	cout << "Quelle place en m�moire elle occupe : " << salutation.capacity() << endl;
	cout << "Combien de caract�res il y a dans la variable salutation : " << salutation.length() << endl;
	cout << "Combien de caract�res il y a dans la variable salutation : " << salutation.size() << endl;

	salutation = "Bienvenue";
	salutation.erase();
	
	cout << endl;
	cout << "Juste apr�s le erase, salutation vaut : " << salutation << endl;
	cout << "Quelle place en m�moire elle occupe : " << salutation.capacity() << endl;
	cout << "Combien de caract�res il y a dans la variable salutation : " << salutation.length() << endl;
	cout << "Combien de caract�res il y a dans la variable salutation : " << salutation.size() << endl;


	salutation = "Bienvenue";
	salutation.erase(5,2);

	cout << endl;
	cout << "Juste apr�s le erase, salutation vaut : " << salutation << endl;
	cout << "Quelle place en m�moire elle occupe : " << salutation.capacity() << endl;
	cout << "Combien de caract�res il y a dans la variable salutation : " << salutation.length() << endl;
	cout << "Combien de caract�res il y a dans la variable salutation : " << salutation.size() << endl;


	salutation = "Salut";
	cout << endl;
	cout << "Afficher le premier caract�re de salutation avec front: " << salutation.front() << endl;
	cout << "Afficher le premier caract�re de salutation avec at : " << salutation.at(0) << endl;
	cout << "Afficher le dernier caract�re de salutation back : " << salutation.back() << endl;
	cout << "Afficher le dernier caract�re de salutation at : " << salutation.at(salutation.length()-1) << endl;
	cout << "Afficher le troisi�me caract�re de salutation : " << salutation.at(3-1) << endl;

	// d�fi : afficher le contenu de la variable salutation � la verticale
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