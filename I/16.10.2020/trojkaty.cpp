#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int wysokosc; 
	cout << "Podaj wysokosc trojkata: "; cin >> wysokosc;
	for(int i = 1; i <= wysokosc; i++)
	{
		float a = wysokosc - i;
		for(int j = 1; j <= 2*i-1; j++)
		{
			if(j == 1)
			{
				for(int b = 1; b <= a; b++)
				{
					cout << " ";
				}
			}
			cout << "x";
		}
		cout << endl;
	}
	for(int i = 1; i <= wysokosc; i++)
	{
		float a = wysokosc - i;
		for(int j = 1; j <= 2*i-1; j++)
		{
			if(j == 1)
			{
				for(int b = 1; b <= a; b++)
				{
					cout << " ";
				}
				if(i != wysokosc)
				{
					cout << "x";
				}
				int s = 2*(i-1.5);
				if(i != 1 && i != wysokosc)
				{
					for(int a = 1; a <= s; a++)
					{
						cout << " ";
					}
				}
				if(i != 1 && i != wysokosc)
				{
					cout << "x";
				}
			}
			if(i == wysokosc)
			{
				cout << "x";
			}
		}
		cout << endl;
	}
	return 0;
}

