#include <iostream>
#include <cmath>
using namespace std;
double emerytalne(int brutto)
{
	return 0.0976 * brutto;
}
double rentowe(int brutto)
{
	return 0.015 * brutto;
}
double chorobowe(int brutto)
{
	return 0.0245 * brutto;
}
double zdrowotne(int brutto)
{
	return 0.0775 * brutto;
}
double pit(int brutto)
{
	return 0.051 * brutto;
}

int main()
{
	int brutto;
	cout << "Podaj kwote brutto: "; cin >> brutto;
	cout << "Kwota netto: ";
	cout << brutto - emerytalne(brutto) - rentowe(brutto) - chorobowe(brutto) -
	zdrowotne(brutto) - pit(brutto);
}
