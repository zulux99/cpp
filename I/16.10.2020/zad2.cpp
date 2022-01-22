#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Podaj liczbe: "; int liczba; cin >> liczba;
    int x = 0;
  	do
	{
	    int suma = 0;
	    while(liczba > 0)
	    {
	        int cyfra = liczba % 10;
	        cout << cyfra << endl;
	        liczba /= 10;
	        suma += cyfra;
	    }
	    cout << "Suma cyfr: " << suma << endl;
	    x = suma;
	    liczba = suma;
    }  while(x > 10);
    return 0;
}
