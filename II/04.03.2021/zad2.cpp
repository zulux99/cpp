#include <iostream>
#include <cmath>
using namespace std;
double brutto(int koszty)
{
    return 0.83 * koszty;
}
double emerytalne(int koszty)
{
	return 0.081 * koszty;
}
double rentowe(int koszty)
{
	return 0.054 * koszty;
}
double wypadkowe(int koszty)
{
	return 0.0139 * koszty;
}
double fundusz_pracy(int koszty)
{
	return 0.0775 * koszty;
}
double fgsp(int koszty)
{
	return 0.0008 * koszty;
}
int main()
{
	int koszty;
	cout << "Podaj koszty pracodawcy: "; cin >> koszty;
	cout << "Brutto: " << brutto(koszty) << endl;
	cout << "Ubezpieczenie emerytalne: " << emerytalne(koszty) << endl;
	cout << "Ubezpieczenie rentowe: " << rentowe(koszty) << endl;
	cout << "Ubezpieczenie wypadkowe: " << wypadkowe(koszty) << endl;
	cout << "Fundusz Pracy: " << fundusz_pracy(koszty) << endl;
	cout << "FGSP: " << fgsp(koszty) << endl;

}
