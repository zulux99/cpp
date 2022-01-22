#include <iostream>
using namespace std;
int licz(int min, int max)
{
    while (min <= max)
    {
        if(min > 150) return 0;
        cout << min << " ";
        min++;
    }
    return 0;
}
int main()
{
    int min, max;
    cout << "Pokaz liczby od: "; 
    cin >> min;
    cout << "Do: ";
    cin >> max;
	licz(min, max);
    return 0;
}
