#include<iostream>
using namespace std;
#include"fonctions.h"

/*
R : permettre `a un utilisateur de remplir un tableau de 3 r´eels en les rangeant automatiquement dans l’ordre croissant apr`es chaque saisie
E : vide
E/S : un tableau 
S : vide
*/
void Saisie_ordon(float tableau[]){
    float valeur_utilisateur;
    cout<<"Entrer une première valeur : "<<endl;
    cin>>valeur_utilisateur;
    tableau[0]=valeur_utilisateur;

    cout<<"Entrer une deuxième valeur : "<<endl;
    cin>>valeur_utilisateur;
    if (valeur_utilisateur>tableau[0]){
        tableau[1]=valeur_utilisateur;
    }
    else{
        tableau[1] = tableau[0];
        tableau[0]=valeur_utilisateur;
    }

    cout << "Entrer une troisième valeur : " << endl;
    cin >> valeur_utilisateur;
    cout<<endl;
    if (valeur_utilisateur > tableau[1])
    {
        tableau[2] = valeur_utilisateur;
    }
    else
    {
        if (valeur_utilisateur > tableau[0])
        {
            tableau[2] = tableau[1];
            tableau[1] = valeur_utilisateur;
        }
        else
        {
            tableau[2] = tableau[1];
            tableau[1] = tableau[0];
            tableau[0] = valeur_utilisateur;
        }
    }
}