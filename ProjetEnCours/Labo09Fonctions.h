#pragma once
#include <vector>
using namespace std;

// Pour passer des paramètres à une fonction, il y a deux modes, deux façons :
// En français :			Par référence		                par copie, par valeur 
//							On crée un alias ou un synonyme 
//                          de la variable dans l'appelant
//                          l'espace mémoire de la variable 
//                          a deux noms
// En informatique :		Écriture sur le paramètre			Lecture
// En C++ :					avec &				                sans &
// Utilisation :			avec & : 1. Quand on veut modifier la valeur fournie par l'appelant 
//									    sans utiliser la valeur de retour (return) de la fonction
//                                   2. Quand le paramètre occupe beaucoup de place en mémoire, 
//                                      on a intéret de le passer par référence pour éviter de copier son contenu

void echangerValeur(int& nb1, int& nb2);

void afficherContenuDuVecteur(vector<int> vecCopie);

// Le vecteur peut être volumineux, alors on fait un lien sur la source pour éviter la recopie (on met une &)
// Mais comme afficher ne doit pas modifier le contenu du vecteur, elle a juste besoin de lire le contenu pour l'afficher
// alors on protège le vecteur contre l'écriture avec const.
//void afficherContenuDuVecteur(const vector<int>& vecSource);


void ajouterValeurALaFinDuVecteur(vector<int>& vecSource, int nbElementAAjouter);
void saisirValeurDansVecteur(vector<int>& vecSource, int finSaisie);

// Ici, si le vecteur Source était volumineux, 1 000 000 de cases, on perdrait du temps à copier les valeurs
// et perdreait de la place, on peut le passer par référence, du coup il ne fait pas de copie.
// On protège le contenu du vecteur en mettre const devant, il est en lecteur seulement
int calculerSommeVecteur(const vector<int>& vecSource);
// ici c'est par copie, pas de danger, mais les performances peuvent être ralenties à cause de la copie
//int calculerSommeVecteur(vector<int> vecSource);

float calculerMoyenneVecteur(vector<int> vecSource);


void faireUnTest(int paramParCopie, int& paramParReference);
void faireUnTest2(int paramParCopie, const int& paramParReferenceGrosVolume);




