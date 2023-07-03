#include <iostream>
#include <string>

using namespace std;

main (){

    string kata ("cat");

    // menampilkan data string
    cout << kata << endl;

    // mengambil karakter berdasarkan indeks
    cout << "kata pada indeks  ke-0 = "  << kata [0] << endl;
    cout << "kata pada indeks  ke-1 = "  << kata [1] << endl;
    cout << "kata pada indeks  ke-2 = "  << kata [2] << endl;

    // merubah kata pada indeks
    kata[1] = 'e';
    cout << kata << endl;

    // menyambung character dengan kata yang baru
    string kata2 (kata + "ar ");
    cout << kata2 << endl;

    string kata3 ("membahana ");
    kata2.append(kata3);

    cout << kata2 << endl;

    string kata4 ("ahayy !!!!!");
    kata2 += kata4;

    cout << kata2 << endl;


}
