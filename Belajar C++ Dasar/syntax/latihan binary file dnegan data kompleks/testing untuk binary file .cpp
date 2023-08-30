#include <iostream>
#include <fstream>
#include <string>

using namespace std ;


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

void MenulisData (Mahasiswa &data , fstream &myFile){
    myFile.write (reinterpret_cast <char*> (&data), sizeof(Mahasiswa));

}

void MenulisDataByPos(int posisi , Mahasiswa buffer , fstream myFile){
    myFile.seekg(posisi * sizeof(Mahasiswa));
    myFile.write(reinterpret_cast <char*> (&buffer) , sizeof(Mahasiswa));

}


main (){
    fstream myFile;

    myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);

    Mahasiswa Mahasiswa1, Mahasiswa2, Mahasiswa3, outputan;

    Mahasiswa1.NIM = 135;
    Mahasiswa1.nama = "jundi";
    Mahasiswa1.jurusan = "memasak";

    Mahasiswa2.NIM = 246;
    Mahasiswa2.nama = "abdul";
    Mahasiswa2.jurusan = "mewarnai";

    Mahasiswa3.NIM = 123;
    Mahasiswa3.nama = "muthalib";
    Mahasiswa3.jurusan = "informatika";

    MenulisData (Mahasiswa1 , myFile);
    MenulisData (Mahasiswa2 , myFile);
    MenulisData (Mahasiswa3 , myFile);


    Mahasiswa1.nama = "mario";
    MenulisDataByPos(0, Mahasiswa1 ,myFile)

    outputan = AmbilData(0 , myFile);

    cout << outputan.NIM << endl;
    cout << outputan.nama << endl;
    cout << outputan.jurusan << endl;

    myFile.close();





}
