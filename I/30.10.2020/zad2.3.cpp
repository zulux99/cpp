#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
	srand(time(NULL));
	int ilosc;
	cout << "Ile liczb rzeczywistych wygenerowac? Podaj ilosc: ";
	cin >> ilosc;
	float tab[ilosc];
	for(int i = 0; i < ilosc; i++)
	{
		if(i == 0)
		cout << "Wygenerowane liczby to: " << endl;
		tab[i] = rand() % 2001 - 1000;
		cout << tab[i] << "  ";
		if(tab[i] < 0)
		tab[i] = (-1) * tab[i];
	}
	cout << endl << "Zamienione liczby to: " << endl;
	for(int j = 0; j < ilosc; j++)
		cout << tab[j] << "  ";
	
	return 0;
}
