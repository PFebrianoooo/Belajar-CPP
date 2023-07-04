#include <iostream>
#include <string>

using namespace std;

struct aktor {
    string nama;
    int tahun_lahir;

};

struct film{
    string judul;
    string genre;
    int tahun_rilis;
    aktor pemeran_1;
    aktor pemeran_2;
};

main (){
    aktor aktor_1 , aktor_2;
    film film_1 ;

    // aktor 1
    aktor_1.nama = ("michael");
    aktor_1.tahun_lahir = 1991 ;

    // aktor 2
    aktor_2.nama = ("pelupessi");
    aktor_2.tahun_lahir = 1980 ;



    // film
    film_1.judul = ("hati-hati dijalan");
    film_1.genre = ("romance");
    film_1.tahun_rilis = 2012;
    film_1.pemeran_1 = aktor_1;
    film_1.pemeran_2 = aktor_2;

    cout << film_1.judul << endl;
    cout << film_1.genre << endl;
    cout << film_1.tahun_rilis << endl;
    cout << film_1.pemeran_1.nama << endl;
    cout << film_1.pemeran_1.tahun_lahir << endl;
    cout << film_1.pemeran_2.nama << endl;
    cout << film_1.pemeran_2.tahun_lahir << endl;






}
