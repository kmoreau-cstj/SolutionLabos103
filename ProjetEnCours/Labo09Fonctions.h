#pragma once
#include <vector>
using namespace std;

// Pour passer des param�tres � une fonction, il y a deux modes, deux fa�ons :
// En fran�ais :			Par r�f�rence		                par copie, par valeur 
//							On cr�e un alias ou un synonyme 
//                          de la variable dans l'appelant
//                          l'espace m�moire de la variable 
//                          a deux noms
// En informatique :		�criture sur le param�tre			Lecture
// En C++ :					avec &				                sans &
// Utilisation :			avec & : 1. Quand on veut modifier la valeur fournie par l'appelant 
//									    sans utiliser la valeur de retour (return) de la fonction
//                                   2. Quand le param�tre occupe beaucoup de place en m�moire, 
//                                      on a int�ret de le passer par r�f�rence pour �viter de copier son contenu

void echangerValeur(int& nb1, int& nb2);

void afficherContenuDuVecteur(vector<int> vecCopie);

// Le vecteur peut �tre volumineux, alors on fait un lien sur la source pour �viter la recopie (on met une &)
// Mais comme afficher ne doit pas modifier le contenu du vecteur, elle a juste besoin de lire le contenu pour l'afficher
// alors on prot�ge le vecteur contre l'�criture avec const.
//void afficherContenuDuVecteur(const vector<int>& vecSource);


void ajouterValeurALaFinDuVecteur(vector<int>& vecSource, int nbElementAAjouter);
void saisirValeurDansVecteur(vector<int>& vecSource, int finSaisie);

// Ici, si le vecteur Source �tait volumineux, 1 000 000 de cases, on perdrait du temps � copier les valeurs
// et perdreait de la place, on peut le passer par r�f�rence, du coup il ne fait pas de copie.
// On prot�ge le contenu du vecteur en mettre const devant, il est en lecteur seulement
int calculerSommeVecteur(const vector<int>& vecSource);
// ici c'est par copie, pas de danger, mais les performances peuvent �tre ralenties � cause de la copie
//int calculerSommeVecteur(vector<int> vecSource);

float calculerMoyenneVecteur(vector<int> vecSource);


void faireUnTest(int paramParCopie, int& paramParReference);
void faireUnTest2(int paramParCopie, const int& paramParReferenceGrosVolume);




