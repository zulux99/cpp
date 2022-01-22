#include <iostream>
using namespace std;
bool ifEqual(int a, int b)
{
    if(a == b) return true;
    else return false;
}
int main()
{
    int a, b;
    cin >> a >> b;
    if (ifEqual(a, b) == 1) cout << "Liczby sa rowne";
    else cout << "Roznica wynosi: " << a - b;
    return 0;
}