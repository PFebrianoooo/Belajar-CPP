#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string Nama;
    string Nim;
    double Ipk;

    // constructor
    Mahasiswa(string nama, string nim, double ipk)
    {
        Mahasiswa::Nama = nama;
        Mahasiswa::Nim = nim;
        Mahasiswa::Ipk = ipk;
    }

    // method tanpa parameter dan tanpa return
    // biasanya hanya display aja
    void TampilkanData()
    {
        cout << "Mahasiswa " << Mahasiswa::Nama << " dengan NIM " << Mahasiswa::Nim;
        cout << " mendapatkan Ipk sebesar " << Mahasiswa::Ipk << endl
             << endl;
    }

    // method dengan parameter dan tanpa return
    void UbahData(const char *NamaBaru, const char *NimBaru, const double IpkBaru)
    {

        cout << "Merubah Nama, Nim dan Ipk mahasiswa" << endl;
        Mahasiswa::Nama = NamaBaru;
        Mahasiswa::Nim = NimBaru;
        Mahasiswa::Ipk = IpkBaru;
    }

    void UbahIpk(const double IpkBaru)
    {
        Mahasiswa::Ipk = IpkBaru;
    }

    void UbahNim(const char *NimBaru)
    {
        Mahasiswa::Nim = NimBaru;
    }

    void UbahNama(const char *NamaBaru)
    {
        Mahasiswa::Nama = NamaBaru;
    }

    // method tanpa parameter dengan return
    string AmbilNamaNim()
    {
        return Nama + Nim;
    }

    string AmbilNama()
    {
        return Nama;
    }

    string AmbilNim()
    {
        return Nim;
    }

    double AmbilIpk()
    {
        return Ipk;
    }

    // method dengan parameter dan dengan return
    double KatrolIpk(const double &NilaiTambah)
    {
        return Mahasiswa::Ipk + NilaiTambah;
    }
};

int main()
{
    // initialisation parameter input to constructor
    Mahasiswa data1 = Mahasiswa("ucup", "220140", 3.60);
    Mahasiswa data2 = Mahasiswa("otong", "220405", 4.00);

    // dispaly data
    data1.TampilkanData();
    data2.TampilkanData();

    // change data
    data1.UbahData("jabrik", "2204070030", 3.90);
    data1.TampilkanData();

    // mengambil sebuah data
    // init variable bantuan
    string Datanama;
    double Dataipk;
    string Datanim;

    // mengambil data-data di data pertama yaitu data1
    // method ke-1 untuk mendisplaykan nim dan nama
    Datanama = data1.AmbilNama();
    Datanim = data1.AmbilNim();

    cout << Datanama << "\t" << Datanim << "\t";

    // method ke-2 untuk mendisplaykan ipk
    cout << data1.AmbilIpk() << endl;

    // mengkatrolkan nilai atau menambahkan
    cout << "Ipk terbaru dari " << data1.AmbilNama() << " adalah : " << data1.KatrolIpk(-2.10) << endl;

    data1.TampilkanData();
    data1.UbahIpk(3.20);
    data1.TampilkanData();

    data1.UbahData("jambrong", "22040700039", 4.00);
    data1.TampilkanData();

    cout << data1.AmbilNamaNim() << endl;

    return 0;
}
