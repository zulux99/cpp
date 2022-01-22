#include <iostream>
using namespace std;
class Samochod
{
    public:
        string marka;
        string model;
        int rocznik;
        int przebieg;
    private:
        string vin;
    public:
        void przyspiesz()
        {
            cout << this->marka << " " << this->model << " przyspiesza" << endl;
        }
        void hamuj()
        {
            cout << this->marka << " " << this->model << " hamuje" << endl;
        }
        void skrec()
        {
            cout << this->marka << " " << this->model << " skreca" << endl;
        }
};
int main()
{
    Samochod id01;
    id01.marka = "Kia";
    id01.model = "Rio";
    id01.rocznik = 2016;
    id01.przebieg = 180000;
    id01.przyspiesz();
    id01.hamuj();
    id01.skrec();
    return 0;
}