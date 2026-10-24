#include<iostream>
using namespace std;
#include"fonctions.h"

int main(){
    float taille_g, taille_pere, taille_mere;
    char sexe;
    cout<<"Donner la taille de votre père (en m), la taille de votre  mère (en m) et votre sexe ('M' ou 'S')"<<endl;
    cin>>taille_pere>>taille_mere>>sexe;
    taille_g = taille_genetique(taille_pere, taille_mere, sexe);

    cout<<"Votre taille génétique est de "<<taille_g<<"m"<<endl;
}
