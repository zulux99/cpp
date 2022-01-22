#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
	srand(time(NULL));
	int ilosc;
	cout << "Ile liczb calkowitych wylosowac? Podaj ilosc: " ; cin >> ilosc;
	int tab[ilosc];
	cout << endl << "Wylosowane liczby to:" << endl << "|";
	int suma;
	int *tab2 = new int;
	int liczba;
	int cyfra;
	int a = 0;
	for(int i = 0; i < ilosc; i++)
	{
		tab[i] = rand() % 101;
		cout << tab[i] << "|";
		liczba = tab[i];
		while(liczba > 0)
		{
			cyfra = liczba % 10;
			liczba /= 10;
			suma += cyfra;
		}
		if(suma == 1)
		{
			tab2[a] = tab[i];
			a++;
		}
		suma = 0;
	}
	cout << endl << "Liczby, ktorych suma wynosi 1: " << "|";
	for(int z = 0; z < a; z++)
	{
		cout << tab2[z] << "|";
	}
	delete [] tab2;
	tab2 = NULL;
	return 0;
}
