#include <iostream>
using namespace std;
#include "fonction.h"

int main()
{
    float prix_unitaire, taux_TVA, prix_TTC;
    int nb_article;
    cout << "Entrer le prix unitaire, le nb d'article et la taux de tva " << endl;
    cin >> prix_unitaire >> taux_TVA >> nb_article;

    prix_TTC = calcul_tva(prix_unitaire, nb_article, taux_TVA);
    cout << "Le prix TTC est de " << prix_TTC << endl;
}