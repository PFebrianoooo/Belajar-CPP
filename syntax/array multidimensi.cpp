#include <iostream>
#include <array>

using namespace std;

void printArray(int *ptrarray, int baris , int kolom) {
    int indeks = 0 ;
    for (int i = 0 ; i < baris ; i ++){
            cout << "[ ";
        for (int j = 0 ; j < kolom ; j ++){

            cout << *(ptrarray + indeks) << " ";
            indeks ++;
        }
        cout << "]" ;
        cout << endl;
    }
}
main (){

    //multidimensional array

    const int baris = 5;
    const int kolom = 3;
    int arrayMd [baris][kolom] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
   printArray (*arrayMd ,baris ,kolom);
return 0;
}
