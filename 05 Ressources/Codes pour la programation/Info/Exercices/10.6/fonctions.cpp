#include<iostream>
using namespace std;
#include"fonctions.h"
#include<iomanip>
/*
R : permuter deux lignes dans le tableau en supposant que c'est possible
E/S un tableau de tableaux d'entiers
E : 3 entiers, les deux indices de lignes à permuter et la taille de la ligne
S : vide
*/
void Permute_2_Lignes(int matrice[][6], int taille_ligne, int indice_ligne1, int indice_ligne2){
    int temp;
    for (int indice = 0; indice < taille_ligne; indice++){
        temp = matrice[indice_ligne1][indice];
        matrice[indice_ligne1][indice] = matrice[indice_ligne2][indice];
        matrice[indice_ligne2][indice] = temp;
    }
}


/*
R : permuter deux colonne dans une matrice en supposant que c'est possible
E/S un tableau de tableaux d'entiers
E : 3 entiers, les deux indices de colonnes à permuter et la taille de la colonnes
S : vide
*/
void Permute_2_Colonnes(int matrice[][6], int taille_colonne, int indice_colonne1, int indice_colonne2){
    int temp;
    for (int indice = 0; indice < taille_colonne; indice++){
        temp = matrice[indice][indice_colonne1];
        matrice[indice][indice_colonne1] = matrice[indice][indice_colonne2];
        matrice[indice][indice_colonne2] = temp;
    }
}



/*
R : permettant d’afficher les ´el´ements d’un tableau `a deux dimensions d'entiers
E : un talbeau de tableaux d'entiers, deux entiers le nb de lignes et de colonnes
S : vide
E/S : vide
*/
void Affiche_Matrice(int matrice[0][6], int nb_lignes, int nb_colonnes){
    for (int indice_ligne=0; indice_ligne<nb_lignes; indice_ligne++){
        cout<<"|";
        for (int indice_colonne=0; indice_colonne<nb_colonnes; indice_colonne++){
            cout<< setw(4)<< setfill(' ')<<matrice[indice_ligne][indice_colonne];
        }
        cout<<'|'<<endl;
    }
}