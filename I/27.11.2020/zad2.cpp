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
			cout << tablica[wiersz][kolumna]+1 << " ";
}
		cout << endl;
	}
	dane.close();
	ofstream dane2;
	dane2.open("plik_nowy.txt");
	for(int wiersz = 0; wiersz < iloscWierszy; wiersz++)
	{
		for(int kolumna = 0; kolumna < iloscKolumn; kolumna++)
		{
			tablica[wiersz][kolumna]++;
			dane2 << tablica[wiersz][kolumna] << " ";
		}
		dane2 << endl;
	}
	dane2.close();
	delete [] tablica;
	tablica = NULL;
	return 0;
}
