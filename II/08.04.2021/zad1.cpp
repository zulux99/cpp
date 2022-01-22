#include <iostream>
#include <string>
#include <ctime>
using namespace std;
struct motocykl
{
    string marka;
    string model;
    int rokProdukcji;
    int masa;
    int pojemnosc;
};
void wiekszaPojemnosc(motocykl pierwszy, motocykl drugi)
{
    if(pierwszy.pojemnosc > drugi.pojemnosc)
        cout << pierwszy.marka << " " << pierwszy.model << " ma wieksza pojemnosc" << endl;
    else
        cout << drugi.marka << " " << drugi.model << " ma wieksza pojemnosc" << endl;
}
void wheelie(motocykl pierwszy, motocykl drugi)
{
    srand (time(NULL));
    int jeden;
    int dwa;
    while (rand() % 101 > 10)
        jeden++;
    while ((rand() % 101) > 10)
        dwa++;
    cout << pierwszy.marka << " " << pierwszy.model << " zrobil " << jeden << " s wheelie" << endl;
    cout << drugi.marka << " " << drugi.model << " zrobil " << dwa << " s wheelie" << endl;
}
int main()
{
    cout << "Motocykl 1" << endl;
    motocykl pierwszy;
    cout << "Podaj marke: "; cin >> pierwszy.marka;
    cout << "Podaj model: "; cin >> pierwszy.model;
    cout << "Podaj rok produkcji: "; cin >> pierwszy.rokProdukcji;
    cout << "Podaj mase pojazdu: "; cin >> pierwszy.masa;
    cout << "Podaj pojemnosc: "; cin >> pierwszy.pojemnosc;
    cout << "Motocykl 2" << endl;
    motocykl drugi;
    cout << "Podaj marke: "; cin >> drugi.marka;
    cout << "Podaj model: "; cin >> drugi.model;
    cout << "Podaj rok produkcji: "; cin >> drugi.rokProdukcji;
    cout << "Podaj mase pojazdu: "; cin >> drugi.masa;
    cout << "Podaj pojemnosc: "; cin >> drugi.pojemnosc;
    wiekszaPojemnosc(pierwszy, drugi);
    wheelie(pierwszy, drugi);
    return 0;
}