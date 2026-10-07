#include<iostream>
using namespace std;
#include"fonctions.h"

int main(){
    float lat, duree;
    int j;
    cout<<"Entrez le jour et la latitude"<<endl;
    cin>>j>>lat;
    duree = Di(j, lat);

    cout<<"La durée d'ensolailement est de "<<duree<<"h";
}
