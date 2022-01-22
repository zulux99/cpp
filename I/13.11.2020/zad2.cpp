#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int LosujZZakresu(int min, int max)
{
	return rand() % (max + 1);
}

int InicjalizujTabliceLosowo(int index, int *tablica)
{
	return tablica[index] = LosujZZakresu(0, 20);
}

int ZnajdzMinimumTablicy(int *tab)
{
	int min = tab[0];
	for(int i = 1;i < 20; i++)
	{
		if(min > tab[i])
			{
				min=tab[i];
			}
	}
	return min;	
}

int ZnajdzMaksimumTablicy(int *tab)
{
	int mai = tab[0];
	for(int i = 1; i < 20; i++)
	{
		if(mai < tab[i])
			{
				mai = tab[i];
			}
	return mai;		
	}
}
int SumaElementowTablicy(int *tab)
{
	int sum = tab[0];
		for(int i = 1; i < 20; i++)
		{
			sum = sum + tab[i];
		}
	return sum;	
}

int main(void)
{
	srand(time(NULL));
	int tab[20];
	for(int i = 0; i < 20; i++)
	{
		cout << InicjalizujTabliceLosowo(i, tab) << ", ";
	}
	cout << endl << "Minimalna wartosc: " << ZnajdzMinimumTablicy(tab) << endl;
	cout << "Maksymalna wartosc: " << ZnajdzMaksimumTablicy(tab)<< endl;
	cout << "Suma wartosci tablicy: " << SumaElementowTablicy(tab) << endl;
	return 0;
}
