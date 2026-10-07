#include<iostream>
using namespace std;
#include"fonctions.h"

int main(){
    float taille, distance;
    cout<<"Entrez votre taille en m"<<endl;
    cin>>taille;
    distance = Distance_vision(taille);

    cout<<"Vous pouvez voir à "<<distance<<endl;
}
