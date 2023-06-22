#include <iostream>
using namespace std;

main (){
	int n;
	int pilihan;
	int i;
	cout << "masukkan banyak data : "; cin >> n;
	
	cout << "pilihlah angka yang akan di tampilkan" << endl;
	cout << "[1] ganjil" << endl;
	cout << "[2] genap" << endl;
	
	cout << "pilihan = "; cin >> pilihan;
	
	switch (pilihan){
		case 1 :{
			cout << "[ ";
			for (i=1; i<=n ; i+= 2){
			cout << i << " ";	
			}
			cout << "]";
			break;
		}
		case 2 : {
			cout << "[ ";
			for (i=2 ;i<=n ; i+=2){
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
