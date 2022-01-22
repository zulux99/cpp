#include <iostream>
#include <cmath>
using namespace std;
class Kula
{
private:
    double r;
    const double pi = 3.14;

public:
    Kula(double rx)
    {
        r = rx;
    }
    double polePowierzchni()
    {
        return 4 * pi * pow(r, 2);
    }
    double objetosc()
    {
        return (4 * pi * pow(r, 3)) / 3;
    }
};

int main()
{
    int promien;
    cout << "Podaj promien" << endl;
    cin >> promien;
    Kula kula(promien);
    cout << "Objetosc wynosi: " << kula.objetosc() << endl;
    cout << "Pole powierzchni wynosi: " << kula.polePowierzchni() << endl;
    return 0;
}