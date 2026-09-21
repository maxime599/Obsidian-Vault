#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const float G = 6.67384e-11;
    float Ma, Mb, distance, force;

    cout << "Entrer la masse des deux corps (kg) et la force exercée (N)" << endl;
    cin >> Ma >> Mb >> force;

    distance = sqrt(G * Ma * Mb / force);

    cout << "La distance entre les deux corps est de : " << distance << " m" << endl;
    // La distance entre les deux corps est de : 3.87531e+08 m
    return 0;
}