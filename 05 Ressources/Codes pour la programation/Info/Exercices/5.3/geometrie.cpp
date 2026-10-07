#include<iostream>
using namespace std;

#include "geometrie.h"



/*
R calcule le p´erim`etre d’un cercle de rayon r
E 1 r´eel (le rayon)
S  1 r´eel (le p´erim`etre)
*/
float Perimetre(float r){
    float p;
    const float PI = 3.141592;

    p = 2*PI*r;
    return p;
}


/*
R calcule la surface d’un disque de rayon r
E 1 r´eel (le rayon
S 1 r´eel (la surface)
*/
float Surface(float r){
    float s;
    const float PI = 3.141592;

    s = PI*r*r;
    return s;
}

