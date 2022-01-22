#include <iostream>
#include <vector>

using namespace std;
struct RGB
{
	int r;
	int g;
	int b;
	RGB(int rx, int gx, int bx)
	{
		r = rx;
		g = gx;
		b = bx;
	}
};


int main(void)
{
	vector <RGB> plik;
	plik.push_back(RGB(12,22,32));
	cout << plik[0].r << " " << plik[0].g << " "  << plik[0].b << " "  << endl;
	vector <int> dane;
	
	dane.push_back(23);
	cout << "Ilosc elementow wektora: " << dane.size() << endl;
	dane.push_back(54);
	cout << "Ilosc elementow wektora: " << dane.size() << endl;
	dane.push_back(87);
	cout << "Ilosc elementow wektora: " << dane.size() << endl;
	dane.push_back(41);
	cout << "Ilosc elementow wektora: " << dane.size() << endl;
	cout << dane[0] << " " << dane[1] << " " << dane[2] << " " << dane[3] << " " << dane[4] << endl;
	dane.insert(dane.begin() + 2,78);
	cout << "Ilosc elementow wektora: " << dane.size() << endl;
	cout << dane[0] << " " << dane[1] << " " << dane[2] << " " << dane[3] << " " << dane[4] << endl;
	dane.erase(dane.begin() + 2, dane.begin() + 3);
	cout << "Ilosc elementow wektora: " << dane.size() << endl;
	cout << dane[0] << " " << dane[1] << " " << dane[2] << " " << dane[3] << endl;
	return 0;
}
