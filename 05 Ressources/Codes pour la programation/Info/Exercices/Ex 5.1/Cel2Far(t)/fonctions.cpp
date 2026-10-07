#include "fonctions.h"
/*
R : convertie une température de celsus à far
E : un réel corepondant à la température*
S: un réel, la température en far
*/
float Cel2Far(float t)
{
    float res;
    res = 9.0 / 5 * t + 32;
    return res;
}