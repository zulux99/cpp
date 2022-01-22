#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void)
{
	vector <int> dane;
	srand (time(NULL));
	int liczba, min, max, suma;
	double srednia;
	srednia = 0;
	min = 200;
	max = 0;
	cout << "Ile liczb wylosowac?" << endl;
	cin >> liczba;
	cout << "Wylosowane liczby to: " << endl;
	for(int i = 0; i < liczba; i++)
	{
		dane.push_back(rand() % 101);
		cout << dane[i] << " ";
		if(min > dane[i])
			min = dane[i];
		if(max < dane[i])
			max = dane[i];
		suma = suma + dane[i];
	}
	srednia = suma / dane.size();
	cout << endl << "Minimalna liczba to: " << min << endl;
	cout << "Maksymalna liczba to: " << max << endl;
	cout << "Srednia to: " << srednia << endl;
	
	return 0;
}
