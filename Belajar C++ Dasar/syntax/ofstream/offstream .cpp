#include <iostream>
#include <fstream>
// ifstream ofstream fstream

using namespace std;

main (){
    ofstream myFile;

    // my file adalah object dimana kelasnya adalah ofstream
    // ada 3 mode
    /*1. ios::out : default, digunakan untuk operasi output
      2. ios::app : menuliskan pada akhir baris
      3. ios::trunc : default, membuat file jika tidak ada maka jika ada akan lamanya dihapus.
    */

    myFile.open("data3.txt", ios::app); // append
    myFile << "\n ini adalah penulisan pada file ke-3 \n";
    myFile << "tambahan tulisan ke -2 file ke-3";
    myFile.close();

    int a = 13579;
    float b = 3.14;
    myFile.open("data1.txt", ios::out);
    myFile << "ini adalah penulisan pada data ke-1\n";
    myFile << a << "\n" ;
    myFile << b;

    myFile.close();

    myFile.open("data2.txt", ios::trunc);
    myFile << "ini adalah penulisan pada file ke-2";
    myFile.close();











}
