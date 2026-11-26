#include<iostream>
using namespace std;
#include"fonctions.h"

/*
R : copier les ´elements d’un tableau d’entiers dans un autre.
E : Un tableau d'entier rempli, un entier la taille
E/S : Un tableau d'entier vide
S : vide
*/
void Copie_tab_entier(const int tableau1[], int tableau2[], int taille){
    for (int indice=0; indice<taille; indice++){
        tableau2[indice] = tableau1[indice];
    }
}


/*
R : afficher les ´el´ements d’un tableau d’entiers sous la forme: {e1,e2,e3,...,en}
E : un tableau d'entiers, un entier la taille
E/S : vide
S : vide
*/
void Afficher_Tableau(const int tableau[], int taille){
    cout<<"{";
    for (int indice=0; indice<taille-1; indice++){
        cout<<tableau[indice]<<",";
    }
    cout<<tableau[taille-1]<<"}"<<endl;
}



/*
R : compare deux tableau et renvoie true si ils sont egaux
E : deux tableau d'entiers, un entier la taille
E/S : vide
S : vide
*/
bool Comparer_Tableau(const int tableau1[],const int tableau2[],int taille){
    for (int indice=0; indice<taille; indice++){
        if (tableau1[indice] != tableau2[indice]){
            return false;
        }
    }
    return true;
}



/*
R : calculer la moyenne des ´el´ements d’un tableau de réels
E : un tableau d'entiers, un entier la taille
E/S : vide
S : un réel, la moyenne
*/
float Moyenne_Tableau(const int tableau[], int taille){
    int somme =0;
    for (int indice=0; indice<taille; indice++){
        somme == somme + tableau[indice];
    }
    return (float)somme/taille;
}


/*
R : remplacer les valeurs d’un tableau par sa somme cumul´e
E : un tableau d'entiers, un entier la taille
E/S : vide
S : vide
*/
void Replace_Sum(int tableau[], int taille)
{
    for (int indice = 0; indice < taille; indice++)
    {
        int somme = 0;
        for (int indice_somme = 0; indice_somme < indice+1; indice_somme++)
        {
            somme += tableau[indice_somme];
        }
        tableau[indice]=somme;
        
    }
}