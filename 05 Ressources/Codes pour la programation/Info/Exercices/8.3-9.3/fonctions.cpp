#include<iostream>
using namespace std;
#include"fonctions.h"

/*
R calcul renvoie une approximation `a l’ordre n de la racine carr´ee d’un nombre r´eel positif par l’algorithme de Newton.
E : un réel, ,la nombre à mettre à la racine carré, un entier l'ordre de l'approximation
S : un réel, la racine carré
*/
double Racine_newton(double a, int n){
    double u=1;
    for (int i=0; i< n; i++){
        u = (u+(a/u))/2;
    }
    return u;
}
