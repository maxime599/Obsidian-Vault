#include<iostream>
using namespace std;
#include"fonctions.h"


/*
R : affiche le sapin croissant
E : un entier, le nombre de ligne
S : vide
*/
void Sappin_Croissant(int nb_lignes){
    for (int id_ligne=1; id_ligne<nb_lignes+1; id_ligne++){
        for (int id_star = 0; id_star<id_ligne; id_star++){
            cout<<'*';
        }
        cout<<endl;
    }
}


/*
R : affiche le sapin decroissant
E : un entier, le nombre de ligne
S : vide
*/
void Sappin_Decroissant(int nb_lignes){
    for (int id_ligne=nb_lignes; id_ligne>0; id_ligne--){
        for (int id_star = 0; id_star<id_ligne; id_star++){
            cout<<'*';
        }
        cout<<endl;
    }
}


/*
R : affiche le sapin entier
E : un entier, le nombre de ligne
S : vide
*/

void Sappin_Entier(int nb_lignes){
    for (int id_ligne=1; id_ligne<nb_lignes+1; id_ligne++){
        for (int id_space=nb_lignes-id_ligne; id_space>0; id_space--){
            cout<<' ';
        }

        for (int id_star = 0; id_star<id_ligne*2-1; id_star++){
            cout<<'*';
        }
        cout<<endl;
    }
    for (int id_space=0; id_space<nb_lignes-2; id_space++){
        cout<<' ';
    }
    cout<<"|_|"<<endl;
}