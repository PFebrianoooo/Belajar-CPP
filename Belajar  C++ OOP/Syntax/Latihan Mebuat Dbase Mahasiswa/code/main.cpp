#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Mahasiswa
{
public:
    string Nama;
    string Nim;
    string Jurusan;
    string Tahun;

    Mahasiswa(string nama, string nim, string tahun, string jurusan)
    {
        this->Nama = nama;
        this->Nim = nim;
        this->Jurusan = jurusan;
        this->Tahun = tahun;
    }

    string Striginify()
    {
        return "\n" + Nama + " " + Nim + " " + Tahun + " " + Jurusan;
    }
};

class Dbase
{
public:
    ifstream In;
    ofstream Out;
    string Filename;

    Dbase(const char *FileName)
    {
        this->Filename = FileName;
    }

    void Save(Mahasiswa data)
    {
        this->Out.open(Dbase::Filename, ios::app);
        this->Out << data.Striginify();
        this->Out.close();
    }

    void ShowAll()
    {
        this->In.open(Dbase::Filename, ios::in);
        string nama, nim, jurusan, tahun;
        int index = 1;

        cout << "No."
             << "\t"
             << "Nama"
             << "\t"
             << "Nim"
             << "\t"
             << "Tahun"
             << "\t"
             << "jurusan" << endl;
        while (!Dbase::In.eof())
        {
            this->In >> nama;
            this->In >> nim;
            this->In >> tahun;
            this->In >> jurusan;

            cout << index << "."
                 << "\t" << nama << "\t" << nim << "\t" << tahun << "\t" << jurusan << "\t";

            cout << endl;

            index++;
        }

        Dbase::In.close();
    }
};

int main()
{
    while (true)
    {
        Dbase file = Dbase("data.txt");

        cout << "\n=================== Data Mahasiswa ===================" << endl;
        // show data
        file.ShowAll();
        cout << endl;

        // user input
        string Nama, Nim, Jurusan, Tahun;
        cout << "Masukkan Data Mahasiswa" << endl;
        cout << "Nama : ";
        cin >> Nama;
        cout << "Nim : ";
        cin >> Nim;
        cout << "Tahun angkatan : ";
        cin >> Tahun;
        cout << "Jurusan : ";
        cin >> Jurusan;

        // membuat objek yang diperlukan
        Mahasiswa data1 = Mahasiswa(Nama, Nim, Tahun, Jurusan);

        // save data ke database
        file.Save(data1);
        cout << endl;
    }
    return 0;
}
