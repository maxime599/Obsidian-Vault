#include<iostream>
using namespace std;
#include"fonctions.h"

int main(){
    float rayon, volume;
    cout<<"Entrer le rayon de la sphère"<<endl;
    cin>>rayon;
    volume=volume_sphere(rayon);
    cout<<"La sphère de rayon "<<rayon<<" a un volume de "<<volume<<endl;
}


