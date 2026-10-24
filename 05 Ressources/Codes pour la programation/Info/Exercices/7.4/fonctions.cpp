#include<iostream>
#include<math.h>
using namespace std;
#include"fonctions.h"



float Delta(double a, double b, double c){
    float delta;
    delta = b*b-4*a*c;
    if (abs(delta)<1e-15){
        delta = 0;
    }
    return delta;
}


char Signe_reel(float d){
    char signe;
    if (d<0){
        signe = '-';

    }
    else{
        if (d==0){
            signe = '0';
        }
        else{
            signe = '+';
        }
    }
    return signe;
}

/*
R : calcul et affiche les racines réelles d'un polynôme du second degré
E : trois réels, a b et c
S : vide
*/
double Racines(double a, double b, double d){
    double r;

    
    r = (-b+sqrt(d))/(2*a);
    
    return r;

}



