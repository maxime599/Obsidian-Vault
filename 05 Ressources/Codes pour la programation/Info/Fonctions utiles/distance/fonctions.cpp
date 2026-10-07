#include<iostream>
using namespace std;
#include "fonctions.h"
#include "../geometrie/geometrie.h"


/*
R : calcul la distancce parcourue par un velo en fonction du nombre de tours et du rayon de la roue
E : un entier le nb de tours et un réel le rayon de la roue
S : un réel la distance
*/
float Distance_velo(int nb_tour, float rayon){
    float peri, distance;
    peri = Perimetre(rayon);

    distance = nb_tour*peri;



    return distance;
}
