#include "Labo05MesFonctions2.h"
#include <iostream>

using namespace std;

int calculerCarre(int entier)
{

    return entier*entier;
}

int calculerCube(int nb)
{
    return nb*nb*nb;
}

double calculerCube(double nb)
{
    return nb*nb*nb;
}

double calculerFactorielle(int nb) // Test : on suppose nb = 4
{
    double factorielle = 1;  // 0! = 1, la factorielle doit être initialisée à 1 pour pouvoir la multiplier par n'importe quel autre nombre

    for (int compteur = 2; compteur <= nb; compteur++)
    {
        factorielle = factorielle * compteur;
    }
    
    return factorielle;
}

int validerNombrePositif(int nb)
{
    
    while (nb < 0)
    {
        cout << "Erreur : Le nombre ne peut pas être négatif." << endl;
        cout << "Veuillez entrer un nombre positif : ";
        cin >> nb;
    }
    // Si on sort de la boucle, le nombre est positif, donc on le retourne
    
    return nb;
}

int validerAnnee(int an)
{
    
    // Tant que le paramètre an n'a pas 4 chiffres, la fonction redemande une nouvelle valeur
    while (an < 1000 || an > 9999)
    {
        cout << "Erreur : L'année doit contenir 4 chiffres." << endl;
        cout << "Veuillez entrer une année : ";
        cin >> an;
    }
    
    // Quand on sort de la boucle, on est sûr que la variable an a bien 4 chiffres, on la retourne

    return an;
}

bool etreBissextile(int an)
{
    
    // si l'année est divisible par 4 et non divisible par 100 ;
    // si l'année est divisible par 400 (« divisible » signifie que la division donne un nombre entier, sans reste).
    if (an%4 == 0 && an%100 !=0 || an%400 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
    
}
