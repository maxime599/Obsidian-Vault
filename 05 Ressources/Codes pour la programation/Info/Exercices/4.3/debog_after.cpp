#include <iostream>

using namespace std;

int main()
{
	int a, b;
	float c;
	cout << "Entrer deux entiers:\n" << endl;
	cin >> a >> b;
	cout << "Vous avez entré les valeurs " << a << " et b" << endl;
	c = a + b;
	cout << "Leur somme est: " << c << endl;
	c = a * b;
	cout << "Leur produit est: " << c << endl;
	c = (float)(a) / b;
	cout << "La valeur approchée de " << a << "/" << b << " est :" << c << endl;
	return 0;
}
