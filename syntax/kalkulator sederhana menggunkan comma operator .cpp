#include <iostream>

using namespace std;

int pil;
float a , b, c;
main (){
cout << " <<<<<<<<<<< menu kaklulator sederhana <<<<<<<<<<< " << endl;
cout << "[1] pertambahan" << endl;
cout << "[2] pengurangan" << endl;
cout << "[3] perkalian" << endl;
cout << "[4] pembagian" << endl;

while (true) {
        cout << endl;
cout << "masukkan pilihan anda : " ; cin >> pil;

switch (pil) {

case 1:

    cout << "masukkan angka pertama : " ; cin >> a ;
    cout << "masukkan angka kedua : " ; cin >> b ;

    c = (a , b , (a+b));

    cout << "hasilnya adalah : " << c << endl;

    break;
case 2:
    cout << "masukkan angka pertama : " ; cin >> a ;
    cout << "masukkan angka kedua : " ; cin >> b ;

    c = (a , b , (a-b));

    cout << "hasilnya adalah : " << c << endl;
    break;
case 3:
    cout << "masukkan angka pertama : " ; cin >> a ;
    cout << "masukkan angka kedua : " ; cin >> b ;

    c = (a , b , (a*b));

    cout << "hasilnya adalah : " << c << endl;
    break;
case 4:
    cout << "masukkan angka pertama : " ; cin >> a ;
    cout << "masukkan angka kedua : " ; cin >> b ;

    c = (a , b , (a/b));

    cout << "hasilnya adalah : " << c << endl;
    break;

    default : cout << "maaf menu tidak ada ";
}

}

}
