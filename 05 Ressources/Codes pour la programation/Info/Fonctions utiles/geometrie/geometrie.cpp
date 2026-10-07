#include <iostream>
using namespace std;

#include "geometrie.h"

/*
R calcule le p´erim`etre d’un cercle de rayon r
E 1 r´eel (le rayon)
S  1 r´eel (le p´erim`etre)
*/
float Perimetre(float r)
{
    float p;
    const float PI = 3.141592;

    p = 2 * PI * r;
    return p;
}

/*
R calcule la surface d’un disque de rayon r
E 1 r´eel (le rayon
S 1 r´eel (la surface)
*/
float Surface(float r)
{
    float s;
    const float PI = 3.141592;

    s = PI * r * r;
    return s;
}

/*
R calcule le volume d'un cylindre
E 2 réel, le rayon et la hauteur
S 1 réel, le volume
*/
float Volume_cylindre(float rayon, float hauteur)
{
    float aire_base, volume;
    aire_base = Surface(rayon);

    volume = aire_base * hauteur;
    return volume;
}
