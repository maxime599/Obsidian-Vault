#include<iostream>
using namespace std;
#include<iomanip>
#include"fonctions.h"


/*
R : &ffiche la table de pythagore de la multiplication
E : 2 entiers : le nombre de ligne et de colonnes, l'espace entre les nombres
S : vide
*/
void Affiche_Table_Pythagore(int taille_table, int espace){
    for (int j = 0; j<espace; j++){
        cout<<' ';
    }

    for (int i = 1; i<taille_table+1; i++){
        cout <<setw(espace)<<setfill(' ') << i;
    }
    cout<<endl;

    for (int n_ligne = 1; n_ligne<taille_table+1; n_ligne++){
        cout <<setw(espace)<<setfill(' ') << n_ligne;
        for (int mult = 1; mult<taille_table+1; mult++){
            cout <<setw(espace)<<setfill(' ') << n_ligne*mult;
        }
        cout<<endl;
    }

}

