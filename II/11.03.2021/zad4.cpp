#include <iostream>
#include <cmath>
using namespace std;

void decToBin(int dec)
{
    if(dec / 2 != 0)
    {
        decToBin(dec / 2);
    }
    cout << dec % 2;
}

int main()
{
    int liczba;
    cin >> liczba;
    decToBin(liczba);
    return 0;
}