#include <iostream>
#include <string>
#include <fstream>
#include <limits>

using namespace std;

struct Mahasiswa
{
    int pk;
    string nim;
    string nama;
    string jurusan;
};

// prototype function
int getoptions();
void check_database(fstream &data);
void writedata(fstream &data, int posisi, Mahasiswa &inputmahasiswa);
int getdatasize(fstream &data);
Mahasiswa readdata(fstream &data, int posisi);
void adddatamahasiswa(fstream &data);
void displaydatamahasiswa(fstream &data);
void updaterecord(fstream &data);
void deleterecord(fstream &data);



int main()
{

    fstream data;
    // mengecek database ada atu tidak ada
    check_database(data);

    // menu starts
    char is_continue;
    int useroptions = getoptions();

    enum options
    {
        Tambah = 1,
        Tampil,
        Ubah,
        Hapus,
        Finish
    };

    while (useroptions != Finish)
    {

        switch (useroptions)
        {
        case Tambah:
            cout << "Tambah Data mahasiswa" << endl;
            adddatamahasiswa(data);
            break;
        case Tampil:
            cout << "Tampilkan Data Mahasiswa" << endl;
            displaydatamahasiswa(data);
            break;
        case Ubah:
            cout << "Ubah Data Mahasiswa" << endl;
            displaydatamahasiswa(data);
            updaterecord(data);
            displaydatamahasiswa(data);
            break;
        case Hapus:
            cout << "Hapus Data Mahasiswa" << endl;
            displaydatamahasiswa(data);
            deleterecord(data);
            displaydatamahasiswa(data);
            break;
        default:
            cout << "maaf menu tidak ada !!!!" << endl;
        }

    label_continue:

        cout << "\nlanjutkan (y/n) : ";
        cin >> is_continue;
        if ((is_continue == 'y') | (is_continue == 'Y'))
        {
            useroptions = getoptions();
        }
        else if ((is_continue == 'n') | (is_continue == 'N'))
        {
            break;
        }
        else
        {
            goto label_continue;
        }
        // menu ends
    }
}

// fungsi - fungsi

int getoptions()
{
    int input;
    system("cls");
    cout << "=========== Program CRUD Data Mahasiswa ===========" << endl;
    cout << "===================================================" << endl;
    cout << "1. Tambah data Mahasiswa" << endl;
    cout << "2. Tampilkan data Mahasiswa" << endl;
    cout << "3. Ubah data Mahasiswa" << endl;
    cout << "4. Hapus data Mahasiswa" << endl;
    cout << "5. Selesai" << endl;
    cout << "===================================================" << endl;

    cout << "silahkan pilih menu : ";
    cin >> input;
    cout << endl;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return input;
}

void check_database(fstream &data)
{
    data.open("data.bin", ios::in | ios::out | ios::binary);

    // check file ada atau tidak

    if (data.is_open())
    {
        cout << "Data ditemukan !!!!" << endl;
    }
    else
    {
        cout << "data tidak ada, buat database baru !!!! " << endl;
        data.close();
        data.open("data.bin", ios::in | ios::out | ios::binary | ios::trunc);
    }
}

void writedata(fstream &data, int posisi, Mahasiswa &inputmahasiswa)
{
    data.seekp((posisi - 1) * sizeof(Mahasiswa), ios::beg);
    data.write(reinterpret_cast<char*>(&inputmahasiswa), sizeof(Mahasiswa));
}

int getdatasize(fstream &data)
{
    int memulai, mengakhiri;

    data.seekg(0, ios::beg);
    memulai = data.tellg();
    data.seekg(0, ios::end);
    mengakhiri = data.tellg();

    return (mengakhiri - memulai) / sizeof(Mahasiswa);
}

Mahasiswa readdata(fstream &data, int posisi)
{
    Mahasiswa readmahasiswa;

    data.seekg((posisi - 1) * sizeof(Mahasiswa), ios::beg);
    data.read(reinterpret_cast<char*>(&readmahasiswa), sizeof(Mahasiswa));

    return readmahasiswa;
}

void adddatamahasiswa(fstream &data)
{

    Mahasiswa inputmahasiswa, lastmahasiswa;

    int ukuranData = getdatasize(data);

    cout << "ukuran data : " << ukuranData << endl;

    if (ukuranData == 0)
    {
        inputmahasiswa.pk = 1;
    }
    else
    {
        lastmahasiswa = readdata(data, ukuranData);
        cout << "pk : " << lastmahasiswa.pk << endl;

        inputmahasiswa.pk = lastmahasiswa.pk + 1;
    }


    cout << "Nama : ";
    getline(cin, inputmahasiswa.nama);
    cout << "Jurusan : ";
    getline(cin, inputmahasiswa.jurusan);
    cout << "Nim : ";
    getline(cin, inputmahasiswa.nim);

    writedata(data,ukuranData+1, inputmahasiswa);
}

void displaydatamahasiswa(fstream &data)
{
    int ukuran = getdatasize(data);
    Mahasiswa showmahasiswa;

    cout << "No.\tPk.\tNim.\tNama.\tJurusan." << endl;

    for (int i = 1; i <= ukuran; i++)
    {
        showmahasiswa = readdata(data, i);
        cout << i << "\t";
        cout << showmahasiswa.pk << "\t";
        cout << showmahasiswa.nim << "\t";
        cout << showmahasiswa.nama << "\t";
        cout << showmahasiswa.jurusan << endl;
    }
}

void updaterecord(fstream &data){
    int nomor ;
    Mahasiswa updatemahasiswa;

    cout << "pilih No : " ; cin >> nomor;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    updatemahasiswa = readdata(data, nomor);

    cout << "\n\npilihan data : " << endl;
    cout << updatemahasiswa.nim << endl;
    cout << updatemahasiswa.nama << endl;
    cout << updatemahasiswa.jurusan << endl;

    cout << "\nmerubah data" << endl;
    cout << "Nim : " ;
    getline(cin , updatemahasiswa.nim);
    cout << "nama : ";
    getline(cin , updatemahasiswa.nama);
    cout << "jurusan : ";
    getline(cin , updatemahasiswa.jurusan);

    writedata(data,nomor,updatemahasiswa);
}

void deleterecord(fstream &data){

    int nomor , ukuran, offset;
    Mahasiswa blankmahasiswa , temporarymahasiswa;
    fstream datasementara;


    ukuran = getdatasize(data);

// 1. pilih nomor
cout << "hapus nomor : "; cin >> nomor ;
// 2. di posisi ini diisi dengan data kosong
writedata(data,nomor,blankmahasiswa);
// 3. kita cek data yang ada di file data.bin kalo ada dipindahkan ke file sementara
datasementara.open("temp.dat", ios::trunc|ios::out|ios::in|ios::binary);

offset = 0;
for (int i = 1 ; i <= ukuran ; i ++){
    temporarymahasiswa=readdata(data,i);

    if (!temporarymahasiswa.nama.empty()){
        writedata(datasementara,i - offset,temporarymahasiswa);
    }else{
        offset ++;
        cout << "deleted data " << endl;
    }
}
// 4. kita pindahkan data file sementara ke data.bin

ukuran = getdatasize(datasementara);
data.close();

data.open("data.bin", ios::trunc|ios::binary|ios::out);
data.close();
data.open("data.bin",ios::out|ios::in|ios::binary);

for (int i = 1 ; i <= ukuran ; i ++){
    temporarymahasiswa = readdata(datasementara,i);
    writedata(data,i,temporarymahasiswa);
}
}
