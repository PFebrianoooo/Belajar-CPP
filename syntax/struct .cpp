#include <iostream>
#include <string>

using namespace std;

struct buah {
    string warna;
    float berat;
    int harga;
    string rasa;

};


main (){

    buah apel;
    apel.warna = ("merah");
    apel.berat = 2.50;
    apel.harga = 200000;
    apel.rasa = ("asam dan manis");


    cout << apel.warna << endl;
    cout << apel.berat << endl;
    cout << apel.harga << endl;
    cout << apel.rasa << endl;

    buah jeruk;
    jeruk.warna = ("orange");
    jeruk.berat = 1.50;
    jeruk.harga = 15000;
    jeruk.rasa = ("manis");

    cout << jeruk.warna << endl;
    cout << jeruk.berat << endl;
    cout << jeruk.harga << endl;
    cout << jeruk.rasa << endl;

}
