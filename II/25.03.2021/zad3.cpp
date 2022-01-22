#include <iostream>
using namespace std;
int nwd(int a, int b)
{
    if(a == 0) return b;
    else return nwd(b % a, a);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << nwd(a, b);
}