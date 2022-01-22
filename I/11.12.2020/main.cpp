#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

struct dane_osobowe
{
	string imie;
	string nazwisko;
	long int nr_telefonu;
	unsigned int wiek;
	unsigned int waga;
	unsigned int wzrost;
	bool plec;
};
int main(void)
{
	dane_osobowe tablica_danych[10];
	
	int wybor = 1;
	while(wybor <= 6 && wybor >= 1)
	{
		ifstream dane;
		int iloscOsob;
		dane.open("plik.txt");
		if(!dane.good())
		{
			return -1;
		}
		dane >> iloscOsob;
		for(int i = 0; i < iloscOsob; i++)
		{
			dane >> tablica_danych[i].imie;
			dane >> tablica_danych[i].nazwisko;
			dane >> tablica_danych[i].nr_telefonu;
			dane >> tablica_danych[i].wiek;
			dane >> tablica_danych[i].waga;
			dane >> tablica_danych[i].wzrost;
			dane >>	tablica_danych[i].plec;
		}
		dane.close();
		cout << "Menu:" << endl;
		cout << "1. Wyswietl dane" << endl;
		cout << "2. Ilosc pacjentow w bazie" << endl;
		cout << "3. Dodaj nowego" << endl;
		cout << "4. Usun z bazy" << endl;
		cout << "5. Modyfikuj" << endl;
		cout << "6. Wyszukaj" << endl;
		cout << "9. Zakoncz program" << endl;
		cin >> wybor;
		switch (wybor)
		{
			case 1:
				cout << "Oto lista pacjentow: " << endl;
				for(int i = 0; i < iloscOsob; i++)
				{
					cout << tablica_danych[i].imie << " ";
					cout << tablica_danych[i].nazwisko << " ";
					cout << tablica_danych[i].nr_telefonu << " ";
					cout << tablica_danych[i].wiek << " ";
					cout << tablica_danych[i].waga << " ";
					cout << tablica_danych[i].wzrost << " ";
					cout << tablica_danych[i].plec << " ";
					cout << endl;
				}
				break;
			case 2:
				cout << "Liczba pacjentow w bazie: " << iloscOsob << endl;
				break;
			case 3:
			{
				cout << "Dodawanie pacjenta" << endl;
				cout << "Podaj imie: ";
				cin >> tablica_danych[iloscOsob].imie;
				cout << "Podaj nazwisko: ";
				cin >> tablica_danych[iloscOsob].nazwisko;
				cout << "Podaj nr telefonu: ";
				cin >> tablica_danych[iloscOsob].nr_telefonu;
				cout << "Podaj wiek: ";
				cin >> tablica_danych[iloscOsob].wiek;
				cout << "Podaj wage: ";
				cin >> tablica_danych[iloscOsob].waga;
				cout << "Podaj wzrost: ";
				cin >> tablica_danych[iloscOsob].wzrost;
				cout << "Podaj plec" << endl;
				cout << "0 - mezczyzna" << endl;
				cout << "1 - kobieta" << endl;
				cin >> tablica_danych[iloscOsob].plec;
					cout << tablica_danych[iloscOsob].imie << " ";
					cout << tablica_danych[iloscOsob].nazwisko << " ";
					cout << tablica_danych[iloscOsob].nr_telefonu << " ";
					cout << tablica_danych[iloscOsob].wiek << " ";
					cout << tablica_danych[iloscOsob].waga << " ";
					cout << tablica_danych[iloscOsob].wzrost << " ";
					cout << tablica_danych[iloscOsob].plec << " ";
				ofstream plik;
				plik.open("plik.txt");
				plik << iloscOsob + 1 << endl;
				for(int i = 0; i < iloscOsob + 1; i++)
				{
					plik << tablica_danych[i].imie << " ";
					plik << tablica_danych[i].nazwisko << " ";
					plik << tablica_danych[i].nr_telefonu << " ";
					plik << tablica_danych[i].wiek << " ";
					plik << tablica_danych[i].waga << " ";
					plik << tablica_danych[i].wzrost << " ";
					plik <<	tablica_danych[i].plec << " ";
					plik << endl;
				}
				plik.close();
				cout << endl << "Podales powyzsze dane, dodano pacjenta" << endl;
				break;
			}
			case 4:
			{
				string imieUsun, nazwiskoUsun;
				cout << "Kogo chcesz usunac z bazy?" << endl;
				cout << "Podaj imie: "; cin >> imieUsun;
				cout << "Podaj nazwisko: "; cin >> nazwiskoUsun;
				for(int i = 0; i < iloscOsob; i++)
				{
					if(tablica_danych[i].imie == imieUsun && tablica_danych[i].nazwisko == nazwiskoUsun)
					{
						tablica_danych[i] = tablica_danych[iloscOsob - 1];
						ofstream plik;
						plik.open("plik.txt");
						plik << iloscOsob - 1 << endl;
						for(int i = 0; i < iloscOsob - 1; i++)
						{
							plik << tablica_danych[i].imie << " ";
							plik << tablica_danych[i].nazwisko << " ";
							plik << tablica_danych[i].nr_telefonu << " ";
							plik << tablica_danych[i].wiek << " ";
							plik << tablica_danych[i].waga << " ";
							plik << tablica_danych[i].wzrost << " ";
							plik <<	tablica_danych[i].plec << " ";
							plik << endl;
						}
						plik.close();
					}
				}
				break;
			}
			case 5:
			{
				string imieModyfikuj, nazwiskoModyfikuj;
				int modyfikacja;
				cout << "Ktorego pacjenta zmodyfikowac?" << endl;
				cout << "Podaj imie: "; cin >> imieModyfikuj;
				cout << "Podaj nazwisko: "; cin >> nazwiskoModyfikuj;
				for(int i = 0; i < iloscOsob; i++)
				{
					if(tablica_danych[i].imie == imieModyfikuj && tablica_danych[i].nazwisko == nazwiskoModyfikuj)
					{
						int czyZmienicCosJeszcze = 1;
						while(czyZmienicCosJeszcze == 1)
						{
							cout << tablica_danych[i].imie << " ";
							cout << tablica_danych[i].nazwisko << " ";
							cout << tablica_danych[i].nr_telefonu << " ";
							cout << tablica_danych[i].wiek << " ";
							cout << tablica_danych[i].waga << " ";
							cout << tablica_danych[i].wzrost << " ";
							cout << tablica_danych[i].plec << " " << endl;
							cout << "Znaleziono powyzsze pasujace rekordy" << endl;
							cout << "Co chcesz zmienic?" << endl;
							cout << "1. Imie" << endl;
							cout << "2. Nazwisko" << endl;
							cout << "3. Numer telefonu" << endl;
							cout << "4. Wiek" << endl;
							cout << "5. Waga" << endl;
							cout << "6. Wzrost" << endl;
							cout << "7. Plec" << endl;
							cin >> modyfikacja;
							switch(modyfikacja)
							{
								case 1:
									cout << "Podaj imie: "; cin >>  tablica_danych[i].imie;
									break;
								case 2:
									cout << "Podaj nazwisko: "; cin >>  tablica_danych[i].nazwisko;
									break;
								case 3:
									cout << "Podaj numer telefonu: "; cin >>  tablica_danych[i].nr_telefonu;
									break;
								case 4:
									cout << "Podaj wiek: "; cin >>  tablica_danych[i].wiek;
									break;
								case 5:
									cout << "Podaj waga: "; cin >>  tablica_danych[i].waga;
									break;
								case 6:
									cout << "Podaj wzrost: "; cin >>  tablica_danych[i].wzrost;
									break;
								case 7:
									cout << "Podaj plec";
									cout << "0 - mezczyzna";
									cout << "1 - kobieta";
									cin >>  tablica_danych[i].plec;
									break;
							}
							cout << "Czy zmienic cos jeszcze?" << endl;
							cout << "1 - tak" << endl;
							cout << "0 - nie" << endl;
							cin >> czyZmienicCosJeszcze;
						}
					}
				}
				ofstream plik;
				plik.open("plik.txt");
				plik << iloscOsob << endl;
				for(int i = 0; i < iloscOsob; i++)
				{
					plik << tablica_danych[i].imie << " ";
					plik << tablica_danych[i].nazwisko << " ";
					plik << tablica_danych[i].nr_telefonu << " ";
					plik << tablica_danych[i].wiek << " ";
					plik << tablica_danych[i].waga << " ";
					plik << tablica_danych[i].wzrost << " ";
					plik <<	tablica_danych[i].plec << " ";
					plik << endl;
				}
				plik.close();
				break;
			}
			case 6:
			{
				int wyszukaj;
				cout << "Po czym wyszukiwac?" << endl;
				cout << "1. Imie" << endl;
				cout << "2. Nazwisko" << endl;
				cout << "3. Numer telefonu" << endl;
				cout << "4. Wiek" << endl;
				cout << "5. Waga" << endl;
				cout << "6. Wzrost" << endl;
				cout << "7. Plec" << endl;
				cin >> wyszukaj;
				switch(wyszukaj)
				{
					case 1:
					{
						string znajdzImie;
						cout << "Podaj imie: "; cin >> znajdzImie;
						for(int i = 0; i < iloscOsob; i++)
						{
							if(tablica_danych[i].imie == znajdzImie)
							{
								cout << tablica_danych[i].imie << " ";
								cout << tablica_danych[i].nazwisko << " ";
								cout << tablica_danych[i].nr_telefonu << " ";
								cout << tablica_danych[i].wiek << " ";
								cout << tablica_danych[i].waga << " ";
								cout << tablica_danych[i].wzrost << " ";
								cout << tablica_danych[i].plec << " " << endl;
							}
						}
						break;
					}
					case 2:
					{
						string znajdzNazwisko;
						cout << "Podaj nazwisko: "; cin >> znajdzNazwisko;
						for(int i = 0; i < iloscOsob; i++)
						{
							if(tablica_danych[i].nazwisko == znajdzNazwisko)
							{
								cout << tablica_danych[i].imie << " ";
								cout << tablica_danych[i].nazwisko << " ";
								cout << tablica_danych[i].nr_telefonu << " ";
								cout << tablica_danych[i].wiek << " ";
								cout << tablica_danych[i].waga << " ";
								cout << tablica_danych[i].wzrost << " ";
								cout << tablica_danych[i].plec << " " << endl;
							}
						}
						break;
					}
					case 3:
					{
						int znajdzNrTelefonu;
						cout << "Podaj numer telefonu: "; cin >> znajdzNrTelefonu;
						for(int i = 0; i < iloscOsob; i++)
						{
							if(tablica_danych[i].nr_telefonu == znajdzNrTelefonu)
							{
								cout << tablica_danych[i].imie << " ";
								cout << tablica_danych[i].nazwisko << " ";
								cout << tablica_danych[i].nr_telefonu << " ";
								cout << tablica_danych[i].wiek << " ";
								cout << tablica_danych[i].waga << " ";
								cout << tablica_danych[i].wzrost << " ";
								cout << tablica_danych[i].plec << " " << endl;
							}
						}
						break;
					}
					case 4:
					{
						int znajdzWiek;
						cout << "Podaj wiek: "; cin >> znajdzWiek;
						for(int i = 0; i < iloscOsob; i++)
						{
							if(tablica_danych[i].wiek == znajdzWiek)
							{
								cout << tablica_danych[i].imie << " ";
								cout << tablica_danych[i].nazwisko << " ";
								cout << tablica_danych[i].nr_telefonu << " ";
								cout << tablica_danych[i].wiek << " ";
								cout << tablica_danych[i].waga << " ";
								cout << tablica_danych[i].wzrost << " ";
								cout << tablica_danych[i].plec << " " << endl;
							}
						}
						break;
					}
					case 5:
					{
						int znajdzWaga;
						cout << "Podaj waga: "; cin >> znajdzWaga;
						for(int i = 0; i < iloscOsob; i++)
						{
							if(tablica_danych[i].waga == znajdzWaga)
							{
								cout << tablica_danych[i].imie << " ";
								cout << tablica_danych[i].nazwisko << " ";
								cout << tablica_danych[i].nr_telefonu << " ";
								cout << tablica_danych[i].wiek << " ";
								cout << tablica_danych[i].waga << " ";
								cout << tablica_danych[i].wzrost << " ";
								cout << tablica_danych[i].plec << " " << endl;
							}
						}
						break;
					}
					case 6:
					{
						int znajdzWzrost;
						cout << "Podaj wzrost: "; cin >> znajdzWzrost;
						for(int i = 0; i < iloscOsob; i++)
						{
							if(tablica_danych[i].wzrost == znajdzWzrost)
							{
								cout << tablica_danych[i].imie << " ";
								cout << tablica_danych[i].nazwisko << " ";
								cout << tablica_danych[i].nr_telefonu << " ";
								cout << tablica_danych[i].wiek << " ";
								cout << tablica_danych[i].waga << " ";
								cout << tablica_danych[i].wzrost << " ";
								cout << tablica_danych[i].plec << " " << endl;
							}
						}
						break;
					}
					case 7:
					{
						bool znajdzPlec;
						cout << "Podaj plec" << endl;
						cout << "0 - mezczyzna" << endl;
						cout << "1 - kobieta" << endl;
						cin >>  znajdzPlec;
						for(int i = 0; i < iloscOsob; i++)
						{
							if(tablica_danych[i].plec == znajdzPlec)
							{
								cout << tablica_danych[i].imie << " ";
								cout << tablica_danych[i].nazwisko << " ";
								cout << tablica_danych[i].nr_telefonu << " ";
								cout << tablica_danych[i].wiek << " ";
								cout << tablica_danych[i].waga << " ";
								cout << tablica_danych[i].wzrost << " ";
								cout << tablica_danych[i].plec << " " << endl;
							}
						}
						break;
					}
				}
				break;
			}
		}
	}
	return 0;
}
