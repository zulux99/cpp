#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
	srand(time(NULL));
//	int *tab2 = new int [5];
//	delete [] tab2;
//	tab2 = NULL;
	int ilosc;
	cout << "Ile liczb calkowitych wylosowac? Podaj ilosc: " ; cin >> ilosc;
	int tab[ilosc];
	cout << endl << "Wylosowane liczby to:" << endl << "|";
	for(int i = 0; i < ilosc; i++)
	{
		tab[i] = rand() % 1000;
		cout << tab[i] << "|";
	}
	cout << endl << "Liczby podzielne przez 3:" << endl << "|";
	for(int j = 0; j < ilosc; j++)
	{
		if(tab[j] % 3 == 0)
		{
		cout << tab[j] << "|";
		}
	}
	

	return 0;
}
