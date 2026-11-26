#include<iostream>
using namespace std;
#include"fonctions.h"

/*
R : g´en´erer un tableau de caract`eres contenant les 3 premi`eres lettres d’un pr´enom, suivies d’un tiret, suivi des 3 premi`eres lettres d’un nom
E : deux tableaux de caractère, le nom et le prénom, deux entiers la taille du nom et du prénom
E/S : un tableau de caractère vide sera remplit des différents caractère 
S : vide
*/
void NomPrenom(const char tab_prenom[],const char tab_nom[],int taille_prenom, int taille_nom, char output[]){
    //prénom
    int start_tirret;
    if (taille_prenom<=2){
        for (int i=0; i<taille_prenom; i++){
            output[i]=tab_prenom[i];
        }
        start_tirret=taille_prenom;
    }
    else{
        for (int i=0; i<3; i++){
            output[i]=tab_prenom[i];
        }
        start_tirret=3;
    }
    output[start_tirret]='-';

    if (taille_nom<=2){
        for (int j=0; j<taille_nom; j++){
            output[j+start_tirret+1]=tab_nom[j];
        }
        output[start_tirret+taille_nom+1]='\0';
    }
    else{
        for (int j=0; j<3; j++){
            output[j+start_tirret+1]=tab_nom[j];
        }
        output[start_tirret+3+1]='\0';
    }

}
