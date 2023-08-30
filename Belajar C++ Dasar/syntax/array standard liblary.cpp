#include <array>
#include <iostream>

using namespace std;

int jml;

main (){
array <int , 5 > nilai;
for (int i = 0 ; i < 5 ; i ++){
    cout << "nilai i " << "[" << i << "]" << "= "; cin >> jml;

}

cout << "ukuran dari array adalah = " << nilai.size() << endl;
cout << "adress awal dari array adalah = " << nilai.begin() << endl;
cout << "adress akhir dari array adalah = " << nilai.end() << endl;
cout << "nilai ke 2 adalah = " << nilai.at(2) << endl;

}
