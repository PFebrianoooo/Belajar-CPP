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

// prototype fungsi
int getoption();
void checkdatabase(fstream &data);

void adddatamahasiswa(fstream &data){
    Mahasiswa inputmahasiswa;
    cout << "nama : "; getline (cin ,inputmahasiswa.nama);
    cout << "jurusan : "; getline (cin ,inputmahasiswa.jurusan);
    cout << "nim : "; getline (cin ,inputmahasiswa.nim);
}


main (){
    fstream data;

    void checkdatabase(data);






    int pilihan = getoption();
    char is_continue;

    enum option {CREATE = 1,READ , UPDATE , DELETE , FINISH};

    while(pilihan != FINISH){

    switch (pilihan){
    case CREATE:
        cout << "menambahkan data mahasiswa " << endl;
        adddatamahaasiswa(data);
        break;
    case READ:
        cout << "membaca data mahasiswa " << endl;
        break;
    case UPDATE:
        cout << "mengupdate data mahasiswa " << endl;
        break;
    case DELETE:
        cout << "menhapus data mahasiswa " << endl;
        break;
    case FINISH:
        cout << "menutup program ....... " << endl;
        break;
    default :
        cout << "menu tidak ada" << endl;
        break;
    }

    label_continue:

    cout << "lanjutkan atau tidak (y/n) : "; cin >> is_continue ;
    if (is_continue == ('y') | is_continue == ('Y')){
        pilihan = getoption();
    }else if (is_continue == ('n')| is_continue == ('N')){
        break;
    }else {
        cout << "masukkan Y atau N kakak !!" << endl;
        goto label_continue;
    }

}

cout << "akhir dari program" << endl;
}


// fungsi - fungsi
int getoption (){
    int input;
    system("cls");
    cout << endl;
    cout << "Program CRUD data Mahasiswa" << endl;
    cout << "===========================" << endl;
    cout << "1. Tambah Data Mahasiswa." << endl;
    cout << "2. Tamoilkan Data Mahasiswa." << endl;
    cout << "3. Ubah Data Mahasiswa." << endl;
    cout << "4. Hapus Data Mahasiswa." << endl;
    cout << "5. Exit" << endl;
    cout << "===========================" << endl;


    cout << "masukkan pilihan anda : " ; cin >> input;
    return input;
}

void checkdatabase(fstream &data){
    data.open("data.bin", ios::in | ios::out | ios::binary);

    // check data ada atau tidak

    if (data.is_open()){
        cout << "database ditemukan" << endl;
    }else {
        cout << "database tidak ditemukan , buat database baru" << endl;
        data.close();
        data.open("data.bin" , ios::trunc | ios::out | ios::in | ios::binary);
    }
}




