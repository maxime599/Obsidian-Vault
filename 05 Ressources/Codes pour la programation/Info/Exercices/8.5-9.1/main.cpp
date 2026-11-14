#include<iostream>
using namespace std;
#include"fonctions.h"

int main(){
    int a, b, pgcd;
    
    cout<<"Entrer deux nombre pour calculer leur PGDC"<<endl;
    cin>>a>>b;
    pgcd = Pgcd(a, b);
    cout<<"Le PGCD de ces deux nombres est : "<<pgcd<<endl;


}
