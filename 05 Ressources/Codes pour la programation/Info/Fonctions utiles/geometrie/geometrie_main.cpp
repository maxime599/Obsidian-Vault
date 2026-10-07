#include<iostream>
using namespace std;
#include"geometrie.h"

int main(){
    float rayon, h ,peri, surf, volu;

    cout<<"Ce programme vous permet de saisir le rayon d’un disque `a partir duquel, le p´erim`etre et la surface du disque sont calcul´es puis affich´es"<<endl;
    cout<<"Saisissez le rayon du disque en cm et la hauteur de votre cylindre"<<endl;
    cin>>rayon>>h;

    peri = Perimetre(rayon);
    surf = Surface(rayon);
    volu = Volume_cylindre(rayon, h);

    cout<<"Le périmetre de votre disque est "<<peri<<"cm"<<endl;
    cout<<"et sa surface est "<<surf<<"cm²"<<endl;
    cout<<"Le volume du cylindre est de "<<volu<<"cm3"<<endl;
    

}
