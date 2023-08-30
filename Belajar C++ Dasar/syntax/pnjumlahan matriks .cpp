#include <iostream>

using namespace std;

main (){
    int baris , kolom;
    int total ;

cout << "masukkan jumlah baris : " ; cin >> baris;
cout << "masukkan jumlah kolom : " ; cin >> kolom;
int data [10][10];

for (int i = 0 ; i < baris ; i ++){
    for (int j = 0 ; j < kolom ; j++){
       cout << "masukkan elemen pada indeks [" << i << "]" << " [" << j << "]" << "= " ; cin >> data [i][j];
    }
}

cout <<endl;
for (int i = 0 ; i < baris ; i ++){
        cout << "[ ";
    for (int j = 0 ; j < kolom ; j++){
       cout << data [i][j]  << " ";
    }
    cout << "]";
    cout << endl;
}

cout << endl;


for (int i = 0 ; i < baris ; i ++){
        cout << "[ ";
    for (int j = 0 ; j < kolom ; j++){
        if (i == j){
        total *= data [i][j];
            cout << data [i][j] << " ";

        }else {
            cout << "- ";
        }
    }
    cout << "]";
    cout << endl;
}



cout << "hasil penjumlahan matriks diagonal : " << total << endl;





}
