#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Podaj liczbe: "; int liczba; cin >> liczba;
	int suma = 0;
	while(liczba > 0)
	{
		int cyfra = liczba % 10;
		cout << cyfra << endl;
		liczba /= 10;
		suma += cyfra;
	}
	cout << "Suma cyfr: " << suma;
	return 0;
}

