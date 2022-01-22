#include <iostream>
using namespace std;
class Pracownik
{
public:
    string imie;
    string nazwisko;
    string ulica;

private:
    int nr_domu;
    int kod_pocztowy;
    string miejscowosc;

public:
    void setNr_domu(int i) { nr_domu = i; }
    int getNr_domu() { return nr_domu; }
    void setKod_pocztowy(int i) { kod_pocztowy = i; }
    int getKod_pocztowy() { return kod_pocztowy; }
    void setMiejscowosc(string i) { miejscowosc = i; }
    string getMiejscowosc() { return miejscowosc; }
    Pracownik()
    {
        imie = "";
        nazwisko = "";
        ulica = "";
        nr_domu = 0;
        kod_pocztowy = 0;
        miejscowosc = "";
    }
};
int main()
{
    Pracownik pracownik1;
    pracownik1.imie = "Andrzej";
    pracownik1.nazwisko = "Kowalski";
    pracownik1.ulica = "Boczna";
    pracownik1.setNr_domu(13);
    pracownik1.setKod_pocztowy(34523);
    pracownik1.setMiejscowosc("Koniec swiata");
    int n = 20;
    while (n--)
        cout << "-";
    cout << endl;
    cout << pracownik1.imie << " " << pracownik1.nazwisko << endl;
    cout << "ul. " << pracownik1.ulica << " " << pracownik1.getNr_domu() << endl;
    cout << pracownik1.getKod_pocztowy() << " " << pracownik1.getMiejscowosc() << endl;
    n = 20;
    while (n--)
        cout << "-";
    cout << endl;
    return 0;
}