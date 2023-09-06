#include <iostream>
#include <string>

using namespace std;

/* kelas biasa non constructor
class KelasPolos
{
public:
    string DataString;
    int DataInteger;
};
*/

// kelas dengan constructor
class Mahasiswa
{
public:
    string nama;
    string nim;
    string jurusan;
    string alamat;

    // constructor non parameter
    /* Mahasiswa(parameter isinya disini)
     {
         cout << "ini adalah constructor" << endl;
     }
    */

    // constructor dengan parameter
    Mahasiswa(string OutputNama, string OutputNim, string OutputJurusan, string OutputAlamat)
    {
        Mahasiswa::nama = OutputNama;
        Mahasiswa::nim = OutputNim;
        Mahasiswa::jurusan = OutputJurusan;
        Mahasiswa::alamat = OutputAlamat;

        cout << Mahasiswa::nama << endl;
        cout << Mahasiswa::nim << endl;
        cout << Mahasiswa::jurusan << endl;
        cout << Mahasiswa::alamat << endl
             << endl;
    };
};

int main(int argc, char const *argv[])
{
    /*
    KelasPolos kelas1;

    cout << "masukkan  makan : ";
    getline(cin, kelas1.DataString);
    cout << "masukkan minum : ";
    cin >> kelas1.DataInteger;

    cout << kelas1.DataString << endl;
    cout << kelas1.DataInteger << endl;

    */
    string inputnama, inputnim, inputjurusan, inputalamat;

    cout << "Masukkan Nama : ";
    getline(cin, inputnama);
    cout << "Masukkan Nim : ";
    getline(cin, inputnim);
    cout << "Masukkan Jurusan : ";
    getline(cin, inputjurusan);
    cout << "Masukkan Alamat : ";
    getline(cin, inputalamat);
    cout << endl;
    Mahasiswa mahasiswa1 = Mahasiswa(inputnama, inputnim, inputjurusan, inputalamat);

    cout << "Masukkan Nama : ";
    getline(cin, inputnama);
    cout << "Masukkan Nim : ";
    getline(cin, inputnim);
    cout << "Masukkan Jurusan : ";
    getline(cin, inputjurusan);
    cout << "Masukkan Alamat : ";
    getline(cin, inputalamat);
    cout << endl;

    Mahasiswa mahasiswa2 = Mahasiswa(inputnama, inputnim, inputjurusan, inputalamat);

    return 0;
}
