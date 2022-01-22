#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
//	ifstream - strumieñ wejscia
//	ofstream - struemieñ wyjœcia
//	fstream - we/wy

	int iloscKolumn, iloscWierszy;
	ifstream dane;
	dane.open("plik.txt");
	
	if(!dane.good())
	{
		return -1;
	}

	
	dane >> iloscKolumn >> iloscWierszy;
	int** tablica = new int*[iloscWierszy];
	for(int i = 0; i < iloscWierszy; ++i)
    	tablica[i] = new int[iloscKolumn];
	cout << "Liczba wierszy: " << iloscWierszy << endl;
	cout << "Liczba kolumn: " << iloscKolumn << endl;
	for(int wiersz = 0; wiersz < iloscWierszy; wiersz++)
	{
		for(int kolumna = 0; kolumna < iloscKolumn; kolumna++)
		{
			dane >> tablica[wiersz][kolumna];
			cout << tablica[wiersz][kolumna] << " ";
		}
		cout << endl;
	}
	dane.close();
	delete [] tablica;
	tablica = NULL;
	return 0;
}
