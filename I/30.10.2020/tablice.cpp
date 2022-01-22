#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
	srand(time(NULL));
	int tab[10];
	for(int i = 0; i < 10; i++)
	{
		tab[i] = rand() % 101;
		cout << tab[i] << "  ";
	}
	cout << endl;
	int odp;
	cout << "Jak posortowac?" << endl << "1. Rosnaco" << endl << "2. Malejaco" << endl;
	cout << "Odpowiedz: "; cin >> odp;
	
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			if(odp == 1)
			{
				if(tab[j] > tab[j + 1])
				{
					int a = tab[j];
					tab[j] = tab[j + 1];
					tab[j + 1] = a;
				}
			}
			if(odp == 2)
			{
				if(tab[j] < tab[j + 1])
				{
					int a = tab[j];
					tab[j] = tab[j + 1];
					tab[j + 1] = a;
				}
			}
		}
	}
	for(int i = 0; i < 10; i++)
	{
		cout << tab[i] << "  ";
	}
	return 0;
}
