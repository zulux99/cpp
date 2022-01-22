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
		cout << cyfra;
		liczba /= 10;
		suma += cyfra;
	}
	return 0;
}

