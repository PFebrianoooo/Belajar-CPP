#include <iostream>
#include <string>

using namespace std;

main (){
    string kalimat_1 ("aku suka kamu suka siapa dia ");
    string kalimat_2 ("wakanda forever");

    cout << "1. " << kalimat_1 << endl;
    cout << "2. " <<kalimat_2 << endl;

    // swap string
    cout << endl << "swap string " << endl;
    kalimat_1.swap(kalimat_2);

    cout << "kalimat swap 1 : "<< kalimat_1 << endl;
    cout << "kalimat swap 2 : "<< kalimat_2 << endl;

    // replace atau mengganti string
    kalimat_2.replace (24 , 4 , " nabi dan rasul");
    cout << "kalimat replace : " << kalimat_2 << endl;

    kalimat_1.replace(8 , 7 , "selamanya");
    cout << "kalimat replace : " << kalimat_1 << endl;

    int posisi = kalimat_1.find("anya");
    kalimat_1.replace(posisi,4 , " laut");
    cout << kalimat_1 << endl;

    // insert
    kalimat_1.insert(8 , "dan hatiku menyelam ");
    cout << kalimat_1 << endl;





    return 0 ;
}
