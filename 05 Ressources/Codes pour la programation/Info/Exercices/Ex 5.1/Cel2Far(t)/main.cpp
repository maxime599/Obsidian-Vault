#include <iostream>
using namespace std;
#include "fonctions.h"

int main()
{
    float cel, far;
    cout << "Température en °C: ";
    cin >> cel;
    far = Cel2Far(cel);
    cout << "correspond à " << far << "°F";
    return 0;
}