#include <iostream>
#include <time.h>
using namespace std;

int najwiekszaWartosc(int tab[])
{
    int max = tab[0];
    for (int i = 0; i < 10; i++)
        if (tab[i] > max) max = tab[i];
    return max;   
}
int main()
{
    srand (time(NULL));
    int tab[10];
    for (int i = 0; i < 10; i++)
    {
        tab[i] = rand() % 100;
        cout << tab[i] << " ";
    }
    cout << endl;
    cout << najwiekszaWartosc(tab);
    return 0;
}