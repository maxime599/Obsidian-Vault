#include <iostream>
using namespace std;
#include "fonctions.h"

/*
R : calcule le terme d’indice n (c’est `a dire le n + 1e terme) de la suite de Fibonacci initialis´ee par les deux entiers a et b
E : 3 entiers a, b et n,
S : un entiers, le terme d'indice n ( donc le nème terme)
*/
int Fibonacci(int a, int b, int n)
{
    int u0 = a, u1 = b, u;
    if (n == 0)
    {
        return a;
    }
    if (n == 1)
    {
        return b;
    }

    for (int i = 2; i < n; i++)
    {
        u = u1 + u0;
        u0 = u1;
        u1 = u;
    }
    return u;
}