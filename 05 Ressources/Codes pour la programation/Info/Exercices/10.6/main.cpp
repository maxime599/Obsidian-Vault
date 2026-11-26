#include<iostream>
using namespace std;
#include"fonctions.h"

int main(){
    const unsigned int nb_colonne = 6;
    const unsigned int nb_ligne = 4;

    int matrice[nb_ligne][nb_colonne] ={
        {2,3,5,7,11,13},
        {17,19,23,29,31,37},
        {41,43,47,53,59,61},
        {67,71,73,79,83,89}};

    Permute_2_Lignes(matrice, nb_colonne, 0, 2);
    Permute_2_Colonnes(matrice, nb_ligne, 1, 4);
    Affiche_Matrice(matrice, nb_ligne, nb_colonne);

}

