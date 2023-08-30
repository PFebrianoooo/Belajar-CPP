#include <iostream>
#include <string>

using namespace std;

struct siswa {
    string nama;
    float nilai1;
    float nilai2;
    float nilai3;


};

void juara (float n){
    if (n >= 80 ){
        cout << "1";
    }else if (n >= 75){
        cout << "2";
    }else {
        cout << "3";
    }

}


main (){
    siswa siswa1;
    float total;
    float average;

    cout << "nama siswa : "; cin >> siswa1.nama;
    cout << "nilai pertandingan 1 : " ; cin >> siswa1.nilai1;
    cout << "nilai pertandingan 2 : " ; cin >> siswa1.nilai2;
    cout << "nilai pertandingan 3 : " ; cin >> siswa1.nilai3;

    total = siswa1.nilai1 + siswa1.nilai2 + siswa1.nilai3 ;
    average = total / 3;

    cout << "siswa yang bernama " << siswa1.nama << endl;
    cout << "memperoleh nilai rata-rata " << average << " dan menjadi juara ke-" ; juara(average) ;
    cout << " dari hasil perlombaan yang diikutinya ." << endl;




}
