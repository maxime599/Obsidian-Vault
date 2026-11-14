#include<iostream>
using namespace std;
#include"fonctions.h"

int main(){
    int a, b, n, fib;
    cout<<"Entrer a, b et n"<<endl;
    cin>>a>>b>>n;
    fib = Fibonacci(a, b, n);
    cout<<"Le terme d'indice "<<n<<" est "<<fib<<endl;
}
