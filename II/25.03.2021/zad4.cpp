#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;
int binarySearch(int tab[], int l, int r, int x);
int main()
{
    int x;
    int tab[5];
    srand (time(NULL));
    for (int &x : tab)
        x = rand() % 100;
    sort(tab, tab + 5);
    for (int &x : tab)
        cout << x << " ";
    cout << endl;
    cout << "Jaka liczbe wyszukac? " << " ";
    cin >> x;
    int n = sizeof(tab) / sizeof(tab[0]);
    int res = binarySearch(tab, 0, n - 1, x);
    (res == -1) ? cout << "Nie ma takiej liczby w tablicy"
    : cout << "Szukany element ma indeks " << res;
    return 0;
}
int binarySearch(int tab[], int l, int r, int x)
{
    if (r >= 1)
    {
        int mid = 1 + (r - 1) / 2;
        if (tab[mid] == x) return mid;
        if (tab[mid] > x) return binarySearch(tab, 1, mid - 1, x);
        return binarySearch(tab, mid + 1, r, x);
    }
    return -1;
}