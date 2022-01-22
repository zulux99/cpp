#include <iostream>
using namespace std;
int nwd(int a, int b)
{
    if(b == 0) return a;
    else return nwd(b, a % b);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "NWD: " << nwd(a, b);
    return 0;
}