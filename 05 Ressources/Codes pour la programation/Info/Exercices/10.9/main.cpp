#include<iostream>
using namespace std;
#include"fonctions.h"

int main(){
    int taille_pratique_prenom=4;
    int taille_pratique_nom=2;


    char prenom[50] = "Omar";
    char nom[50] = "Sy";
    char nomprenom[8];
    NomPrenom(prenom, nom, taille_pratique_prenom, taille_pratique_nom, nomprenom);
    cout<<nomprenom<<endl;

}
