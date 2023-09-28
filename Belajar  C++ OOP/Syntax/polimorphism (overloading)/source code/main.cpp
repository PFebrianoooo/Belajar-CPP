#include <iostream>
#include <string>
using namespace std;

// Constructor overloading

class Mahasiswa
{
protected:
    string Bahasa;

private:
    string Nama;

public:
    Mahasiswa(string nama, string bahasa)
    {
        Nama = nama;
        Bahasa = bahasa;
    }

    Mahasiswa()
    {
        cout << "masukkan nama mhs : ";
        cin >> Nama;
        cout << "masukkan bahasa mhs : ";
        cin >> Bahasa;

        cout << "welcome " << Nama << endl;
        cout << "Mahasiswa bernama " << Nama << " menyukai bahasa pemrograman " << Bahasa << endl;
    }

    string GetName()
    {
        return Nama;
    }
};

// function overloading
class Dosen
{
private:
    string Nama;

public:
    Dosen(string nama)
    {

        Nama = nama;
        cout << "bahwa dosen bernama " << Nama << " suka dengan Bahasa pemrograman " << endl;
    }

    void Display()
    {
        cout << Nama << " bekerja selama hampir 20 tahun" << endl;
    }

    void Display(string nama)
    {
        cout << "Dan Dosen bernama " << Nama << endl;

        cout << "Ternyata Pernah Bekerja bersama sama" << endl;
    }
};

int main()
{
    // Mahasiswa Gibran = Mahasiswa();
    Dosen Rully = Dosen("rully");
    // cout << endl;
    Rully.Display("rullt");
    cout << endl;
    Rully.Display();

    return 0;
}