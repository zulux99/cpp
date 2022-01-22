#include <iostream>

using namespace std;
int menu(void)
{
	int opcja;
	cout << endl << "Menu" << endl;
	cout << "1. Wyswietl maksymalna wartosc" << endl;
	cout << "2. Wyswietl minimalna wartosc" << endl;
	cout << "3. Policz srednia" << endl;
	cout << "4. Policz (a+b)/(c+d)" << endl;
	cout << "5. Oblicz srednia wazona" << endl;
	cout << "6. Zakoncz program" << endl;
	cout << "Podaj opcje: "; cin >> opcja;
	cout << endl;
	return opcja;
}
int max(int a, int b, int c, int d)
{
	if(a > b && a > c && a > d)
	{
		return a;
	}
	if(b > a && b > c && b > d)
	{
		return b;
	}
	if(c > b && c > a && c > d)
	{
		return c;
	}
	return d;
}
int min(int a, int b, int c, int d)
{
	if(a < b && a < c && a < d)
	{
		return a;
	}
	if(b < a && b < c && b < d)
	{
		return b;
	}
	if(c < b && c < a && c < d)
	{
		return c;
	}
	return d;
}
float srednia(float a, float b, float c, float d)
{
	return (a+b+c+d)/4;
}
float dzialanie(float a, float b, float c, float d)
{
	return(a+b)/(c+d);
}
float srednia_wazona(float a, float b, float c, float d)
{
	return(a*0.1+b*0.2+c*0.3+d*0.4);
}
int main(void)
{
	int a; int b; int c; int d;
	cout << "Podaj a: "; cin >> a;
	cout << "Podaj b: "; cin >> b;
	cout << "Podaj c: "; cin >> c;
	cout << "Podaj d: "; cin >> d;
	int opcja = menu();
	switch(opcja)
	{
		case 1:
			cout << "Maksymalna wartosc to: ";
			cout << max(a,b,c,d);
			break;
		case 2:
			cout << "Minimalna wartosc to: ";
			cout << min(a,b,c,d);
			break;
		case 3:
			cout << "Srednia to: ";
			cout << srednia(a,b,c,d);
			break;
		case 4:
			cout << "Wynik dzialania to: ";
			cout << dzialanie(a,b,c,d);
			break;
		case 5:
			cout << "Srednia wazona to: ";
			cout << srednia_wazona(a,b,c,d);
			break;
	}
	return 0;
}
