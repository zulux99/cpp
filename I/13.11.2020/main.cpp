#include <iostream>

using namespace std;

int suma(int a, int b)
{
	return a + b;
}
void menu(void)
{
	cout << "Menu" << endl;
}
float obwod_kola(float r)
{
	return 2*r*3.14;
}
int maxim(int a, int b)
{
	if(a > b)
	{
		return a;
	}
	return b;
}

int main(void)
{
	int x = suma(2, 3);
	menu();
	float ob = obwod_kola(2.5);
	int max1 = maxim(4, 3);
	cout << "X = " << x << endl << "Ob = " << ob << endl << "Max1 = " << max1 << endl;
	return 0;
}
