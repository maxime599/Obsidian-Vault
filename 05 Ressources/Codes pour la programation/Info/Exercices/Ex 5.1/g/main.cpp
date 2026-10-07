#include <iostream>
using namespace std;
#include "fonctions.h"

int main()
{
    int x_in, y_in, r;
    cout << "Entrer x puis y: ";
    cin >> x_in >> y_in;
    r = g(x_in, y_in);
    cout << "g(" << x_in << "," << y_in << ")=" << r;
    return 0;
}