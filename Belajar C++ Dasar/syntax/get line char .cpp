#include <iostream>

using namespace std;

main (){
    string kalimat_input ;

    // get line character

    cout << "masukkan kalimat anda : " ;
    getline (cin , kalimat_input);
    cout << "input kalimat anda : "  << kalimat_input << endl;

    // jumlah kata dari input
    int posisi = 0 ;
    int jumlah = 0 ;


    while (true){
        posisi = kalimat_input.find (" " , posisi + 1);
             jumlah ++ ;
             if (posisi < 0 ){
                break;
             }
        }

        cout << "jumlah kata : " << jumlah << endl;

}
