// But : L'utilisateur est devant un ascenseur et il s'apprête à monter à un étage qu'il va nous indiquer. 
// Auteur : Karine Moreau
// Date : 2020


#include <iostream>

using namespace std;			// Pour éviter d'écrire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int etageArrivee;

	// On demande l'étage à atteindre
	cout << "Indiquez l'étage à atteindre -->";
	cin >> etageArrivee;


	cout << "Vous êtes à l'étage 1 et vous montez dans l'ascenseur" << endl;

	/*
	for (size_t i = 0; i < length; i++)
	{
	}

	Dans la boucle for, il faut donner trois instructions
	1. size_t i = 0;	Cette instruction est exécutée une seule fois avant de commencer la boucle. Elle permet de déclarer une variable qui
						sert de compteur pour savoir combien de fois on doit répéter les instructions
						size_t Le type de la variable qui va suivre (char, int, float, double, bool, ...). La plupart du temps, c'est le type int
						i c'est le nom de la variable qui intervient dans les trois instructions. i permet de compter le nombre de répétitions
						i peut être changé pour un nom plus significatif en fonction du problème à résoudre. Taper le nouveau nom et faire TAB
						pour qu'il soit modifié dans les deux autres instructions
						=0; permet d'initialiser la variable qui sert de compteur. VS propose 0 mais cette valeur peut-être modifiée.
	2. i < length;		C'est la condition pour dire si on recommence la boucle ou pas. On retrouve les opérateurs de comparaison (<, <=, >, >=, == ou !=)
						length doit être remplacé par une valeur qui peut provenir d'une variable ou d'une constante
						La condition est évaluée avant de rentrer dans la boucle. Si elle est vraie, alors les instructions dans le bloc vont être
						exécutées.
						Si i commence à 0, alors dans la condition on utilise < plus petit strictement
						Si i commence à 1, alors dans la condition on utilise <= plus petit ou égal
	
	3.i++				i++ veut dire augmenter de 1 la valeur de i. i++ signifie que i = i + 1. i +=1
						i-- permet de décrémenter de 1, diminuer la valeur de i de 1. i-- signifie i = i - 1
						Cette 3ième instruction permet à la condition (2ième instruction) de devenir fausse. Permet à la variable de boucle (i)
						de changer de valeur, afin que la condition devienne fausse.
						cette 3ième instruction est exécutée après le bloc d'instruction



	*/

	for (int numeroEtage = 1; numeroEtage <= etageArrivee; numeroEtage++)
	{
		cout << "Vous êtes rendu à l'étage " << numeroEtage << endl;
	}

	cout << "Vous êtes arrivé. Bonne journée" << endl;


	return 0;
}