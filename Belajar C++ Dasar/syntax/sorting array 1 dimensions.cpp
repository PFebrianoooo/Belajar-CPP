#include <iostream>
#include <algorithm>

using namespace std;

main (){

    int n ;
cout << "masukkan jumlah data : " ; cin >> n ;
int data [n];
float total;
cout << endl;

for (int i = 1 ; i <= n ; i ++){
   cout << "msukkan data ke - " << i << " = " ; cin >> data [i];
}

cout << endl;
cout << "data belum terurut " ;
cout << endl;
cout << "-------------------" << endl;
cout << "[ ";
for (int i = 1 ; i <= n ; i ++){
    cout << data [i] << " ";
    total += data [i];
}
cout << "]";

cout << endl;
cout << endl;
cout << "data terurut :" << endl;
cout << "-------------" ;
cout << endl;
cout << "[ ";
sort (data ,data + n);
for (int i = 1 ; i <= n ; i ++){
    cout << data[i] << " " ;
}
cout << "]";


cout << endl;
cout << endl;
float rerata = total / n ;
cout << "rata - rata dari nilai diatas adalah : "<< rerata;

cout << endl;



}
