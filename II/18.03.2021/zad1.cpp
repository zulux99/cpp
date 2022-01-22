#include <iostream>
using namespace std;
unsigned long long silnia(int n);
int main()
{
    int n;
    cin >> n;
    cout << silnia(n);
    return 0;
}
unsigned long long silnia(int n)
{
    if (n == 0) return 1;
    else return n*silnia(n - 1);
}