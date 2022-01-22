#include <iostream>
using namespace std;
class Kot
{
    public:
        string imie;
        string rasa;
        string kolor;
        int wiek;
    void miauczy()
    {
        cout << this->imie << " miauczy." << endl;
    }
    void glodny()
    {
        cout << this->imie << " jest glodny." << endl;
        cout << this->imie << " je." << endl;
        cout << this->imie << " jest najedzony." << endl;
    }
};

int main()
{
    Kot mruczek;
    mruczek.imie = "Mruczek";
    mruczek.rasa = "Podworkowiec";
    mruczek.kolor = "Bialy";
    mruczek.wiek = 5;
    mruczek.miauczy();
    mruczek.glodny();
    return 0;
}