#include <iostream>
#include <fstream>
#include <string>

using namespace std;

main (){

    ifstream myFile;
    string data, buffer;
    bool isdata = false;
    int no, jumlah_data =0;
    string nama;

    myFile.open ("data1.txt", ios::in);

    while (!isdata){
        getline(myFile, buffer);
    data.append("\n" + buffer);

    if (buffer == "data"){
        break;
    }
    }

    cout << data << endl;

    getline (myFile , buffer);
    cout << buffer << endl;

    while (!myFile.eof()) {
            myFile >> no;
            myFile >> nama;

            cout << no << "  " << nama  << endl;
            jumlah_data ++;

    }


    cout << "\njumlah data adalah : " << jumlah_data << endl;








}
