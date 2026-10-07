#include <iostream>
#include "fonctions.h"
using namespace std;

int main()
{
    float x_in, r;
    cout << "Entrer x: ";
    cin >> x_in;
    r = D_atan(x_in);
    cout << "D_atan(" << x_in << ")=" << r;

    return 0;
}
