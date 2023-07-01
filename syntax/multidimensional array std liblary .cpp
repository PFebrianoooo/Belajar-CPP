#include <iostream>
#include   <array>

using namespace std;

const int baris = 3;
const int kolom = 2;

// prototype function
void printArray (array  < array < int , kolom > , baris > nilaiArray);


main (){

    array  < array < int , kolom > , baris > arrayMD = {1,2,3,4,5,6};
    printArray (arrayMD);

}

// fungsi
void printArray (array  < array < int , kolom > , baris > nilaiArray){
    for (array < int ,kolom> vectorBaris :  nilaiArray){
        cout << "[ ";
        for (int nilaiKolom : vectorBaris){
        cout << nilaiKolom << " ";
    }
    cout << "]" << endl;
    }
}
