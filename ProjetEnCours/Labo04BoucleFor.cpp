// But : L'utilisateur est devant un ascenseur et il s'appr�te � monter � un �tage qu'il va nous indiquer. 
// Auteur : Karine Moreau
// Date : 2020


#include <iostream>

using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	int etageArrivee;

	// On demande l'�tage � atteindre
	cout << "Indiquez l'�tage � atteindre -->";
	cin >> etageArrivee;


	cout << "Vous �tes � l'�tage 1 et vous montez dans l'ascenseur" << endl;

	/*
	for (size_t i = 0; i < length; i++)
	{
	}

	Dans la boucle for, il faut donner trois instructions
	1. size_t i = 0;	Cette instruction est ex�cut�e une seule fois avant de commencer la boucle. Elle permet de d�clarer une variable qui
						sert de compteur pour savoir combien de fois on doit r�p�ter les instructions
						size_t Le type de la variable qui va suivre (char, int, float, double, bool, ...). La plupart du temps, c'est le type int
						i c'est le nom de la variable qui intervient dans les trois instructions. i permet de compter le nombre de r�p�titions
						i peut �tre chang� pour un nom plus significatif en fonction du probl�me � r�soudre. Taper le nouveau nom et faire TAB
						pour qu'il soit modifi� dans les deux autres instructions
						=0; permet d'initialiser la variable qui sert de compteur. VS propose 0 mais cette valeur peut-�tre modifi�e.
	2. i < length;		C'est la condition pour dire si on recommence la boucle ou pas. On retrouve les op�rateurs de comparaison (<, <=, >, >=, == ou !=)
						length doit �tre remplac� par une valeur qui peut provenir d'une variable ou d'une constante
						La condition est �valu�e avant de rentrer dans la boucle. Si elle est vraie, alors les instructions dans le bloc vont �tre
						ex�cut�es.
						Si i commence � 0, alors dans la condition on utilise < plus petit strictement
						Si i commence � 1, alors dans la condition on utilise <= plus petit ou �gal
	
	3.i++				i++ veut dire augmenter de 1 la valeur de i. i++ signifie que i = i + 1. i +=1
						i-- permet de d�cr�menter de 1, diminuer la valeur de i de 1. i-- signifie i = i - 1
						Cette 3i�me instruction permet � la condition (2i�me instruction) de devenir fausse. Permet � la variable de boucle (i)
						de changer de valeur, afin que la condition devienne fausse.
						cette 3i�me instruction est ex�cut�e apr�s le bloc d'instruction



	*/

	for (int numeroEtage = 1; numeroEtage <= etageArrivee; numeroEtage++)
	{
		cout << "Vous �tes rendu � l'�tage " << numeroEtage << endl;
	}

	cout << "Vous �tes arriv�. Bonne journ�e" << endl;


	return 0;
}