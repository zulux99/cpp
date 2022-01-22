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
	cout << "Ile liczb rzeczywistych wygenerowac? Podaj ilosc: " << endl;
	cin >> ilosc;
	float tab[ilosc];
	for(int i = 0; i < ilosc; i++)
	{
		if(i == 0)
		cout << "Wygenerowane liczby to: " << endl;
		tab[i] = rand() % 2001 - 1000;
		cout << tab[i] << "  ";
	}
	cout << endl << "Liczby ktorych indeks jest kwadratem liczby calkowitej:" << endl;
	for(int j = 1; j < sqrt(ilosc); j++)
	{
		a = pow(j,2);
		cout << "|" << tab[a] << "|";
	}
	return 0;
}
