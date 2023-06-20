#include <iostream>
using namespace std;

main(){
	int menu_dipilih;
	int a;
	float b;
	int hasil;

	cout << "========== program aritmatika ==========" << endl;
	cout << endl;
	
	cout << "pilih menu untuk memproses inputanmu !" << endl;
	cout << "[1] penjumlahan" << endl;
	cout << "[2] pengurangan" << endl;
	cout << "[3] perkalian" << endl;
	cout << "[4] pembagian" << endl;
	cout << "[5] exit" << endl;
	
	cout << "menu yang dipilih : "; cin >> menu_dipilih;
	
	switch (menu_dipilih){
		case 1 : {
			cout << "masukkan nilai pertama : "; cin >> a ;
			cout << "masukkan nilai kedua : "; cin >> b;
			hasil=a+b;
			cout << "hasil penjumlahan dari " << a << " dan " << b << " adalah = " << hasil << endl ;
			break;
		}
		case 2 : {
			cout << "masukkan nilai pertama : "; cin >> a ;
			cout << "masukkan nilai kedua : "; cin >> b;
			hasil=a-b;
			cout << "hasil pengurangan dari " << a << " dan " << b << " adalah = " << hasil << endl ;
			break;
		}
		case 3 : {
			cout << "masukkan nilai pertama : "; cin >> a ;
			cout << "masukkan nilai kedua : "; cin >> b;
			hasil=a*b;
			cout << "hasil perkalian dari " << a << " dan " << b << " adalah = " << hasil << endl ;
			break;
		}
		case 4 : {
			cout << "masukkan nilai pertama : "; cin >> a ;
			cout << "masukkan nilai kedua : "; cin >> b;
			hasil=a/b;
			cout << "hasil pembagian dari " << a << " dan " << b << " adalah = " << hasil << endl ;
			break;
		}
		case 5 : {
			cout << "menu tidak ditemukan";
			break;
		} default : cout << "menu tak ditemukan !";
	}
	cin.get();
}
