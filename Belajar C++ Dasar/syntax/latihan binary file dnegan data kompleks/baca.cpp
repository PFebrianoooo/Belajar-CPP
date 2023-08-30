#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mahasiswa{
int NIM;
string nama;
string jurusan;
};

Mahasiswa AmbilData(int &posisi, fstream &myFile){
    Mahasiswa buffer;

    myFile.seekp(posisi*sizeof(Mahasiswa));
    myFile.read(reinterpret_cast <char*> (&buffer) , sizeof(Mahasiswa));

    return buffer;

}

main (){
    fstream myFile;
    Mahasiswa Baca;


    myFile.open("data.bin" , ios::in | ios::binary);
    int posisi = 0;
    Baca = AmbilData(posisi, myFile);
    cout << Baca.NIM << endl;
    cout << Baca.nama << endl;
    cout << Baca.jurusan << endl;


    myFile.close();




}
