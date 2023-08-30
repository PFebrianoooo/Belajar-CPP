#include <iostream>
#include <string>
using namespace std;

struct siswa {
    long nim;
    string nama ;
    float tugas1;
    float tugas2;
    float tugas3;
};


main (){
    siswa siswa1;
    float average;

    cout << "nim siswa : " ; cin >> siswa1.nim ;
    cout << "nama siswa : " ; cin >> siswa1.nama ;
    cout << "nilai tugas 1 : " ; cin >> siswa1.tugas1 ;
    cout << "nilai tugas 2 : " ; cin >> siswa1.tugas2 ;
    cout << "nilai tugas 3 : " ; cin >> siswa1.tugas3 ;

    float total;
    total = siswa1.tugas1 + siswa1.tugas2 + siswa1.tugas3;
    average = total / 3 ;


    cout << "nim " << siswa1.nim << " siswa yang bernama " << siswa1.nama << " memperoleh nilai rata rata " << average << " dari hasil tugas yang diikutinya ." << endl;








}
