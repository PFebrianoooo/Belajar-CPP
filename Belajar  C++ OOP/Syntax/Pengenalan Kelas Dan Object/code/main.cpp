#include <iostream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string Nama;
    string Nim;
    string Jurusan;
    string NamaKampus;
};

main()
{
    Mahasiswa data1;
    data1.Nama = "ucup";
    data1.Nim = "220204";
    data1.Jurusan = "teknik pipa";
    data1.NamaKampus = "gunadarma";

    Mahasiswa data2;
    data2.Nama = "otong";
    data2.Nim = "22041";
    data2.Jurusan = "teknik menggambar";
    data2.NamaKampus = "pertanian";

    cout << "Nama dari data 1 adalah : " << data1.Nama << endl;
    cout << "Nim dari data 1 adalah : " << data1.Nim << endl;
    cout << "Jurusan dari data 1 adalah : " << data1.Jurusan << endl;
    cout << "Nama kampus dari data 1 adalah : " << data1.NamaKampus << endl;

    cout << "\nNama dari data 2 adalah : " << data2.Nama << endl;
    cout << "Nim dari data 2 adalah : " << data2.Nim << endl;
    cout << "Jurusan dari data 2 adalah : " << data2.Jurusan << endl;
    cout << "Nama kampus dari data 2 adalah : " << data2.NamaKampus << endl;

    return 0;
}