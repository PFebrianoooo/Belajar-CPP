/*
Made by : Putra Pebriano Nurba
        infromatics engineering 3rd semester
        oop exercise 1.
        lecture Mr. Jumail


Algortma Pemecahan masalah dengan decriptive text
Permasalahan : Menentukan banyaknya pengambilan SKS berdasarkan nilai ipk yang diraih

1. Buatlah kelas dengan Nama Mahasiswa
2. Berikan attribute kelas berupa Nama , Semester , Jurusan , Nim dan nilai Ips yang didapat di semester lalu
3. jika Ips yang didapatkan lebih dari 3.00 maka mahasiswa berhak untuk mendapat maksimal 24 sks
   apabila Ips yang didapat diatas 2.50 maka mahasiswa berhak untuk mendapatkan sks sebanyak maksimal 22 sks
   apabila mahasiswa mendapat Ips lebih dari 2.00 sampai 2.49 maka mendapatkan sks maksimal sebanyak 20 sks
   apabila mahasiswa mendapatkan Ips kurang dari 2.00 maka mahaiswa mendapatkan maksimal 18 sks
   apabila mahasiswa mendapat Ips kurang dari 1.00 maka mahasiswa mendpatkan sks maksimal sebanyak 12 sks
4. menggunakan prinsip pemrograman OOP dan konsep Encapsulation

*/

#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
private:
    string Nama;
    string Nim;
    int Semester;
    string Jurusan;
    double Ips;

public:
    Mahasiswa(string nama, string nim, int semester, string jurusan, double ips)
    {
        this->Nama = nama;
        this->Nim = nim;
        this->Semester = semester;
        this->Jurusan = jurusan;
        this->Ips = ips;
    }

    void DisplayData()
    {
        cout << "Mahasiswa bernama : " << this->Nama << endl;
        cout << "Nim : " << this->Nim << endl;
        cout << "Merupakan mahasiswa prodi " << this->Jurusan << " Semester " << this->Semester << endl;
        cout << "Memperoleh Ips Sebesar : " << this->Ips << endl;
    }

    // getter and setter
    void SetIpk(double ips)
    {
        this->Ips = ips;
    }

    double GetIps()
    {
        return this->Ips;
    }

    void SksDidapat(double ips)
    {
        double maxIps = 4.00;
        if (ips == maxIps)
        {
            cout << "mendapatkan maksimal 24 sks" << endl;
            cout << "pertahankan belajarmu" << endl;
        }
        else if (ips > 3.00)
        {
            cout << "mendapatkan maksimal 24 sks" << endl;
            cout << "pertahankan belajarmu" << endl;
        }
        else if (ips > 2.50)
        {
            cout << "mendapatkan maksimal 22 sks" << endl;
            cout << "tingkatkan terus belajarmu hingga mendapatkan 24 sks" << endl;
        }
        else if (ips > 2.00)
        {
            cout << "mendapatkan maksimal 20 sks" << endl;
            cout << "tingkatkan terus belajarmu hingga mendapat 24 sks" << endl;
        }
        else if (ips < 2.00)
        {
            cout << "mendapatkan maksimal 18 sks" << endl;
            cout << "tingkatkan terus belajarmu hingga mendapat 24 sks dan ips minimal 3.00" << endl;
        }
        else if (ips < 1.00)
        {
            cout << "mendapatkan maksimal 18 sks" << endl;
            cout << "tingkatkan terus belajarmu hingga mendapat 24 sks dan ips minimal 3.00" << endl;
        }
        else
        {
            cout << "maaf nilai ipk yang anda masukkan salah" << endl;
        }
    }
};
int main()
{
    string nama, nim, jurusan;
    int semester;
    double ips;

    cout << "Masukkan Nama Mahasiswa : ";
    cin >> nama;
    cout << "Masukkan Nim Mahasiswa : ";
    cin >> nim;
    cout << "Masukkan Jurusan Mahasiswa : ";
    cin >> jurusan;
    cout << "Masukkan semester saat ini : ";
    cin >> semester;
    cout << "Masukkan Jumlah Ips : ";
    cin >> ips;

    Mahasiswa *mhs1 = new Mahasiswa(nama, nim, semester, jurusan, ips);
    cout << endl;
    mhs1->DisplayData();
    cout << endl;
    mhs1->SksDidapat(ips);

    return 0;
}