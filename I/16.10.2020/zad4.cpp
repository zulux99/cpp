#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "Podaj liczbe calkowita: "; int liczba; cin >> liczba;
	float silnia = 1;
	for(int i = 1; i <= liczba; i++)
		{
			silnia = silnia*i;
		}	
	cout << "Silnia z liczby "<< liczba << " wynosi: "<< silnia;
	return 0;
}

