#include<iostream>
using namespace std;
#include"geometrie.h"

int main(){
    int rayon ,peri, surf;

    cout<<"Ce programme vous permet de saisir le rayon d’un disque `a partir duquel, le p´erim`etre et la surface du disque sont calcul´es puis affich´es"<<endl;
    cout<<"Saisissez le rayon du disque en cm"<<endl;
    cin>>rayon;

    peri = Perimetre(rayon);
    surf = Surface(rayon);

    cout<<"Le périmetre de votre disque est "<<peri<<"cm"<<endl;
    cout<<"et sa surface est "<<surf<<"cm²"<<endl;

}
