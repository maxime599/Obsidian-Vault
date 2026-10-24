#include<iostream>
using namespace std;
#include"fonctions.h"

int main(){
    double a, b, c, r1, r2, d;
    char signe;
    cout<<"Entrer  les trois coefficients a b et c :"<<endl;
    cin>>a>>b>>c;
    
    d = Delta(a, b, c);
    signe = Signe_reel(d);
    switch (signe){
        case '+' : r1 = Racines(a, b, d);
            r2 = -b/a-r1;
            cout<<"Les deux racines sont "<<r1<<" et "<<r2<<endl;
            break;
        case '-' : 
            cout<<"pas de racines réel"<<endl;
            break;
        default : r1 = Racines(a, b, d);
            cout<<"La racine double est "<<r1<<endl;
    }
}



/*
a : delta = 0, x = -1, renvoyé : -1 et -1
b : delta = 0, x = -10, renvoyé : -9.99695 et -10.0031
c : delta = 0, x = -9.5238, renvoyé : erreur car le delta n'a pas pris une valeur nule

4 : oui pour le b, non pour le c

*/
