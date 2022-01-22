#include <iostream>
#include <cmath>
using namespace std;

int decToHex(int dec)
{
    if(dec / 16 != 0)
    {
        decToHex(dec / 16);
    }
    int mod = dec % 16;
    if (mod < 10) cout << mod;
    switch (mod)
    {
    case 10:
        cout << "A";
        break;
    case 11:
        cout << "B";
        break;
    case 12:
        cout << "C";
        break;
    case 13:
        cout << "D";
        break;
    case 14:
        cout << "E";
        break;
    case 15:
        cout << "F";
        break;
    }
    return 0;
}

int main()
{
    int dec;
    cin >> dec;
    decToHex(dec);
    return 0;
}