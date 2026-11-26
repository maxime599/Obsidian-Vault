#include<iostream>
using namespace std;
#include"fonctions.h"

void Moyenne(float tableau[]){
    float somme = 0;
    for (int indice = 0; indice<5; indice++){
        somme+=tableau[indice];
    }
    tableau[4]=somme/5;
}

void Moyenne_carre(float tableau[]){
    float somme = 0;
    for (int indice = 0; indice<5; indice++){
        somme+=tableau[indice]*tableau[indice];
    }
    tableau[5]=somme/5;
}

void Diff(float tableau[]){
    tableau[6] = tableau[5]-tableau[4]*tableau[4];
    cout<<"Moyenne : "<<tableau[4]<<"\t Moyenne des carrés : "<<tableau[5]<<"\t Variance : "<<tableau[6]; 
}