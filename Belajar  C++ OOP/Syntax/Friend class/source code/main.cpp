#include <iostream>
#include <string>

using namespace std;

class PersegiPanjang;

class Persegi
{
    friend class PersegiPanjang;

private:
    double Sisi;

public:
    Persegi(double sisi)
    {
        this->Sisi = sisi;
    }

    double Luas()
    {
        cout << "luasnya adalah ";
        return this->Sisi * this->Sisi;
    }
};

class PersegiPanjang
{
    friend class Persegi;

private:
    double Panjang;
    double Lebar;

public:
    PersegiPanjang(double panjang, double lebar)
    {
        this->Panjang = panjang;
        this->Lebar = lebar;
    }

    double Luas()
    {
        cout << "Luasnya adalah ";
        return this->Panjang * this->Lebar;
    }

    bool compare(const Persegi &object)
    {
        bool Istrue = this->Panjang >= object.Sisi;
        return Istrue;
    }
};
main()
{
    Persegi persegi1 = Persegi(5);
    PersegiPanjang persegipanjang1 = PersegiPanjang(5, 6);

    cout << persegi1.Luas() << endl;
    cout << persegipanjang1.Luas() << endl;

    bool logika = persegipanjang1.compare(persegi1);
    cout << logika << endl;

    return 0;
}