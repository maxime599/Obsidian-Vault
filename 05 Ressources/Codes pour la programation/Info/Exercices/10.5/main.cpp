#include<iostream>
using namespace std;
#include"fonctions.h"

int main(){
    const int taille = 10;
    int tableau[taille] = {0,1,2,3,4,5,6,7,8,9};
    int tableau_vide[taille];

    Copie_tab_entier(tableau, tableau_vide, taille);
    Afficher_Tableau(tableau, taille);
    Afficher_Tableau(tableau_vide, taille);

    if (Comparer_Tableau(tableau, tableau_vide, taille)){
        cout<<"Les tableaux sont egaux"<<endl;
    }
    else{
        cout<<"Les tableaux sont différents"<<endl;
    }

    float moyenne;
    moyenne = Moyenne_Tableau(tableau, taille);
    cout<<"La moyenne est de : "<<moyenne<<endl;

    Replace_Sum(tableau, taille);
    Afficher_Tableau(tableau, taille);
    
}
