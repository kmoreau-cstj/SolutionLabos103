#include "Labo07Fonctions.h"
#include <iostream>
using namespace std;

int genererAlea(int min, int max)
{
    return rand()%(max - min +1) + (max-min)  ;

    // 1 à 6   : 
    // 2 et 12 : rand()%12-2+1 =11  +(12-2) +10  
    // 10 et 20 : rand()%(20-10+1)%(11) +20-10  0 à 10 +10 10 à 20


}
