#include <iostream>
using namespace std;
#include <cmath>


#include "fonctions.h"


float deg_to_rad(float degree){
    return degree/360 * M_PI*2;
}




/*
R : calcule et renvoie un jour de l'année en déclinaison du soleil
E : un entier, le jour de l'année
S : un réel, la déclinaison du soleil
*/
float Dec(int j){
    float declinaison;

    declinaison = asin(0.398 * sin(0.0171915 * j -1.3962634));
    return declinaison;
}

/*
R : calcul et renvoie la durée d'insolation en heure
E : un entier, le jour de l'année
un réel, la latitude en degré
S : un réel, la durée d'insolation
*/
float Di(int j, float lat){
    float declinaison, duree;

    declinaison = Dec(j);
    duree = 24/M_PI * acos(-tan(lat)*tan(declinaison));
    return duree;

}