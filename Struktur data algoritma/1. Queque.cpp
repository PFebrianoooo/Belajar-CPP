#include <iostream>
#include <algorithm>

using namespace std;

main (){
    int total;
    int items ;
    cout << "masukkan data yang anda mau : " ; cin >> items;

    int arrays[50];

    for (int i = 0 ; i < items ; i ++){
        cin >> arrays[i];
        total += arrays[i];
    }
    for (int i = 0 ; i < items ; i ++){
        cout << arrays[i];
    }

    // sorting









}
