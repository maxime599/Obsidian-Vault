#include<iostream>
using namespace std;
#include"fonctions.h"

/*
R :  permettant `a un utilisateur de saisir deux nombres et qui lui affiche le signe de leur produit sans calculer le produit
E : deux réel, les deux nombres
S : un caractère, le signe (P ou N)
*/
char signe_produit(float a, float b){
    char signe;
    if ((a<0 || b<0) && !(a<0 and b<0)){
        signe = 'N';
    }
    else{
        signe = 'P';
    }
    return signe;
}
