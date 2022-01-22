#include <iostream>
#include <ctime>
using namespace std;
class Restaurant
{
public:
    virtual void wystawRachunek() = 0;
};
class IceCreamStand : Restaurant
{
public:
    string flavors[2];
    virtual void wystawRachunek()
    {
        cout << "Koszt " << rand() % 9 + 1 << "zl" << endl;
    }
    void wyswietlSmaki()
    {
        for(const string &i : this->flavors)
        {
            cout << "Smak " << i << endl;
        }
    }
};
class CoffeShop : Restaurant
{
public:
    string coffee[2];
    virtual void wystawRachunek()
    {
        cout << "Koszt " << rand() % 9 + 1 << "zl" << endl;
    }
    void wyswietlKawy()
    {
        for(const string &i : this->coffee)
        {
            cout << "Kawa " << i << endl;
        }
    }
};
int main()
{
    srand(time(NULL));
    IceCreamStand najlepszeLodyWMiescie;
    najlepszeLodyWMiescie.flavors[0] = "pistacjowy";
    najlepszeLodyWMiescie.flavors[1] = "czekoladowy";
    najlepszeLodyWMiescie.wyswietlSmaki();
    najlepszeLodyWMiescie.wystawRachunek();
    CoffeShop kawiarenka;
    kawiarenka.coffee[0] = "americano";
    kawiarenka.coffee[1] = "latte";
    kawiarenka.wyswietlKawy();
    kawiarenka.wystawRachunek();
    return 0;
}