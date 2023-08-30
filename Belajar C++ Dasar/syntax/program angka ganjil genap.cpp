#include <iostream>
using namespace std;

main (){
	int n;
	int pilihan;
	int i;
	int  haya;
	cout << "masukkan banyak data : "; cin >> haya;

	cout << "pilihlah angka yang akan di tampilkan" << endl;
	cout << "[1] ganjil" << endl;
	cout << "[2] genap" << endl;
	cout << endl;

	cout << "pilihan = "; cin >> pilihan;
	cout << endl;

	switch (pilihan){
		case 1 :{
		    cout << "menampilkan angka ganjil  :" << endl;
			cout << "[ ";
			for (i=1; i<=haya ; i+= 2){
			cout << i << " ";
			}
			cout << "]";
			break;
		}
		case 2 : {
			cout << "[ ";
			for (i=2 ;i<=haya ; i+=2){
			cout << i << " ";
		}
		cout << "]";
			break;
		}
		default : {
			cout << "menu tidak ada !";
			cout << endl;
			cout << endl << "menutup program .......";
			break;
		}
	}
}
