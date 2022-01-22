#include <iostream>
#include <cmath>
using namespace std;
class Figura
{
public:
    double pole;
    double obwod;
};
class Kwadrat : public Figura
{
public:
    Kwadrat(double bok)
    {
        pole = bok * bok;
        obwod = 4 * bok;
    }
};
class Prostokat : public Figura
{
public:
    Prostokat(double a, double b)
    {
        pole = a * b;
        obwod = 2 * a + 2 * b;
    }
};
class Trojkat : public Figura
{
public:
    Trojkat(double a, double b, double c, double h)
    {
        pole = a * h / 2;
        obwod = a + b + c;
    }
};
class Kolo : public Figura
{
public:
    const double pi = 3.14;
    Kolo(double r)
    {
        pole = pi * pow(r, 2);
        obwod = 2 * pi * r;
    }
};
class Romb : public Figura
{
public:
    Romb(double a, double h)
    {
        pole = a * h;
        obwod = 4 * a;
    }
};
class Trapez : public Figura
{
public:
    Trapez(double a, double b, double c, double d, double h)
    {
        pole = (a + b) * h / 2;
        obwod = a + b + c + d;
    }
};
int main()
{
    int opcja;
    opcja = 1;
    while (opcja > 0 && opcja < 7)
    {
        cout << "Menu" << endl;
        cout << "1. Kwadrat" << endl;
        cout << "2. Prostokat" << endl;
        cout << "3. Twojkat" << endl;
        cout << "4. Kolo" << endl;
        cout << "5. Romb" << endl;
        cout << "6. Trapez" << endl;
        cout << "7. Wyjdz" << endl;
        cin >> opcja;
        switch (opcja)
        {
        case 1:
        {
            double a;
            cout << "Podaj bok: ";
            cin >> a;
            Kwadrat kwadrat1(a);
            cout << "Pole kwadratu: " << kwadrat1.pole << endl;
            cout << "Obwod kwadratu: " << kwadrat1.obwod << endl;
            break;
        }
        case 2:
        {
            double a, b;
            cout << "Podaj bok a: ";
            cin >> a;
            cout << "Podaj bok b: ";
            cin >> b;
            Prostokat prostokat1(a, b);
            cout << "Pole prostokatu: " << prostokat1.pole << endl;
            cout << "Obwod prostokatu: " << prostokat1.obwod << endl;
        }
        break;
        case 3:
        {
            double a, b, c, h;
            cout << "Podaj bok a: ";
            cin >> a;
            cout << "Podaj bok b: ";
            cin >> b;
            cout << "Podaj bok c: ";
            cin >> c;
            cout << "Podaj wysokosc: ";
            cin >> h;
            Trojkat trojkat1(a, b, c, h);
            cout << "Pole trojkata: " << trojkat1.pole << endl;
            cout << "Obwod trojkata: " << trojkat1.obwod << endl;
        }
        break;
        case 4:
        {
            double r;
            cout << "Podaj promien: ";
            cin >> r;
            Kolo kolo1(r);
            cout << "Pole kola: " << kolo1.pole << endl;
            cout << "Obwod kola: " << kolo1.obwod << endl;
        }
        break;
        case 5:
        {
            double a, h;
            cout << "Podaj bok: ";
            cin >> a;
            cout << "Podaj wysokosc: ";
            cin >> h;
            Romb romb1(a, h);
            cout << "Pole rombu: " << romb1.pole << endl;
            cout << "Obwod rombu: " << romb1.obwod << endl;
        }
        break;
        case 6:
        {
            double a, b, c, d, h;
            cout << "Podaj bok a: ";
            cin >> a;
            cout << "Podaj bok b: ";
            cin >> b;
            cout << "Podaj bok c: ";
            cin >> c;
            cout << "Podaj bok d: ";
            cin >> d;
            cout << "Podaj wysokosc: ";
            cin >> h;
            Trapez trapez1(a, b, c, d, h);
            cout << "Pole trapezu: " << trapez1.pole << endl;
            cout << "Obwod trapezu: " << trapez1.obwod << endl;
        }
        break;
        }
    }
    return 0;
}