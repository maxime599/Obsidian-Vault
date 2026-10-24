#include<iostream>
using namespace std;
#include "fonctions.h"


/*
R : permet de calculer la taille génétique en fonction de la tailles de ses parent et de son sexe
E : 2 réel : la taille du père et de la mère en m, 1 caractère, le sexe (M ou F)
S : 1 réel : la taille génétique en m
*/
float taille_genetique(float taille_pere, float taille_mere, char sexe){
    float moyenne_taille_parent = (taille_pere + taille_mere)/2;
    float taille_g;
    if (sexe == 'M'){
        taille_g = moyenne_taille_parent + 0.06;
    }  
    else{
        taille_g = moyenne_taille_parent;
    }
    return taille_g;
}


