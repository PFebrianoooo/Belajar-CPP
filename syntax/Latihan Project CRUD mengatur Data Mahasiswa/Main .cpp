#include <iostream>
#include <string>
#include <fstream>

using namespace std;


struct Mahasiswa {
    int pk;
    string nim;
    string nama;
    string jurusan;
};

// prototype function
int getoptions();
void check_database(fstream &data);
void writedata(fstream &data, int posisi , Mahasiswa &inputmahasiswa);
int getdatasize(fstream &data);
Mahasiswa readdata (fstream &data , int posisi);
void adddatamahasiswa (fstream &data);
void displaydatamahasiswa (fstream &data);


int main (){

    fstream data ;
    // mengecek database ada atu tidak ada
    check_database(data);

    // menu starts
    char is_continue;
    int useroptions = getoptions();

    enum options {Tambah = 1 , Tampil , Ubah , Hapus , Finish};

    while (useroptions != Finish){

        switch(useroptions){
    case Tambah :
        cout << "Tambah Data mahasiswa" << endl;
        adddatamahasiswa(data);
        break;
    case Tampil :
        cout << "Tampilkan Data Mahasiswa" << endl;
        displaydatamahasiswa(data);
        break;
    case Ubah :
        cout << "Ubah Data Mahasiswa" << endl;
        break;
    case Hapus :
        cout << "Hapus Data Mahasiswa" << endl;
        break;
    default :
        cout << "maaf menu tidak ada !!!!" << endl;
        }

        label_continue:

        cout << "\nlanjutkan (y/n) : "; cin >> is_continue;
        if ((is_continue == 'y') | (is_continue == 'Y')){
            useroptions = getoptions();
        }else if ((is_continue == 'n') | (is_continue == 'N')){
            break;
        }else {
            goto label_continue;
        }
        // menu ends

    }

}






// fungsi - fungsi

int getoptions (){
    int input ;
    system("cls");
    cout << "=========== Program CRUD Data Mahasiswa ===========" << endl;
    cout << "===================================================" << endl;
    cout << "1. Tambah data Mahasiswa" << endl;
    cout << "2. Tampilkan data Mahasiswa" << endl;
    cout << "3. Ubah data Mahasiswa" << endl;
    cout << "4. Hapus data Mahasiswa" << endl;
    cout << "5. Selesai" << endl;
    cout << "===================================================" << endl;

    cout << "silahkan pilih menu : " ; cin >> input;
    cout << endl;

    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return input;

}

void check_database(fstream &data) {
data.open("data.bin" , ios::in | ios::out | ios::binary);

    // check file ada atau tidak

    if (data.is_open()){
        cout << "data ada" << endl;
    }else {
        cout << "data tidak ada, buat database baru !!!! " << endl;
        data.close();
        data.open("data.bin" , ios::in | ios::out | ios::binary | ios::trunc);
    }

}

void writedata(fstream &data, int posisi , Mahasiswa &inputmahasiswa){
    data.seekp((posisi = 1 )*sizeof(inputmahasiswa), ios::beg);
    data.write(reinterpret_cast<char*>(&inputmahasiswa),sizeof(Mahasiswa));

}

int getdatasize(fstream &data){
    int start , end;

    data.seekg(0, ios::beg);
    start = data.tellg();
    data.seekg(0, ios::end);
    end = data.tellg();

    return (end - start) / sizeof(Mahasiswa);
}


Mahasiswa readdata (fstream &data , int posisi){
    Mahasiswa readmahasiswa;

    data.seekg((posisi - 1 )*sizeof(Mahasiswa), ios::beg);
    data.read(reinterpret_cast<char*> (&readmahasiswa), sizeof(Mahasiswa));
    return readmahasiswa;
}

void adddatamahasiswa (fstream &data){

    Mahasiswa inputmahasiswa , lastmahasiswa;

    int size = getdatasize(data);

    cout << "ukuran data : " << size << endl;


    if (size == 0){
        inputmahasiswa.pk = 1 ;
    }else {
        lastmahasiswa = readdata(data,size);
        cout << "pk : " << lastmahasiswa.pk << endl;
        inputmahasiswa.pk = lastmahasiswa.pk + 1;
    }

    //readdata(data, size);

    cout << "Nama :";
    getline (cin , inputmahasiswa.nama);
     cout << "Jurusan :";
    getline (cin , inputmahasiswa.jurusan);
     cout << "Nim :";
    getline (cin , inputmahasiswa.nim);

    writedata(data,size+1 , inputmahasiswa);
}

void displaydatamahasiswa (fstream &data){
    int size = getdatasize(data);
    Mahasiswa showmahasiswa ;

    cout << "No.\tPk.\tNim.\tNama.\tJurusan" << endl;

    for (int i = 1 ; i <= size; i ++){
        showmahasiswa = readdata(data,i);
        cout << i << "\t";
        cout << showmahasiswa.pk << "\t";
        cout << showmahasiswa.nim << "\t";
        cout << showmahasiswa.nama << "\t";
        cout << showmahasiswa.jurusan << endl;

    }
}

