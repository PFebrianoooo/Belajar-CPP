#include <iostream>
#include <fstream>
#include <string>

using namespace std;

main (){
    fstream myFile;
    int hasil ;

    myFile.open("data1.bin", ios::in | ios::binary);

    myFile.read(reinterpret_cast<char*> (&hasil), sizeof(hasil));

    cout << "besar integer : " << sizeof(hasil) << endl;
    cout << hasil << endl;

}

/*
fstream myFile;
    int a = 12345;
    myFile.open("data1.bin" , ios::out | ios::binary);

    myFile.write(reinterpret_cast<char*>(&a), sizeof(a));

    myFile.close();


    return 0;

    */
