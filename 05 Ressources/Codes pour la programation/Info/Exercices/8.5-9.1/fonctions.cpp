#include<iostream>
using namespace std;
#include"fonctions.h"

/*
R : calcul et renvoie le PGCD de deux nombres
E : deux entiers a et b
S : un entier, le PGCD de ces deux nombres
*/
int Pgcd(int a, int b){
    if (a<b){
        int temp = a;
        a = b;
        b = temp;
    }
    int reste = b;
    while (reste != 0){
        reste = a%b;
        a = b;
        b = reste;
    }
    return a;
}