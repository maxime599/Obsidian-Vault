#include<iostream>
using namespace std;
#include"fonctions.h"


/*
R : compter et renvoie le nombre de caractères d'une chaine passé en paramètre
E : un tableau de cararctère
S : un entier, le nombre de caractères
*/
int Longueur_Chaine(char chaine[]){
    int indice=0;
    while (chaine[indice]!='\0'){
        indice++;
    }
    return indice;
}


int Voyelles(char chaine[]){
    int indice=0, compteur = 0;
    while (chaine[indice]!='\0'){
        indice++;
        switch (chaine[indice])
        {
        case 'a':
            compteur++;
            break;
        case 'e':
            compteur++;
            break;
        case 'i':
            compteur++;
            break;
        case 'o':
            compteur++;
            break;
        case 'u':
            compteur++;
            break;
        case 'y':
            compteur++;
            break;
        
        default:
            break;
        }
    }
    return compteur;
}

int Mots(char chaine[])
{
    int indice = 0, compteur = 0;
    while (chaine[indice] != '\0')
    {
        indice++;
        if (chaine[indice] == ' ')
        {
            compteur++;
        }
        
    }
    return compteur + 1;
}
