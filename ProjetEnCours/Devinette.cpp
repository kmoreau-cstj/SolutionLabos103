// But : 
// Auteur : Karine Moreau
// Date : 2020


#include <iostream>
#include <time.h>

using namespace std;			// Pour éviter d'écrire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	int random; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	srand(time(0)); // pour activer l’aléatoire dans le programme
	random = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom

	setlocale(LC_ALL, "");

	cout << random << endl;

	// Déclaration des constantes
	const int NB_CHANCES = 5;



	// Déclaration des variables
	int nombre;						// Le nombre que l'utilisateur propose. 
									// Cette variable doit être IMPÉRATIVEMENT initialisée par l'utilisateur avec un cin
	// Variables intermédiaires pour le programme 
	int nbEssais = 1;				// Au début du programme, l'utilisateur va donner le premier nombre donc c'est le premier essai

	// Pour faire une bonne boucle while, il faut que les variables qui interviennent dans la condition de la boucle soient 
	// initialisées AVANT d'entrer dans la boucle
	cout << "Bienvenue dans le jeu de devinettes" << endl;
	cout << "Vous devez trouver le nombre choisi par l'ordinateur. C'est un nombre compris entre 0 et 100." << endl;
	cout << "Essai #" << nbEssais << "/" <<NB_CHANCES <<" : ";
	cin >> nombre;
	// Le programme doit valider le nombre. Tant qu'il n'est pas compris entre 0 et 100, le programme doit lui redemander
	// while (nombre <0 || nombre > 100)
	while (!(nombre >=0 && nombre <=100))
	{
		cout << "Erreur : Le nombre doit être compris entre 0 et 100." << endl;

		// Pour avoir une bonne boucle, il faut A LA FIN de la boucle REINITIALISER la variable de boucle, ici nombre
		cout << "Essai #" << nbEssais << "/" << NB_CHANCES << " : ";
		cin >> nombre;
	}

	// Ici on est sûr d'avoir un nombre compris entre 0 et 100


	// Le programme doit se répéter tant que l'utilisateur n'a pas trouvé le bon nombre ou qu'il n'a pas utilisé les 5 chances
	while (nombre !=random && nbEssais != NB_CHANCES )
	{
		cout << " Le nombre n'est pas le bon." << endl;
		// On propose de l'aide à l'utilisateur
		if (nombre > random)
		{
			cout << "Votre nombre est trop grand." << endl;
		}
		else     // ici le nombre est automatiquement inférieur strictement à random
		{
			cout << "Votre nombre est trop petit." << endl;
		}


		// A LA FIN de la boucle, il faut REINITIALISER les variables de boucles, nombre et nbEssais
		nbEssais++;
		cout << "Essai #" << nbEssais << "/" << NB_CHANCES << " : ";
		cin >> nombre;
		// Le programme doit valider le nombre. Tant qu'il n'est pas compris entre 0 et 100, le programme doit lui redemander
		// while (nombre <0 || nombre > 100)
		while (!(nombre >= 0 && nombre <= 100))
		{
			cout << "Erreur : Le nombre doit être compris entre 0 et 100." << endl;

			// Pour avoir une bonne boucle, il faut A LA FIN de la boucle REINITIALISER la variable de boucle, ici nombre
			cout << "Essai #" << nbEssais << "/" << NB_CHANCES << " : ";
			cin >> nombre;
		}
	} // Fin de la boucle principale

	// Ici on est sorti de la boucle, il y a deux cas possibles : On a trouvé le bon nombre OU on a épuisé toutes les chances
	if (nombre == random)
	{
		cout << "Bravo, vous avez trouvé le bon nombre en " << nbEssais << " essai(s)." << endl;
	}
	else
	{
		cout << "Vous avez perdu. Le bon nombre était " << random << "." << endl;
	}

	return 0;
}