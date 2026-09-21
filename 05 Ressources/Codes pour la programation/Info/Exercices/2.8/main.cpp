#include <iostream>
using namespace std;

int main()
{
    float prix_ht, taux_TVA, prix_TTC;
    int quantite;

    cout << "Entrer le prix, la quantité d'article commandé et le taux de TVA : " << endl;
    cin >> prix_ht >> quantite >> taux_TVA;

    prix_TTC = prix_ht * quantite * (taux_TVA / 100 + 1);
    cout << "Le prix TTC est : " << prix_TTC << endl;
    return 0;
}