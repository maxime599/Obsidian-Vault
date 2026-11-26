#include<iostream>
using namespace std;
#include"fonctions.h"

int main(){
    float tableau[3];
    Saisie_ordon(tableau);
    for (int indice = 0; indice<3; indice++){
        cout<<tableau[indice]<<"  "<<endl;
    }
}
