#include "fonctions.h"
/*
R : applique la fonction g sur 2 entrées
E : deux entiers
S : le résultat par la fonction g
*/
int g(int x, int y)
{
    int res;
    res = x * x - y;
    return res;
}