#include <iostream>
#include <string>

using namespace std;

main (){

    // perbandingan string
    string input ("ussup");
    string namarahasia ("ucup");

    while (true){
        cout << "tebak nama : " ; cin >> input;

        if (input == namarahasia){
            cout << "nama benar" << endl;
            break;
        }else {
            cout << "tebakkan anda salah" << endl;
        }


    }

    cout << "program selesai .... " << endl;

}
