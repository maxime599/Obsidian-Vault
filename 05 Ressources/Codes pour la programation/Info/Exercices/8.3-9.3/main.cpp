#include<iostream>
using namespace std;
#include<math.h>
#include"fonctions.h"

int main(){
    long double x;
    x=2;
    for (int i=0; i<20; i++){
        cout.precision(16);
        cout<<"Racine de"<<x<<"~"<<Racine_newton(x, i);
        cout<<"\t valeur attendu : "<<sqrt(x)<<endl;
    }
    
}
