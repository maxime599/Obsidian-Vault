#include<iostream>
using namespace std;
#include"fonctions.h"

int main(){
    int annee;
    cout<<"Entrer une année"<<endl;
    cin>>annee;
    
    if (Bissextile(annee)){
        cout<<"Votre année est bissextile"<<endl;
    }else{
        cout<<"Votre année n'est pas bissextile"<<endl;
    }


    if (Bissextile2(annee)){
        cout<<"Votre année est bissextile"<<endl;
    }else{
        cout<<"Votre année n'est pas bissextile"<<endl;
    }
}
