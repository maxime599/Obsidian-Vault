//g++ main.cpp fonctions.cpp '../../Fonctions utiles/geometrie/geometrie.cpp' -o output/mon_programme
#include<cmath>
#include<iostream>
using namespace std;

#include "fonctions.h"


float Distance_vision(float taille){
    const float R = 6371*1000;
    float distance;
    distance = sqrt((R+taille)*(R+taille)-R*R);
    return distance;
}