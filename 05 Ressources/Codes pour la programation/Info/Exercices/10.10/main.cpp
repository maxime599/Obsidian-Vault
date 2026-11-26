#include<iostream>
using namespace std;
#include"fonctions.h"

int main(){
    char chaine[30]="salut je m'appel maxime bruel";
    
    int longueur, voyelle, mots;
    longueur=Longueur_Chaine(chaine);
    voyelle=Voyelles(chaine);
    mots = Mots(chaine);

    cout<<"La chaine de caractère a une longueur de "<<longueur<<", elle a "<<voyelle<<" voyelle(s) et "<<mots<<" mot(s)"<<endl;




}
