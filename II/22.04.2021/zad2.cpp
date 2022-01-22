#include <iostream>
using namespace std;
class Prostopadloscian
{
    private:
    double a;
    double b;
    double c;
    public:
    void setA(int i) {a = i;}
    double getA() {return a;}
    void setB(int i) {b = i;}
    double getB() {return b;}
    void setC(int i) {c = i;}
    double getC() {return c;}
    Prostopadloscian()
    {
        a = 0;
        b = 0;
        c = 0;
    }
    double polePodstawy(double bok1, double bok2)
    {
        return bok1 * bok2;
    }
    double polePowierzchni(double a, double b, double c)
    {
        return 2 * polePodstawy(a, b) + 2 * a * c + 2 * b * c;
    }
    double objetosc(double pp, double bok)
    {
        return pp * bok;
    }
};
int main()
{
    double a, b, c;
    Prostopadloscian p1;
    cout << "Podaj dlugosci:" << endl;
    cin >> a >> b >> c;
    p1.setA(a);
    p1.setB(b);
    p1.setC(c);
    cout << "Pole powierzchni: " << p1.polePowierzchni(p1.getA(), p1.getB(), p1.getC()) << endl;
    cout << "Objetosc: " << p1.objetosc(p1.polePodstawy(p1.getA(), p1.getB()), p1.getC());
    return 0;
}