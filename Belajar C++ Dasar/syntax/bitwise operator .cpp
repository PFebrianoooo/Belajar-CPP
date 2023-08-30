#include <iostream>
#include <bitset>
#include <string>


using namespace std;

void printData (unsigned short val, string nama){
cout << nama << " = " << bitset<8>(val) << endl;

}

main (){
    unsigned short a = 6;
    unsigned short b = 10;
    unsigned short c;


    cout << "bitwise and &" << endl;
    c = a & b;
    printData(a,"a");
    printData(b,"b");
    printData(c,"c");
    cout << "c : " << c << endl;

    cout << endl;
    cout << "bitwise or |" << endl;
    c = a | b;
    printData(a,"a");
    printData(b,"b");
    printData(c,"c");
    cout << "c : " << c << endl;

    cout << endl;
    cout << "bitwise xor ^" << endl;
    c = a ^ b;
    printData(a,"a");
    printData(b,"b");
    printData(c,"c");
    cout << "c : " << c << endl;

    cout << endl;
    cout << "bitwise not ~" << endl;
    c = ~a;
    printData(a,"a");
    printData(c,"c");
    cout << "c : " << c << endl;

    cout << endl;
    cout << "bitwise SHL <<" << endl;
    c = a << 1;
    printData(a,"a");
    printData(c,"c");
    cout << "c : " << c << endl;

    cout << endl;
    cout << "bitwise SHR >>" << endl;
    c = a >> 1;
    printData(a,"a");
    printData(c,"c");
    cout << "c : " << c << endl;

}
