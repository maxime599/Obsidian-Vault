#include<iostream>
using namespace std;
#include"fonctions.h"
#include<limits>
/*
R : calcul en en fonction de l'opératation le résulat de l'opération de ces deux nombres
E : 2 réel : les deux nombres, 1 caractère : l'opération
S : un réel : le résultat de l'opération
*/
float calculatrice(float a, float b, char opp){
    const int INF = std::numeric_limits<double>::infinity();

    float result;
    switch (opp){
    case '+':
        result = a+b;
        break;
    case '-':
        result = a-b;
        break;
    case '/':
        if (b == 0){
            result = INF;
        }
        else{
        result = a/b;
        }
        break;  
    case '*':
        result = a*b;
        break;


    default:
        break;
    }
    return result;
}