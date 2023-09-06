#include <iostream>

using namespace std;


// template fungsi
// fungsi yang dapat mengcover semua tipe data yang di typingkan

template<typename T>
void PrintData (T data){
    cout << data << endl;
}


template<typename T>
int ToInt(T data){
    return int(data);
}

template<typename T, typename U>
T max(T data1, T data2){
    return (data1>data2) ? data1:data2;
}


main (){
    PrintData(5.1444);
    PrintData(10);
    PrintData('c');
    cout << ToInt(5.142313) << endl;

    cout << max(1.3421454, 100.123651) << endl;

    PrintData<int>(10.1235615);

    cout << max<int, float>(121, 123.123651) << endl;

}
