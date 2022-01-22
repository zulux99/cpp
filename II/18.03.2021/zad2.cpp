#include <cstdio>
using namespace std;
unsigned long long fib(int n)
{
    unsigned long long a, b;
    if (n == 0) return 0;
    a = 0;
    b = 1;
    while(n--)
    {
        b += a;
        a = b - a;
    }
    return b;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%llu\n", (fib(n - 1)));
    return 0;
}