#include<iostream>
using namespace std;
#include"fonctions.h"

/*
R : affiche les trois nombres passé dans l'ordre croissant
E : 3 réel, les trois nombres
S : vide
*/
void trie_3_nb(float a,float b,float c){
    float plus_grand, plus_petit, milieu;
    if (a>b && a>c){
        plus_grand = a;
        if (b>c){
            plus_petit = c;
            milieu = b;
        }
        else{
            plus_petit = b;
            milieu = c;
        }
    }
    if (b>a && b>c){
        plus_grand = b;
        if (a>c){
            plus_petit = c;
            milieu = a;
        }
        else{
            plus_petit = a;
            milieu = c;
        }
    }
    else{
        plus_grand = c;
        if (a>b){
            plus_petit = b;
            milieu = a;
        }
        else{
            plus_petit = a;
            milieu = b;
        }
    }

    cout<<plus_grand<<" "<<milieu<<" "<<plus_petit<<endl;
}
