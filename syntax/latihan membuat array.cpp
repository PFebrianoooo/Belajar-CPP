#include <iostream>
#include <array>

using namespace std;

int main (){
array<int , 10> nilai;

cout << "program menampilkan grafik nilai" << endl << endl;

for (int i = 0 ; i <= nilai.size() ;i++){
    cout << "jumlah mahasiswa dengan nilai ";
    if (i == 0 ){ // cout awal pada indeks 1
        cout << " 0-9     : ";
    }else if (i == 10){ // batas akhir nilai 100 (indeks ke 10)
    cout <<  " 100     : " ;

    }else{ // looping untuk 2-9 (indeks ke-2-9)
    cout << i*10 << " - " << (i*10) + 9 << "  : ";
    }
    cin >>nilai [i];
}

// loopig untuk mengeluarkan nilai array
for (int i = 0 ; i <= nilai.size(); i ++ ){
    if (i == 0 ){ // cout awal pada indeks 1
        cout << " 0-9     : ";
    }else if (i == 10){ // batas akhir nilai 100 (indeks ke 10)
    cout <<  " 100     : " ;
    }else{ // looping untuk 2-9 (indeks ke-2-9)
    cout << i*10 << " - " << (i*10) + 9 << "  : ";
    }
    for (int c = 0 ; c < nilai[i] ; c ++){
        cout << "*";
    }
    cout << endl;
}

return 0;
}


