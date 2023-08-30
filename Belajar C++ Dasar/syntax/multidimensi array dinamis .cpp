#include <iostream>

using namespace std;

main (){

    int i , j ;
    string data [20] [20];

    cout << "masukkan baris array : " ; cin >> i;
    cout << "masukkan kolom array : " ; cin >> j;

    for (int k = 0 ; k < i ; k ++){
        for (int l = 0 ; l < j ; l ++){
            cout << "masukkan nama anggota indeks ke " << "[" << k << "]" << "[" << l << "]" << " = " ;cin >> data [k][l];

        }
    }
    cout << endl;
    cout << "data anggota : " << endl;
    cout << endl;
    cout << "[ ";
    for (int k = 0 ; k < i ; k ++){
        if (k >= 1){
            cout << "[ ";
        }
        for (int l = 0 ; l < j ; l ++){
            cout << " " <<data [k][l] << " ";

        }
        cout << " ]";
        cout << endl;
    }



}
