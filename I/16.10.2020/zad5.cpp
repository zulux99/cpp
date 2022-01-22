#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int miesiac = 10;
	int odpowiedz;
	int i = 0;
	while(i < 3)
	{
		cout << "Jaki mamy numer miesiaca?: "; cin >> odpowiedz;
		switch(odpowiedz)
		{
			case 1:
				cout << "Nie jest to styczen";
				break;
			case 2:
				cout << "Nie jest to luty";
				break;
			case 3:
				cout << "Nie jest to marzec";
				break;
			case 4:
				cout << "Nie jest to kwiecien";
				break;
			case 5:
				cout << "Nie jest to maj";
				break;
			case 6:
				cout << "Nie jest to czerwiec";
				break;
			case 7:
				cout << "Nie jest to lipiec";
				break;
			case 8:
				cout << "Nie jest to sierpien";
				break;
			case 9:
				cout << "Nie jest to wrzesien";
				break;
			case 10:
				cout << "Brawo! Trafiles! Jest pazdziernik";
				i = 3;
				break;
			case 11:
				cout << "Nie jest to listopad";
				break;
			case 12:
				cout << "Nie jest to grudzien";
				break;
		}
		cout << endl;	
		i++;
	}
}

