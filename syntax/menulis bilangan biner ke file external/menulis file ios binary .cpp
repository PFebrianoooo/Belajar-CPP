#include <iostream>
#include <fstream>
#include <string>

using namespace std;

main (){
    int number = 125;
    fstream myFile;
    myFile.open ("data.bin", ios::out | ios::binary);

    myFile.write(reinterpret_cast<char*>(&number),sizeof(number));

    myFile.close();
    return 0;
}
