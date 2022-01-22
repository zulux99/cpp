#include <iostream>
#include <cstring>
#include <fstream>
#include <vector>

using namespace std;

struct pacjent
{
	string imie;
	string nazwisko;
	long int nr_telefonu;
	unsigned int wiek;
	unsigned int waga;
	unsigned int wzrost;
	bool plec;
	pacjent(string imiex, string nazwiskox, long int nr_telefonux, unsigned int wiekx, unsigned int wagax, unsigned int wzrostx, bool plecx)
	{
		imie = imiex;
		nazwisko = nazwiskox;
		nr_telefonu = nr_telefonux;
		wiek = wiekx;
		waga = wagax;
		wzrost = wzrostx;
		plec = plecx;
	}
};
int main(void)
{
	vector <pacjent> dane;
	ifstream plik;
	plik.open("plik.txt");
	if(!plik.good())
	{
		cout << "Nie mozna bylo otworzyc pliku";
		return -1;
	}
	string tmpImie, tmpNazwisko;
	long int tmpNr_telefonu;
	unsigned int tmpWiek, tmpWaga, tmpWzrost;
	bool tmpPlec;
	while(!plik.eof())
	{
		plik >> tmpImie >> tmpNazwisko >> tmpNr_telefonu >> tmpWiek >>
		tmpWaga >> tmpWzrost >> tmpPlec;
		if(!plik.eof())
			dane.push_back(pacjent(tmpImie, tmpNazwisko, tmpNr_telefonu, tmpWiek, tmpWaga, tmpWzrost, tmpPlec));
	}
	int wybor = 1;
	while(wybor <= 6 && wybor >= 1)
	{
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
				for(int i = 0; i < dane.size(); i++)
				{
					cout << dane[i].imie << " "
					<< dane[i].nazwisko << " "
					<< dane[i].nr_telefonu << " "
					<< dane[i].wiek << " "
					<< dane[i].waga << " "
					<< dane[i].wzrost << " "
					<< dane[i].plec << endl;
				}
				break;
			case 2:
				cout << "Liczba pacjentow w bazie: " << dane.size() << endl;
				break;
			case 3:
			{
				cout << "Dodawanie pacjenta" << endl;
				cout << "Podaj imie: ";
				cin >> tmpImie;
				cout << "Podaj nazwisko: ";
				cin >> tmpNazwisko;
				cout << "Podaj nr telefonu: ";
				cin >> tmpNr_telefonu;
				cout << "Podaj wiek: ";
				cin >> tmpWiek;
				cout << "Podaj wage: ";
				cin >> tmpWaga;
				cout << "Podaj wzrost: ";
				cin >> tmpWzrost;
				cout << "Podaj plec" << endl;
				cout << "0 - mezczyzna" << endl;
				cout << "1 - kobieta" << endl;
				cin >> tmpPlec;
				dane.push_back(pacjent(tmpImie, tmpNazwisko, tmpNr_telefonu, tmpWiek, tmpWaga, tmpWzrost, tmpPlec));
				cout << dane[dane.size() - 1].imie << " ";
				cout << dane[dane.size() - 1].nazwisko << " ";
				cout << dane[dane.size() - 1].nr_telefonu << " ";
				cout << dane[dane.size() - 1].wiek << " ";
				cout << dane[dane.size() - 1].waga << " ";
				cout << dane[dane.size() - 1].wzrost << " ";
				cout << dane[dane.size() - 1].plec << " ";
				ofstream plik;
				plik.open("plik.txt");
				for(int i = 0; i < dane.size(); i++)
				{
					plik << dane[i].imie << " ";
					plik << dane[i].nazwisko << " ";
					plik << dane[i].nr_telefonu << " ";
					plik << dane[i].wiek << " ";
					plik << dane[i].waga << " ";
					plik << dane[i].wzrost << " ";
					plik <<	dane[i].plec << " ";
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
				for(int i = 0; i < dane.size(); i++)
				{
					if(dane[i].imie == imieUsun && dane[i].nazwisko == nazwiskoUsun)
					{
						ofstream plik;
						plik.open("plik.txt");
						for(int i = 0; i < dane.size() - 1; i++)
						{
							plik << dane[i].imie << " ";
							plik << dane[i].nazwisko << " ";
							plik << dane[i].nr_telefonu << " ";
							plik << dane[i].wiek << " ";
							plik << dane[i].waga << " ";
							plik << dane[i].wzrost << " ";
							plik <<	dane[i].plec << " ";
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
				for(int i = 0; i < dane.size(); i++)
				{
					if(dane[i].imie == imieModyfikuj && dane[i].nazwisko == nazwiskoModyfikuj)
					{
						int czyZmienicCosJeszcze = 1;
						while(czyZmienicCosJeszcze == 1)
						{
							cout << dane[i].imie << " ";
							cout << dane[i].nazwisko << " ";
							cout << dane[i].nr_telefonu << " ";
							cout << dane[i].wiek << " ";
							cout << dane[i].waga << " ";
							cout << dane[i].wzrost << " ";
							cout << dane[i].plec << " " << endl;
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
									cout << "Podaj imie: "; cin >> dane[i].imie;
									break;
								case 2:
									cout << "Podaj nazwisko: "; cin >> dane[i].nazwisko;
									break;
								case 3:
									cout << "Podaj numer telefonu: "; cin >> dane[i].nr_telefonu;
									break;
								case 4:
									cout << "Podaj wiek: "; cin >> dane[i].wiek;
									break;
								case 5:
									cout << "Podaj waga: "; cin >> dane[i].waga;
									break;
								case 6:
									cout << "Podaj wzrost: "; cin >> dane[i].wzrost;
									break;
								case 7:
									cout << "Podaj plec";
									cout << "0 - mezczyzna";
									cout << "1 - kobieta";
									cin >> dane[i].plec;
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
				for(int i = 0; i < dane.size(); i++)
				{
					plik << dane[i].imie << " ";
					plik << dane[i].nazwisko << " ";
					plik << dane[i].nr_telefonu << " ";
					plik << dane[i].wiek << " ";
					plik << dane[i].waga << " ";
					plik << dane[i].wzrost << " ";
					plik <<	dane[i].plec << " ";
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
						for(int i = 0; i < dane.size(); i++)
						{
							if(dane[i].imie == znajdzImie)
							{
								cout << dane[i].imie << " ";
								cout << dane[i].nazwisko << " ";
								cout << dane[i].nr_telefonu << " ";
								cout << dane[i].wiek << " ";
								cout << dane[i].waga << " ";
								cout << dane[i].wzrost << " ";
								cout << dane[i].plec << " " << endl;
							}
						}
						break;
					}
					case 2:
					{
						string znajdzNazwisko;
						cout << "Podaj nazwisko: "; cin >> znajdzNazwisko;
						for(int i = 0; i < dane.size(); i++)
						{
							if(dane[i].nazwisko == znajdzNazwisko)
							{
								cout << dane[i].imie << " ";
								cout << dane[i].nazwisko << " ";
								cout << dane[i].nr_telefonu << " ";
								cout << dane[i].wiek << " ";
								cout << dane[i].waga << " ";
								cout << dane[i].wzrost << " ";
								cout << dane[i].plec << " " << endl;
							}
						}
						break;
					}
					case 3:
					{
						int znajdzNrTelefonu;
						cout << "Podaj numer telefonu: "; cin >> znajdzNrTelefonu;
						for(int i = 0; i < dane.size(); i++)
						{
							if(dane[i].nr_telefonu == znajdzNrTelefonu)
							{
								cout << dane[i].imie << " ";
								cout << dane[i].nazwisko << " ";
								cout << dane[i].nr_telefonu << " ";
								cout << dane[i].wiek << " ";
								cout << dane[i].waga << " ";
								cout << dane[i].wzrost << " ";
								cout << dane[i].plec << " " << endl;
							}
						}
						break;
					}
					case 4:
					{
						int znajdzWiek;
						cout << "Podaj wiek: "; cin >> znajdzWiek;
						for(int i = 0; i < dane.size(); i++)
						{
							if(dane[i].wiek == znajdzWiek)
							{
								cout << dane[i].imie << " ";
								cout << dane[i].nazwisko << " ";
								cout << dane[i].nr_telefonu << " ";
								cout << dane[i].wiek << " ";
								cout << dane[i].waga << " ";
								cout << dane[i].wzrost << " ";
								cout << dane[i].plec << " " << endl;
							}
						}
						break;
					}
					case 5:
					{
						int znajdzWaga;
						cout << "Podaj waga: "; cin >> znajdzWaga;
						for(int i = 0; i < dane.size(); i++)
						{
							if(dane[i].waga == znajdzWaga)
							{
								cout << dane[i].imie << " ";
								cout << dane[i].nazwisko << " ";
								cout << dane[i].nr_telefonu << " ";
								cout << dane[i].wiek << " ";
								cout << dane[i].waga << " ";
								cout << dane[i].wzrost << " ";
								cout << dane[i].plec << " " << endl;
							}
						}
						break;
					}
					case 6:
					{
						int znajdzWzrost;
						cout << "Podaj wzrost: "; cin >> znajdzWzrost;
						for(int i = 0; i < dane.size(); i++)
						{
							if(dane[i].wzrost == znajdzWzrost)
							{
								cout << dane[i].imie << " ";
								cout << dane[i].nazwisko << " ";
								cout << dane[i].nr_telefonu << " ";
								cout << dane[i].wiek << " ";
								cout << dane[i].waga << " ";
								cout << dane[i].wzrost << " ";
								cout << dane[i].plec << " " << endl;
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
						for(int i = 0; i < dane.size(); i++)
						{
							if(dane[i].plec == znajdzPlec)
							{
								cout << dane[i].imie << " ";
								cout << dane[i].nazwisko << " ";
								cout << dane[i].nr_telefonu << " ";
								cout << dane[i].wiek << " ";
								cout << dane[i].waga << " ";
								cout << dane[i].wzrost << " ";
								cout << dane[i].plec << " " << endl;
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
