#include <iostream>
#include <string>
using namespace std;

main (){

    string kalimat_1 ("dayat suka olahraga agar sehat");
    string kalimat_2 ("ucup suka makan pisang dipagi hari");

    cout << "1. " << kalimat_1 << endl;
    cout << "2. " << kalimat_2 << endl;

    // mengambil string ditengah tengah
    // substr (indeks , panjang)
    cout << kalimat_1.substr(11, 8) << endl;
    cout << kalimat_2.substr(16, 6) << endl;


    // mencari posisi dari substring
    cout <<"posisi kata olahraga = "<< kalimat_1.find ("olahraga") << endl;
    cout << "posisi kata pisang = " << kalimat_2.find ("pisang") << endl;


    int a = kalimat_1.find("a");
    cout << a << endl;
    cout << kalimat_1.find ("a", a + 1) << endl;

    // mencari posisinya dari belakang
     cout << kalimat_2.rfind ("an") << endl;






}

