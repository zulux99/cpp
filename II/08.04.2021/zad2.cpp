#include <iostream>
#include <ctime>
using namespace std;
struct kot
{
    string imie;
    string rasa;
    string kolor;
    int liczbaNog;
    string znakiSzczegolne;
};
void wypiszObiekty(kot kot);
void jedzenie(kot kot1, kot kot2);

int main()
{
    int n;
    cout << "Ile kotow?" << endl;
    cin >> n;
    kot kot[n];
    for (int i = 0; i < n; i++)
    {
        cin >> kot[i].imie;
        cin >> kot[i].rasa;
        cin >> kot[i].kolor;
        cin >> kot[i].liczbaNog;
        cin >> kot[i].znakiSzczegolne;
    }
    wypiszObiekty(kot[0]);
    jedzenie(kot[0], kot[1]);
    return 0;
}
void wypiszObiekty(kot kot)
{
    cout << "Imie: " << kot.imie << endl;
    cout << "Rasa: " << kot.rasa << endl;
    cout << "Kolor: " << kot.kolor << endl;
    cout << "Liczba nog: " << kot.liczbaNog << endl;
    cout << "Znaki szczegolne: " << kot.znakiSzczegolne << endl;
}
void jedzenie(kot kot1, kot kot2)
{
    cout << "Cos";
    srand(time(NULL));
    int jeden;
    int dwa;
    while (rand() % 101 > 10)
        jeden++;
    while ((rand() % 101) > 10)
        dwa++;
    cout << kot1.imie << " zjadl " << jeden << " kawalkow karmy" << endl;
    cout << kot2.imie << " zjadl " << dwa << " kawalkow karmy" << endl;
}