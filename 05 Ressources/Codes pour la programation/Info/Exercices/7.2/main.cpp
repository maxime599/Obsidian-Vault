#include<iostream>
using namespace std;
#include"fonctions.h"

int main(){
    float a, b, result;
    char opp;
    cout<<"Entrer le premier nombre, l'oppération et le segond nombre"<<endl;
    cin>>a>>opp>>b;
    result = calculatrice(a, b, opp);
    cout<<a<<opp<<b<<" = "<<result;

}
