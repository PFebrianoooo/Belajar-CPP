#include <iostream>

using namespace std;


union data {
    int a ;
    char b[4];


};

main (){

    data data_union;

    data_union.a = 10 ;

    cout << "data a : " << data_union.a << endl;
    cout << "data b : " << data_union.b << endl;

    data_union.b[0] = 'a';
    data_union.b[1] = 'b';
    data_union.b[2] = 'c';
    data_union.b[3] = 'd';

    cout << "data a : " << data_union.a << endl;
    cout << "data b : " << data_union.b << endl;




}
