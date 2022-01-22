#include <iostream>
using namespace std;
class Zwierze
{
public:
    string rodzaj;
    string kolor;
    string czynnosc;
    Zwierze()
    {
        rodzaj = "";
        kolor = "";
    }
    void coRobi()
    {
        cout << this->rodzaj << " " << this->czynnosc << endl;
    }
};
class Domowe : public Zwierze
{
public:
    string imie;
    Domowe()
    {
        imie = "";
    }
    void wyswietlDomowe()
    {
        cout << this->imie << " ma kolor " << this->kolor << endl;
    }
};
class Ptak : public Zwierze
{
public:
    string rodzaj;
    Ptak()
    {
        rodzaj = "";
        czynnosc = "lata";
    }
};
class Kot : public Domowe
{
public:
    string kolorOczu;
    Kot()
    {
        imie = "";
        kolorOczu = "";
        czynnosc = "skacze";
    }
};
class Pies : public Domowe
{
public:
    bool czyUmieSzczekac;
    Pies()
    {
        imie = "";
        czyUmieSzczekac = 0;
        czynnosc = "biega";
    }
};
class Ryba : Zwierze
{
public:
    string gatunek;
    Ryba()
    {
        gatunek = "";
        czynnosc = "plywa";
    }
};
int main()
{
    Kot kot1;
    kot1.imie = "Mruczek";
    kot1.kolor = "bialy";
    kot1.rodzaj = "kot";
    kot1.kolorOczu = "zielone";
    Pies pies1;
    pies1.imie = "Azor";
    pies1.kolor = "czarno-bialy";
    pies1.rodzaj = "pies";
    pies1.czyUmieSzczekac = "tak";
    kot1.coRobi();
    pies1.coRobi();
    kot1.wyswietlDomowe();
    pies1.wyswietlDomowe();
    return 0;
}