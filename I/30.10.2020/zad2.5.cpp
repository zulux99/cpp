#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
	srand(time(NULL));
	int ilosc;
	int a;
	int ile_razy = 0;
	cout << "Ile liczb rzeczywistych wygenerowac? Podaj ilosc: " << endl;
	cin >> ilosc;
	float tab[ilosc];
	for(int i = 0; i < ilosc; i++)
	{
		if(i == 0)
		cout << "Wygenerowane liczby to: " << endl;
		tab[i] = rand() % 101;
		cout << tab[i] << "  ";
		if(a < tab[i])
			a = tab[i];
	}
	for(int j = 0; j < ilosc; j++)
	{
		if(a == tab[j])
			ile_razy++;
	}
	cout << endl << "Najwieksza liczba to:" << endl;
	cout << a << endl;
	cout << "Wystapila " << ile_razy << " raz/y";
	return 0;
}
