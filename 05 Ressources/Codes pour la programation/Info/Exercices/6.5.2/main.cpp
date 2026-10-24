#include<iostream>
using namespace std;
#include"fonctions.h"

int main(){
    char signe;
    float a, b;
    cout<<"entrer les deux nombres"<<endl;
    cin>>a>>b;

    signe = signe_produit(a, b);
    cout<<"Leur produit est de signe "<<signe<<endl;
}
