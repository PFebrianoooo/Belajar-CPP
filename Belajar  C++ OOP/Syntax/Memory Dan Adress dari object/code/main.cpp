#include <iostream>
#include <string>

using namespace std;

class Kosong
{
public:
    int data()
    {
        return 1;
    }
};

class Isi
{
public:
    int a;    // 4 byte
    int b;    // 4 byte
    double c; // 8 byte
    string d; // 24 byte
};

class Mahasiswa
{
public:
    string nama;

    Mahasiswa(const char *nama)
    {
        Mahasiswa::nama = nama;
    }
};

int main()
{
    // Alokasi Memory
    cout << "Alokasi Memory Kelas Kosong : " << sizeof(Kosong) << " byte" << endl;
    cout << "Alokasi Memory Kelas Isi : " << sizeof(Isi) << " byte" << endl;

    // adress
    string a, b, c, d;
    Mahasiswa Object1 = Mahasiswa("ucup");
    Mahasiswa *Object2 = new Mahasiswa("otong");
    cout << "\n address di stack" << endl;
    cout << &a << endl;
    cout << &b << endl;
    cout << &Object1 << endl;
    cout << &Object2 << " stack Memory" << endl;
    cout << Object2 << " heap memoru" << endl;
    cout << &c << endl;
    cout << &d << endl;

    // untuk pembuatan object di heap memory dan di stack memory llebih cepat pembuatan di stack memory dibandingkan dnegan di memory heap.

    return 0;
}