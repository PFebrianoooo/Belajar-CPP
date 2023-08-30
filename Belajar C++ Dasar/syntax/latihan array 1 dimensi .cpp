#include <iostream>
#include <iomanip>

using namespace std;


main (){
    int jml;
    string data[10]; // perlu diperharikan lebih lanjut
cout << "masukkan jumlah mahasiswa : " ; cin >> jml ;

cout << endl;

for (int i = 1 ; i <= jml ; i ++){
    cout << "masukkan nama mahasiswa ke - " << i << " = " ;cin >> data [i];
}
cout << endl;
cout << "data mahasiswa : ";
cout << endl;
for (int i = 1 ; i <= jml ; i ++){
    cout << i << ". " <<  data [i] << endl;

}

return 0 ;
}


