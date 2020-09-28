// But : �crivez un programme qui lit 10 nombres et qui d�termine et affiche la plus grande valeur.
/*Le programme doit utiliser trois variables :
pour la boucle for :                Compteur: Variable comptant jusqu'� 10
La valeur que l'utilisateur donne : Nombre : Le nombre entr� par l'utilisateur
Le r�sultat � afficher :            Max : La plus grande valeur de tous les nombres
*/
// Auteur : Karine Moreau
// Date : 2020


/*
si on veut compter en augmentant le compteur de 1


Si la valeur de d�part est plus petite que la valeur de fin, le compteur doit augmenter et la comparaison doit �tre plus petit que

for (int compteur = valeurDeDepart; compteur < valeurDeFin; compteur++)
{

}

compte de 0 � 4 : la boucle s'excute 5 fois
for (int compteur = 0; compteur < 5; compteur++)
{

}
compte de 1 � 5 : La boucle s'ex�cute 5 fois
for (int compteur = 1; compteur <= 5; compteur++)
{

}

Si la valeur de d�part est plus grande que la valeur de fin, le compteur doit diminuer et la comparaison doit �tre plus grand que
for (int compteur = valeurDeDepart; compteur > valeurDeFin; compteur--)
{

}

compte de 5 � 1 : la boucle s'excute 5 fois
for (int compteur = 5; compteur > 0; compteur--)
{

}
compte de 5 � 1 : La boucle s'ex�cute 5 fois
for (int compteur = 5; compteur >= 1; compteur--)
{

}

On augmente de bond, si bond vaut 2, on va de deux en deux
for (int compteur = valeurDeDepart; compteur < valeurDeFin; compteur = compteur + bond)
{

}

*/


#include <iostream>

using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()

{

	setlocale(LC_ALL, "");

	// D�claration des variables

	int nombre;

	int max; // Le r�sultat que le programme doit d�terminer

	cout << "Veuillez entrer le nombre 1 : ";
	cin >> nombre;
	//Ce premier nombre est automatiquement le max de la s�rie
	max = nombre;
	for (int compteur = 2; compteur <= 10; compteur++)

	{
		cout << "Veuillez entrer le nombre " << compteur << " : ";
		cin >> nombre;

		if (nombre > max)
		{
			max = nombre;
		}
	}

	cout << "Le max est : " << max << endl;

	return 0;


}