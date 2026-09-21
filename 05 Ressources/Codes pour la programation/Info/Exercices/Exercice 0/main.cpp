#include<iostream>
using namespace std;

int main(){
    unsigned int sec, h, m, s;
    cout<<"Saisir le nombre de secondes à convertir"<< endl;
    cin>>sec;
    h = sec/3600;
    m = sec % 3600;
    m = m/60;
    s = sec % 60;
    cout<<sec<<"s correpondes à "<<h<<"h"<<m<<"min"<<s<<"s"<< endl;



    system("pause");
    return 0;
}