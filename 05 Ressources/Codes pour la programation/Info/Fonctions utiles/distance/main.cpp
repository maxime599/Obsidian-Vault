#include<iostream>
using namespace std;
#include"fonctions.h"

int main(){
    float rayon, distance;
    int nb_tours;
    cout<<"Entrez le rayon de votre vélo en m et le nombre de tours"<<endl;
    cin>>rayon>>nb_tours;

    distance = Distance_velo(nb_tours, rayon);

    cout<<"Vous avez parcouru "<<distance<<" m"<<endl;


}
