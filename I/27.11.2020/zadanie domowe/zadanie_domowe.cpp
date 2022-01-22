#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

int negatyw(string parametr, int iloscWierszy, int iloscKolumn, int maxWartosc, int **tab)
{
	ofstream plik;
	plik.open("negatyw.pbm");
	plik << parametr << endl << iloscKolumn << " " << iloscWierszy << endl << maxWartosc << endl;
	for(int wiersz = 0; wiersz < iloscWierszy; wiersz++)
	{
		for(int kolumna = 0; kolumna < iloscKolumn; kolumna++)
		{
			tab[wiersz][kolumna] = maxWartosc - tab[wiersz][kolumna];
			plik << tab[wiersz][kolumna] << " ";
		}
		plik << endl;
	}
	plik.close();
	return 0;
}
int progowanie(string parametr, int prog, int iloscWierszy, int iloscKolumn, int maxWartosc, int **tab)
{
	ofstream plik;
	plik.open("progowanie.pbm");
	plik << parametr << endl << iloscKolumn << " " << iloscWierszy << endl << maxWartosc << endl;
	for(int wiersz = 0; wiersz < iloscWierszy; wiersz++)
	{
		for(int kolumna = 0; kolumna < iloscKolumn; kolumna++)
		{
			int komorka = tab[wiersz][kolumna];
			if(komorka <= prog)
				komorka = 0;
			if(komorka > prog)
				komorka = maxWartosc;
			plik << komorka << " ";
		}
		plik << endl;
	}
	plik.close();
	return 0;
}
konturowanie(string parametr, int iloscWierszy, int iloscKolumn, int maxWartosc, int **tab)
{
	ofstream plik;
	plik.open("konturowanie.pbm");
	plik << parametr << endl << iloscKolumn - 1 << " " << iloscWierszy - 1 << endl << maxWartosc << endl;
	for(int wiersz = 0; wiersz < iloscWierszy - 1; wiersz++)
	{
		for(int kolumna = 0; kolumna < iloscKolumn - 1; kolumna++)
		{
			int komorka = tab[wiersz][kolumna];
			komorka = abs(int (tab[wiersz + 1][kolumna]) - komorka) + abs(int (tab[wiersz][kolumna + 1]) - komorka);
			if(komorka > maxWartosc)
				komorka = maxWartosc;
			plik << komorka << " ";
		}
		plik << endl;
	}
	plik.close();
	return 0;
}
rozmyciePoziome(string parametr, int promien, int iloscWierszy, int iloscKolumn, int maxWartosc, int **tab)
{
	ofstream plik;
	plik.open("rozmycie_poziome.pbm");
	plik << parametr << endl << iloscKolumn - 2 * promien << " " << iloscWierszy << endl << maxWartosc << endl;
	for(int wiersz = 0; wiersz < iloscWierszy; wiersz++)
	{
		for(int kolumna = promien; kolumna < iloscKolumn - promien; kolumna++)
		{
			int suma = 0;
			for(int i = kolumna - promien; i < kolumna + promien + 1; i++)
			{
				suma = suma + tab[wiersz][i];
			}
			suma = suma / (2 * promien + 1);
			plik << suma << " ";
		}
		plik << endl;
	}
	plik.close();
	return 0;
}
rozmyciePionowe(string parametr, int promien, int iloscWierszy, int iloscKolumn, int maxWartosc, int **tab)
{
	ofstream plik;
	plik.open("rozmycie_pionowe.pbm");
	plik << parametr << endl << iloscKolumn << " " << iloscWierszy - 2 * promien << endl << maxWartosc << endl;
	for(int wiersz = promien; wiersz < iloscWierszy - promien; wiersz++)
	{
		for(int kolumna = 0; kolumna < iloscKolumn; kolumna++)
		{
			int suma = 0;
			for(int i = wiersz - promien; i < wiersz + promien + 1; i++)
			{
				suma = suma + tab[i][kolumna];
			}
			suma = suma / (2 * promien + 1);
			plik << suma << " ";
		}
		plik << endl;
	}
	plik.close();
	return 0;
}
int menu(void)
{
	int opcja;
	cout << "1. Negatyw" << endl;
	cout << "2. Progowanie" << endl;
	cout << "3. Konturowanie" << endl;
	cout << "4. Rozmycie poziome" << endl;
	cout << "5. Rozmycie pionowe" << endl;
	cout << "6. Wyjdz z programu" << endl;
	cout << "Jaka operacje chcesz wykonac? Wpisz 1 - 6" << endl;
	cin >> opcja;
	return opcja;
}
int main(void)
{
	string parametr;
	int iloscWierszy, iloscKolumn, maxWartosc, ktoryPlik;
	cout << "Ktory plik chcesz modyfikowac? Wpisz 1 lub 2" << endl;
	cout << "1. Mona Lisa" << endl;
	cout << "2. FEEP" << endl;
	cin >> ktoryPlik;
	ifstream plik;
	if (ktoryPlik == 1)
		plik.open("mona_lisa.pbm");
	if (ktoryPlik == 2)
		plik.open("feep.pbm");
	if(ktoryPlik != 1 && ktoryPlik != 2)
	{
		cout << "Nie ma takiego pliku" << endl;
		return -1;
	}
	if(!plik.good())
	{
		return -1;
	}
	plik >> parametr >> iloscKolumn >> iloscWierszy >> maxWartosc;
	int** tablica = new int*[iloscWierszy];
	for(int i = 0; i < iloscWierszy; i++)
      	tablica[i] = new int[iloscKolumn];
    for(int wiersz = 0; wiersz < iloscWierszy; wiersz++)
	{
		for(int kolumna = 0; kolumna < iloscKolumn; kolumna++)
		{
			plik >> tablica[wiersz][kolumna];
//			cout << tablica[wiersz][kolumna] << " ";
		}
//		cout << endl;
	}
	plik.close();
	int opcja = menu();
	while(opcja >= 1 && opcja <= 5)
	{
		switch(opcja)
		{
			case 1:
				negatyw(parametr, iloscWierszy, iloscKolumn, maxWartosc, tablica);
				cout << "Przeprowadzono operacje negatyw" << endl;
				break;
			case 2:
				int prog;
				cout << "Podaj prog (0 - " << maxWartosc << ")" << endl;
				cin >> prog;
				if(prog > maxWartosc || prog < 0)
					cout << "Niepoprawna wartosc" << endl;
				else
				{
					progowanie(parametr, prog, iloscWierszy, iloscKolumn, maxWartosc, tablica);
					cout << "Przeprowadzono operacje progowania" << endl;	
				}
				break;
			case 3:
				konturowanie(parametr, iloscWierszy, iloscKolumn, maxWartosc, tablica);
				cout << "Przeprowadzono operacje konturowania" << endl;
				break;
			case 4:
				int promien;
				cout << "Podaj promien (1 - " << iloscKolumn/2 <<")" << endl;
				cin >> promien;
				if(promien < 1 || promien > iloscKolumn/2)
					cout << "Niepoprawna wartosc" << endl;
				else
				{
					rozmyciePoziome(parametr, promien, iloscWierszy, iloscKolumn, maxWartosc, tablica);
					cout << "Przeprowadzono operacje rozmycia poziomego" << endl;
				}
				break;
			case 5:
				promien = 0;
				cout << "Podaj promien (1 - " << iloscWierszy/2 <<")" << endl;
				cin >> promien;
				if(promien < 1 || promien > iloscWierszy/2)
					cout << "Niepoprawna wartosc" << endl;
				else
				{
					rozmyciePionowe(parametr, promien, iloscWierszy, iloscKolumn, maxWartosc, tablica);
					cout << "Przeprowadzono operacje rozmycia pionowego" << endl;
				}
				break;
		}
		opcja = menu();
	}
	cout << "Koncze program";
	delete [] tablica;
	tablica = NULL;
	return 0;
}
